// from server: 95% by colin
// roc 2007-08 0043f260  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043f260
//
// 0043f260  56                   push esi
// 0043f261  57                   push edi
// 0043f262  8bf9                 mov edi, ecx
// 0043f264  85ff                 test edi, edi
// 0043f266  7408                 je 0x43f270
// 0043f268  8db708010000         lea esi, [edi + 0x108]
// 0043f26e  eb02                 jmp 0x43f272
// 0043f270  33f6                 xor esi, esi
// 0043f272  8b4608               mov eax, dword ptr [esi + 8]
// 0043f275  85c0                 test eax, eax
// 0043f277  7409                 je 0x43f282
// 0043f279  50                   push eax
// 0043f27a  e8e3091f00           call 0x62fc62
// 0043f27f  83c404               add esp, 4
// 0043f282  8bcf                 mov ecx, edi
// 0043f284  c7460800000000       mov dword ptr [esi + 8], 0
// 0043f28b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043f292  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0043f299  e832ee2500           call 0x69e0d0
// 0043f29e  f644240c01           test byte ptr [esp + 0xc], 1
// 0043f2a3  7409                 je 0x43f2ae
// 0043f2a5  57                   push edi
// 0043f2a6  e8b7091f00           call 0x62fc62
// 0043f2ab  83c404               add esp, 4
// 0043f2ae  8bc7                 mov eax, edi
// 0043f2b0  5f                   pop edi
// 0043f2b1  5e                   pop esi
// 0043f2b2  c20400               ret 4

struct HVCXTPPropertyGridItemEnum_XItem
{
    HVCXTPPropertyGridItemEnum_XItem* func_0043f260(unsigned int flags);
};

extern "C" void __cdecl func_0062fc62(void* p);
extern "C" void __cdecl func_0069e0d0();

HVCXTPPropertyGridItemEnum_XItem* HVCXTPPropertyGridItemEnum_XItem::func_0043f260(unsigned int flags)
{
    char* esi;
    if (this != 0)
        esi = (char*)this + 0x108;
    else
        esi = 0;

    void* p = *(void**)(esi + 8);
    if (p != 0)
    {
        func_0062fc62(p);
    }

    *(int*)(esi + 8) = 0;
    *(int*)(esi + 0xc) = 0;
    *(int*)(esi + 0x10) = 0;

    func_0069e0d0();

    if (flags & 1)
    {
        func_0062fc62(this);
    }

    return this;
}
