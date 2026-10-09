// roc 2008-06 006f8970  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f8970
//
// 006f8970  8b442404             mov eax, dword ptr [esp + 4]
// 006f8974  85c0                 test eax, eax
// 006f8976  7416                 je 0x6f898e
// 006f8978  8b4004               mov eax, dword ptr [eax + 4]
// 006f897b  50                   push eax
// 006f897c  e8cfe8ffff           call 0x6f7250
// 006f8981  83c404               add esp, 4
// 006f8984  85c0                 test eax, eax
// 006f8986  7406                 je 0x6f898e
// 006f8988  b801000000           mov eax, 1
// 006f898d  c3                   ret 
// 006f898e  33c0                 xor eax, eax
// 006f8990  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000069@ns_ROCX000069@@YAHPAH@Z)

namespace ns_ROCX000069 {
extern int __cdecl fn_ROCX000069(int);

int fn_ROCX000069(int* p)
{
    if (p)
    {
        if (fn_ROCX000069(p[1]))
            return 1;
    }
    return 0;
}
}
