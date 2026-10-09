// from server: 80% by colin
// roc 2007-08 0068f4b0  unit: CXTPDockingPane  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f4b0
//
// 0068f4b0  56                   push esi
// 0068f4b1  8bf1                 mov esi, ecx
// 0068f4b3  837e3000             cmp dword ptr [esi + 0x30], 0
// 0068f4b7  7445                 je 0x68f4fe
// 0068f4b9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0068f4bc  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0068f4bf  8d4e20               lea ecx, [esi + 0x20]
// 0068f4c2  ffd2                 call edx
// 0068f4c4  85c0                 test eax, eax
// 0068f4c6  7536                 jne 0x68f4fe
// 0068f4c8  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0068f4cb  8b01                 mov eax, dword ptr [ecx]
// 0068f4cd  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068f4d0  ffd2                 call edx
// 0068f4d2  85c0                 test eax, eax
// 0068f4d4  7428                 je 0x68f4fe
// 0068f4d6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0068f4d9  8b01                 mov eax, dword ptr [ecx]
// 0068f4db  8b5018               mov edx, dword ptr [eax + 0x18]
// 0068f4de  ffd2                 call edx
// 0068f4e0  8bf0                 mov esi, eax
// 0068f4e2  85f6                 test esi, esi
// 0068f4e4  7418                 je 0x68f4fe
// 0068f4e6  e835ee0400           call 0x6de320
// 0068f4eb  50                   push eax
// 0068f4ec  8bce                 mov ecx, esi
// 0068f4ee  e8fd0cfaff           call 0x6301f0
// 0068f4f3  85c0                 test eax, eax
// 0068f4f5  7407                 je 0x68f4fe
// 0068f4f7  b801000000           mov eax, 1
// 0068f4fc  5e                   pop esi
// 0068f4fd  c3                   ret 
// 0068f4fe  33c0                 xor eax, eax
// 0068f500  5e                   pop esi
// 0068f501  c3                   ret 

struct CXTPDockingPane
{
    char pad[0x20];
    void* field20;
    char pad2[0xc];
    void* field30;

    int IsActive();
};

extern "C" void* __stdcall sub_6de320();
extern "C" int __fastcall sub_6301f0(void* p, void* q);

int CXTPDockingPane::IsActive()
{
    if (field30 == 0)
        goto fail;

    if (((int (__thiscall*)(void*))((*(void***)field20)[7]))(field20) != 0)
        goto fail;

    if (((int (__thiscall*)(void*))((*(void***)field30)[8]))(field30) == 0)
        goto fail;

    {
        void* p = ((void* (__thiscall*)(void*))((*(void***)field30)[6]))(field30);
        if (p == 0)
            goto fail;

        if (sub_6301f0(p, sub_6de320()) == 0)
            goto fail;
    }

    return 1;

fail:
    return 0;
}
