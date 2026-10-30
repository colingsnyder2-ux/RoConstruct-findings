// roc 2009-12 00878390  unit: CXTPControlGallery  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878390
//
// 00878390  56                   push esi
// 00878391  8b742408             mov esi, dword ptr [esp + 8]
// 00878395  57                   push edi
// 00878396  8bf9                 mov edi, ecx
// 00878398  c70600000000         mov dword ptr [esi], 0
// 0087839e  c7460400000000       mov dword ptr [esi + 4], 0
// 008783a5  c7460800000000       mov dword ptr [esi + 8], 0
// 008783ac  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008783b3  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 008783ba  740f                 je 0x8783cb
// 008783bc  6a01                 push 1
// 008783be  6a01                 push 1
// 008783c0  6a01                 push 1
// 008783c2  6a01                 push 1
// 008783c4  56                   push esi
// 008783c5  ff1538ca9800         call dword ptr [0x98ca38]
// 008783cb  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 008783d2  744e                 je 0x878422
// 008783d4  83bf2c02000000       cmp dword ptr [edi + 0x22c], 0
// 008783db  742a                 je 0x878407
// 008783dd  8b07                 mov eax, dword ptr [edi]
// 008783df  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008783e5  8bcf                 mov ecx, edi
// 008783e7  ffd2                 call edx
// 008783e9  8d8f84010000         lea ecx, [edi + 0x184]
// 008783ef  85c0                 test eax, eax
// 008783f1  8b01                 mov eax, dword ptr [ecx]
// 008783f3  8b5024               mov edx, dword ptr [eax + 0x24]
// 008783f6  7407                 je 0x8783ff
// 008783f8  ffd2                 call edx
// 008783fa  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008783fd  eb05                 jmp 0x878404
// 008783ff  ffd2                 call edx
// 00878401  8b4010               mov eax, dword ptr [eax + 0x10]
// 00878404  014608               add dword ptr [esi + 8], eax
// 00878407  83bf0001000000       cmp dword ptr [edi + 0x100], 0
// 0087840e  7412                 je 0x878422
// 00878410  8bcf                 mov ecx, edi
// 00878412  e849f0ffff           call 0x877460
// 00878417  85c0                 test eax, eax
// 00878419  7407                 je 0x878422
// 0087841b  c7460c02000000       mov dword ptr [esi + 0xc], 2
// 00878422  8b8740020000         mov eax, dword ptr [edi + 0x240]
// 00878428  8b8f3c020000         mov ecx, dword ptr [edi + 0x23c]
// 0087842e  8b9738020000         mov edx, dword ptr [edi + 0x238]
// 00878434  8bbf34020000         mov edi, dword ptr [edi + 0x234]
// 0087843a  013e                 add dword ptr [esi], edi
// 0087843c  015604               add dword ptr [esi + 4], edx
// 0087843f  f7d8                 neg eax
// 00878441  29460c               sub dword ptr [esi + 0xc], eax
// 00878444  f7d9                 neg ecx
// 00878446  294e08               sub dword ptr [esi + 8], ecx
// 00878449  5f                   pop edi
// 0087844a  8bc6                 mov eax, esi
// 0087844c  5e                   pop esi
// 0087844d  c20400               ret 4
// copied from an identical function in another client (function ?GetBorders@CXTPControlGallery@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp