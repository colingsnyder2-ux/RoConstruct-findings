// from server: 100% by tester
// roc 2011-06 00488030  unit: CRobloxWnd::RenderRequestJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00488030
//
// 00488030  8b81e4010000         mov eax, dword ptr [ecx + 0x1e4]
// 00488036  6a00                 push 0
// 00488038  6a00                 push 0
// 0048803a  6884040000           push 0x484
// 0048803f  50                   push eax
// 00488040  c681e001000000       mov byte ptr [ecx + 0x1e0], 0
// 00488047  ff15b419a400         call dword ptr [0xa419b4]
// 0048804d  b801000000           mov eax, 1
// 00488052  c20400               ret 4

extern "C" int __declspec(dllimport) __stdcall PostMessageA(void *, unsigned int, unsigned int, long);

struct CRobloxWnd
{
    char pad_1d0[0x1e0];
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
