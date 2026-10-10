// from server: 76% by colin
struct PVInstance {
    char pad[8];
    int field8;
    int fieldC;
    int field10;
    void SetImpl(int, int);
};

void PVInstance::SetImpl(int a, int b) {
    char* p = (char*)a;
    if (p != 0) {
        p -= 4;
    } else {
        p = 0;
    }
    int idx = *(int*)(p + 0xec);
    int off = *(int*)((char*)this + 0x10);
    int val = *(int*)(idx + off);
    val += *(int*)((char*)this + 0xc);
    void (__stdcall *fn)(void*, int) = *(void (__stdcall **)(void*, int))((char*)this + 8);
    fn((void*)(val + (int)p + 0xec), b);
}
