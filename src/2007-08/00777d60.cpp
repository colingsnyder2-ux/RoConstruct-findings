// from server: 85% by tester
extern "C" __declspec(dllimport) void __stdcall DeleteCriticalSection(void*);

extern "C" void __cdecl sub_62FC62(void*);

struct Node {
    void (__stdcall *callback)(void*);
    void* arg;
    Node* next;
};

void clear_list(Node* node) {
    if (node == 0) {
        return;
    }
    sub_62FC62(node);
}

extern Node* g_8bbd7c;
extern int g_8bbd58;
extern int g_8bbd60;
extern char g_8bbd64;

void f() {
    if (g_8bbd58 != 0) {
        if (g_8bbd60 != 0) {
            clear_list((Node*)0x8bbd58);
            g_8bbd60 = 0;
        }
        Node* p = g_8bbd7c;
        if (p != 0) {
            p->callback(p);
        }
        DeleteCriticalSection(&g_8bbd64);
        g_8bbd58 = 0;
    }
}
