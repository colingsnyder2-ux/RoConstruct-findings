// roc 2012-06 00a567e0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a567e0
//
// 00a567e0  56                   push esi
// 00a567e1  8bf1                 mov esi, ecx
// 00a567e3  e89c2d0400           call 0xa99584
// 00a567e8  8d4e20               lea ecx, [esi + 0x20]
// 00a567eb  c7068435c200         mov dword ptr [esi], 0xc23584
// 00a567f1  e88affffff           call 0xa56780
// 00a567f6  8b442408             mov eax, dword ptr [esp + 8]
// 00a567fa  894634               mov dword ptr [esi + 0x34], eax
// 00a567fd  8bc6                 mov eax, esi
// 00a567ff  5e                   pop esi
// 00a56800  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
