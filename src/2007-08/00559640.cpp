// from server: 87% by colin
// roc 2007-08 00559640  unit: RBX::DataModel  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559640
//
// 00559640  56                   push esi
// 00559641  57                   push edi
// 00559642  8bf1                 mov esi, ecx
// 00559644  33ff                 xor edi, edi
// 00559646  397e04               cmp dword ptr [esi + 4], edi
// 00559649  7411                 je 0x55965c
// 0055964b  8b4608               mov eax, dword ptr [esi + 8]
// 0055964e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00559651  6a01                 push 1
// 00559653  50                   push eax
// 00559654  ffd1                 call ecx
// 00559656  83c408               add esp, 8
// 00559659  894608               mov dword ptr [esi + 8], eax
// 0055965c  897e0c               mov dword ptr [esi + 0xc], edi
// 0055965f  897e04               mov dword ptr [esi + 4], edi
// 00559662  5f                   pop edi
// 00559663  5e                   pop esi
// 00559664  c3                   ret 

struct S {
    void m();
    int field0;
    int field4;
    int field8;
    int fieldC;
};

void S::m()
{
    if (field4 == 0) {
        int (*fn)(int, int) = (int (*)(int, int))field4;
        field8 = fn(field8, 1);
    }
    field4 = 0;
    fieldC = 0;
}
