// from server: 72% by colin
// roc 2007-08 0050f960  unit: G3D::TextInput::WrongSymbol  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f960
//
// 0050f960  53                   push ebx
// 0050f961  56                   push esi
// 0050f962  57                   push edi
// 0050f963  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050f967  57                   push edi
// 0050f968  8bf1                 mov esi, ecx
// 0050f96a  e8b1ffffff           call 0x50f920
// 0050f96f  33d2                 xor edx, edx
// 0050f971  8bd8                 mov ebx, eax
// 0050f973  f7760c               div dword ptr [esi + 0xc]
// 0050f976  8b4608               mov eax, dword ptr [esi + 8]
// 0050f979  83c404               add esp, 4
// 0050f97c  8b1490               mov edx, dword ptr [eax + edx*4]
// 0050f97f  85d2                 test edx, edx
// 0050f981  742e                 je 0x50f9b1
// 0050f983  391a                 cmp dword ptr [edx], ebx
// 0050f985  7523                 jne 0x50f9aa
// 0050f987  33c0                 xor eax, eax
// 0050f989  8d4a04               lea ecx, [edx + 4]
// 0050f98c  8d642400             lea esp, [esp]
// 0050f990  8b31                 mov esi, dword ptr [ecx]
// 0050f992  3b3487               cmp esi, dword ptr [edi + eax*4]
// 0050f995  7513                 jne 0x50f9aa
// 0050f997  83c001               add eax, 1
// 0050f99a  83c104               add ecx, 4
// 0050f99d  83f802               cmp eax, 2
// 0050f9a0  7cee                 jl 0x50f990
// 0050f9a2  5f                   pop edi
// 0050f9a3  5e                   pop esi
// 0050f9a4  b001                 mov al, 1
// 0050f9a6  5b                   pop ebx
// 0050f9a7  c20400               ret 4
// 0050f9aa  8b5218               mov edx, dword ptr [edx + 0x18]
// 0050f9ad  85d2                 test edx, edx
// 0050f9af  75d2                 jne 0x50f983
// 0050f9b1  5f                   pop edi
// 0050f9b2  5e                   pop esi
// 0050f9b3  32c0                 xor al, al
// 0050f9b5  5b                   pop ebx
// 0050f9b6  c20400               ret 4

struct TextInput {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    bool wrongSymbol(const int* arg);
};

extern int helper_0050f920(TextInput* self, const int* arg);

bool TextInput::wrongSymbol(const int* arg)
{
    int key = helper_0050f920(this, arg);
    unsigned int idx = (unsigned int)key % (unsigned int)this->field_c;
    int* node = (int*)((char*)this->field_8 + idx * 4);
    node = (int*)*node;
    while (node != 0) {
        if (node[0] == key) {
            int i = 0;
            int* p = node + 1;
            do {
                if (*p != arg[i])
                    break;
                i++;
                p++;
            } while (i < 2);
            if (i == 2)
                return true;
        }
        node = (int*)node[6];
    }
    return false;
}
