// from server: 95% by colin
// roc 2007-08 0070e9f0  unit: CXTColorPageCustom  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070e9f0
//
// 0070e9f0  56                   push esi
// 0070e9f1  6a01                 push 1
// 0070e9f3  8bf1                 mov esi, ecx
// 0070e9f5  e8f014f2ff           call 0x62feea
// 0070e9fa  0fb68e88070000       movzx ecx, byte ptr [esi + 0x788]
// 0070ea01  33c0                 xor eax, eax
// 0070ea03  8aa68c070000         mov ah, byte ptr [esi + 0x78c]
// 0070ea09  6a00                 push 0
// 0070ea0b  8a8690070000         mov al, byte ptr [esi + 0x790]
// 0070ea11  c1e008               shl eax, 8
// 0070ea14  0bc1                 or eax, ecx
// 0070ea16  50                   push eax
// 0070ea17  8bce                 mov ecx, esi
// 0070ea19  e882faffff           call 0x70e4a0
// 0070ea1e  5e                   pop esi
// 0070ea1f  c3                   ret 

struct CXTColorPageCustom
{
    char pad[0x788];
    unsigned char field_788;
    char pad2[3];
    unsigned char field_78c;
    char pad3[3];
    unsigned char field_790;

    void sub_62feea(int);
    void sub_70e4a0(int, int);
    void func_70e9f0();
};

void CXTColorPageCustom::func_70e9f0()
{
    sub_62feea(1);
    unsigned int v = field_788;
    unsigned int mid = field_78c;
    unsigned int hi = field_790;
    unsigned int packed = ((mid << 8) | hi) << 8 | v;
    sub_70e4a0(0, packed);
}
