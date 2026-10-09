// roc 2007-03 0065fad0  unit: seg_00650000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065fad0
//
// 0065fad0  56                   push esi
// 0065fad1  8b742408             mov esi, dword ptr [esp + 8]
// 0065fad5  8b06                 mov eax, dword ptr [esi]
// 0065fad7  8b5004               mov edx, dword ptr [eax + 4]
// 0065fada  57                   push edi
// 0065fadb  8bf9                 mov edi, ecx
// 0065fadd  6a00                 push 0
// 0065fadf  8bce                 mov ecx, esi
// 0065fae1  ffd2                 call edx
// 0065fae3  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0065fae9  8b7858               mov edi, dword ptr [eax + 0x58]
// 0065faec  85ff                 test edi, edi
// 0065faee  7424                 je 0x65fb14
// 0065faf0  8b16                 mov edx, dword ptr [esi]
// 0065faf2  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 0065faf8  8b5204               mov edx, dword ptr [edx + 4]
// 0065fafb  50                   push eax
// 0065fafc  8bce                 mov ecx, esi
// 0065fafe  ffd2                 call edx
// 0065fb00  8b06                 mov eax, dword ptr [esi]
// 0065fb02  8b10                 mov edx, dword ptr [eax]
// 0065fb04  33c9                 xor ecx, ecx
// 0065fb06  398f80000000         cmp dword ptr [edi + 0x80], ecx
// 0065fb0c  0f95c1               setne cl
// 0065fb0f  51                   push ecx
// 0065fb10  8bce                 mov ecx, esi
// 0065fb12  ffd2                 call edx
// 0065fb14  5f                   pop edi
// 0065fb15  5e                   pop esi
// 0065fb16  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPCustomizeSheet@ns_ROCX000002@@QAEXPAX@Z)

namespace ns_ROCX000002 {
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
