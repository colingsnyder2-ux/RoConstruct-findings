// from server: 37% by colin
extern "C" {
    int __stdcall GetObjectA(void*, int, void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

struct CMemberTreeView {
    char pad0[0x20];
    void* field20;
    char pad24[0x3c];
    void* field60;
    void* field64;
    char pad68[0x81];
    char fieldE9;
    char fieldEA;
    char padEB[0x15];
    void func();
};

void CMemberTreeView::func() {
    char buf[0x44];
    int* p;
    void* hwnd;
    int result;
    void* obj;
    void* vtable;
    void (*fn)(void*, int);
    int val;

    if (*(int*)((char*)this + 0x60) == 0) {
        return;
    }
    if (fieldE9 != 0) {
        GetObjectA(0, 0, 0);
        hwnd = *(void**)((char*)this + 0x20);
        result = SendMessageA(hwnd, 0x31, 0, 0);
        obj = (void*)result;
        p = (int*)obj;
        val = p[1];
        if (GetObjectA((void*)val, 0x3c, buf) != 0) {
            vtable = *(void**)((char*)this + 0x60);
            fn = *(void (**)(void*, int))((char*)vtable + 0x1c);
            fn((char*)this + 0x60, *(int*)buf);
        }
    }
    if (fieldEA != 0) {
        GetObjectA(0, 0, 0);
        hwnd = *(void**)((char*)this + 0x20);
        result = SendMessageA(hwnd, 0x31, 0, 0);
        obj = (void*)result;
        p = (int*)obj;
        val = p[1];
        if (GetObjectA((void*)val, 0x3c, buf) != 0) {
            vtable = *(void**)((char*)this + 0x60);
            fn = *(void (**)(void*, int))((char*)vtable + 0x1c);
            fn((char*)this + 0x60, *(int*)buf);
        }
    }
}
