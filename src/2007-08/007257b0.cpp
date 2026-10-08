// from server: 70% by colin
// roc 2007-08 007257b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007257b0
//
// 007257b0  80790400             cmp byte ptr [ecx + 4], 0
// 007257b4  740c                 je 0x7257c2
// 007257b6  8b01                 mov eax, dword ptr [ecx]
// 007257b8  89442404             mov dword ptr [esp + 4], eax
// 007257bc  ff25f8d27700         jmp dword ptr [0x77d2f8]
// 007257c2  8b09                 mov ecx, dword ptr [ecx]
// 007257c4  894c2404             mov dword ptr [esp + 4], ecx
// 007257c8  ff25c8d17700         jmp dword ptr [0x77d1c8]

struct S {
    void* field0;
    char field4;
    void f();
};

extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" void __stdcall ReleaseMutex(void*);

void S::f() {
    if (field4 != 0) {
        void* p = field0;
        LeaveCriticalSection(p);
    } else {
        void* p = field0;
        ReleaseMutex(p);
    }
}
