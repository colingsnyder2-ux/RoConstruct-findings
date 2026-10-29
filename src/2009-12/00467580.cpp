// roc 2009-12 00467580  unit: CRobloxWnd::RenderRequestJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00467580
//
// 00467580  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 00467586  6a00                 push 0
// 00467588  6a00                 push 0
// 0046758a  6884040000           push 0x484
// 0046758f  50                   push eax
// 00467590  c681d001000000       mov byte ptr [ecx + 0x1d0], 0
// 00467597  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0046759d  b801000000           mov eax, 1
// 004675a2  c20400               ret 4
// copied from an identical function in another client (function ?RenderRequestJob@CRobloxWnd@ns_ROCX00000b@@QAEHH@Z)

namespace ns_ROCX00000b {
// from server: 100% by tester
extern "C" int __declspec(dllimport) __stdcall PostMessageA(void *, unsigned int, unsigned int, long);

struct CRobloxWnd
{
    char pad_1d0[0x1d0];
    unsigned char field_1d0;
    char pad_1d1[3];
    void *field_1d4;
    int RenderRequestJob(int);
};

int CRobloxWnd::RenderRequestJob(int)
{
    field_1d0 = 0;
    PostMessageA(field_1d4, 0x484, 0, 0);
    return 1;
}
}
