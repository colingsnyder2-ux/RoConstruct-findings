// from server: 100% by auto
// roc 2008-06 007733a0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007733a0
//
// 007733a0  56                   push esi
// 007733a1  8bf1                 mov esi, ecx
// 007733a3  e8028c0400           call 0x7bbfaa
// 007733a8  8d4e20               lea ecx, [esi + 0x20]
// 007733ab  c7068c868600         mov dword ptr [esi], 0x86868c
// 007733b1  e88affffff           call 0x773340
// 007733b6  8b442408             mov eax, dword ptr [esp + 8]
// 007733ba  894634               mov dword ptr [esi + 0x34], eax
// 007733bd  8bc6                 mov eax, esi
// 007733bf  5e                   pop esi
// 007733c0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
