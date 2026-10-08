// from server: 100% by auto
// roc 2012-06 00456570  unit: CPropGrid::UpdateItemsJob  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00456570
//
// 00456570  51                   push ecx
// 00456571  56                   push esi
// 00456572  57                   push edi
// 00456573  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00456577  8bf1                 mov esi, ecx
// 00456579  8d442410             lea eax, [esp + 0x10]
// 0045657d  50                   push eax
// 0045657e  8d4c240c             lea ecx, [esp + 0xc]
// 00456582  51                   push ecx
// 00456583  57                   push edi
// 00456584  8bce                 mov ecx, esi
// 00456586  e875f6ffff           call 0x455c00
// 0045658b  85c0                 test eax, eax
// 0045658d  753f                 jne 0x4565ce
// 0045658f  394604               cmp dword ptr [esi + 4], eax
// 00456592  7518                 jne 0x4565ac
// 00456594  8b5608               mov edx, dword ptr [esi + 8]
// 00456597  6a01                 push 1
// 00456599  52                   push edx
// 0045659a  8bce                 mov ecx, esi
// 0045659c  e80f1e5400           call 0x9983b0
// 004565a1  837e0400             cmp dword ptr [esi + 4], 0
// 004565a5  7505                 jne 0x4565ac
// 004565a7  e814be5200           call 0x9823c0
// 004565ac  57                   push edi
// 004565ad  8bce                 mov ecx, esi
// 004565af  e8ace65800           call 0x9e4c60
// 004565b4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004565b8  89480c               mov dword ptr [eax + 0xc], ecx
// 004565bb  8b5604               mov edx, dword ptr [esi + 4]
// 004565be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004565c2  8b148a               mov edx, dword ptr [edx + ecx*4]
// 004565c5  895008               mov dword ptr [eax + 8], edx
// 004565c8  8b5604               mov edx, dword ptr [esi + 4]
// 004565cb  89048a               mov dword ptr [edx + ecx*4], eax
// 004565ce  5f                   pop edi
// 004565cf  83c004               add eax, 4
// 004565d2  5e                   pop esi
// 004565d3  59                   pop ecx
// 004565d4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??A?$CMap@JJII@@QAEAAIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
