// from server: 100% by colin
// roc 2007-08 00725720  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725720
//
// 00725720  80790400             cmp byte ptr [ecx + 4], 0
// 00725724  7415                 je 0x72573b
// 00725726  56                   push esi
// 00725727  8b31                 mov esi, dword ptr [ecx]
// 00725729  56                   push esi
// 0072572a  ff1504d37700         call dword ptr [0x77d304]
// 00725730  56                   push esi
// 00725731  e82ca5f0ff           call 0x62fc62
// 00725736  83c404               add esp, 4
// 00725739  5e                   pop esi
// 0072573a  c3                   ret 
// 0072573b  8b01                 mov eax, dword ptr [ecx]
// 0072573d  50                   push eax
// 0072573e  ff153cd27700         call dword ptr [0x77d23c]
// 00725744  c3                   ret 

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
