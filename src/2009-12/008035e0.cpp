// roc 2009-12 008035e0  unit: CXTPPaintManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008035e0
//
// 008035e0  56                   push esi
// 008035e1  8bf1                 mov esi, ecx
// 008035e3  837e6800             cmp dword ptr [esi + 0x68], 0
// 008035e7  57                   push edi
// 008035e8  743d                 je 0x803627
// 008035ea  8dbe2c010000         lea edi, [esi + 0x12c]
// 008035f0  8bcf                 mov ecx, edi
// 008035f2  e8c9850600           call 0x86bbc0
// 008035f7  85c0                 test eax, eax
// 008035f9  742c                 je 0x803627
// 008035fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008035ff  85c0                 test eax, eax
// 00803601  7403                 je 0x803606
// 00803603  8b4004               mov eax, dword ptr [eax + 4]
// 00803606  33d2                 xor edx, edx
// 00803608  39542424             cmp dword ptr [esp + 0x24], edx
// 0080360c  6a00                 push 0
// 0080360e  0f95c2               setne dl
// 00803611  8d4c2414             lea ecx, [esp + 0x14]
// 00803615  51                   push ecx
// 00803616  6a00                 push 0
// 00803618  8bcf                 mov ecx, edi
// 0080361a  42                   inc edx
// 0080361b  52                   push edx
// 0080361c  50                   push eax
// 0080361d  e81e820600           call 0x86b840
// 00803622  5f                   pop edi
// 00803623  5e                   pop esi
// 00803624  c21c00               ret 0x1c
// 00803627  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080362b  83787800             cmp dword ptr [eax + 0x78], 0
// 0080362f  7530                 jne 0x803661
// 00803631  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00803635  8b542414             mov edx, dword ptr [esp + 0x14]
// 00803639  6a14                 push 0x14
// 0080363b  6a10                 push 0x10
// 0080363d  83ec10               sub esp, 0x10
// 00803640  8bc4                 mov eax, esp
// 00803642  8908                 mov dword ptr [eax], ecx
// 00803644  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00803648  895004               mov dword ptr [eax + 4], edx
// 0080364b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080364f  894808               mov dword ptr [eax + 8], ecx
// 00803652  89500c               mov dword ptr [eax + 0xc], edx
// 00803655  8b442424             mov eax, dword ptr [esp + 0x24]
// 00803659  50                   push eax
// 0080365a  8bce                 mov ecx, esi
// 0080365c  e8dfa1ffff           call 0x7fd840
// 00803661  5f                   pop edi
// 00803662  5e                   pop esi
// 00803663  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawStatusBarPaneBorder@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp