// roc 2010-06 007dde40  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dde40
//
// 007dde40  8b442404             mov eax, dword ptr [esp + 4]
// 007dde44  56                   push esi
// 007dde45  8bf1                 mov esi, ecx
// 007dde47  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dde4a  89868c000000         mov dword ptr [esi + 0x8c], eax
// 007dde50  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 007dde5a  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 007dde61  7412                 je 0x7dde75
// 007dde63  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dde66  83792000             cmp dword ptr [ecx + 0x20], 0
// 007dde6a  7409                 je 0x7dde75
// 007dde6c  6a00                 push 0
// 007dde6e  6a00                 push 0
// 007dde70  e89df11900           call 0x97d012
// 007dde75  8b4624               mov eax, dword ptr [esi + 0x24]
// 007dde78  8b5078               mov edx, dword ptr [eax + 0x78]
// 007dde7b  2b5070               sub edx, dword ptr [eax + 0x70]
// 007dde7e  83c070               add eax, 0x70
// 007dde81  6a00                 push 0
// 007dde83  52                   push edx
// 007dde84  8bce                 mov ecx, esi
// 007dde86  e815ecffff           call 0x7dcaa0
// 007dde8b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dde8e  e84d56ffff           call 0x7d34e0
// 007dde93  5e                   pop esi
// 007dde94  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
