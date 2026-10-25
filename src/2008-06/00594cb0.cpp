// from server: 100% by king_originala
// roc 2008-06 00594cb0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594cb0
//
// 00594cb0  80790400             cmp byte ptr [ecx + 4], 0
// 00594cb4  7415                 je 0x594ccb
// 00594cb6  56                   push esi
// 00594cb7  8b31                 mov esi, dword ptr [ecx]
// 00594cb9  56                   push esi
// 00594cba  ff15dc228000         call dword ptr [0x8022dc]
// 00594cc0  56                   push esi
// 00594cc1  e8b4b91000           call 0x6a067a
// 00594cc6  83c404               add esp, 4
// 00594cc9  5e                   pop esi
// 00594cca  c3                   ret 
// 00594ccb  8b01                 mov eax, dword ptr [ecx]
// 00594ccd  50                   push eax
// 00594cce  ff1534228000         call dword ptr [0x802234]
// 00594cd4  c3                   ret 

extern "C" void (__stdcall *DeleteCriticalSection)(void *);
extern "C" int (__stdcall *CloseHandle)(void *);
extern "C" void __cdecl releaseMemory(void *);

struct S {
    void *object;
    bool criticalSection;
    void f();
};

void S::f()
{
    if (criticalSection) {
        void *p = object;
        DeleteCriticalSection(p);
        releaseMemory(p);
    } else {
        CloseHandle(object);
    }
}
