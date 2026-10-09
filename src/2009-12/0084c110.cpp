// roc 2009-12 0084c110  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084c110
//
// 0084c110  8b442404             mov eax, dword ptr [esp + 4]
// 0084c114  85c0                 test eax, eax
// 0084c116  7416                 je 0x84c12e
// 0084c118  8b4004               mov eax, dword ptr [eax + 4]
// 0084c11b  50                   push eax
// 0084c11c  e8cfe8ffff           call 0x84a9f0
// 0084c121  83c404               add esp, 4
// 0084c124  85c0                 test eax, eax
// 0084c126  7406                 je 0x84c12e
// 0084c128  b801000000           mov eax, 1
// 0084c12d  c3                   ret 
// 0084c12e  33c0                 xor eax, eax
// 0084c130  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000034@ns_ROCX000034@@YAHPAH@Z)

namespace ns_ROCX000034 {
extern int __cdecl fn_ROCX000034(int);

int fn_ROCX000034(int* p)
{
    if (p)
    {
        if (fn_ROCX000034(p[1]))
            return 1;
    }
    return 0;
}
}
