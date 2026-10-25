// from server: 100% by king_originala
// roc 2008-06 00651860  unit: RBX::ScoreHud  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651860
//
// 00651860  64a100000000         mov eax, dword ptr fs:[0]
// 00651866  6aff                 push -1
// 00651868  68c8b77d00           push 0x7db7c8
// 0065186d  50                   push eax
// 0065186e  64892500000000       mov dword ptr fs:[0], esp
// 00651875  56                   push esi
// 00651876  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065187a  8bce                 mov ecx, esi
// 0065187c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00651884  e8475fdbff           call 0x4077d0
// 00651889  8b06                 mov eax, dword ptr [esi]
// 0065188b  50                   push eax
// 0065188c  e8e9ed0400           call 0x6a067a
// 00651891  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00651895  83c404               add esp, 4
// 00651898  64890d00000000       mov dword ptr fs:[0], ecx
// 0065189f  5e                   pop esi
// 006518a0  83c40c               add esp, 0xc
// 006518a3  c20400               ret 4

extern "C" void __cdecl release(void *);

struct Resource {
    void *pointer;
    __forceinline ~Resource();
};

struct S {
    Resource resource;
    void cleanup();
    __forceinline ~S();
};

__forceinline Resource::~Resource()
{
    release(pointer);
}

__forceinline S::~S()
{
    cleanup();
}

void __stdcall destroy(S *object)
{
    object->~S();
}
