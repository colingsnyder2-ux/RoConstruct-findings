// roc 2007-08 006650f0  unit: CXTTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006650f0
//
// 006650f0  8a442404             mov al, byte ptr [esp + 4]
// 006650f4  a80a                 test al, 0xa
// 006650f6  742f                 je 0x665127
// 006650f8  807c240800           cmp byte ptr [esp + 8], 0
// 006650fd  752f                 jne 0x66512e
// 006650ff  a808                 test al, 8
// 00665101  752b                 jne 0x66512e
// 00665103  f644240c20           test byte ptr [esp + 0xc], 0x20
// 00665108  741d                 je 0x665127
// 0066510a  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0066510d  e85c340d00           call 0x73856e
// 00665112  85c0                 test eax, eax
// 00665114  7435                 je 0x66514b
// 00665116  e8553e0000           call 0x668f70
// 0066511b  6a0f                 push 0xf
// 0066511d  8bc8                 mov ecx, eax
// 0066511f  e84c360000           call 0x668770
// 00665124  c21000               ret 0x10
// 00665127  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066512b  c21000               ret 0x10
// 0066512e  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00665131  e838340d00           call 0x73856e
// 00665136  85c0                 test eax, eax
// 00665138  7411                 je 0x66514b
// 0066513a  e8313e0000           call 0x668f70
// 0066513f  6a0d                 push 0xd
// 00665141  8bc8                 mov ecx, eax
// 00665143  e828360000           call 0x668770
// 00665148  c21000               ret 0x10
// 0066514b  e8203e0000           call 0x668f70
// 00665150  6a11                 push 0x11
// 00665152  8bc8                 mov ecx, eax
// 00665154  e817360000           call 0x668770
// 00665159  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetItemBackColor@CXTTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
