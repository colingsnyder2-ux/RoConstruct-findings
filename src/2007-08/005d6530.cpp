// from server: 100% by colin
// roc 2007-08 005d6530  unit: RBX::UnifiedImageWidget  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6530
//
// 005d6530  8b442408             mov eax, dword ptr [esp + 8]
// 005d6534  56                   push esi
// 005d6535  8bf1                 mov esi, ecx
// 005d6537  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d653b  50                   push eax
// 005d653c  51                   push ecx
// 005d653d  8bce                 mov ecx, esi
// 005d653f  e8fcfeffff           call 0x5d6440
// 005d6544  c706fcbb7b00         mov dword ptr [esi], 0x7bbbfc
// 005d654a  c74604f0bb7b00       mov dword ptr [esi + 4], 0x7bbbf0
// 005d6551  c74610e8bb7b00       mov dword ptr [esi + 0x10], 0x7bbbe8
// 005d6558  c74614d8bb7b00       mov dword ptr [esi + 0x14], 0x7bbbd8
// 005d655f  c7462cc8bb7b00       mov dword ptr [esi + 0x2c], 0x7bbbc8
// 005d6566  c74644b8bb7b00       mov dword ptr [esi + 0x44], 0x7bbbb8
// 005d656d  c7465ca8bb7b00       mov dword ptr [esi + 0x5c], 0x7bbba8
// 005d6574  c7467498bb7b00       mov dword ptr [esi + 0x74], 0x7bbb98
// 005d657b  c7868c00000088bb7b00 mov dword ptr [esi + 0x8c], 0x7bbb88
// 005d6585  c786e800000080bb7b00 mov dword ptr [esi + 0xe8], 0x7bbb80
// 005d658f  8bc6                 mov eax, esi
// 005d6591  5e                   pop esi
// 005d6592  c20800               ret 8

struct UnifiedWidget {
    void construct(const char* imageName, int imageState);
};

struct UnifiedImageWidget : UnifiedWidget {
    char pad[0x100];
    UnifiedImageWidget(const char* imageName, int imageState);
};

UnifiedImageWidget::UnifiedImageWidget(const char* imageName, int imageState) {
    construct(imageName, imageState);
    *(int*)((char*)this + 0x00) = 0x7bbbfc;
    *(int*)((char*)this + 0x04) = 0x7bbbf0;
    *(int*)((char*)this + 0x10) = 0x7bbbe8;
    *(int*)((char*)this + 0x14) = 0x7bbbd8;
    *(int*)((char*)this + 0x2c) = 0x7bbbc8;
    *(int*)((char*)this + 0x44) = 0x7bbbb8;
    *(int*)((char*)this + 0x5c) = 0x7bbba8;
    *(int*)((char*)this + 0x74) = 0x7bbb98;
    *(int*)((char*)this + 0x8c) = 0x7bbb88;
    *(int*)((char*)this + 0xe8) = 0x7bbb80;
}
