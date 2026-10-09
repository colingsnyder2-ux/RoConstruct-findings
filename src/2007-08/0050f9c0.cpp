// from server: 73% by colin
// roc 2007-08 0050f9c0  unit: G3D::TextInput::WrongSymbol  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f9c0
//
// 0050f9c0  53                   push ebx
// 0050f9c1  56                   push esi
// 0050f9c2  57                   push edi
// 0050f9c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050f9c7  57                   push edi
// 0050f9c8  8bf1                 mov esi, ecx
// 0050f9ca  e851ffffff           call 0x50f920
// 0050f9cf  33d2                 xor edx, edx
// 0050f9d1  8bd8                 mov ebx, eax
// 0050f9d3  f7760c               div dword ptr [esi + 0xc]
// 0050f9d6  8b4608               mov eax, dword ptr [esi + 8]
// 0050f9d9  83c404               add esp, 4
// 0050f9dc  8b1490               mov edx, dword ptr [eax + edx*4]
// 0050f9df  85d2                 test edx, edx
// 0050f9e1  742f                 je 0x50fa12
// 0050f9e3  391a                 cmp dword ptr [edx], ebx
// 0050f9e5  7524                 jne 0x50fa0b
// 0050f9e7  33c0                 xor eax, eax
// 0050f9e9  8d4a04               lea ecx, [edx + 4]
// 0050f9ec  8d642400             lea esp, [esp]
// 0050f9f0  8b31                 mov esi, dword ptr [ecx]
// 0050f9f2  3b3487               cmp esi, dword ptr [edi + eax*4]
// 0050f9f5  7514                 jne 0x50fa0b
// 0050f9f7  83c001               add eax, 1
// 0050f9fa  83c104               add ecx, 4
// 0050f9fd  83f802               cmp eax, 2
// 0050fa00  7cee                 jl 0x50f9f0
// 0050fa02  5f                   pop edi
// 0050fa03  5e                   pop esi
// 0050fa04  8d420c               lea eax, [edx + 0xc]
// 0050fa07  5b                   pop ebx
// 0050fa08  c20400               ret 4
// 0050fa0b  8b5218               mov edx, dword ptr [edx + 0x18]
// 0050fa0e  85d2                 test edx, edx
// 0050fa10  75d1                 jne 0x50f9e3
// 0050fa12  5f                   pop edi
// 0050fa13  5e                   pop esi
// 0050fa14  8d420c               lea eax, [edx + 0xc]
// 0050fa17  5b                   pop ebx
// 0050fa18  c20400               ret 4

struct G3D_TextInput_WrongSymbol
{
    char pad0[8];
    void* field_8;
    int field_c;
    void* find(int* key);
};

extern "C" void* __fastcall sub_50f920(void* self, int* key);

void* G3D_TextInput_WrongSymbol::find(int* key)
{
    void* result = sub_50f920(this, key);
    unsigned int idx = (unsigned int)result % (unsigned int)field_c;
    void* node = ((void**)field_8)[idx];
    while (node != 0)
    {
        if (*(void**)node == result)
        {
            int i = 0;
            int* p = (int*)((char*)node + 4);
            while (i < 2)
            {
                if (*p != key[i])
                    break;
                i++;
                p++;
            }
            if (i == 2)
                return (char*)node + 0xc;
        }
        node = *(void**)((char*)node + 0x18);
    }
    return (char*)node + 0xc;
}
