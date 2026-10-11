// from server: 61% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(int);
    int offset1c;
    int offset20;
    int method(int* a, int* b);
};

int S::method(int* a, int* b) {
    int* p = a;
    if (p != 0) {
        p = (int*)((char*)p - 0x18);
    } else {
        p = 0;
    }
    int idx = *b;
    int off = *(int*)((char*)this + 0x20);
    int base = *(int*)((char*)p + 0xb0);
    int val = *(int*)(base + off);
    val += *(int*)((char*)this + 0x1c);
    int (__stdcall *f)(int) = *(int (__stdcall **)(int))((char*)this + 0x18);
    return f(val + (int)p + 0xb0);
}
