// roc 2012-06 00a1e9b0  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e9b0
//
// 00a1e9b0  56                   push esi
// 00a1e9b1  8bf1                 mov esi, ecx
// 00a1e9b3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00a1e9b9  57                   push edi
// 00a1e9ba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a1e9be  85c0                 test eax, eax
// 00a1e9c0  7421                 je 0xa1e9e3
// 00a1e9c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a1e9c6  57                   push edi
// 00a1e9c7  52                   push edx
// 00a1e9c8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a1e9cc  8d8884010000         lea ecx, [eax + 0x184]
// 00a1e9d2  8b01                 mov eax, dword ptr [ecx]
// 00a1e9d4  8b4050               mov eax, dword ptr [eax + 0x50]
// 00a1e9d7  52                   push edx
// 00a1e9d8  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a1e9db  52                   push edx
// 00a1e9dc  ffd0                 call eax
// 00a1e9de  83f8ff               cmp eax, -1
// 00a1e9e1  756d                 jne 0xa1ea50
// 00a1e9e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a1e9e7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a1e9eb  57                   push edi
// 00a1e9ec  51                   push ecx
// 00a1e9ed  52                   push edx
// 00a1e9ee  8bce                 mov ecx, esi
// 00a1e9f0  e89b17f8ff           call 0x9a0190
// 00a1e9f5  83f8ff               cmp eax, -1
// 00a1e9f8  7507                 jne 0xa1ea01
// 00a1e9fa  5f                   pop edi
// 00a1e9fb  0bc0                 or eax, eax
// 00a1e9fd  5e                   pop esi
// 00a1e9fe  c20c00               ret 0xc
// 00a1ea01  85ff                 test edi, edi
// 00a1ea03  744b                 je 0xa1ea50
// 00a1ea05  833f2c               cmp dword ptr [edi], 0x2c
// 00a1ea08  7546                 jne 0xa1ea50
// 00a1ea0a  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00a1ea10  85c9                 test ecx, ecx
// 00a1ea12  743c                 je 0xa1ea50
// 00a1ea14  83792000             cmp dword ptr [ecx + 0x20], 0
// 00a1ea18  7436                 je 0xa1ea50
// 00a1ea1a  8b7f28               mov edi, dword ptr [edi + 0x28]
// 00a1ea1d  85ff                 test edi, edi
// 00a1ea1f  742f                 je 0xa1ea50
// 00a1ea21  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00a1ea24  85c9                 test ecx, ecx
// 00a1ea26  7428                 je 0xa1ea50
// 00a1ea28  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 00a1ea2f  741f                 je 0xa1ea50
// 00a1ea31  8d8eec010000         lea ecx, [esi + 0x1ec]
// 00a1ea37  8b31                 mov esi, dword ptr [ecx]
// 00a1ea39  8d570c               lea edx, [edi + 0xc]
// 00a1ea3c  8932                 mov dword ptr [edx], esi
// 00a1ea3e  8b7104               mov esi, dword ptr [ecx + 4]
// 00a1ea41  897204               mov dword ptr [edx + 4], esi
// 00a1ea44  8b7108               mov esi, dword ptr [ecx + 8]
// 00a1ea47  897208               mov dword ptr [edx + 8], esi
// 00a1ea4a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a1ea4d  894a0c               mov dword ptr [edx + 0xc], ecx
// 00a1ea50  5f                   pop edi
// 00a1ea51  5e                   pop esi
// 00a1ea52  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
