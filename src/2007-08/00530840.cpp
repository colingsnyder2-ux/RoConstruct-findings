// from server: 74% by colin
// roc 2007-08 00530840  unit: RBX::VModelInstance::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530840
//
// 00530840  56                   push esi
// 00530841  8bf1                 mov esi, ecx
// 00530843  807e1100             cmp byte ptr [esi + 0x11], 0
// 00530847  7427                 je 0x530870
// 00530849  8b4614               mov eax, dword ptr [esi + 0x14]
// 0053084c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0053084f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00530855  8b0c11               mov ecx, dword ptr [ecx + edx]
// 00530858  034e1c               add ecx, dword ptr [esi + 0x1c]
// 0053085b  8b5618               mov edx, dword ptr [esi + 0x18]
// 0053085e  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 00530865  ffd2                 call edx
// 00530867  884610               mov byte ptr [esi + 0x10], al
// 0053086a  c6461100             mov byte ptr [esi + 0x11], 0
// 0053086e  5e                   pop esi
// 0053086f  c3                   ret 
// 00530870  8a4610               mov al, byte ptr [esi + 0x10]
// 00530873  5e                   pop esi
// 00530874  c3                   ret 

struct S {
    char pad0[0x10];
    unsigned char flag10;
    unsigned char flag11;
    char pad12[0x4];
    int field14;
    int field18;
    int field1c;
    int field20;
    unsigned char get();
};

unsigned char S::get() {
    if (flag11) {
        int* p = (int*)field14;
        int idx = *(int*)((char*)p + 0xec);
        int off = *(int*)((char*)idx + field20);
        int total = off + field1c;
        int (*fn)(void*) = (int (*)(void*))field18;
        unsigned char r = (unsigned char)fn((char*)p + 0xec + total);
        flag10 = r;
        flag11 = 0;
        return r;
    }
    return flag10;
}
