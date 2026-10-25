// from server: 100% by king_originala
// roc 2008-06 00432b10  unit: RBX::CMarshalWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432b10
//
// 00432b10  56                   push esi
// 00432b11  8bf1                 mov esi, ecx
// 00432b13  8d462c               lea eax, [esi + 0x2c]
// 00432b16  50                   push eax
// 00432b17  c706501c8100         mov dword ptr [esi], 0x811c50
// 00432b1d  ff15dc228000         call dword ptr [0x8022dc]
// 00432b23  8b4614               mov eax, dword ptr [esi + 0x14]
// 00432b26  85c0                 test eax, eax
// 00432b28  7406                 je 0x432b30
// 00432b2a  50                   push eax
// 00432b2b  e8db343700           call 0x7a600b
// 00432b30  f644240801           test byte ptr [esp + 8], 1
// 00432b35  7409                 je 0x432b40
// 00432b37  56                   push esi
// 00432b38  e83ddb2600           call 0x6a067a
// 00432b3d  83c404               add esp, 4
// 00432b40  8bc6                 mov eax, esi
// 00432b42  5e                   pop esi
// 00432b43  c20400               ret 4

extern "C" void (__stdcall *DeleteCriticalSection)(void*);
extern "C" void __stdcall releaseHandle(void*);
extern "C" void __cdecl freeObject(void*);
extern unsigned int vtableData[];

struct S {
    void* vtable;
    char padding0[16];
    void* handle;
    char padding1[20];
    char criticalSection[24];

    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    vtable = vtableData;
    DeleteCriticalSection(criticalSection);
    if (handle)
        releaseHandle(handle);
    if (flags & 1)
        freeObject(this);
    return this;
}
