// roc 2012-06 008591a0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008591a0
//
// 008591a0  6aff                 push -1
// 008591a2  687ce0ac00           push 0xace07c
// 008591a7  64a100000000         mov eax, dword ptr fs:[0]
// 008591ad  50                   push eax
// 008591ae  64892500000000       mov dword ptr fs:[0], esp
// 008591b5  51                   push ecx
// 008591b6  56                   push esi
// 008591b7  8bf1                 mov esi, ecx
// 008591b9  57                   push edi
// 008591ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008591be  8b07                 mov eax, dword ptr [edi]
// 008591c0  8906                 mov dword ptr [esi], eax
// 008591c2  8b4f04               mov ecx, dword ptr [edi + 4]
// 008591c5  894e04               mov dword ptr [esi + 4], ecx
// 008591c8  8b5708               mov edx, dword ptr [edi + 8]
// 008591cb  895608               mov dword ptr [esi + 8], edx
// 008591ce  8b470c               mov eax, dword ptr [edi + 0xc]
// 008591d1  89460c               mov dword ptr [esi + 0xc], eax
// 008591d4  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 008591d7  894e10               mov dword ptr [esi + 0x10], ecx
// 008591da  8b5714               mov edx, dword ptr [edi + 0x14]
// 008591dd  8d4718               lea eax, [edi + 0x18]
// 008591e0  50                   push eax
// 008591e1  8d4e18               lea ecx, [esi + 0x18]
// 008591e4  8974240c             mov dword ptr [esp + 0xc], esi
// 008591e8  895614               mov dword ptr [esi + 0x14], edx
// 008591eb  ff154426b200         call dword ptr [0xb22644]
// 008591f1  8d4f34               lea ecx, [edi + 0x34]
// 008591f4  51                   push ecx
// 008591f5  8d4e34               lea ecx, [esi + 0x34]
// 008591f8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00859200  ff154426b200         call dword ptr [0xb22644]
// 00859206  8b5750               mov edx, dword ptr [edi + 0x50]
// 00859209  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085920d  895650               mov dword ptr [esi + 0x50], edx
// 00859210  8b4754               mov eax, dword ptr [edi + 0x54]
// 00859213  894654               mov dword ptr [esi + 0x54], eax
// 00859216  5f                   pop edi
// 00859217  8bc6                 mov eax, esi
// 00859219  5e                   pop esi
// 0085921a  64890d00000000       mov dword ptr fs:[0], ecx
// 00859221  83c410               add esp, 0x10
// 00859224  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp