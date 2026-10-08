// from server: 67% by colin
// roc 2007-08 00650740  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00650740
//
// 00650740  56                   push esi
// 00650741  8bf1                 mov esi, ecx
// 00650743  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0065074a  741f                 je 0x65076b
// 0065074c  e88fffffff           call 0x6506e0
// 00650751  85c0                 test eax, eax
// 00650753  7516                 jne 0x65076b
// 00650755  8bce                 mov ecx, esi
// 00650757  e85432ffff           call 0x6439b0
// 0065075c  85c0                 test eax, eax
// 0065075e  750b                 jne 0x65076b
// 00650760  8bce                 mov ecx, esi
// 00650762  e8d7fafdff           call 0x63023e
// 00650767  5e                   pop esi
// 00650768  c20c00               ret 0xc
// 0065076b  b803000000           mov eax, 3
// 00650770  5e                   pop esi
// 00650771  c20c00               ret 0xc

struct CXTPToolBar {
    char pad[0xfc];
    int m_nState;
    int sub_6506E0();
    int sub_6439B0();
    int sub_63023E();
    int func_650740(int, int, int);
};

int CXTPToolBar::func_650740(int a, int b, int c)
{
    if (m_nState == 4)
        goto fail;
    if (sub_6506E0() != 0)
        goto fail;
    if (sub_6439B0() != 0)
        goto fail;
    return sub_63023E();
fail:
    return 3;
}
