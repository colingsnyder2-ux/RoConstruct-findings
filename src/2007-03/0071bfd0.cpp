// roc 2007-03 0071bfd0  unit: seg_00710000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071bfd0
//
// 0071bfd0  8b442408             mov eax, dword ptr [esp + 8]
// 0071bfd4  56                   push esi
// 0071bfd5  8b742408             mov esi, dword ptr [esp + 8]
// 0071bfd9  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0071bfdc  3bc2                 cmp eax, edx
// 0071bfde  7d04                 jge 0x71bfe4
// 0071bfe0  8b06                 mov eax, dword ptr [esi]
// 0071bfe2  5e                   pop esi
// 0071bfe3  c3                   ret 
// 0071bfe4  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0071bfe7  57                   push edi
// 0071bfe8  8d3c11               lea edi, [ecx + edx]
// 0071bfeb  3bc7                 cmp eax, edi
// 0071bfed  7c1c                 jl 0x71c00b
// 0071bfef  8b4608               mov eax, dword ptr [esi + 8]
// 0071bff2  85c0                 test eax, eax
// 0071bff4  740b                 je 0x71c001
// 0071bff6  8d48ff               lea ecx, [eax - 1]
// 0071bff9  8b4604               mov eax, dword ptr [esi + 4]
// 0071bffc  5f                   pop edi
// 0071bffd  2bc1                 sub eax, ecx
// 0071bfff  5e                   pop esi
// 0071c000  c3                   ret 
// 0071c001  8b4604               mov eax, dword ptr [esi + 4]
// 0071c004  33c9                 xor ecx, ecx
// 0071c006  5f                   pop edi
// 0071c007  2bc1                 sub eax, ecx
// 0071c009  5e                   pop esi
// 0071c00a  c3                   ret 
// 0071c00b  85c9                 test ecx, ecx
// 0071c00d  7425                 je 0x71c034
// 0071c00f  8b7e08               mov edi, dword ptr [esi + 8]
// 0071c012  85ff                 test edi, edi
// 0071c014  7405                 je 0x71c01b
// 0071c016  83c7ff               add edi, -1
// 0071c019  eb02                 jmp 0x71c01d
// 0071c01b  33ff                 xor edi, edi
// 0071c01d  2bc2                 sub eax, edx
// 0071c01f  51                   push ecx
// 0071c020  50                   push eax
// 0071c021  8b4604               mov eax, dword ptr [esi + 4]
// 0071c024  2b06                 sub eax, dword ptr [esi]
// 0071c026  2bc7                 sub eax, edi
// 0071c028  50                   push eax
// 0071c029  ff1510d27700         call dword ptr [0x77d210]
// 0071c02f  0306                 add eax, dword ptr [esi]
// 0071c031  5f                   pop edi
// 0071c032  5e                   pop esi
// 0071c033  c3                   ret 
// 0071c034  8b06                 mov eax, dword ptr [esi]
// 0071c036  5f                   pop edi
// 0071c037  83e801               sub eax, 1
// 0071c03a  5e                   pop esi
// 0071c03b  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectScrollBar.cpp (function ?SBPosFromPx@@YAHPAUXTP_SKINSCROLLBARPOSINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectScrollBar.cpp
