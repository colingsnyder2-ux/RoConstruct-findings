// from server: 54% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(void*, float);
    char pad2[4];
    int offset;
    int f(void* arg1, float* arg2);
};

int S::f(void* arg1, float* arg2) {
    char* p = (char*)arg1;
    if (p != 0) {
        p -= 0x14;
    } else {
        p = 0;
    }
    int idx = *(int*)((char*)this + 0x20);
    float val = *arg2;
    int base = *(int*)(p + 0x134);
    int v = *(int*)(base + idx);
    v += *(int*)((char*)this + 0x1c);
    int (*fn)(void*, float) = *(int(**)(void*, float))((char*)this + 0x18);
    return fn((void*)(v + (int)p + 0x134), val);
}
