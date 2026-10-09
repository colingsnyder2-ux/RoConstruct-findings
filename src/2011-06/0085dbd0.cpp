// roc 2011-06 0085dbd0  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085dbd0
//
// 0085dbd0  8b442404             mov eax, dword ptr [esp + 4]
// 0085dbd4  85c0                 test eax, eax
// 0085dbd6  7416                 je 0x85dbee
// 0085dbd8  8b4004               mov eax, dword ptr [eax + 4]
// 0085dbdb  50                   push eax
// 0085dbdc  e8bfe8ffff           call 0x85c4a0
// 0085dbe1  83c404               add esp, 4
// 0085dbe4  85c0                 test eax, eax
// 0085dbe6  7406                 je 0x85dbee
// 0085dbe8  b801000000           mov eax, 1
// 0085dbed  c3                   ret 
// 0085dbee  33c0                 xor eax, eax
// 0085dbf0  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001d@ns_ROCX00001d@@YAHPAH@Z)

namespace ns_ROCX00001d {
extern int __cdecl fn_ROCX00001d(int);

int fn_ROCX00001d(int* p)
{
    if (p)
    {
        if (fn_ROCX00001d(p[1]))
            return 1;
    }
    return 0;
}
}
