// from server: 90% by colin
// roc 2007-08 004c18e0  unit: RakPeer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c18e0
//
// 004c18e0  8b442408             mov eax, dword ptr [esp + 8]
// 004c18e4  8b542404             mov edx, dword ptr [esp + 4]
// 004c18e8  6a00                 push 0
// 004c18ea  6a00                 push 0
// 004c18ec  50                   push eax
// 004c18ed  52                   push edx
// 004c18ee  e8bde2ffff           call 0x4bfbb0
// 004c18f3  c20800               ret 8

extern "C" int __stdcall sub_004bfbb0(int, int, int, int);

struct S_func_004c18e0 {
    int f(int a, int b);
};

int S_func_004c18e0::f(int a, int b)
{
    return sub_004bfbb0(a, b, 0, 0);
}
