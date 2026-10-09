// roc 2009-12 0061ca70  unit: seg_00610000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ca70
//
// 0061ca70  8b442408             mov eax, dword ptr [esp + 8]
// 0061ca74  50                   push eax
// 0061ca75  ff1578b79800         call dword ptr [0x98b778]
// 0061ca7b  83c404               add esp, 4
// 0061ca7e  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX00001e@@YAPAXHI@Z)

namespace ns_ROCX00001e {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
