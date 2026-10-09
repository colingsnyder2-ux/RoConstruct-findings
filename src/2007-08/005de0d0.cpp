// from server: 96% by colin
// roc 2007-08 005de0d0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005de0d0
//
// 005de0d0  8b442408             mov eax, dword ptr [esp + 8]
// 005de0d4  56                   push esi
// 005de0d5  57                   push edi
// 005de0d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005de0da  33f6                 xor esi, esi
// 005de0dc  2bf8                 sub edi, eax
// 005de0de  8bff                 mov edi, edi
// 005de0e0  8b0c07               mov ecx, dword ptr [edi + eax]
// 005de0e3  8b10                 mov edx, dword ptr [eax]
// 005de0e5  3bca                 cmp ecx, edx
// 005de0e7  7c14                 jl 0x5de0fd
// 005de0e9  7f0b                 jg 0x5de0f6
// 005de0eb  83c601               add esi, 1
// 005de0ee  83c004               add eax, 4
// 005de0f1  83fe03               cmp esi, 3
// 005de0f4  7cea                 jl 0x5de0e0
// 005de0f6  5f                   pop edi
// 005de0f7  32c0                 xor al, al
// 005de0f9  5e                   pop esi
// 005de0fa  c20800               ret 8
// 005de0fd  5f                   pop edi
// 005de0fe  b001                 mov al, 1
// 005de100  5e                   pop esi
// 005de101  c20800               ret 8

struct S {
    bool f(int* a, int* b);
};

bool S::f(int* a, int* b)
{
    int i = 0;
    while (i < 3) {
        if (a[i] < b[i])
            return true;
        if (a[i] > b[i])
            return false;
        ++i;
    }
    return false;
}
