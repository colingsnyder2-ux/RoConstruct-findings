// roc 2009-06 00771310  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00771310
//
// 00771310  8b442404             mov eax, dword ptr [esp + 4]
// 00771314  85c0                 test eax, eax
// 00771316  7416                 je 0x77132e
// 00771318  8b4004               mov eax, dword ptr [eax + 4]
// 0077131b  50                   push eax
// 0077131c  e8cfe8ffff           call 0x76fbf0
// 00771321  83c404               add esp, 4
// 00771324  85c0                 test eax, eax
// 00771326  7406                 je 0x77132e
// 00771328  b801000000           mov eax, 1
// 0077132d  c3                   ret 
// 0077132e  33c0                 xor eax, eax
// 00771330  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000064@ns_ROCX000064@@YAHPAH@Z)

namespace ns_ROCX000064 {
extern int __cdecl fn_ROCX000064(int);

int fn_ROCX000064(int* p)
{
    if (p)
    {
        if (fn_ROCX000064(p[1]))
            return 1;
    }
    return 0;
}
}
