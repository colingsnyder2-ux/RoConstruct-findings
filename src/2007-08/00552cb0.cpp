// roc 2007-08 00552cb0  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552cb0
//
// 00552cb0  6aff                 push -1
// 00552cb2  68c12c7500           push 0x752cc1
// 00552cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00552cbd  50                   push eax
// 00552cbe  64892500000000       mov dword ptr fs:[0], esp
// 00552cc5  83ec08               sub esp, 8
// 00552cc8  56                   push esi
// 00552cc9  8bf1                 mov esi, ecx
// 00552ccb  33c9                 xor ecx, ecx
// 00552ccd  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00552cd1  57                   push edi
// 00552cd2  8974240c             mov dword ptr [esp + 0xc], esi
// 00552cd6  894c2408             mov dword ptr [esp + 8], ecx
// 00552cda  b801000000           mov eax, 1
// 00552cdf  741d                 je 0x552cfe
// 00552ce1  c74608fc7c7a00       mov dword ptr [esi + 8], 0x7a7cfc
// 00552ce8  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 00552cee  895618               mov dword ptr [esi + 0x18], edx
// 00552cf1  8b15dce47700         mov edx, dword ptr [0x77e4dc]
// 00552cf7  895618               mov dword ptr [esi + 0x18], edx
// 00552cfa  89442408             mov dword ptr [esp + 8], eax
// 00552cfe  894e04               mov dword ptr [esi + 4], ecx
// 00552d01  c706bc787a00         mov dword ptr [esi], 0x7a78bc
// 00552d07  51                   push ecx
// 00552d08  51                   push ecx
// 00552d09  8d7e08               lea edi, [esi + 8]
// 00552d0c  51                   push ecx
// 00552d0d  8bcf                 mov ecx, edi
// 00552d0f  89442424             mov dword ptr [esp + 0x24], eax
// 00552d13  ff15c8e47700         call dword ptr [0x77e4c8]
// 00552d19  8b07                 mov eax, dword ptr [edi]
// 00552d1b  c706f47c7a00         mov dword ptr [esi], 0x7a7cf4
// 00552d21  8b4804               mov ecx, dword ptr [eax + 4]
// 00552d24  c7443108ec7c7a00     mov dword ptr [ecx + esi + 8], 0x7a7cec
// 00552d2c  8d7e10               lea edi, [esi + 0x10]
// 00552d2f  8bcf                 mov ecx, edi
// 00552d31  c644241802           mov byte ptr [esp + 0x18], 2
// 00552d36  e8d5fdffff           call 0x552b10
// 00552d3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00552d3f  897e04               mov dword ptr [esi + 4], edi
// 00552d42  8b17                 mov edx, dword ptr [edi]
// 00552d44  89720c               mov dword ptr [edx + 0xc], esi
// 00552d47  5f                   pop edi
// 00552d48  8bc6                 mov eax, esi
// 00552d4a  5e                   pop esi
// 00552d4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00552d52  83c414               add esp, 0x14
// 00552d55  c20400               ret 4
// copied from an identical function in another client (function ??0?$filtering_stream_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@IAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp