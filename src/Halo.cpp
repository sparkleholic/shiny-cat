//============================================================================
// Name        : Halo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <glib.h>

int glibTest1(void) {
	int *array = g_new0(gint, 20);
	cout << "array[19]:" << array[19] << endl;
	g_free(array);
	return 0;
}

int lamdaTest(void) {
	auto hello = []() {
		cout << "hello Lamda" <<endl;
	};

	hello();
	return 0;
}

gboolean timeout_callback(gpointer data) {
	static int i = 0;
	i++;
	g_print("timeout_callback called %d times\n", i);
	if (10000 == i) {
		g_main_loop_quit((GMainLoop*)data);
		return FALSE;
	}
	return TRUE;
}
gboolean timeout_callback2(gpointer data) {
	static int i = 0;
	i++;
	g_print("(2)timeout_callback called %d times\n", i);
	if (10000 == i) {
		g_main_loop_quit((GMainLoop*)data);
		return FALSE;
	}
	return TRUE;
}

int main(int argc, char *argv[]) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//	glibTest1();
	lamdaTest();
	GMainLoop* loop;
	loop = g_main_loop_new(NULL, FALSE);
	g_timeout_add(100, timeout_callback, loop);
	g_timeout_add(100, timeout_callback2, loop);
	g_main_loop_run(loop);
	g_print("g_main_loop_exit...\n");
	g_main_loop_unref(loop);
	cout << "Bye, bye !! See U again Soon!!!" <<endl;

	return 0;
}
