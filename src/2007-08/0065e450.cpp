// from server: 48% by colin
// roc 2007-08 0065e450  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e450
//
// 0065e450  51                   push ecx
// 0065e451  56                   push esi
// 0065e452  c744240400000000     mov dword ptr [esp + 4], 0
// 0065e45a  e89174ffff           call 0x6558f0
// 0065e45f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065e463  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065e467  50                   push eax
// 0065e468  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065e46c  50                   push eax
// 0065e46d  51                   push ecx
// 0065e46e  56                   push esi
// 0065e46f  e88cfeffff           call 0x65e300
// 0065e474  83c410               add esp, 0x10
// 0065e477  8bc6                 mov eax, esi
// 0065e479  5e                   pop esi
// 0065e47a  59                   pop ecx
// 0065e47b  c3                   ret 

struct CXTPReportControl {
    int sub_6558F0();
    int sub_65E300(int, int, int, int);
    int f(int, int, int);
};

int CXTPReportControl::f(int a, int b, int c) {
    int v = 0;
    int r = sub_6558F0();
    return sub_65E300(a, b, c, r);
}
