// from server: 100% by colin
// roc 2007-08 00673ba0  unit: CXTPCustomizeSheet  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673ba0
//
// 00673ba0  56                   push esi
// 00673ba1  8b742408             mov esi, dword ptr [esp + 8]
// 00673ba5  8b06                 mov eax, dword ptr [esi]
// 00673ba7  8b5004               mov edx, dword ptr [eax + 4]
// 00673baa  57                   push edi
// 00673bab  8bf9                 mov edi, ecx
// 00673bad  6a00                 push 0
// 00673baf  8bce                 mov ecx, esi
// 00673bb1  ffd2                 call edx
// 00673bb3  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00673bb9  8b7858               mov edi, dword ptr [eax + 0x58]
// 00673bbc  85ff                 test edi, edi
// 00673bbe  7424                 je 0x673be4
// 00673bc0  8b16                 mov edx, dword ptr [esi]
// 00673bc2  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 00673bc8  8b5204               mov edx, dword ptr [edx + 4]
// 00673bcb  50                   push eax
// 00673bcc  8bce                 mov ecx, esi
// 00673bce  ffd2                 call edx
// 00673bd0  8b06                 mov eax, dword ptr [esi]
// 00673bd2  8b10                 mov edx, dword ptr [eax]
// 00673bd4  33c9                 xor ecx, ecx
// 00673bd6  398f80000000         cmp dword ptr [edi + 0x80], ecx
// 00673bdc  0f95c1               setne cl
// 00673bdf  51                   push ecx
// 00673be0  8bce                 mov ecx, esi
// 00673be2  ffd2                 call edx
// 00673be4  5f                   pop edi
// 00673be5  5e                   pop esi
// 00673be6  c20400               ret 4

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
