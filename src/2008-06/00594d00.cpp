// from server: 100% by tester
// roc 2008-06 00594d00  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594d00
//
// 00594d00  80790400             cmp byte ptr [ecx + 4], 0
// 00594d04  740a                 je 0x594d10
// 00594d06  8b01                 mov eax, dword ptr [ecx]
// 00594d08  50                   push eax
// 00594d09  ff15f4218000         call dword ptr [0x8021f4]
// 00594d0f  c3                   ret 
// 00594d10  8b09                 mov ecx, dword ptr [ecx]
// 00594d12  51                   push ecx
// 00594d13  ff1580228000         call dword ptr [0x802280]
// 00594d19  c3                   ret 

extern "C" void (__stdcall *ReleaseMutex)(void*);
extern "C" void (__stdcall *LeaveCriticalSection)(void*);

struct S {
    void* field0;
    char field4;
    void f();
};

void S::f() {
    if (field4 != 0) {
        ReleaseMutex(field0);
    } else {
        LeaveCriticalSection(field0);
    }
}
