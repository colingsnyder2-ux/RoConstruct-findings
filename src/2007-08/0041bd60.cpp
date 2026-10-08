// from server: 82% by colin
// roc 2007-08 0041bd60  unit: VDHTMLWindow::?$SignalDesc  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041bd60
//
// 0041bd60  8b442404             mov eax, dword ptr [esp + 4]
// 0041bd64  50                   push eax
// 0041bd65  e866501300           call 0x550dd0
// 0041bd6a  83c404               add esp, 4
// 0041bd6d  f6d8                 neg al
// 0041bd6f  1bc0                 sbb eax, eax
// 0041bd71  25fbbfff7f           and eax, 0x7fffbffb
// 0041bd76  0505400080           add eax, 0x80004005
// 0041bd7b  c3                   ret 

extern "C" int __cdecl sub_00550dd0(int);

int __cdecl sub_0041bd60(int a)
{
    int r = sub_00550dd0(a);
    unsigned char al = (unsigned char)r;
    int sbb = (al != 0) ? -1 : 0;
    return (sbb & 0x7fffbffb) + 0x80004005;
}
