// from server: 69% by colin
// roc 2007-08 005a19e0  unit: RBX::VShirt::?$BoundPropGetSet  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a19e0

extern "C" void __stdcall _invalid_parameter_noinfo();

struct GetSet {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct PropDesc {
    char pad0[0xc0];
    void* getset;
};

struct BoundPropGetSet : GetSet {
    void* desc;
    int member;
    int changed;
    void* findChanged();
};

void* __cdecl sub_630d36(void*, void*, void*, int, int);

void* BoundPropGetSet::findChanged()
{
    void* ebx = this->desc;
    if (ebx != 0)
        return 0;
    int ebp = *(int*)((char*)ebx + 8);
    if (*(unsigned int*)((char*)ebx + 4) > (unsigned int)ebp)
        _invalid_parameter_noinfo();
    void* edi = this->desc;
    int esi = *(int*)((char*)edi + 4);
    if ((unsigned int)esi > *(unsigned int*)((char*)edi + 8))
        _invalid_parameter_noinfo();
    if (edi != ebx)
        _invalid_parameter_noinfo();
    while (esi != ebp) {
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8))
            _invalid_parameter_noinfo();
        void* eax = *(void**)esi;
        void* r = sub_630d36(eax, (void*)0x881f4c, (void*)0x8a7d0c, 0, 0);
        if (r != 0)
            return r;
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8))
            _invalid_parameter_noinfo();
        esi += 8;
    }
    return 0;
}
