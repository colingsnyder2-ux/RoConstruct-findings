// from server: 100% by tester
// roc 2008-06 0055d150  unit: RBX::MD5HasherImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d150
//
// 0055d150  6aff                 push -1
// 0055d152  68a8057d00           push 0x7d05a8
// 0055d157  64a100000000         mov eax, dword ptr fs:[0]
// 0055d15d  50                   push eax
// 0055d15e  64892500000000       mov dword ptr fs:[0], esp
// 0055d165  51                   push ecx
// 0055d166  56                   push esi
// 0055d167  8bf1                 mov esi, ecx
// 0055d169  89742404             mov dword ptr [esp + 4], esi
// 0055d16d  8d4e20               lea ecx, [esi + 0x20]
// 0055d170  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055d178  e8e35aecff           call 0x422c60
// 0055d17d  8bce                 mov ecx, esi
// 0055d17f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055d187  ff1568248000         call dword ptr [0x802468]
// 0055d18d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d191  5e                   pop esi
// 0055d192  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d199  83c410               add esp, 0x10
// 0055d19c  c3                   ret 

extern void (__thiscall *destroy_string)(void *);

struct StringStorage
{
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct Member
{
    ~Member();
};

struct S : StringStorage
{
    Member member;
    ~S();
};

S::~S()
{
}
