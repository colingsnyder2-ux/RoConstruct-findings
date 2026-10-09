// roc 2008-06 006eaa00  unit: CXTPCustomizeSheet  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006eaa00
//
// 006eaa00  56                   push esi
// 006eaa01  8b742408             mov esi, dword ptr [esp + 8]
// 006eaa05  8b06                 mov eax, dword ptr [esi]
// 006eaa07  8b5004               mov edx, dword ptr [eax + 4]
// 006eaa0a  57                   push edi
// 006eaa0b  8bf9                 mov edi, ecx
// 006eaa0d  6a00                 push 0
// 006eaa0f  8bce                 mov ecx, esi
// 006eaa11  ffd2                 call edx
// 006eaa13  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 006eaa19  8b7858               mov edi, dword ptr [eax + 0x58]
// 006eaa1c  85ff                 test edi, edi
// 006eaa1e  7424                 je 0x6eaa44
// 006eaa20  8b16                 mov edx, dword ptr [esi]
// 006eaa22  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 006eaa28  8b5204               mov edx, dword ptr [edx + 4]
// 006eaa2b  50                   push eax
// 006eaa2c  8bce                 mov ecx, esi
// 006eaa2e  ffd2                 call edx
// 006eaa30  8b06                 mov eax, dword ptr [esi]
// 006eaa32  8b10                 mov edx, dword ptr [eax]
// 006eaa34  33c9                 xor ecx, ecx
// 006eaa36  398f80000000         cmp dword ptr [edi + 0x80], ecx
// 006eaa3c  0f95c1               setne cl
// 006eaa3f  51                   push ecx
// 006eaa40  8bce                 mov ecx, esi
// 006eaa42  ffd2                 call edx
// 006eaa44  5f                   pop edi
// 006eaa45  5e                   pop esi
// 006eaa46  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPCustomizeSheet@ns_ROCX000004@@QAEXPAX@Z)

namespace ns_ROCX000004 {
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void func(void*);
};

void CXTPCustomizeSheet::func(void* arg)
{
    void* p = arg;
    void (__thiscall**vt)(void*, int) = *(void (__thiscall***)(void*, int))p;
    vt[1](p, 0);
    void* q = *(void**)((char*)this->field_b8 + 0x58);
    if (q) {
        void (__thiscall**vt2)(void*, int) = *(void (__thiscall***)(void*, int))p;
        vt2[1](p, *(int*)((char*)q + 0x98));
        void (__thiscall**vt3)(void*, int) = *(void (__thiscall***)(void*, int))p;
        int flag = (*(int*)((char*)q + 0x80) != 0);
        vt3[0](p, flag);
    }
}
}
