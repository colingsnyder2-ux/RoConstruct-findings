// roc 2009-12 006115a0  unit: seg_00610000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006115a0
//
// 006115a0  56                   push esi
// 006115a1  8b742408             mov esi, dword ptr [esp + 8]
// 006115a5  85f6                 test esi, esi
// 006115a7  0f84bc000000         je 0x611669
// 006115ad  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006115b0  85c0                 test eax, eax
// 006115b2  0f84b1000000         je 0x611669
// 006115b8  57                   push edi
// 006115b9  8b7804               mov edi, dword ptr [eax + 4]
// 006115bc  83ff2a               cmp edi, 0x2a
// 006115bf  7429                 je 0x6115ea
// 006115c1  83ff45               cmp edi, 0x45
// 006115c4  7424                 je 0x6115ea
// 006115c6  83ff49               cmp edi, 0x49
// 006115c9  741f                 je 0x6115ea
// 006115cb  83ff5b               cmp edi, 0x5b
// 006115ce  741a                 je 0x6115ea
// 006115d0  83ff67               cmp edi, 0x67
// 006115d3  7415                 je 0x6115ea
// 006115d5  83ff71               cmp edi, 0x71
// 006115d8  7410                 je 0x6115ea
// 006115da  81ff9a020000         cmp edi, 0x29a
// 006115e0  7408                 je 0x6115ea
// 006115e2  5f                   pop edi
// 006115e3  b8feffffff           mov eax, 0xfffffffe
// 006115e8  5e                   pop esi
// 006115e9  c3                   ret 
// 006115ea  8b4008               mov eax, dword ptr [eax + 8]
// 006115ed  85c0                 test eax, eax
// 006115ef  740d                 je 0x6115fe
// 006115f1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006115f4  50                   push eax
// 006115f5  8b4628               mov eax, dword ptr [esi + 0x28]
// 006115f8  50                   push eax
// 006115f9  ffd1                 call ecx
// 006115fb  83c408               add esp, 8
// 006115fe  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00611601  8b4244               mov eax, dword ptr [edx + 0x44]
// 00611604  85c0                 test eax, eax
// 00611606  740d                 je 0x611615
// 00611608  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0061160b  50                   push eax
// 0061160c  8b4628               mov eax, dword ptr [esi + 0x28]
// 0061160f  50                   push eax
// 00611610  ffd1                 call ecx
// 00611612  83c408               add esp, 8
// 00611615  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00611618  8b4240               mov eax, dword ptr [edx + 0x40]
// 0061161b  85c0                 test eax, eax
// 0061161d  740d                 je 0x61162c
// 0061161f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00611622  50                   push eax
// 00611623  8b4628               mov eax, dword ptr [esi + 0x28]
// 00611626  50                   push eax
// 00611627  ffd1                 call ecx
// 00611629  83c408               add esp, 8
// 0061162c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0061162f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00611632  85c0                 test eax, eax
// 00611634  740d                 je 0x611643
// 00611636  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00611639  50                   push eax
// 0061163a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0061163d  50                   push eax
// 0061163e  ffd1                 call ecx
// 00611640  83c408               add esp, 8
// 00611643  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00611646  8b4628               mov eax, dword ptr [esi + 0x28]
// 00611649  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0061164c  52                   push edx
// 0061164d  50                   push eax
// 0061164e  ffd1                 call ecx
// 00611650  83c408               add esp, 8
// 00611653  33c0                 xor eax, eax
// 00611655  83ff71               cmp edi, 0x71
// 00611658  0f95c0               setne al
// 0061165b  5f                   pop edi
// 0061165c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00611663  5e                   pop esi
// 00611664  48                   dec eax
// 00611665  83e0fd               and eax, 0xfffffffd
// 00611668  c3                   ret 
// 00611669  b8feffffff           mov eax, 0xfffffffe
// 0061166e  5e                   pop esi
// 0061166f  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
