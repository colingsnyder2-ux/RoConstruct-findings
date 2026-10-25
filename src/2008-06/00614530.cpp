// from server: 100% by king_originala
// roc 2008-06 00614530  unit: RBX::RevoluteLink  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614530
//
// 00614530  53                   push ebx
// 00614531  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00614535  56                   push esi
// 00614536  57                   push edi
// 00614537  8bf9                 mov edi, ecx
// 00614539  33f6                 xor esi, esi
// 0061453b  397720               cmp dword ptr [edi + 0x20], esi
// 0061453e  895f10               mov dword ptr [edi + 0x10], ebx
// 00614541  7e12                 jle 0x614555
// 00614543  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00614546  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00614549  53                   push ebx
// 0061454a  e8e1ffffff           call 0x614530
// 0061454f  46                   inc esi
// 00614550  3b7720               cmp esi, dword ptr [edi + 0x20]
// 00614553  7cee                 jl 0x614543
// 00614555  5f                   pop edi
// 00614556  5e                   pop esi
// 00614557  5b                   pop ebx
// 00614558  c20400               ret 4

struct S {
    char pad0[0x10];
    int value;
    char pad1[8];
    S** children;
    int count;

    void setValue(int v);
};

void S::setValue(int v)
{
    value = v;
    for (int i = 0; i < count; ++i)
        children[i]->setValue(v);
}
