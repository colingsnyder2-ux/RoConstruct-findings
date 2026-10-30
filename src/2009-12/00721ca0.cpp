// roc 2009-12 00721ca0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721ca0
//
// 00721ca0  6aff                 push -1
// 00721ca2  681ceb9400           push 0x94eb1c
// 00721ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00721cad  50                   push eax
// 00721cae  64892500000000       mov dword ptr fs:[0], esp
// 00721cb5  51                   push ecx
// 00721cb6  56                   push esi
// 00721cb7  8bf1                 mov esi, ecx
// 00721cb9  57                   push edi
// 00721cba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00721cbe  8b07                 mov eax, dword ptr [edi]
// 00721cc0  8906                 mov dword ptr [esi], eax
// 00721cc2  8b4f04               mov ecx, dword ptr [edi + 4]
// 00721cc5  894e04               mov dword ptr [esi + 4], ecx
// 00721cc8  8b5708               mov edx, dword ptr [edi + 8]
// 00721ccb  895608               mov dword ptr [esi + 8], edx
// 00721cce  8b470c               mov eax, dword ptr [edi + 0xc]
// 00721cd1  89460c               mov dword ptr [esi + 0xc], eax
// 00721cd4  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00721cd7  894e10               mov dword ptr [esi + 0x10], ecx
// 00721cda  8b5714               mov edx, dword ptr [edi + 0x14]
// 00721cdd  8d4718               lea eax, [edi + 0x18]
// 00721ce0  50                   push eax
// 00721ce1  8d4e18               lea ecx, [esi + 0x18]
// 00721ce4  8974240c             mov dword ptr [esp + 0xc], esi
// 00721ce8  895614               mov dword ptr [esi + 0x14], edx
// 00721ceb  ff15f0b69800         call dword ptr [0x98b6f0]
// 00721cf1  8d4f34               lea ecx, [edi + 0x34]
// 00721cf4  51                   push ecx
// 00721cf5  8d4e34               lea ecx, [esi + 0x34]
// 00721cf8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00721d00  ff15f0b69800         call dword ptr [0x98b6f0]
// 00721d06  8b5750               mov edx, dword ptr [edi + 0x50]
// 00721d09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00721d0d  895650               mov dword ptr [esi + 0x50], edx
// 00721d10  8b4754               mov eax, dword ptr [edi + 0x54]
// 00721d13  894654               mov dword ptr [esi + 0x54], eax
// 00721d16  5f                   pop edi
// 00721d17  8bc6                 mov eax, esi
// 00721d19  5e                   pop esi
// 00721d1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00721d21  83c410               add esp, 0x10
// 00721d24  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp