// roc 2007-08 00665160  unit: CXTTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665160
//
// 00665160  8a442404             mov al, byte ptr [esp + 4]
// 00665164  a80a                 test al, 0xa
// 00665166  742f                 je 0x665197
// 00665168  807c240800           cmp byte ptr [esp + 8], 0
// 0066516d  752f                 jne 0x66519e
// 0066516f  a808                 test al, 8
// 00665171  752b                 jne 0x66519e
// 00665173  f644240c20           test byte ptr [esp + 0xc], 0x20
// 00665178  741d                 je 0x665197
// 0066517a  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0066517d  e8ec330d00           call 0x73856e
// 00665182  85c0                 test eax, eax
// 00665184  7435                 je 0x6651bb
// 00665186  e8e53d0000           call 0x668f70
// 0066518b  6a08                 push 8
// 0066518d  8bc8                 mov ecx, eax
// 0066518f  e8dc350000           call 0x668770
// 00665194  c21000               ret 0x10
// 00665197  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066519b  c21000               ret 0x10
// 0066519e  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006651a1  e8c8330d00           call 0x73856e
// 006651a6  85c0                 test eax, eax
// 006651a8  7411                 je 0x6651bb
// 006651aa  e8c13d0000           call 0x668f70
// 006651af  6a0e                 push 0xe
// 006651b1  8bc8                 mov ecx, eax
// 006651b3  e8b8350000           call 0x668770
// 006651b8  c21000               ret 0x10
// 006651bb  e8b03d0000           call 0x668f70
// 006651c0  6a0f                 push 0xf
// 006651c2  8bc8                 mov ecx, eax
// 006651c4  e8a7350000           call 0x668770
// 006651c9  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetItemTextColor@CXTTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
