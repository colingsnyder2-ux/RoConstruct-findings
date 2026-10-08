// from server: 100% by colin
// roc 2007-08 00725770  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725770
//
// 00725770  80790400             cmp byte ptr [ecx + 4], 0
// 00725774  740a                 je 0x725780
// 00725776  8b01                 mov eax, dword ptr [ecx]
// 00725778  50                   push eax
// 00725779  ff15f8d27700         call dword ptr [0x77d2f8]
// 0072577f  c3                   ret 
// 00725780  8b09                 mov ecx, dword ptr [ecx]
// 00725782  51                   push ecx
// 00725783  ff15c8d17700         call dword ptr [0x77d1c8]
// 00725789  c3                   ret 

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
