// from server: 67% by colin
// roc 2007-08 00578e70  unit: RBX::VPartInstance::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578e70
//
// 00578e70  56                   push esi
// 00578e71  8bf1                 mov esi, ecx
// 00578e73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578e77  d901                 fld dword ptr [ecx]
// 00578e79  83ec0c               sub esp, 0xc
// 00578e7c  8bc4                 mov eax, esp
// 00578e7e  d918                 fstp dword ptr [eax]
// 00578e80  d94104               fld dword ptr [ecx + 4]
// 00578e83  d95804               fstp dword ptr [eax + 4]
// 00578e86  d94108               fld dword ptr [ecx + 8]
// 00578e89  d95808               fstp dword ptr [eax + 8]
// 00578e8c  8d442414             lea eax, [esp + 0x14]
// 00578e90  50                   push eax
// 00578e91  e85add0000           call 0x586bf0
// 00578e96  8b00                 mov eax, dword ptr [eax]
// 00578e98  83c410               add esp, 0x10
// 00578e9b  3b8694010000         cmp eax, dword ptr [esi + 0x194]
// 00578ea1  741e                 je 0x578ec1
// 00578ea3  68442a8c00           push 0x8c2a44
// 00578ea8  8bce                 mov ecx, esi
// 00578eaa  898694010000         mov dword ptr [esi + 0x194], eax
// 00578eb0  e85bb8ecff           call 0x444710
// 00578eb5  681c298c00           push 0x8c291c
// 00578eba  8bce                 mov ecx, esi
// 00578ebc  e84fb8ecff           call 0x444710
// 00578ec1  5e                   pop esi
// 00578ec2  c20400               ret 4

struct VPartInstance {
    char pad[0x194];
    int field_194;
    void sub_444710(const char* s);
    int sub_586bf0(float* v);
    void func(float* v);
};

void VPartInstance::func(float* v) {
    float tmp[3];
    tmp[0] = v[0];
    tmp[1] = v[1];
    tmp[2] = v[2];
    int r = sub_586bf0(tmp);
    int val = *(int*)r;
    if (val != field_194) {
        field_194 = val;
        sub_444710((const char*)0x8c2a44);
        sub_444710((const char*)0x8c291c);
    }
}
