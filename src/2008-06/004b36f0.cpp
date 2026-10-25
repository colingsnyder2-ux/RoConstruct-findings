// from server: 100% by king_originala
// roc 2008-06 004b36f0  unit: RBX::Network::VMarker::?$SignalDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b36f0
//
// 004b36f0  6aff                 push -1
// 004b36f2  68b8877c00           push 0x7c87b8
// 004b36f7  64a100000000         mov eax, dword ptr fs:[0]
// 004b36fd  50                   push eax
// 004b36fe  64892500000000       mov dword ptr fs:[0], esp
// 004b3705  51                   push ecx
// 004b3706  56                   push esi
// 004b3707  8bf1                 mov esi, ecx
// 004b3709  89742404             mov dword ptr [esp + 4], esi
// 004b370d  a168248000           mov eax, dword ptr [0x802468]
// 004b3712  50                   push eax
// 004b3713  6880000000           push 0x80
// 004b3718  6a1c                 push 0x1c
// 004b371a  8d4e20               lea ecx, [esi + 0x20]
// 004b371d  51                   push ecx
// 004b371e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b3726  e830df1e00           call 0x6a165b
// 004b372b  8bce                 mov ecx, esi
// 004b372d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b3735  e83679fbff           call 0x46b070
// 004b373a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b373e  5e                   pop esi
// 004b373f  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3746  83c410               add esp, 0x10
// 004b3749  c3                   ret 

typedef void (__thiscall *DestructorProc)(void *);

extern DestructorProc stringDestructor;

void __stdcall destroyArray(
    void *array, unsigned int elementSize,
    int elementCount, DestructorProc destructor);

struct Base {
    char storage[32];
    ~Base();
};

struct S : Base {
    char strings[128 * 28];
    ~S();
};

S::~S()
{
    destroyArray(strings, 28, 128, stringDestructor);
}
