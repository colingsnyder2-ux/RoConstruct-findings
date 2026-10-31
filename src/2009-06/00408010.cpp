// roc 2009-06 00408010  unit: VCApp::?$CComObject  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00408010
//
// 00408010  6aff                 push -1
// 00408012  688bcd8400           push 0x84cd8b
// 00408017  64a100000000         mov eax, dword ptr fs:[0]
// 0040801d  50                   push eax
// 0040801e  64892500000000       mov dword ptr fs:[0], esp
// 00408025  51                   push ecx
// 00408026  33c0                 xor eax, eax
// 00408028  56                   push esi
// 00408029  8bf1                 mov esi, ecx
// 0040802b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040802f  894604               mov dword ptr [esi + 4], eax
// 00408032  c70638d18a00         mov dword ptr [esi], 0x8ad138
// 00408038  c7460c88cd8a00       mov dword ptr [esi + 0xc], 0x8acd88
// 0040803f  894610               mov dword ptr [esi + 0x10], eax
// 00408042  894618               mov dword ptr [esi + 0x18], eax
// 00408045  89742404             mov dword ptr [esp + 4], esi
// 00408049  c74608e8d08a00       mov dword ptr [esi + 8], 0x8ad0e8
// 00408050  c7460cd0d08a00       mov dword ptr [esi + 0xc], 0x8ad0d0
// 00408057  c74614b4d08a00       mov dword ptr [esi + 0x14], 0x8ad0b4
// 0040805e  c7461c80d08a00       mov dword ptr [esi + 0x1c], 0x8ad080
// 00408065  894e20               mov dword ptr [esi + 0x20], ecx
// 00408068  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 0040806e  8b11                 mov edx, dword ptr [ecx]
// 00408070  89442410             mov dword ptr [esp + 0x10], eax
// 00408074  8b4204               mov eax, dword ptr [edx + 4]
// 00408077  ffd0                 call eax
// 00408079  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040807d  8bc6                 mov eax, esi
// 0040807f  5e                   pop esi
// 00408080  64890d00000000       mov dword ptr fs:[0], ecx
// 00408087  83c410               add esp, 0x10
// 0040808a  c20400               ret 4
// copied from an identical function in another client (function ??0?$CComAggObject@VCApp@@@ATL@@QAE@PAX@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp