// from server: 90% by colin
// roc 2007-08 0070f600  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f600
//
// 0070f600  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070f604  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070f608  50                   push eax
// 0070f609  ff156cdd7700         call dword ptr [0x77dd6c]
// 0070f60f  33c0                 xor eax, eax
// 0070f611  c21000               ret 0x10

extern "C" int __stdcall sub_77DD6C(int, int);

struct XTextHost {
    int f(int a, int b, int c, int d);
};

int XTextHost::f(int a, int b, int c, int d)
{
    sub_77DD6C(d, c);
    return 0;
}
