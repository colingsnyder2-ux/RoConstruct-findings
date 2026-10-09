// roc 2010-06 0057e5d0  unit: seg_00570000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057e5d0
//
// 0057e5d0  8b442408             mov eax, dword ptr [esp + 8]
// 0057e5d4  50                   push eax
// 0057e5d5  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 0057e5db  83c404               add esp, 4
// 0057e5de  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000003@@YAPAXHI@Z)

namespace ns_ROCX000003 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
