// from server: 100% by colin
// roc 2007-08 00458070  unit: CRobloxWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458070
//
// 00458070  80b99800000000       cmp byte ptr [ecx + 0x98], 0
// 00458077  7408                 je 0x458081
// 00458079  e8c0811d00           call 0x63023e
// 0045807e  c20400               ret 4
// 00458081  b801000000           mov eax, 1
// 00458086  c20400               ret 4

struct CRobloxWnd {
    char pad[0x98];
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
