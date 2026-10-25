// from server: 100% by Espeon
// roc 2008-06 00504fd0  unit: RBX::Render::RenderScene  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00504fd0
//
// 00504fd0  6aff                 push -1
// 00504fd2  68fbb67c00           push 0x7cb6fb
// 00504fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00504fdd  50                   push eax
// 00504fde  64892500000000       mov dword ptr fs:[0], esp
// 00504fe5  51                   push ecx
// 00504fe6  56                   push esi
// 00504fe7  8bf1                 mov esi, ecx
// 00504fe9  33c0                 xor eax, eax
// 00504feb  c70624748200         mov dword ptr [esi], 0x827424
// 00504ff1  89742404             mov dword ptr [esp + 4], esi
// 00504ff5  89460c               mov dword ptr [esi + 0xc], eax
// 00504ff8  894610               mov dword ptr [esi + 0x10], eax
// 00504ffb  894608               mov dword ptr [esi + 8], eax
// 00504ffe  d905ac9b8100         fld dword ptr [0x819bac]
// 00505004  d95614               fst dword ptr [esi + 0x14]
// 00505007  8d4e30               lea ecx, [esi + 0x30]
// 0050500a  d95e18               fstp dword ptr [esi + 0x18]
// 0050500d  89442410             mov dword ptr [esp + 0x10], eax
// 00505011  d9e8                 fld1 
// 00505013  d9561c               fst dword ptr [esi + 0x1c]
// 00505016  d95e20               fstp dword ptr [esi + 0x20]
// 00505019  d905b8c38100         fld dword ptr [0x81c3b8]
// 0050501f  d95624               fst dword ptr [esi + 0x24]
// 00505022  d95e28               fstp dword ptr [esi + 0x28]
// 00505025  e806ccffff           call 0x501c30
// 0050502a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050502e  8bc6                 mov eax, esi
// 00505030  5e                   pop esi
// 00505031  64890d00000000       mov dword ptr fs:[0], ecx
// 00505038  83c410               add esp, 0x10
// 0050503b  c3                   ret 

// from server: 86% by king_originala
static const float initialExtent=0.5f;
static const float initialScale=-1.0f;

struct PointerStorage {
    unsigned int unused;
    void *first;
    void *last;
    void *end;

    PointerStorage();
    ~PointerStorage();
};

inline PointerStorage::PointerStorage()
{
    last = 0;
    end = 0;
    first = 0;
}

struct RenderData {
    unsigned char storage[0x160];
    RenderData();
};

struct RenderScene {
    virtual ~RenderScene();

    PointerStorage pointers;
    float extentX;
    float extentY;
    float factorX;
    float factorY;
    float scaleX;
    float scaleY;
    unsigned int unused;
    RenderData data;

    RenderScene();
};

RenderScene::RenderScene()
    : pointers(),
      extentX(initialExtent),
      extentY(extentX),
      factorX(1.0f),
      factorY(1.0f),
      scaleX(initialScale),
      scaleY(scaleX),
      data()
{
}
