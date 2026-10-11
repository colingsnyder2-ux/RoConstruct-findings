// from server: 70% by colin
// roc 2008-06 0041dcb0  unit: VDHTMLWindow::?$SignalDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041dcb0
//
// 0041dcb0  8b442404             mov eax, dword ptr [esp + 4]
// 0041dcb4  50                   push eax
// 0041dcb5  e826c61400           call 0x56a2e0
// 0041dcba  0fb6c0               movzx eax, al
// 0041dcbd  83c404               add esp, 4
// 0041dcc0  f7d8                 neg eax
// 0041dcc2  1bc0                 sbb eax, eax
// 0041dcc4  25fbbfff7f           and eax, 0x7fffbffb
// 0041dcc9  0505400080           add eax, 0x80004005
// 0041dcce  c3                   ret 

extern "C" int __stdcall sub_56A2E0(int);

int sub_41DCB0(int a)
{
    int r = sub_56A2E0(a);
    unsigned char b = (unsigned char)r;
    int v = -(int)b;
    v = (v >> 31) & 0x7fffbffb;
    return v + 0x80004005;
}
