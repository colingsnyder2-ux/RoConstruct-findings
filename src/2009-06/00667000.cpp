// from server: 69% by atomic.potato
struct S {
    char pad0[0x18];
    int (__stdcall *fn)(void*, int);
    int offset1c;
    int offset20;
    int method(void* arg1, int* arg2);
};

int S::method(void* arg1, int* arg2) {
    char* p = (char*)arg1;
    if (p != 0) {
        p -= 0x18;
    } else {
        p = 0;
    }
    int v = *arg2;
    int idx = *(int*)((char*)this + 0x20);
    int base = *(int*)(p + 0x140);
    int val = *(int*)(base + idx);
    val += *(int*)((char*)this + 0x1c);
    int (__stdcall *f)(void*, int) = *(int (__stdcall**)(void*, int))((char*)this + 0x18);
    char* addr = (char*)p + 0x140 + val;
    return f(addr, v);
}
