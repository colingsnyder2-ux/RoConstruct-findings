// from server: 100% by king_originala
// roc 2008-06 005bc670  unit: RBX::Soundscape::SoundService  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc670
//
// 005bc670  56                   push esi
// 005bc671  8bf1                 mov esi, ecx
// 005bc673  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005bc679  85c0                 test eax, eax
// 005bc67b  741b                 je 0x5bc698
// 005bc67d  6a00                 push 0
// 005bc67f  50                   push eax
// 005bc680  e86f350e00           call 0x69fbf4
// 005bc685  50                   push eax
// 005bc686  e815c1ffff           call 0x5b87a0
// 005bc68b  83c404               add esp, 4
// 005bc68e  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 005bc698  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005bc69e  8d8e34010000         lea ecx, [esi + 0x134]
// 005bc6a4  85c0                 test eax, eax
// 005bc6a6  7408                 je 0x5bc6b0
// 005bc6a8  ff4808               dec dword ptr [eax + 8]
// 005bc6ab  e8d0a7e9ff           call 0x456e80
// 005bc6b0  8bce                 mov ecx, esi
// 005bc6b2  5e                   pop esi
// 005bc6b3  e9f8feffff           jmp 0x5bc5b0

struct Resource {
    char padding[8];
    int references;
};

struct ResourcePair {
    Resource* pointer;
    void* control;
    void clear();
};

extern "C" int __stdcall releaseHandle(void* handle, int flags);
extern "C" void __cdecl checkResult(int result);

struct S {
    char padding[0x134];
    ResourcePair resource;
    void* handle;

    void cleanup();
    void f();
};

void S::f()
{
    if (handle) {
        checkResult(releaseHandle(handle, 0));
        handle = 0;
    }

    if (resource.pointer) {
        --resource.pointer->references;
        resource.clear();
    }

    cleanup();
}
