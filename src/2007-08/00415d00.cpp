// from server: 75% by colin
// roc 2007-08 00415d00  unit: VCContent::?$CComContainedObject  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415d00
//
// 00415d00  8b442408             mov eax, dword ptr [esp + 8]
// 00415d04  83f802               cmp eax, 2
// 00415d07  7519                 jne 0x415d22
// 00415d09  56                   push esi
// 00415d0a  8b742408             mov esi, dword ptr [esp + 8]
// 00415d0e  56                   push esi
// 00415d0f  b988308800           mov ecx, 0x883088
// 00415d14  ff1508e77700         call dword ptr [0x77e708]
// 00415d1a  f6d8                 neg al
// 00415d1c  1bc0                 sbb eax, eax
// 00415d1e  23c6                 and eax, esi
// 00415d20  5e                   pop esi
// 00415d21  c3                   ret 
// 00415d22  85c0                 test eax, eax
// 00415d24  7517                 jne 0x415d3d
// 00415d26  6a04                 push 4
// 00415d28  e8c9a12100           call 0x62fef6
// 00415d2d  83c404               add esp, 4
// 00415d30  85c0                 test eax, eax
// 00415d32  7418                 je 0x415d4c
// 00415d34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00415d38  8b11                 mov edx, dword ptr [ecx]
// 00415d3a  8910                 mov dword ptr [eax], edx
// 00415d3c  c3                   ret 
// 00415d3d  8b442404             mov eax, dword ptr [esp + 4]
// 00415d41  50                   push eax
// 00415d42  e81b9f2100           call 0x62fc62
// 00415d47  83c404               add esp, 4
// 00415d4a  33c0                 xor eax, eax
// 00415d4c  c3                   ret 

struct type_info;

extern "C" {
    void* __cdecl malloc(unsigned int size);
    void __cdecl free(void* ptr);
}

extern "C" int (__stdcall *g_typeinfo_equal)(const type_info*, const type_info*);
extern type_info g_typeinfo_883088;

struct VCContent_CComContainedObject
{
    void* QueryInterface(int iid, void* pv);
};

void* VCContent_CComContainedObject::QueryInterface(int iid, void* pv)
{
    if (iid == 2)
    {
        if (g_typeinfo_equal(&g_typeinfo_883088, (const type_info*)pv))
            return pv;
        return 0;
    }
    if (iid == 0)
    {
        void* p = malloc(4);
        if (p)
        {
            *(void**)p = *(void**)pv;
            return p;
        }
        return 0;
    }
    free(pv);
    return 0;
}
