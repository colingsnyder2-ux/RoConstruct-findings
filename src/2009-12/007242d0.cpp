// roc 2009-12 007242d0  unit: VWinHttpRequest_source::?$stream_buffer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007242d0
//
// 007242d0  6aff                 push -1
// 007242d2  6824ed9400           push 0x94ed24
// 007242d7  64a100000000         mov eax, dword ptr fs:[0]
// 007242dd  50                   push eax
// 007242de  64892500000000       mov dword ptr fs:[0], esp
// 007242e5  51                   push ecx
// 007242e6  56                   push esi
// 007242e7  57                   push edi
// 007242e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007242ec  8b07                 mov eax, dword ptr [edi]
// 007242ee  8bf1                 mov esi, ecx
// 007242f0  8906                 mov dword ptr [esi], eax
// 007242f2  8b4704               mov eax, dword ptr [edi + 4]
// 007242f5  89742408             mov dword ptr [esp + 8], esi
// 007242f9  894604               mov dword ptr [esi + 4], eax
// 007242fc  85c0                 test eax, eax
// 007242fe  740c                 je 0x72430c
// 00724300  83c004               add eax, 4
// 00724303  b901000000           mov ecx, 1
// 00724308  f00fc108             lock xadd dword ptr [eax], ecx
// 0072430c  8d5708               lea edx, [edi + 8]
// 0072430f  52                   push edx
// 00724310  8d4e08               lea ecx, [esi + 8]
// 00724313  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0072431b  ff15f0b69800         call dword ptr [0x98b6f0]
// 00724321  8d4724               lea eax, [edi + 0x24]
// 00724324  50                   push eax
// 00724325  8d4e24               lea ecx, [esi + 0x24]
// 00724328  c644241801           mov byte ptr [esp + 0x18], 1
// 0072432d  ff15f0b69800         call dword ptr [0x98b6f0]
// 00724333  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00724336  894e40               mov dword ptr [esi + 0x40], ecx
// 00724339  8b5744               mov edx, dword ptr [edi + 0x44]
// 0072433c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00724340  895644               mov dword ptr [esi + 0x44], edx
// 00724343  5f                   pop edi
// 00724344  8bc6                 mov eax, esi
// 00724346  5e                   pop esi
// 00724347  64890d00000000       mov dword ptr fs:[0], ecx
// 0072434e  83c410               add esp, 0x10
// 00724351  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp