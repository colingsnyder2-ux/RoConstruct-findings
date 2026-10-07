// roc 2008-06 006def00  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006def00
//
// 006def00  51                   push ecx
// 006def01  56                   push esi
// 006def02  57                   push edi
// 006def03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006def07  8bf1                 mov esi, ecx
// 006def09  8d442410             lea eax, [esp + 0x10]
// 006def0d  50                   push eax
// 006def0e  8d4c240c             lea ecx, [esp + 0xc]
// 006def12  51                   push ecx
// 006def13  57                   push edi
// 006def14  8bce                 mov ecx, esi
// 006def16  e815ebffff           call 0x6dda30
// 006def1b  85c0                 test eax, eax
// 006def1d  753f                 jne 0x6def5e
// 006def1f  394604               cmp dword ptr [esi + 4], eax
// 006def22  7518                 jne 0x6def3c
// 006def24  8b5608               mov edx, dword ptr [esi + 8]
// 006def27  6a01                 push 1
// 006def29  52                   push edx
// 006def2a  8bce                 mov ecx, esi
// 006def2c  e81f99d5ff           call 0x438850
// 006def31  837e0400             cmp dword ptr [esi + 4], 0
// 006def35  7505                 jne 0x6def3c
// 006def37  e8081afcff           call 0x6a0944
// 006def3c  57                   push edi
// 006def3d  8bce                 mov ecx, esi
// 006def3f  e80cf6ffff           call 0x6de550
// 006def44  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006def48  89484c               mov dword ptr [eax + 0x4c], ecx
// 006def4b  8b5604               mov edx, dword ptr [esi + 4]
// 006def4e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006def52  8b148a               mov edx, dword ptr [edx + ecx*4]
// 006def55  895048               mov dword ptr [eax + 0x48], edx
// 006def58  8b5604               mov edx, dword ptr [esi + 4]
// 006def5b  89048a               mov dword ptr [edx + ecx*4], eax
// 006def5e  5f                   pop edi
// 006def5f  83c004               add eax, 4
// 006def62  5e                   pop esi
// 006def63  59                   pop ecx
// 006def64  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ??A?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEAAUCLRFONT@CXTTreeBase@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
