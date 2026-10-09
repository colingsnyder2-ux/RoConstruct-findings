// from server: 52% by colin
// roc 2007-08 00524560  unit: G3D::Line  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524560
//
// 00524560  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524564  56                   push esi
// 00524565  57                   push edi
// 00524566  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052456a  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0052456d  6a00                 push 0
// 0052456f  50                   push eax
// 00524570  51                   push ecx
// 00524571  ff15f8e87700         call dword ptr [0x77e8f8]
// 00524577  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052457b  83c40c               add esp, 0xc
// 0052457e  85c0                 test eax, eax
// 00524580  7413                 je 0x524595
// 00524582  8b16                 mov edx, dword ptr [esi]
// 00524584  c7421441000000       mov dword ptr [edx + 0x14], 0x41
// 0052458b  8b06                 mov eax, dword ptr [esi]
// 0052458d  8b08                 mov ecx, dword ptr [eax]
// 0052458f  56                   push esi
// 00524590  ffd1                 call ecx
// 00524592  83c404               add esp, 4
// 00524595  8b570c               mov edx, dword ptr [edi + 0xc]
// 00524598  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052459c  8b442414             mov eax, dword ptr [esp + 0x14]
// 005245a0  52                   push edx
// 005245a1  57                   push edi
// 005245a2  6a01                 push 1
// 005245a4  50                   push eax
// 005245a5  ff1514e97700         call dword ptr [0x77e914]
// 005245ab  83c410               add esp, 0x10
// 005245ae  3bc7                 cmp eax, edi
// 005245b0  7413                 je 0x5245c5
// 005245b2  8b0e                 mov ecx, dword ptr [esi]
// 005245b4  c7411442000000       mov dword ptr [ecx + 0x14], 0x42
// 005245bb  8b16                 mov edx, dword ptr [esi]
// 005245bd  8b02                 mov eax, dword ptr [edx]
// 005245bf  56                   push esi
// 005245c0  ffd0                 call eax
// 005245c2  83c404               add esp, 4
// 005245c5  5f                   pop edi
// 005245c6  5e                   pop esi
// 005245c7  c3                   ret 

struct Line {
    char pad[0x14];
    int field14;
};

struct Stream {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" int __stdcall fseek(void*, long, int);
extern "C" unsigned int __stdcall fwrite(const void*, unsigned int, unsigned int, void*);

int Line_Intersect(Line* self, Stream* stream, const void* ptr, unsigned int size, int origin) {
    int result = fseek(stream->fieldC, origin, 0);
    if (result == 0) {
        *(int*)((char*)self + 0x14) = 0x41;
        void** vtbl = *(void***)self;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0];
        fn(self);
    }
    unsigned int written = fwrite(ptr, 1, size, stream->fieldC);
    if (written != size) {
        *(int*)((char*)self + 0x14) = 0x42;
        void** vtbl = *(void***)self;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0];
        fn(self);
    }
    return written;
}
