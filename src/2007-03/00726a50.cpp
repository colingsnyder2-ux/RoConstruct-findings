// roc 2007-03 00726a50  unit: seg_00720000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726a50
//
// 00726a50  80790400             cmp byte ptr [ecx + 4], 0
// 00726a54  7415                 je 0x726a6b
// 00726a56  56                   push esi
// 00726a57  8b31                 mov esi, dword ptr [ecx]
// 00726a59  56                   push esi
// 00726a5a  ff15c4d27700         call dword ptr [0x77d2c4]
// 00726a60  56                   push esi
// 00726a61  e88a76efff           call 0x61e0f0
// 00726a66  83c404               add esp, 4
// 00726a69  5e                   pop esi
// 00726a6a  c3                   ret 
// 00726a6b  8b01                 mov eax, dword ptr [ecx]
// 00726a6d  50                   push eax
// 00726a6e  ff15fcd17700         call dword ptr [0x77d1fc]
// 00726a74  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
