// roc 2008-06 007079a0  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007079a0
//
// 007079a0  56                   push esi
// 007079a1  57                   push edi
// 007079a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007079a6  8bf1                 mov esi, ecx
// 007079a8  8b06                 mov eax, dword ptr [esi]
// 007079aa  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007079ad  57                   push edi
// 007079ae  ffd2                 call edx
// 007079b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 007079b4  85c0                 test eax, eax
// 007079b6  7409                 je 0x7079c1
// 007079b8  833800               cmp dword ptr [eax], 0
// 007079bb  0f8486000000         je 0x707a47
// 007079c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007079c5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007079c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007079cd  89461c               mov dword ptr [esi + 0x1c], eax
// 007079d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007079d4  894e20               mov dword ptr [esi + 0x20], ecx
// 007079d7  895624               mov dword ptr [esi + 0x24], edx
// 007079da  894628               mov dword ptr [esi + 0x28], eax
// 007079dd  85ff                 test edi, edi
// 007079df  7466                 je 0x707a47
// 007079e1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007079e4  85c9                 test ecx, ecx
// 007079e6  745f                 je 0x707a47
// 007079e8  8b01                 mov eax, dword ptr [ecx]
// 007079ea  8b7f20               mov edi, dword ptr [edi + 0x20]
// 007079ed  6a02                 push 2
// 007079ef  8d542414             lea edx, [esp + 0x14]
// 007079f3  52                   push edx
// 007079f4  8b5020               mov edx, dword ptr [eax + 0x20]
// 007079f7  ffd2                 call edx
// 007079f9  50                   push eax
// 007079fa  57                   push edi
// 007079fb  ff15642c8000         call dword ptr [0x802c64]
// 00707a01  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00707a07  85c0                 test eax, eax
// 00707a09  7421                 je 0x707a2c
// 00707a0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707a0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707a13  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00707a17  6a01                 push 1
// 00707a19  2bd1                 sub edx, ecx
// 00707a1b  52                   push edx
// 00707a1c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707a20  2bfa                 sub edi, edx
// 00707a22  57                   push edi
// 00707a23  51                   push ecx
// 00707a24  52                   push edx
// 00707a25  50                   push eax
// 00707a26  ff15f02c8000         call dword ptr [0x802cf0]
// 00707a2c  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00707a32  85c0                 test eax, eax
// 00707a34  7411                 je 0x707a47
// 00707a36  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00707a3c  83e101               and ecx, 1
// 00707a3f  51                   push ecx
// 00707a40  50                   push eax
// 00707a41  ff15302e8000         call dword ptr [0x802e30]
// 00707a47  5f                   pop edi
// 00707a48  5e                   pop esi
// 00707a49  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
