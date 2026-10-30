// roc 2010-06 006a0030  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0030
//
// 006a0030  6aff                 push -1
// 006a0032  686c269a00           push 0x9a266c
// 006a0037  64a100000000         mov eax, dword ptr fs:[0]
// 006a003d  50                   push eax
// 006a003e  64892500000000       mov dword ptr fs:[0], esp
// 006a0045  51                   push ecx
// 006a0046  56                   push esi
// 006a0047  8bf1                 mov esi, ecx
// 006a0049  57                   push edi
// 006a004a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a004e  8b07                 mov eax, dword ptr [edi]
// 006a0050  8906                 mov dword ptr [esi], eax
// 006a0052  8b4f04               mov ecx, dword ptr [edi + 4]
// 006a0055  894e04               mov dword ptr [esi + 4], ecx
// 006a0058  8b5708               mov edx, dword ptr [edi + 8]
// 006a005b  895608               mov dword ptr [esi + 8], edx
// 006a005e  8b470c               mov eax, dword ptr [edi + 0xc]
// 006a0061  89460c               mov dword ptr [esi + 0xc], eax
// 006a0064  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006a0067  894e10               mov dword ptr [esi + 0x10], ecx
// 006a006a  8b5714               mov edx, dword ptr [edi + 0x14]
// 006a006d  8d4718               lea eax, [edi + 0x18]
// 006a0070  50                   push eax
// 006a0071  8d4e18               lea ecx, [esi + 0x18]
// 006a0074  8974240c             mov dword ptr [esp + 0xc], esi
// 006a0078  895614               mov dword ptr [esi + 0x14], edx
// 006a007b  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a0081  8d4f34               lea ecx, [edi + 0x34]
// 006a0084  51                   push ecx
// 006a0085  8d4e34               lea ecx, [esi + 0x34]
// 006a0088  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a0090  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a0096  8b5750               mov edx, dword ptr [edi + 0x50]
// 006a0099  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a009d  895650               mov dword ptr [esi + 0x50], edx
// 006a00a0  8b4754               mov eax, dword ptr [edi + 0x54]
// 006a00a3  894654               mov dword ptr [esi + 0x54], eax
// 006a00a6  5f                   pop edi
// 006a00a7  8bc6                 mov eax, esi
// 006a00a9  5e                   pop esi
// 006a00aa  64890d00000000       mov dword ptr fs:[0], ecx
// 006a00b1  83c410               add esp, 0x10
// 006a00b4  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp