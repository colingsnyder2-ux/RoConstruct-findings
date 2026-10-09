// from server: 83% by colin
// roc 2007-08 0066d0e0  unit: CXTPMenuBar  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066d0e0
//
// 0066d0e0  51                   push ecx
// 0066d0e1  56                   push esi
// 0066d0e2  57                   push edi
// 0066d0e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066d0e7  57                   push edi
// 0066d0e8  8bf1                 mov esi, ecx
// 0066d0ea  e8e1ffffff           call 0x66d0d0
// 0066d0ef  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0066d0f5  e8c68a0300           call 0x6a5bc0
// 0066d0fa  85c0                 test eax, eax
// 0066d0fc  89442410             mov dword ptr [esp + 0x10], eax
// 0066d100  7429                 je 0x66d12b
// 0066d102  8d442408             lea eax, [esp + 8]
// 0066d106  50                   push eax
// 0066d107  8d4c2414             lea ecx, [esp + 0x14]
// 0066d10b  51                   push ecx
// 0066d10c  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0066d112  e8b98a0300           call 0x6a5bd0
// 0066d117  8b542408             mov edx, dword ptr [esp + 8]
// 0066d11b  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0066d11e  57                   push edi
// 0066d11f  e88ce5ffff           call 0x66b6b0
// 0066d124  837c241000           cmp dword ptr [esp + 0x10], 0
// 0066d129  75d7                 jne 0x66d102
// 0066d12b  5f                   pop edi
// 0066d12c  5e                   pop esi
// 0066d12d  59                   pop ecx
// 0066d12e  c20400               ret 4

struct CXTPMenuBar
{
    char pad[0x1bc];
    void* field_1bc;
    void sub_66d0d0(void*);
    void sub_66b6b0(void*);
    void sub_66d0e0(void*);
};

struct HelperA
{
    void* sub_6a5bc0();
    void sub_6a5bd0(void**, void**);
};

void CXTPMenuBar::sub_66d0e0(void* arg)
{
    sub_66d0d0(arg);
    void* v = ((HelperA*)field_1bc)->sub_6a5bc0();
    if (v != 0)
    {
        do
        {
            void* a;
            void* b;
            ((HelperA*)field_1bc)->sub_6a5bd0(&a, &b);
            void* p = *(void**)((char*)a + 0x20);
            ((CXTPMenuBar*)p)->sub_66b6b0(arg);
        } while (v != 0);
    }
}
