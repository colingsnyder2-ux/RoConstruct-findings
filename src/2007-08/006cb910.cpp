// from server: 100% by auto
// roc 2007-08 006cb910  unit: CXTPReportPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb910
//
// 006cb910  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cb914  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb918  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006cb91c  50                   push eax
// 006cb91d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cb921  51                   push ecx
// 006cb922  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cb926  6a01                 push 1
// 006cb928  52                   push edx
// 006cb929  50                   push eax
// 006cb92a  e89bca0600           call 0x7383ca
// 006cb92f  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawVerticalLine@CXTPReportPaintManager@@QAEXPAVCDC@@HHHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
