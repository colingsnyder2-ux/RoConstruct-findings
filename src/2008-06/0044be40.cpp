// from server: 100% by king_originala
// roc 2008-06 0044be40  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044be40
//
// 0044be40  56                   push esi
// 0044be41  8bf1                 mov esi, ecx
// 0044be43  837e0400             cmp dword ptr [esi + 4], 0
// 0044be47  57                   push edi
// 0044be48  8d7e04               lea edi, [esi + 4]
// 0044be4b  7432                 je 0x44be7f
// 0044be4d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0044be51  740d                 je 0x44be60
// 0044be53  57                   push edi
// 0044be54  e807e2ffff           call 0x44a060
// 0044be59  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0044be60  8b4628               mov eax, dword ptr [esi + 0x28]
// 0044be63  85c0                 test eax, eax
// 0044be65  7408                 je 0x44be6f
// 0044be67  8b08                 mov ecx, dword ptr [eax]
// 0044be69  8b5108               mov edx, dword ptr [ecx + 8]
// 0044be6c  50                   push eax
// 0044be6d  ffd2                 call edx
// 0044be6f  8d4610               lea eax, [esi + 0x10]
// 0044be72  50                   push eax
// 0044be73  ff15dc228000         call dword ptr [0x8022dc]
// 0044be79  c70700000000         mov dword ptr [edi], 0
// 0044be7f  f644240c01           test byte ptr [esp + 0xc], 1
// 0044be84  7409                 je 0x44be8f
// 0044be86  56                   push esi
// 0044be87  e8ee472500           call 0x6a067a
// 0044be8c  83c404               add esp, 4
// 0044be8f  5f                   pop edi
// 0044be90  8bc6                 mov eax, esi
// 0044be92  5e                   pop esi
// 0044be93  c20400               ret 4

void __cdecl operator delete(void*);

extern "C" void __stdcall cleanup(void*);
extern "C" void (__stdcall *DeleteCriticalSection)(void*);

struct Interface {
    virtual void __stdcall slot0() = 0;
    virtual void __stdcall slot1() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct S {
    unsigned int unused0;
    unsigned int active;
    unsigned int unused8;
    unsigned int initialized;
    unsigned char criticalSection[24];
    Interface* object;

    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags) {
    if (active) {
        if (initialized) {
            cleanup(&active);
            initialized = 0;
        }
        if (object)
            object->Release();
        DeleteCriticalSection(criticalSection);
        active = 0;
    }
    if (flags & 1)
        operator delete(this);
    return this;
}
