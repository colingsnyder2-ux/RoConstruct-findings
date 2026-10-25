// from server: 100% by tester
// roc 2008-06 0045aff0  unit: CRobloxWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aff0
//
// 0045aff0  80b9a800000000       cmp byte ptr [ecx + 0xa8], 0
// 0045aff7  7408                 je 0x45b001
// 0045aff9  e86a5c2400           call 0x6a0c68
// 0045affe  c20400               ret 4
// 0045b001  b801000000           mov eax, 1
// 0045b006  c20400               ret 4

struct CRobloxWnd {
    char pad[0xa8];
    char flag98;
    int sub_458070(int);
};

extern "C" int __stdcall sub_63023e();

int CRobloxWnd::sub_458070(int arg)
{
    if (flag98 != 0)
    {
        sub_63023e();
    }
    else
    {
        return 1;
    }
}
