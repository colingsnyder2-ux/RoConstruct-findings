// from server: 56% by colin
// roc 2007-08 0061bf50  unit: RBX::UnifiedImageWidget  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bf50
//
// 0061bf50  6aff                 push -1
// 0061bf52  6808c77500           push 0x75c708
// 0061bf57  64a100000000         mov eax, dword ptr fs:[0]
// 0061bf5d  50                   push eax
// 0061bf5e  64892500000000       mov dword ptr fs:[0], esp
// 0061bf65  51                   push ecx
// 0061bf66  56                   push esi
// 0061bf67  8bf1                 mov esi, ecx
// 0061bf69  89742404             mov dword ptr [esp + 4], esi
// 0061bf6d  8d8e00010000         lea ecx, [esi + 0x100]
// 0061bf73  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061bf7b  e8200cf8ff           call 0x59cba0
// 0061bf80  8bce                 mov ecx, esi
// 0061bf82  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061bf8a  e8d10fdfff           call 0x40cf60
// 0061bf8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061bf93  5e                   pop esi
// 0061bf94  64890d00000000       mov dword ptr fs:[0], ecx
// 0061bf9b  83c410               add esp, 0x10
// 0061bf9e  c3                   ret 

struct GuiDrawImage {
    void setImageSize(const void*);
};

struct UnifiedWidget {
    virtual ~UnifiedWidget();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char pad[0x100 - sizeof(GuiDrawImage)];
    void* field_100;
    UnifiedImageWidget(const void* imageName, int imageState);
};

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    field_100 = 0;
    guiImageDraw.setImageSize(imageName);
    field_100 = (void*)-1;
    UnifiedWidget::~UnifiedWidget();
}
