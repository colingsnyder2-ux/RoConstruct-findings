// from server: 90% by colin
// roc 2007-08 006896b0  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006896b0
//
// 006896b0  56                   push esi
// 006896b1  8bf1                 mov esi, ecx
// 006896b3  8b06                 mov eax, dword ptr [esi]
// 006896b5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006896b8  ffd2                 call edx
// 006896ba  83783c00             cmp dword ptr [eax + 0x3c], 0
// 006896be  7416                 je 0x6896d6
// 006896c0  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 006896c6  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 006896cd  7507                 jne 0x6896d6
// 006896cf  b801000000           mov eax, 1
// 006896d4  5e                   pop esi
// 006896d5  c3                   ret 
// 006896d6  33c0                 xor eax, eax
// 006896d8  5e                   pop esi
// 006896d9  c3                   ret 

struct CWorkspace {
    int checkSomething();
};

struct Sub {
    char pad[0x3c];
    int field_3c;
};

struct Other {
    char pad[0xb4];
    int field_b4;
};

struct Holder {
    char pad[0x8c];
    Other* ptr_8c;
};

int CWorkspace::checkSomething()
{
    void* p = *(void**)this;
    Sub* s = (Sub*)(*(Sub*(__thiscall*)(void*))(*(void**)((char*)p + 0x2c)))(this);
    if (s->field_3c != 0)
    {
        Other* o = ((Holder*)this)->ptr_8c;
        if (o->field_b4 == 0)
            return 1;
    }
    return 0;
}
