// from server: 100% by king_originala
// roc 2008-06 0040e230  unit: CBrowserView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e230
//
// 0040e230  6aff                 push -1
// 0040e232  6858387c00           push 0x7c3858
// 0040e237  64a100000000         mov eax, dword ptr fs:[0]
// 0040e23d  50                   push eax
// 0040e23e  64892500000000       mov dword ptr fs:[0], esp
// 0040e245  51                   push ecx
// 0040e246  56                   push esi
// 0040e247  8bf1                 mov esi, ecx
// 0040e249  89742404             mov dword ptr [esp + 4], esi
// 0040e24d  c7068cd08000         mov dword ptr [esi], 0x80d08c
// 0040e253  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0040e259  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040e261  85c9                 test ecx, ecx
// 0040e263  7405                 je 0x40e26a
// 0040e265  e87a292900           call 0x6a0be4
// 0040e26a  8bce                 mov ecx, esi
// 0040e26c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040e274  e807780500           call 0x465a80
// 0040e279  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e27d  5e                   pop esi
// 0040e27e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e285  83c410               add esp, 0x10
// 0040e288  c3                   ret 

struct B {
    virtual ~B();
};

struct S : B {
    ~S();
};

struct P {
    void release();
};

struct CBrowserView : S {
    char padding[244];
    P* p;
    ~CBrowserView();
};

CBrowserView::~CBrowserView()
{
    if (p)
        p->release();
}
