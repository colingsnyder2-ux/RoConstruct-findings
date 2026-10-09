// roc 2011-06 00574890  unit: seg_00570000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574890
//
// 00574890  8b442408             mov eax, dword ptr [esp + 8]
// 00574894  50                   push eax
// 00574895  ff15400aa400         call dword ptr [0xa40a40]
// 0057489b  83c404               add esp, 4
// 0057489e  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000001@@YAPAXHI@Z)

namespace ns_ROCX000001 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* f(int unused, unsigned int size)
{
    return malloc_ptr(size);
}
}
