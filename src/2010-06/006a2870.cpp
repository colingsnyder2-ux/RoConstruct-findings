// roc 2010-06 006a2870  unit: UString_sink::?$stream_buffer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a2870
//
// 006a2870  6aff                 push -1
// 006a2872  68f4279a00           push 0x9a27f4
// 006a2877  64a100000000         mov eax, dword ptr fs:[0]
// 006a287d  50                   push eax
// 006a287e  64892500000000       mov dword ptr fs:[0], esp
// 006a2885  51                   push ecx
// 006a2886  56                   push esi
// 006a2887  57                   push edi
// 006a2888  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a288c  8b07                 mov eax, dword ptr [edi]
// 006a288e  8bf1                 mov esi, ecx
// 006a2890  8906                 mov dword ptr [esi], eax
// 006a2892  8b4704               mov eax, dword ptr [edi + 4]
// 006a2895  89742408             mov dword ptr [esp + 8], esi
// 006a2899  894604               mov dword ptr [esi + 4], eax
// 006a289c  85c0                 test eax, eax
// 006a289e  740c                 je 0x6a28ac
// 006a28a0  83c004               add eax, 4
// 006a28a3  b901000000           mov ecx, 1
// 006a28a8  f00fc108             lock xadd dword ptr [eax], ecx
// 006a28ac  8d5708               lea edx, [edi + 8]
// 006a28af  52                   push edx
// 006a28b0  8d4e08               lea ecx, [esi + 8]
// 006a28b3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a28bb  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a28c1  8d4724               lea eax, [edi + 0x24]
// 006a28c4  50                   push eax
// 006a28c5  8d4e24               lea ecx, [esi + 0x24]
// 006a28c8  c644241801           mov byte ptr [esp + 0x18], 1
// 006a28cd  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a28d3  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006a28d6  894e40               mov dword ptr [esi + 0x40], ecx
// 006a28d9  8b5748               mov edx, dword ptr [edi + 0x48]
// 006a28dc  895648               mov dword ptr [esi + 0x48], edx
// 006a28df  8b474c               mov eax, dword ptr [edi + 0x4c]
// 006a28e2  89464c               mov dword ptr [esi + 0x4c], eax
// 006a28e5  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 006a28e8  894e50               mov dword ptr [esi + 0x50], ecx
// 006a28eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a28ef  5f                   pop edi
// 006a28f0  8bc6                 mov eax, esi
// 006a28f2  5e                   pop esi
// 006a28f3  64890d00000000       mov dword ptr fs:[0], ecx
// 006a28fa  83c410               add esp, 0x10
// 006a28fd  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp