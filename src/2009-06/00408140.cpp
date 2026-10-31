// roc 2009-06 00408140  unit: VCApp::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00408140
//
// 00408140  6aff                 push -1
// 00408142  688bcd8400           push 0x84cd8b
// 00408147  64a100000000         mov eax, dword ptr fs:[0]
// 0040814d  50                   push eax
// 0040814e  64892500000000       mov dword ptr fs:[0], esp
// 00408155  51                   push ecx
// 00408156  56                   push esi
// 00408157  8bf1                 mov esi, ecx
// 00408159  89742404             mov dword ptr [esp + 4], esi
// 0040815d  c70638d18a00         mov dword ptr [esi], 0x8ad138
// 00408163  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 0040816a  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 00408170  8b01                 mov eax, dword ptr [ecx]
// 00408172  8b5008               mov edx, dword ptr [eax + 8]
// 00408175  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040817d  ffd2                 call edx
// 0040817f  8b7618               mov esi, dword ptr [esi + 0x18]
// 00408182  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040818a  85f6                 test esi, esi
// 0040818c  7408                 je 0x408196
// 0040818e  8b06                 mov eax, dword ptr [esi]
// 00408190  8b4808               mov ecx, dword ptr [eax + 8]
// 00408193  56                   push esi
// 00408194  ffd1                 call ecx
// 00408196  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040819a  5e                   pop esi
// 0040819b  64890d00000000       mov dword ptr fs:[0], ecx
// 004081a2  83c410               add esp, 0x10
// 004081a5  c3                   ret 
// copied from an identical function in another client (function ??1?$CComAggObject@VCApp@@@ATL@@UAE@XZ)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp