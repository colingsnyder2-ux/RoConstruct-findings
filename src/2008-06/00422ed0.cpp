// from server: 100% by king_originala
// roc 2008-06 00422ed0  unit: CRobloxTreeCtrl  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422ed0
//
// 00422ed0  53                   push ebx
// 00422ed1  56                   push esi
// 00422ed2  57                   push edi
// 00422ed3  8bf1                 mov esi, ecx
// 00422ed5  e866ce2b00           call 0x6dfd40
// 00422eda  6a0f                 push 0xf
// 00422edc  8bc8                 mov ecx, eax
// 00422ede  e83dc62b00           call 0x6df520
// 00422ee3  8bd8                 mov ebx, eax
// 00422ee5  e856ce2b00           call 0x6dfd40
// 00422eea  6a0d                 push 0xd
// 00422eec  8bc8                 mov ecx, eax
// 00422eee  e82dc62b00           call 0x6df520
// 00422ef3  8bc8                 mov ecx, eax
// 00422ef5  c1e810               shr eax, 0x10
// 00422ef8  0fb6c0               movzx eax, al
// 00422efb  8bd3                 mov edx, ebx
// 00422efd  c1ea10               shr edx, 0x10
// 00422f00  0fb6d2               movzx edx, dl
// 00422f03  03c2                 add eax, edx
// 00422f05  99                   cdq 
// 00422f06  2bc2                 sub eax, edx
// 00422f08  d1f8                 sar eax, 1
// 00422f0a  0fb6f8               movzx edi, al
// 00422f0d  8bc1                 mov eax, ecx
// 00422f0f  c1e808               shr eax, 8
// 00422f12  0fb6c0               movzx eax, al
// 00422f15  8bd3                 mov edx, ebx
// 00422f17  c1ea08               shr edx, 8
// 00422f1a  0fb6d2               movzx edx, dl
// 00422f1d  03c2                 add eax, edx
// 00422f1f  99                   cdq 
// 00422f20  2bc2                 sub eax, edx
// 00422f22  d1f8                 sar eax, 1
// 00422f24  0fb6c0               movzx eax, al
// 00422f27  c1e708               shl edi, 8
// 00422f2a  0bf8                 or edi, eax
// 00422f2c  0fb6c9               movzx ecx, cl
// 00422f2f  0fb6c3               movzx eax, bl
// 00422f32  03c1                 add eax, ecx
// 00422f34  99                   cdq 
// 00422f35  2bc2                 sub eax, edx
// 00422f37  d1f8                 sar eax, 1
// 00422f39  0fb6d0               movzx edx, al
// 00422f3c  c1e708               shl edi, 8
// 00422f3f  0bfa                 or edi, edx
// 00422f41  57                   push edi
// 00422f42  6a0f                 push 0xf
// 00422f44  e8f7cd2b00           call 0x6dfd40
// 00422f49  8bc8                 mov ecx, eax
// 00422f4b  e830c82b00           call 0x6df780
// 00422f50  8bce                 mov ecx, esi
// 00422f52  e8f9faffff           call 0x422a50
// 00422f57  53                   push ebx
// 00422f58  6a0f                 push 0xf
// 00422f5a  e8e1cd2b00           call 0x6dfd40
// 00422f5f  8bc8                 mov ecx, eax
// 00422f61  e81ac82b00           call 0x6df780
// 00422f66  5f                   pop edi
// 00422f67  5e                   pop esi
// 00422f68  5b                   pop ebx
// 00422f69  c3                   ret 

typedef unsigned long Color;

struct ColorManager
{
    Color GetColor(int index);
    void SetColor(int index, Color color);
};

ColorManager* __cdecl GetColorManager();

struct S
{
    void f();
    void draw();
};

void S::f()
{
    ColorManager* manager = GetColorManager();
    Color oldColor = manager->GetColor(15);
    manager = GetColorManager();
    Color otherColor = manager->GetColor(13);

    unsigned int mixed = (unsigned char)(
        ((unsigned char)(otherColor >> 16) +
         (unsigned char)(oldColor >> 16)) / 2);

    mixed = (mixed << 8) | (unsigned char)(
        ((unsigned char)(otherColor >> 8) +
         (unsigned char)(oldColor >> 8)) / 2);

    mixed = (mixed << 8) | (unsigned char)(
        ((unsigned char)otherColor + (unsigned char)oldColor) / 2);

    GetColorManager()->SetColor(15, mixed);
    draw();
    GetColorManager()->SetColor(15, oldColor);
}
