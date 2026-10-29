// roc 2012-06 004ddef0  unit: Ogre::VertexStreamer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ddef0
//
// 004ddef0  6aff                 push -1
// 004ddef2  6828acab00           push 0xabac28
// 004ddef7  64a100000000         mov eax, dword ptr fs:[0]
// 004ddefd  50                   push eax
// 004ddefe  64892500000000       mov dword ptr fs:[0], esp
// 004ddf05  51                   push ecx
// 004ddf06  56                   push esi
// 004ddf07  8bf1                 mov esi, ecx
// 004ddf09  89742404             mov dword ptr [esp + 4], esi
// 004ddf0d  8d4e20               lea ecx, [esi + 0x20]
// 004ddf10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ddf18  ff153c26b200         call dword ptr [0xb2263c]
// 004ddf1e  8bce                 mov ecx, esi
// 004ddf20  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ddf28  ff153c26b200         call dword ptr [0xb2263c]
// 004ddf2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ddf32  5e                   pop esi
// 004ddf33  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddf3a  83c410               add esp, 0x10
// 004ddf3d  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void*);

struct StringStorage {
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct S {
    StringStorage first;
    StringStorage second;
    ~S();
};

S::~S()
{
}