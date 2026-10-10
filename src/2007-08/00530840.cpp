// from server: 86% by colin
struct S {
    char pad0[0x10];
    char field10;
    char field11;
    char pad12[0x2];
    int field14;
    int field18;
    int field1c;
    int field20;
    char get();
};

char S::get()
{
    if (field11 != 0) {
        int* p = (int*)field14;
        int idx = *(int*)((char*)p + 0xec);
        idx = *(int*)((char*)idx + field20);
        idx += field1c;
        char* base = (char*)p + 0xec;
        char* addr = base + idx;
        typedef char (__thiscall *Fn)(void*);
        Fn fn = (Fn)field18;
        field10 = fn(addr);
        field11 = 0;
    }
    return field10;
}
