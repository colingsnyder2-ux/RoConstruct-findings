// roc 2007-08 00668170  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668170
//
// 00668170  51                   push ecx
// 00668171  56                   push esi
// 00668172  57                   push edi
// 00668173  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00668177  8bf1                 mov esi, ecx
// 00668179  8d442410             lea eax, [esp + 0x10]
// 0066817d  50                   push eax
// 0066817e  8d4c240c             lea ecx, [esp + 0xc]
// 00668182  51                   push ecx
// 00668183  57                   push edi
// 00668184  8bce                 mov ecx, esi
// 00668186  e805ebffff           call 0x666c90
// 0066818b  85c0                 test eax, eax
// 0066818d  753f                 jne 0x6681ce
// 0066818f  394604               cmp dword ptr [esi + 4], eax
// 00668192  7518                 jne 0x6681ac
// 00668194  8b5608               mov edx, dword ptr [esi + 8]
// 00668197  6a01                 push 1
// 00668199  52                   push edx
// 0066819a  8bce                 mov ecx, esi
// 0066819c  e8cf0eddff           call 0x439070
// 006681a1  837e0400             cmp dword ptr [esi + 4], 0
// 006681a5  7505                 jne 0x6681ac
// 006681a7  e8747dfcff           call 0x62ff20
// 006681ac  57                   push edi
// 006681ad  8bce                 mov ecx, esi
// 006681af  e8fcf5ffff           call 0x6677b0
// 006681b4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006681b8  89484c               mov dword ptr [eax + 0x4c], ecx
// 006681bb  8b5604               mov edx, dword ptr [esi + 4]
// 006681be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006681c2  8b148a               mov edx, dword ptr [edx + ecx*4]
// 006681c5  895048               mov dword ptr [eax + 0x48], edx
// 006681c8  8b5604               mov edx, dword ptr [esi + 4]
// 006681cb  89048a               mov dword ptr [edx + ecx*4], eax
// 006681ce  5f                   pop edi
// 006681cf  83c004               add eax, 4
// 006681d2  5e                   pop esi
// 006681d3  59                   pop ecx
// 006681d4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ??A?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEAAUCLRFONT@CXTTreeBase@@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
