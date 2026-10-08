// from server: 100% by colin
// roc 2007-08 00726890  unit: boost::thread_resource_error  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726890
//
// 00726890  56                   push esi
// 00726891  8bf1                 mov esi, ecx
// 00726893  8b06                 mov eax, dword ptr [esi]
// 00726895  57                   push edi
// 00726896  8b3d3cd27700         mov edi, dword ptr [0x77d23c]
// 0072689c  50                   push eax
// 0072689d  ffd7                 call edi
// 0072689f  8b4e04               mov ecx, dword ptr [esi + 4]
// 007268a2  51                   push ecx
// 007268a3  ffd7                 call edi
// 007268a5  8b5608               mov edx, dword ptr [esi + 8]
// 007268a8  52                   push edx
// 007268a9  ffd7                 call edi
// 007268ab  5f                   pop edi
// 007268ac  5e                   pop esi
// 007268ad  c3                   ret 

extern "C" int (__stdcall *CloseHandle)(void*);

struct S_func_00726890 {
    void* field0;
    void* field4;
    void* field8;
    void f();
};

void S_func_00726890::f()
{
    int (__stdcall *p)(void*) = CloseHandle;
    p(field0);
    p(field4);
    p(field8);
}
