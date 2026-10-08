// from server: 100% by colin
// roc 2007-08 00459540  unit: CRobloxWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459540
//
// 00459540  56                   push esi
// 00459541  8bf1                 mov esi, ecx
// 00459543  e8f66c1d00           call 0x63023e
// 00459548  837e5802             cmp dword ptr [esi + 0x58], 2
// 0045954c  7516                 jne 0x459564
// 0045954e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00459552  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00459556  8b542408             mov edx, dword ptr [esp + 8]
// 0045955a  50                   push eax
// 0045955b  51                   push ecx
// 0045955c  52                   push edx
// 0045955d  8bce                 mov ecx, esi
// 0045955f  e84cfeffff           call 0x4593b0
// 00459564  5e                   pop esi
// 00459565  c20c00               ret 0xc

struct CRobloxWnd {
    void sub_459540(int, int, int);
    void sub_4593b0(int, int, int);
    void sub_63023e();
};

void CRobloxWnd::sub_459540(int a, int b, int c)
{
    sub_63023e();
    if (*(int*)((char*)this + 0x58) == 2)
        sub_4593b0(a, b, c);
}
