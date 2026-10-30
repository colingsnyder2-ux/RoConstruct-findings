// roc 2010-06 006a27e0  unit: UString_sink::?$stream_buffer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a27e0
//
// 006a27e0  6aff                 push -1
// 006a27e2  68f4279a00           push 0x9a27f4
// 006a27e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a27ed  50                   push eax
// 006a27ee  64892500000000       mov dword ptr fs:[0], esp
// 006a27f5  51                   push ecx
// 006a27f6  56                   push esi
// 006a27f7  57                   push edi
// 006a27f8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a27fc  8b07                 mov eax, dword ptr [edi]
// 006a27fe  8bf1                 mov esi, ecx
// 006a2800  8906                 mov dword ptr [esi], eax
// 006a2802  8b4704               mov eax, dword ptr [edi + 4]
// 006a2805  89742408             mov dword ptr [esp + 8], esi
// 006a2809  894604               mov dword ptr [esi + 4], eax
// 006a280c  85c0                 test eax, eax
// 006a280e  740c                 je 0x6a281c
// 006a2810  83c004               add eax, 4
// 006a2813  b901000000           mov ecx, 1
// 006a2818  f00fc108             lock xadd dword ptr [eax], ecx
// 006a281c  8d5708               lea edx, [edi + 8]
// 006a281f  52                   push edx
// 006a2820  8d4e08               lea ecx, [esi + 8]
// 006a2823  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a282b  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a2831  8d4724               lea eax, [edi + 0x24]
// 006a2834  50                   push eax
// 006a2835  8d4e24               lea ecx, [esi + 0x24]
// 006a2838  c644241801           mov byte ptr [esp + 0x18], 1
// 006a283d  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a2843  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006a2846  894e40               mov dword ptr [esi + 0x40], ecx
// 006a2849  8b5744               mov edx, dword ptr [edi + 0x44]
// 006a284c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a2850  895644               mov dword ptr [esi + 0x44], edx
// 006a2853  5f                   pop edi
// 006a2854  8bc6                 mov eax, esi
// 006a2856  5e                   pop esi
// 006a2857  64890d00000000       mov dword ptr fs:[0], ecx
// 006a285e  83c410               add esp, 0x10
// 006a2861  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp