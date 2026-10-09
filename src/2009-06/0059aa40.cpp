// roc 2009-06 0059aa40  unit: seg_00590000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059aa40
//
// 0059aa40  8b442408             mov eax, dword ptr [esp + 8]
// 0059aa44  50                   push eax
// 0059aa45  ff1594e98900         call dword ptr [0x89e994]
// 0059aa4b  83c404               add esp, 4
// 0059aa4e  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000010@@YAPAXHI@Z)

namespace ns_ROCX000010 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
