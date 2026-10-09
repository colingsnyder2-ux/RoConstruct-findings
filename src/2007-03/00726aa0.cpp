// roc 2007-03 00726aa0  unit: seg_00720000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726aa0
//
// 00726aa0  80790400             cmp byte ptr [ecx + 4], 0
// 00726aa4  740a                 je 0x726ab0
// 00726aa6  8b01                 mov eax, dword ptr [ecx]
// 00726aa8  50                   push eax
// 00726aa9  ff15b8d27700         call dword ptr [0x77d2b8]
// 00726aaf  c3                   ret 
// 00726ab0  8b09                 mov ecx, dword ptr [ecx]
// 00726ab2  51                   push ecx
// 00726ab3  ff1548d37700         call dword ptr [0x77d348]
// 00726ab9  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
}
