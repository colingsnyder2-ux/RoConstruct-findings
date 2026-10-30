// roc 2009-12 00724360  unit: VWinHttpRequest_source::?$stream_buffer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724360
//
// 00724360  6aff                 push -1
// 00724362  6824ed9400           push 0x94ed24
// 00724367  64a100000000         mov eax, dword ptr fs:[0]
// 0072436d  50                   push eax
// 0072436e  64892500000000       mov dword ptr fs:[0], esp
// 00724375  51                   push ecx
// 00724376  56                   push esi
// 00724377  57                   push edi
// 00724378  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0072437c  8b07                 mov eax, dword ptr [edi]
// 0072437e  8bf1                 mov esi, ecx
// 00724380  8906                 mov dword ptr [esi], eax
// 00724382  8b4704               mov eax, dword ptr [edi + 4]
// 00724385  89742408             mov dword ptr [esp + 8], esi
// 00724389  894604               mov dword ptr [esi + 4], eax
// 0072438c  85c0                 test eax, eax
// 0072438e  740c                 je 0x72439c
// 00724390  83c004               add eax, 4
// 00724393  b901000000           mov ecx, 1
// 00724398  f00fc108             lock xadd dword ptr [eax], ecx
// 0072439c  8d5708               lea edx, [edi + 8]
// 0072439f  52                   push edx
// 007243a0  8d4e08               lea ecx, [esi + 8]
// 007243a3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007243ab  ff15f0b69800         call dword ptr [0x98b6f0]
// 007243b1  8d4724               lea eax, [edi + 0x24]
// 007243b4  50                   push eax
// 007243b5  8d4e24               lea ecx, [esi + 0x24]
// 007243b8  c644241801           mov byte ptr [esp + 0x18], 1
// 007243bd  ff15f0b69800         call dword ptr [0x98b6f0]
// 007243c3  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 007243c6  894e40               mov dword ptr [esi + 0x40], ecx
// 007243c9  8b5748               mov edx, dword ptr [edi + 0x48]
// 007243cc  895648               mov dword ptr [esi + 0x48], edx
// 007243cf  8b474c               mov eax, dword ptr [edi + 0x4c]
// 007243d2  89464c               mov dword ptr [esi + 0x4c], eax
// 007243d5  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 007243d8  894e50               mov dword ptr [esi + 0x50], ecx
// 007243db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007243df  5f                   pop edi
// 007243e0  8bc6                 mov eax, esi
// 007243e2  5e                   pop esi
// 007243e3  64890d00000000       mov dword ptr fs:[0], ecx
// 007243ea  83c410               add esp, 0x10
// 007243ed  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp