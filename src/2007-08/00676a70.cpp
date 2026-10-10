// from server: 52% by colin
struct CArray {
    char pad0[0x138];
    void* field138;
    char pad13c[4];
    int field140;
    int field144;
    int Add(void* p, int idx, int grow);
};

struct Inner {
    char pad0[4];
    void* field4;
};

extern "C" {
    void __stdcall sub_77ddac(void* p);
    void* __stdcall sub_77dd98(void* p);
    void __stdcall sub_77ddbc(void* p);
    void* __cdecl sub_6b3010();
    void* __cdecl sub_62fef6(int size);
    void* __cdecl sub_676200(void* self, void* p);
    void* __cdecl sub_63b850(void* self, int a, void* b, int c);
    void* __cdecl sub_67d2a0(void* self, int a, int b, int c, int d, int e);
    void* __cdecl sub_63a700(void* self, void* p);
}

int CArray::Add(void* p, int idx, int grow) {
    void* local;
    sub_77ddac(&local);
    void* v = sub_6b3010();
    void* vt = *(void**)v;
    void* fn = *(void**)((char*)vt + 4);
    void* tmp;
    sub_77dd98(&tmp);
    ((void (__thiscall*)(void*, void*, int))fn)(v, &tmp, this->field144);
    Inner* inner = (Inner*)sub_62fef6(8);
    if (inner) {
        void* a = *(void**)((char*)this->field138 + 0xb8);
        void* b;
        sub_77dd98(&b);
        inner = (Inner*)sub_676200(inner, b);
    } else {
        inner = 0;
    }
    int useIdx = idx;
    if (useIdx == -1) useIdx = this->field144;
    sub_63b850((char*)this + 0x13c, useIdx, inner, 1);
    void* r = sub_67d2a0(inner->field4, 2, 0, 0, -1, 0);
    void* b2;
    sub_77dd98(&b2);
    sub_63a700(r, b2);
    sub_77ddbc(&local);
    return 0;
}
