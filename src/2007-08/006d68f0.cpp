// from server: 64% by colin
// roc 2007-08 006d68f0  unit: CXTPReportHeaderDropWnd  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d68f0
//
// 006d68f0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 006d68f3  99                   cdq 
// 006d68f4  2bc2                 sub eax, edx
// 006d68f6  8b542408             mov edx, dword ptr [esp + 8]
// 006d68fa  6a51                 push 0x51
// 006d68fc  6a00                 push 0
// 006d68fe  d1f8                 sar eax, 1
// 006d6900  2bd0                 sub edx, eax
// 006d6902  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d6906  6a00                 push 0
// 006d6908  52                   push edx
// 006d6909  8b158ce07700         mov edx, dword ptr [0x77e08c]
// 006d690f  83c0fa               add eax, -6
// 006d6912  50                   push eax
// 006d6913  52                   push edx
// 006d6914  e81597f5ff           call 0x63002e
// 006d6919  c20800               ret 8

struct CXTPReportHeaderDropWnd {
    int sub_6D68F0(int, int);
};

extern "C" int __stdcall sub_63002E(int, int, int, int, int);

int CXTPReportHeaderDropWnd::sub_6D68F0(int a2, int a3) {
    int v = *(int*)((char*)this + 0x60);
    v = v / 2;
    int x = a3 - v;
    int y = a2 - 6;
    return sub_63002E(*(int*)0x77e08c, y, x, 0, 0x51);
}
