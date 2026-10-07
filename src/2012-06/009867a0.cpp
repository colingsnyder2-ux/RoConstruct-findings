// roc 2012-06 009867a0  unit: IIHH::?$CMap  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009867a0
//
// 009867a0  56                   push esi
// 009867a1  8bf1                 mov esi, ecx
// 009867a3  e8dc2d1100           call 0xa99584
// 009867a8  8d4e20               lea ecx, [esi + 0x20]
// 009867ab  c706accec000         mov dword ptr [esi], 0xc0ceac
// 009867b1  e87afaffff           call 0x986230
// 009867b6  8b442408             mov eax, dword ptr [esp + 8]
// 009867ba  894634               mov dword ptr [esi + 0x34], eax
// 009867bd  8bc6                 mov eax, esi
// 009867bf  5e                   pop esi
// 009867c0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
