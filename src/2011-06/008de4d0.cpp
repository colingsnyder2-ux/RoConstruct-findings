// from server: 100% by auto
// roc 2011-06 008de4d0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de4d0
//
// 008de4d0  56                   push esi
// 008de4d1  8bf1                 mov esi, ecx
// 008de4d3  e8f2e00e00           call 0x9cc5ca
// 008de4d8  8d4e20               lea ecx, [esi + 0x20]
// 008de4db  c706ec7ead00         mov dword ptr [esi], 0xad7eec
// 008de4e1  e88affffff           call 0x8de470
// 008de4e6  8b442408             mov eax, dword ptr [esp + 8]
// 008de4ea  894634               mov dword ptr [esi + 0x34], eax
// 008de4ed  8bc6                 mov eax, esi
// 008de4ef  5e                   pop esi
// 008de4f0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
