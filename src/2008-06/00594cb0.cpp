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
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
extern "C" __declspec(dllimport) int __stdcall CloseHandle(void*);
extern "C" __declspec(dllimport) void __stdcall DeleteCriticalSection(void*);
extern "C" void __cdecl free(void*);

struct S {
    void* field0;
    char field4;
    void f();
};

void S::f() {
    if (field4 != 0) {
        void* p = field0;
        CloseHandle(p);
        free(p);
    } else {
        DeleteCriticalSection(field0);
    }
}
}
