// roc 2007-03 0051f1a0  unit: seg_00510000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f1a0
//
// 0051f1a0  8b442408             mov eax, dword ptr [esp + 8]
// 0051f1a4  50                   push eax
// 0051f1a5  ff153ce97700         call dword ptr [0x77e93c]
// 0051f1ab  83c404               add esp, 4
// 0051f1ae  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000001@@YAPAXHI@Z)

namespace ns_ROCX000001 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
