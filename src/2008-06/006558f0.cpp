// from server: 100% by king_originala
// roc 2008-06 006558f0  unit: RBX::ScoreHud  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006558f0
//
// 006558f0  6aff                 push -1
// 006558f2  68b6ba7d00           push 0x7dbab6
// 006558f7  64a100000000         mov eax, dword ptr fs:[0]
// 006558fd  50                   push eax
// 006558fe  64892500000000       mov dword ptr fs:[0], esp
// 00655905  51                   push ecx
// 00655906  56                   push esi
// 00655907  8bf1                 mov esi, ecx
// 00655909  89742404             mov dword ptr [esp + 4], esi
// 0065590d  8d4e58               lea ecx, [esi + 0x58]
// 00655910  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00655918  e853ffffff           call 0x655870
// 0065591d  8d4e38               lea ecx, [esi + 0x38]
// 00655920  c644241001           mov byte ptr [esp + 0x10], 1
// 00655925  e8d6feffff           call 0x655800
// 0065592a  8d4e18               lea ecx, [esi + 0x18]
// 0065592d  c644241000           mov byte ptr [esp + 0x10], 0
// 00655932  e8a9e8ffff           call 0x6541e0
// 00655937  8bce                 mov ecx, esi
// 00655939  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00655941  e88a1edbff           call 0x4077d0
// 00655946  8b06                 mov eax, dword ptr [esi]
// 00655948  50                   push eax
// 00655949  e82cad0400           call 0x6a067a
// 0065594e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00655952  83c404               add esp, 4
// 00655955  5e                   pop esi
// 00655956  64890d00000000       mov dword ptr fs:[0], ecx
// 0065595d  83c410               add esp, 0x10
// 00655960  c3                   ret 

extern "C" void __cdecl release(void *);

struct Owner {
    void *pointer;
    ~Owner();
};

struct Container {
    Owner owner;
    char storage[20];
    void tidy();
    ~Container();
};

struct MemberA {
    char storage[32];
    ~MemberA();
};

struct MemberB {
    char storage[32];
    ~MemberB();
};

struct MemberC {
    char storage[32];
    ~MemberC();
};

struct ScoreHud {
    Container container;
    MemberA a;
    MemberB b;
    MemberC c;
    ~ScoreHud();
};

inline Owner::~Owner()
{
    release(pointer);
}

inline Container::~Container()
{
    tidy();
}

ScoreHud::~ScoreHud()
{
}
