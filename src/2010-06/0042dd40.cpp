// roc 2010-06 0042dd40  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042dd40
//
// 0042dd40  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042dd44  8b542408             mov edx, dword ptr [esp + 8]
// 0042dd48  56                   push esi
// 0042dd49  50                   push eax
// 0042dd4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042dd4e  8bf1                 mov esi, ecx
// 0042dd50  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042dd54  51                   push ecx
// 0042dd55  52                   push edx
// 0042dd56  50                   push eax
// 0042dd57  8bce                 mov ecx, esi
// 0042dd59  e81ca73700           call 0x7a847a
// 0042dd5e  85c0                 test eax, eax
// 0042dd60  7504                 jne 0x42dd66
// 0042dd62  5e                   pop esi
// 0042dd63  c21000               ret 0x10
// 0042dd66  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0042dd6c  85c9                 test ecx, ecx
// 0042dd6e  7412                 je 0x42dd82
// 0042dd70  e83ba43900           call 0x7c81b0
// 0042dd75  83783400             cmp dword ptr [eax + 0x34], 0
// 0042dd79  7407                 je 0x42dd82
// 0042dd7b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0042dd82  b801000000           mov eax, 1
// 0042dd87  5e                   pop esi
// 0042dd88  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?LoadFrame@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
