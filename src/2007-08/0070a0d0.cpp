// from server: 64% by colin
struct CXTColorHex {
    char pad[0x20];
    int field20;
    char pad2[0x44];
    int field68;
    void method(int, int);
};

struct Helper {
    int find(int, int);
    void sub_709f50(int, int);
};

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetParent(void*);
extern "C" void* __stdcall sub_63023e();
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void __stdcall sub_630004();
extern "C" void __stdcall sub_738ce8(void*, int);

void CXTColorHex::method(int a, int b) {
    sub_63023e();
    void* p = GetFocus();
    void* q = sub_6301c0(p);
    if (q != this) {
        sub_630004();
    }
    int r = ((Helper*)this)->find(a, b);
    if (r == -1)
        return;
    ((Helper*)this)->sub_709f50(a, b);
    field68 = 1;
    void* (*fn)(void*) = *(void* (*)(void*))0x77ebf8;
    void* x = fn((void*)field20);
    void* y = sub_6301c0(x);
    void* z = fn(*(void**)((char*)y + 0x20));
    void* w = sub_6301c0(z);
    sub_738ce8(w, 1);
}
