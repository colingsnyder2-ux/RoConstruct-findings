// from server: 100% by king_originala
// roc 2008-06 00466ca0  unit: CSettingsExplorer  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466ca0
//
// 00466ca0  6aff                 push -1
// 00466ca2  6893357c00           push 0x7c3593
// 00466ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00466cad  50                   push eax
// 00466cae  64892500000000       mov dword ptr fs:[0], esp
// 00466cb5  51                   push ecx
// 00466cb6  56                   push esi
// 00466cb7  8bf1                 mov esi, ecx
// 00466cb9  89742404             mov dword ptr [esp + 4], esi
// 00466cbd  c706b4bf8100         mov dword ptr [esi], 0x81bfb4
// 00466cc3  8d8e90010000         lea ecx, [esi + 0x190]
// 00466cc9  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00466cd1  e82a9afcff           call 0x430700
// 00466cd6  8d4e74               lea ecx, [esi + 0x74]
// 00466cd9  c644241000           mov byte ptr [esp + 0x10], 0
// 00466cde  e89d152a00           call 0x708280
// 00466ce3  8bce                 mov ecx, esi
// 00466ce5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00466ced  e8e0a12300           call 0x6a0ed2
// 00466cf2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00466cf6  5e                   pop esi
// 00466cf7  64890d00000000       mov dword ptr fs:[0], ecx
// 00466cfe  83c410               add esp, 0x10
// 00466d01  c3                   ret 

struct Base
{
    virtual ~Base();
    char padding[0x70];
};

struct Splitter
{
    char storage[0x11c];
    ~Splitter();
};

struct Member
{
    ~Member();
};

struct CSettingsExplorer : Base
{
    Splitter splitter;
    Member member;
    virtual ~CSettingsExplorer();
};

CSettingsExplorer::~CSettingsExplorer()
{
}
