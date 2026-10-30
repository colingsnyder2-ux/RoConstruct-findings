// roc 2011-06 008522c0  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008522c0
//
// 008522c0  8b442408             mov eax, dword ptr [esp + 8]
// 008522c4  56                   push esi
// 008522c5  57                   push edi
// 008522c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008522ca  50                   push eax
// 008522cb  57                   push edi
// 008522cc  8bf1                 mov esi, ecx
// 008522ce  e85dedffff           call 0x851030
// 008522d3  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 008522d9  5f                   pop edi
// 008522da  898e84010000         mov dword ptr [esi + 0x184], ecx
// 008522e0  5e                   pop esi
// 008522e1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
