// from server: 100% by colin
// roc 2007-08 005d1250  unit: RBX::VLocalBackpackItem::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1250
//
// 005d1250  56                   push esi
// 005d1251  8bf1                 mov esi, ecx
// 005d1253  e8b8feffff           call 0x5d1110
// 005d1258  c706ecac7b00         mov dword ptr [esi], 0x7bacec
// 005d125e  c74604e0ac7b00       mov dword ptr [esi + 4], 0x7bace0
// 005d1265  c74610d8ac7b00       mov dword ptr [esi + 0x10], 0x7bacd8
// 005d126c  c74614c8ac7b00       mov dword ptr [esi + 0x14], 0x7bacc8
// 005d1273  c7462cb8ac7b00       mov dword ptr [esi + 0x2c], 0x7bacb8
// 005d127a  c74644a8ac7b00       mov dword ptr [esi + 0x44], 0x7baca8
// 005d1281  c7465c98ac7b00       mov dword ptr [esi + 0x5c], 0x7bac98
// 005d1288  c7467488ac7b00       mov dword ptr [esi + 0x74], 0x7bac88
// 005d128f  c7868c00000078ac7b00 mov dword ptr [esi + 0x8c], 0x7bac78
// 005d1299  c786e800000070ac7b00 mov dword ptr [esi + 0xe8], 0x7bac70
// 005d12a3  8bc6                 mov eax, esi
// 005d12a5  5e                   pop esi
// 005d12a6  c3                   ret 

struct VLocalBackpackItem {
    char pad0[0x8c];
    int m_8c;
    char pad1[0xe8 - 0x8c - 4];
    int m_e8;
    void sub_5d1110();
    VLocalBackpackItem* ctor();
};

VLocalBackpackItem* VLocalBackpackItem::ctor()
{
    sub_5d1110();
    *(int*)((char*)this + 0x00) = 0x7bacec;
    *(int*)((char*)this + 0x04) = 0x7bace0;
    *(int*)((char*)this + 0x10) = 0x7bacd8;
    *(int*)((char*)this + 0x14) = 0x7bacc8;
    *(int*)((char*)this + 0x2c) = 0x7bacb8;
    *(int*)((char*)this + 0x44) = 0x7baca8;
    *(int*)((char*)this + 0x5c) = 0x7bac98;
    *(int*)((char*)this + 0x74) = 0x7bac88;
    *(int*)((char*)this + 0x8c) = 0x7bac78;
    *(int*)((char*)this + 0xe8) = 0x7bac70;
    return this;
}
