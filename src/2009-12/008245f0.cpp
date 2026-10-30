// roc 2009-12 008245f0  unit: CXTPReportControl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008245f0
//
// 008245f0  56                   push esi
// 008245f1  8bf1                 mov esi, ecx
// 008245f3  e838f8fcff           call 0x7f3e30
// 008245f8  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 008245fe  85c9                 test ecx, ecx
// 00824600  7411                 je 0x824613
// 00824602  8b542410             mov edx, dword ptr [esp + 0x10]
// 00824606  8b01                 mov eax, dword ptr [ecx]
// 00824608  8b4068               mov eax, dword ptr [eax + 0x68]
// 0082460b  52                   push edx
// 0082460c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00824610  52                   push edx
// 00824611  ffd0                 call eax
// 00824613  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00824617  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0082461b  51                   push ecx
// 0082461c  52                   push edx
// 0082461d  8bce                 mov ecx, esi
// 0082461f  e8bc8fffff           call 0x81d5e0
// 00824624  85c0                 test eax, eax
// 00824626  741a                 je 0x824642
// 00824628  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082462c  8b10                 mov edx, dword ptr [eax]
// 0082462e  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 00824634  51                   push ecx
// 00824635  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00824639  51                   push ecx
// 0082463a  8bc8                 mov ecx, eax
// 0082463c  ffd2                 call edx
// 0082463e  5e                   pop esi
// 0082463f  c20c00               ret 0xc
// 00824642  6aff                 push -1
// 00824644  8d442410             lea eax, [esp + 0x10]
// 00824648  50                   push eax
// 00824649  6afd                 push -3
// 0082464b  6a00                 push 0
// 0082464d  6a00                 push 0
// 0082464f  6a00                 push 0
// 00824651  8bce                 mov ecx, esi
// 00824653  e8a8ecffff           call 0x823300
// 00824658  5e                   pop esi
// 00824659  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp