// roc 2009-12 008a6490  unit: CXTPReportTip  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6490
//
// 008a6490  57                   push edi
// 008a6491  8bf9                 mov edi, ecx
// 008a6493  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a6496  85c9                 test ecx, ecx
// 008a6498  7454                 je 0x8a64ee
// 008a649a  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008a64a0  56                   push esi
// 008a64a1  8bf0                 mov esi, eax
// 008a64a3  46                   inc esi
// 008a64a4  f7de                 neg esi
// 008a64a6  1bf6                 sbb esi, esi
// 008a64a8  23f0                 and esi, eax
// 008a64aa  6a00                 push 0
// 008a64ac  56                   push esi
// 008a64ad  e8ce72f7ff           call 0x81d780
// 008a64b2  8bce                 mov ecx, esi
// 008a64b4  2bc8                 sub ecx, eax
// 008a64b6  7904                 jns 0x8a64bc
// 008a64b8  33f6                 xor esi, esi
// 008a64ba  eb0d                 jmp 0x8a64c9
// 008a64bc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a64bf  6a00                 push 0
// 008a64c1  56                   push esi
// 008a64c2  e8b972f7ff           call 0x81d780
// 008a64c7  2bf0                 sub esi, eax
// 008a64c9  8b5720               mov edx, dword ptr [edi + 0x20]
// 008a64cc  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008a64d2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a64d6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a64da  50                   push eax
// 008a64db  8b01                 mov eax, dword ptr [ecx]
// 008a64dd  52                   push edx
// 008a64de  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008a64e1  56                   push esi
// 008a64e2  ffd2                 call edx
// 008a64e4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a64e7  50                   push eax
// 008a64e8  e813f6f7ff           call 0x825b00
// 008a64ed  5e                   pop esi
// 008a64ee  5f                   pop edi
// 008a64ef  c20800               ret 8
// copied from an identical function in another client (function ?MovePageUp@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp