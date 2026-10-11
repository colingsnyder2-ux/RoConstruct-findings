// from server: 100% by tester
// roc 2009-06 0065ced0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065ced0
//
// 0065ced0  33d2                 xor edx, edx
// 0065ced2  395104               cmp dword ptr [ecx + 4], edx
// 0065ced5  7429                 je 0x65cf00
// 0065ced7  8b4108               mov eax, dword ptr [ecx + 8]
// 0065ceda  56                   push esi
// 0065cedb  3bc2                 cmp eax, edx
// 0065cedd  7404                 je 0x65cee3
// 0065cedf  8b31                 mov esi, dword ptr [ecx]
// 0065cee1  8930                 mov dword ptr [eax], esi
// 0065cee3  8b01                 mov eax, dword ptr [ecx]
// 0065cee5  3bc2                 cmp eax, edx
// 0065cee7  7409                 je 0x65cef2
// 0065cee9  8b7108               mov esi, dword ptr [ecx + 8]
// 0065ceec  89b0d8000000         mov dword ptr [eax + 0xd8], esi
// 0065cef2  8b4104               mov eax, dword ptr [ecx + 4]
// 0065cef5  ff08                 dec dword ptr [eax]
// 0065cef7  8911                 mov dword ptr [ecx], edx
// 0065cef9  895108               mov dword ptr [ecx + 8], edx
// 0065cefc  895104               mov dword ptr [ecx + 4], edx
// 0065ceff  5e                   pop esi
// 0065cf00  c3                   ret 

struct S
{
    int a;
    int b;
    int c;
    void f();
};

void S::f()
{
    if (b != 0)
    {
        if (c != 0)
            *(int *)c = a;

        if (a != 0)
            *(int *)(a + 0xd8) = c;

        --*(int *)b;
        a = 0;
        c = 0;
        b = 0;
    }
}
