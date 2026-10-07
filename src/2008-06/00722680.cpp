// roc 2008-06 00722680  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722680
//
// 00722680  56                   push esi
// 00722681  8bf1                 mov esi, ecx
// 00722683  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00722689  57                   push edi
// 0072268a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072268e  85c0                 test eax, eax
// 00722690  7421                 je 0x7226b3
// 00722692  8b542410             mov edx, dword ptr [esp + 0x10]
// 00722696  57                   push edi
// 00722697  52                   push edx
// 00722698  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072269c  8d8884010000         lea ecx, [eax + 0x184]
// 007226a2  8b01                 mov eax, dword ptr [ecx]
// 007226a4  8b4050               mov eax, dword ptr [eax + 0x50]
// 007226a7  52                   push edx
// 007226a8  8b5620               mov edx, dword ptr [esi + 0x20]
// 007226ab  52                   push edx
// 007226ac  ffd0                 call eax
// 007226ae  83f8ff               cmp eax, -1
// 007226b1  756d                 jne 0x722720
// 007226b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007226b7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007226bb  57                   push edi
// 007226bc  51                   push ecx
// 007226bd  52                   push edx
// 007226be  8bce                 mov ecx, esi
// 007226c0  e8bb02faff           call 0x6c2980
// 007226c5  83f8ff               cmp eax, -1
// 007226c8  7507                 jne 0x7226d1
// 007226ca  5f                   pop edi
// 007226cb  0bc0                 or eax, eax
// 007226cd  5e                   pop esi
// 007226ce  c20c00               ret 0xc
// 007226d1  85ff                 test edi, edi
// 007226d3  744b                 je 0x722720
// 007226d5  833f2c               cmp dword ptr [edi], 0x2c
// 007226d8  7546                 jne 0x722720
// 007226da  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007226e0  85c9                 test ecx, ecx
// 007226e2  743c                 je 0x722720
// 007226e4  83792000             cmp dword ptr [ecx + 0x20], 0
// 007226e8  7436                 je 0x722720
// 007226ea  8b7f28               mov edi, dword ptr [edi + 0x28]
// 007226ed  85ff                 test edi, edi
// 007226ef  742f                 je 0x722720
// 007226f1  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007226f4  85c9                 test ecx, ecx
// 007226f6  7428                 je 0x722720
// 007226f8  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 007226ff  741f                 je 0x722720
// 00722701  8d8eec010000         lea ecx, [esi + 0x1ec]
// 00722707  8b31                 mov esi, dword ptr [ecx]
// 00722709  8d570c               lea edx, [edi + 0xc]
// 0072270c  8932                 mov dword ptr [edx], esi
// 0072270e  8b7104               mov esi, dword ptr [ecx + 4]
// 00722711  897204               mov dword ptr [edx + 4], esi
// 00722714  8b7108               mov esi, dword ptr [ecx + 8]
// 00722717  897208               mov dword ptr [edx + 8], esi
// 0072271a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0072271d  894a0c               mov dword ptr [edx + 0xc], ecx
// 00722720  5f                   pop edi
// 00722721  5e                   pop esi
// 00722722  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
