// roc 2010-06 00800150  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00800150
//
// 00800150  8b442404             mov eax, dword ptr [esp + 4]
// 00800154  85c0                 test eax, eax
// 00800156  7416                 je 0x80016e
// 00800158  8b4004               mov eax, dword ptr [eax + 4]
// 0080015b  50                   push eax
// 0080015c  e8bfe8ffff           call 0x7fea20
// 00800161  83c404               add esp, 4
// 00800164  85c0                 test eax, eax
// 00800166  7406                 je 0x80016e
// 00800168  b801000000           mov eax, 1
// 0080016d  c3                   ret 
// 0080016e  33c0                 xor eax, eax
// 00800170  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000030@ns_ROCX000030@@YAHPAH@Z)

namespace ns_ROCX000030 {
extern int __cdecl fn_ROCX000030(int);

int fn_ROCX000030(int* p)
{
    if (p)
    {
        if (fn_ROCX000030(p[1]))
            return 1;
    }
    return 0;
}
}
