// from server: 60% by colin
// roc 2007-08 00438b90  unit: RBX::VBrickColor::?$XItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438b90
//
// 00438b90  56                   push esi
// 00438b91  57                   push edi
// 00438b92  8d44240c             lea eax, [esp + 0xc]
// 00438b96  8bf1                 mov esi, ecx
// 00438b98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00438b9c  50                   push eax
// 00438b9d  e87ede1400           call 0x586a20
// 00438ba2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00438ba6  0fb64c240e           movzx ecx, byte ptr [esp + 0xe]
// 00438bab  8b16                 mov edx, dword ptr [esi]
// 00438bad  8b92e4000000         mov edx, dword ptr [edx + 0xe4]
// 00438bb3  c1e108               shl ecx, 8
// 00438bb6  0fb6fc               movzx edi, ah
// 00438bb9  0bcf                 or ecx, edi
// 00438bbb  0fb6c0               movzx eax, al
// 00438bbe  c1e108               shl ecx, 8
// 00438bc1  0bc8                 or ecx, eax
// 00438bc3  51                   push ecx
// 00438bc4  8bce                 mov ecx, esi
// 00438bc6  ffd2                 call edx
// 00438bc8  5f                   pop edi
// 00438bc9  5e                   pop esi
// 00438bca  c20400               ret 4

struct VBrickColor {
    int number;
    void setNumber(int);
};

struct XItem {
    void convertToValue(int);
};

extern "C" int __stdcall sub_586A20(int* out, int* in);

void VBrickColor::setNumber(int value)
{
    int local;
    sub_586A20(&local, &value);
    char b0 = (char)(local & 0xff);
    char b1 = (char)((local >> 8) & 0xff);
    char b2 = (char)((local >> 16) & 0xff);
    int packed = (b2 << 16) | (b1 << 8) | b0;
    XItem* item = (XItem*)this;
    item->convertToValue(packed);
}
