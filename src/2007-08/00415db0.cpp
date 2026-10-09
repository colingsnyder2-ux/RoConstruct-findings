// from server: 92% by colin
// roc 2007-08 00415db0  unit: RBX::VInstance::?$NonFactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415db0
//
// 00415db0  56                   push esi
// 00415db1  8bf1                 mov esi, ecx
// 00415db3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00415db7  744d                 je 0x415e06
// 00415db9  8b460c               mov eax, dword ptr [esi + 0xc]
// 00415dbc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00415dbf  57                   push edi
// 00415dc0  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00415dc3  833f00               cmp dword ptr [edi], 0
// 00415dc6  7410                 je 0x415dd8
// 00415dc8  8b5704               mov edx, dword ptr [edi + 4]
// 00415dcb  8b07                 mov eax, dword ptr [edi]
// 00415dcd  6a01                 push 1
// 00415dcf  52                   push edx
// 00415dd0  ffd0                 call eax
// 00415dd2  83c408               add esp, 8
// 00415dd5  894704               mov dword ptr [edi + 4], eax
// 00415dd8  c70700000000         mov dword ptr [edi], 0
// 00415dde  c7470800000000       mov dword ptr [edi + 8], 0
// 00415de5  83460c01             add dword ptr [esi + 0xc], 1
// 00415de9  8b460c               mov eax, dword ptr [esi + 0xc]
// 00415dec  394608               cmp dword ptr [esi + 8], eax
// 00415def  5f                   pop edi
// 00415df0  7707                 ja 0x415df9
// 00415df2  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00415df9  834610ff             add dword ptr [esi + 0x10], -1
// 00415dfd  7507                 jne 0x415e06
// 00415dff  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00415e06  5e                   pop esi
// 00415e07  c3                   ret 

struct NonFactoryProduct {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void method();
};

void NonFactoryProduct::method() {
    if (field10 != 0) {
        int* p = (int*)((char*)field4 + fieldC * 4);
        int* obj = (int*)*p;
        if (*obj != 0) {
            int (*fn)(int, int) = (int (*)(int, int))obj[0];
            int r = fn(obj[1], 1);
            obj[1] = r;
        }
        *obj = 0;
        obj[2] = 0;
        fieldC++;
        if ((unsigned int)field8 <= (unsigned int)fieldC) {
            fieldC = 0;
        }
        field10--;
        if (field10 == 0) {
            fieldC = 0;
        }
    }
}
