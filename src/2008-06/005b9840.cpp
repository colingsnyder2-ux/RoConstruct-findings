// from server: 100% by king_originala
// roc 2008-06 005b9840  unit: RBX::Soundscape::SoundChannel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b9840
//
// 005b9840  56                   push esi
// 005b9841  8bf1                 mov esi, ecx
// 005b9843  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005b9849  85c0                 test eax, eax
// 005b984b  741b                 je 0x5b9868
// 005b984d  6a00                 push 0
// 005b984f  50                   push eax
// 005b9850  e89f630e00           call 0x69fbf4
// 005b9855  50                   push eax
// 005b9856  e845efffff           call 0x5b87a0
// 005b985b  83c404               add esp, 4
// 005b985e  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 005b9868  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005b986e  8d8e34010000         lea ecx, [esi + 0x134]
// 005b9874  5e                   pop esi
// 005b9875  85c0                 test eax, eax
// 005b9877  7408                 je 0x5b9881
// 005b9879  ff4808               dec dword ptr [eax + 8]
// 005b987c  e8ffd5e9ff           call 0x456e80
// 005b9881  c20800               ret 8

extern "C" int __stdcall releaseHandle(void *, int);
extern "C" void __cdecl checkResult(int);

struct Referent {
    unsigned char padding[8];
    int references;
};

struct Reference {
    Referent *object;
    void *control;
    void reset();
};

struct S {
    unsigned char padding[0x134];
    Reference reference;
    void *handle;

    void release(int, int);
};

void S::release(int, int)
{
    if (handle) {
        checkResult(releaseHandle(handle, 0));
        handle = 0;
    }

    if (reference.object) {
        --reference.object->references;
        reference.reset();
    }
}
