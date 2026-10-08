// from server: 67% by colin
// roc 2007-08 00586bb0  unit: RBX::VHat::?$FactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586bb0
//
// 00586bb0  51                   push ecx
// 00586bb1  8a44240c             mov al, byte ptr [esp + 0xc]
// 00586bb5  8a4c240d             mov cl, byte ptr [esp + 0xd]
// 00586bb9  8a54240e             mov dl, byte ptr [esp + 0xe]
// 00586bbd  56                   push esi
// 00586bbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00586bc2  88442404             mov byte ptr [esp + 4], al
// 00586bc6  884c2405             mov byte ptr [esp + 5], cl
// 00586bca  88542406             mov byte ptr [esp + 6], dl
// 00586bce  c644240700           mov byte ptr [esp + 7], 0
// 00586bd3  8b442404             mov eax, dword ptr [esp + 4]
// 00586bd7  50                   push eax
// 00586bd8  56                   push esi
// 00586bd9  e812fbffff           call 0x5866f0
// 00586bde  83c408               add esp, 8
// 00586be1  8bc6                 mov eax, esi
// 00586be3  5e                   pop esi
// 00586be4  59                   pop ecx
// 00586be5  c3                   ret 

struct RBX_VHat_FactoryProduct {
    void* construct(char, char, char);
};

void* RBX_VHat_FactoryProduct::construct(char a, char b, char c)
{
    char buf[4];
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    buf[3] = 0;
    int packed = *(int*)buf;
    extern void __cdecl sub_005866F0(void*, int);
    sub_005866F0(this, packed);
    return this;
}
