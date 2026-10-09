// roc 2009-06 007633b0  unit: CXTPCustomizeSheet  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007633b0
//
// 007633b0  56                   push esi
// 007633b1  8b742408             mov esi, dword ptr [esp + 8]
// 007633b5  8b06                 mov eax, dword ptr [esi]
// 007633b7  8b5004               mov edx, dword ptr [eax + 4]
// 007633ba  57                   push edi
// 007633bb  8bf9                 mov edi, ecx
// 007633bd  6a00                 push 0
// 007633bf  8bce                 mov ecx, esi
// 007633c1  ffd2                 call edx
// 007633c3  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 007633c9  8b7858               mov edi, dword ptr [eax + 0x58]
// 007633cc  85ff                 test edi, edi
// 007633ce  7424                 je 0x7633f4
// 007633d0  8b16                 mov edx, dword ptr [esi]
// 007633d2  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 007633d8  8b5204               mov edx, dword ptr [edx + 4]
// 007633db  50                   push eax
// 007633dc  8bce                 mov ecx, esi
// 007633de  ffd2                 call edx
// 007633e0  8b06                 mov eax, dword ptr [esi]
// 007633e2  8b10                 mov edx, dword ptr [eax]
// 007633e4  33c9                 xor ecx, ecx
// 007633e6  398f80000000         cmp dword ptr [edi + 0x80], ecx
// 007633ec  0f95c1               setne cl
// 007633ef  51                   push ecx
// 007633f0  8bce                 mov ecx, esi
// 007633f2  ffd2                 call edx
// 007633f4  5f                   pop edi
// 007633f5  5e                   pop esi
// 007633f6  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPCustomizeSheet@ns_ROCX000006@@QAEXPAX@Z)

namespace ns_ROCX000006 {
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
