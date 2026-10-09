// from server: 61% by colin
// roc 2007-08 00438b30  unit: RBX::VBrickColor::?$XItem  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438b30
//
// 00438b30  51                   push ecx
// 00438b31  8b01                 mov eax, dword ptr [ecx]
// 00438b33  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00438b39  56                   push esi
// 00438b3a  ffd2                 call edx
// 00438b3c  0fb6d0               movzx edx, al
// 00438b3f  89542404             mov dword ptr [esp + 4], edx
// 00438b43  0fb6d4               movzx edx, ah
// 00438b46  db442404             fild dword ptr [esp + 4]
// 00438b4a  dd05a8d37800         fld qword ptr [0x78d3a8]
// 00438b50  83ec0c               sub esp, 0xc
// 00438b53  8bcc                 mov ecx, esp
// 00438b55  dcf9                 fdiv st(1), st(0)
// 00438b57  89542410             mov dword ptr [esp + 0x10], edx
// 00438b5b  c1e810               shr eax, 0x10
// 00438b5e  0fb6c0               movzx eax, al
// 00438b61  8b742418             mov esi, dword ptr [esp + 0x18]
// 00438b65  56                   push esi
// 00438b66  d9c9                 fxch st(1)
// 00438b68  d919                 fstp dword ptr [ecx]
// 00438b6a  db442414             fild dword ptr [esp + 0x14]
// 00438b6e  89442414             mov dword ptr [esp + 0x14], eax
// 00438b72  d8f1                 fdiv st(1)
// 00438b74  d95904               fstp dword ptr [ecx + 4]
// 00438b77  db442414             fild dword ptr [esp + 0x14]
// 00438b7b  def1                 fdivrp st(1)
// 00438b7d  d95908               fstp dword ptr [ecx + 8]
// 00438b80  e86be01400           call 0x586bf0
// 00438b85  83c410               add esp, 0x10
// 00438b88  8bc6                 mov eax, esi
// 00438b8a  5e                   pop esi
// 00438b8b  59                   pop ecx
// 00438b8c  c20400               ret 4

struct VBrickColor {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct Color3 {
    float r;
    float g;
    float b;
};

struct XItem {
    virtual int getColor();
};

struct VBrickColorXItem {
    XItem* item;
    Color3* color3(Color3* result);
};

Color3* VBrickColorXItem::color3(Color3* result) {
    int packed = item->getColor();
    VBrickColor color;
    *(int*)&color = packed;
    float scale = 255.0f;
    result->r = (float)color.r / scale;
    result->g = (float)color.g / scale;
    result->b = (float)color.b / scale;
    return result;
}
