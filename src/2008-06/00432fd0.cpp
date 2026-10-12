// from server: 100% by king_originala
// roc 2008-06 00432fd0  unit: CBrowserFrameWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432fd0
//
// 00432fd0  6aff                 push -1
// 00432fd2  6838fe7b00           push 0x7bfe38
// 00432fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00432fdd  50                   push eax
// 00432fde  64892500000000       mov dword ptr fs:[0], esp
// 00432fe5  51                   push ecx
// 00432fe6  56                   push esi
// 00432fe7  8bf1                 mov esi, ecx
// 00432fe9  89742404             mov dword ptr [esp + 4], esi
// 00432fed  c706b41e8100         mov dword ptr [esi], 0x811eb4
// 00432ff3  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00432ff9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00433001  85c9                 test ecx, ecx
// 00433003  7405                 je 0x43300a
// 00433005  e8dadb2600           call 0x6a0be4
// 0043300a  8bce                 mov ecx, esi
// 0043300c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00433014  e81bdd2600           call 0x6a0d34
// 00433019  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043301d  5e                   pop esi
// 0043301e  64890d00000000       mov dword ptr fs:[0], ecx
// 00433025  83c410               add esp, 0x10
// 00433028  c3                   ret 

struct Object
{
    void release();
};

struct Base
{
    virtual ~Base();
    char padding[0xe4];
};

struct CBrowserFrameWnd : Base
{
    Object* object;
    ~CBrowserFrameWnd();
};

CBrowserFrameWnd::~CBrowserFrameWnd()
{
    if (object)
        object->release();
}
