// roc 2009-06 006131b0  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006131b0
//
// 006131b0  6aff                 push -1
// 006131b2  685c7c8600           push 0x867c5c
// 006131b7  64a100000000         mov eax, dword ptr fs:[0]
// 006131bd  50                   push eax
// 006131be  64892500000000       mov dword ptr fs:[0], esp
// 006131c5  51                   push ecx
// 006131c6  56                   push esi
// 006131c7  8bf1                 mov esi, ecx
// 006131c9  57                   push edi
// 006131ca  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006131ce  8b07                 mov eax, dword ptr [edi]
// 006131d0  8906                 mov dword ptr [esi], eax
// 006131d2  8b4f04               mov ecx, dword ptr [edi + 4]
// 006131d5  894e04               mov dword ptr [esi + 4], ecx
// 006131d8  8b5708               mov edx, dword ptr [edi + 8]
// 006131db  895608               mov dword ptr [esi + 8], edx
// 006131de  8b470c               mov eax, dword ptr [edi + 0xc]
// 006131e1  89460c               mov dword ptr [esi + 0xc], eax
// 006131e4  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006131e7  894e10               mov dword ptr [esi + 0x10], ecx
// 006131ea  8b5714               mov edx, dword ptr [edi + 0x14]
// 006131ed  8d4718               lea eax, [edi + 0x18]
// 006131f0  50                   push eax
// 006131f1  8d4e18               lea ecx, [esi + 0x18]
// 006131f4  8974240c             mov dword ptr [esp + 0xc], esi
// 006131f8  895614               mov dword ptr [esi + 0x14], edx
// 006131fb  ff15b8e48900         call dword ptr [0x89e4b8]
// 00613201  8d4f34               lea ecx, [edi + 0x34]
// 00613204  51                   push ecx
// 00613205  8d4e34               lea ecx, [esi + 0x34]
// 00613208  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00613210  ff15b8e48900         call dword ptr [0x89e4b8]
// 00613216  8b5750               mov edx, dword ptr [edi + 0x50]
// 00613219  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061321d  895650               mov dword ptr [esi + 0x50], edx
// 00613220  8b4754               mov eax, dword ptr [edi + 0x54]
// 00613223  894654               mov dword ptr [esi + 0x54], eax
// 00613226  5f                   pop edi
// 00613227  8bc6                 mov eax, esi
// 00613229  5e                   pop esi
// 0061322a  64890d00000000       mov dword ptr fs:[0], ecx
// 00613231  83c410               add esp, 0x10
// 00613234  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp