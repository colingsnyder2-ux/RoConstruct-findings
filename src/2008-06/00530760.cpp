// roc 2008-06 00530760  unit: seg_00530000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530760
//
// 00530760  8b442408             mov eax, dword ptr [esp + 8]
// 00530764  50                   push eax
// 00530765  ff15b0288000         call dword ptr [0x8028b0]
// 0053076b  83c404               add esp, 4
// 0053076e  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000003@@YAPAXHI@Z)

namespace ns_ROCX000003 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
