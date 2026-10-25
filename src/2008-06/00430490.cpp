// from server: 100% by king_originala
// roc 2008-06 00430490  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430490
//
// 00430490  6aff                 push -1
// 00430492  68d8fa7b00           push 0x7bfad8
// 00430497  64a100000000         mov eax, dword ptr fs:[0]
// 0043049d  50                   push eax
// 0043049e  64892500000000       mov dword ptr fs:[0], esp
// 004304a5  51                   push ecx
// 004304a6  56                   push esi
// 004304a7  8bf1                 mov esi, ecx
// 004304a9  89742404             mov dword ptr [esp + 4], esi
// 004304ad  c706ac0e8100         mov dword ptr [esi], 0x810eac
// 004304b3  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 004304b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004304c1  85c9                 test ecx, ecx
// 004304c3  7405                 je 0x4304ca
// 004304c5  e81a072700           call 0x6a0be4
// 004304ca  8bce                 mov ecx, esi
// 004304cc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004304d4  e85b082700           call 0x6a0d34
// 004304d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004304dd  5e                   pop esi
// 004304de  64890d00000000       mov dword ptr fs:[0], ecx
// 004304e5  83c410               add esp, 0x10
// 004304e8  c3                   ret 

struct Resource {
    void release();
};

struct Base {
    virtual ~Base();
    char padding[232];
};

struct Frame : Base {
    Resource* resource;
    virtual ~Frame();
};

Frame::~Frame()
{
    if (resource)
        resource->release();
}
