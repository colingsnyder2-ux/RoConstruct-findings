// roc 2007-08 0054d2b0  unit: UString_sink::?$stream_buffer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d2b0
//
// 0054d2b0  6aff                 push -1
// 0054d2b2  68b4247500           push 0x7524b4
// 0054d2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0054d2bd  50                   push eax
// 0054d2be  64892500000000       mov dword ptr fs:[0], esp
// 0054d2c5  51                   push ecx
// 0054d2c6  56                   push esi
// 0054d2c7  57                   push edi
// 0054d2c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054d2cc  8b07                 mov eax, dword ptr [edi]
// 0054d2ce  8bf1                 mov esi, ecx
// 0054d2d0  8906                 mov dword ptr [esi], eax
// 0054d2d2  8b4704               mov eax, dword ptr [edi + 4]
// 0054d2d5  85c0                 test eax, eax
// 0054d2d7  89742408             mov dword ptr [esp + 8], esi
// 0054d2db  894604               mov dword ptr [esi + 4], eax
// 0054d2de  740c                 je 0x54d2ec
// 0054d2e0  83c004               add eax, 4
// 0054d2e3  b901000000           mov ecx, 1
// 0054d2e8  f00fc108             lock xadd dword ptr [eax], ecx
// 0054d2ec  8d5708               lea edx, [edi + 8]
// 0054d2ef  52                   push edx
// 0054d2f0  8d4e08               lea ecx, [esi + 8]
// 0054d2f3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054d2fb  ff159ce67700         call dword ptr [0x77e69c]
// 0054d301  8d4724               lea eax, [edi + 0x24]
// 0054d304  50                   push eax
// 0054d305  8d4e24               lea ecx, [esi + 0x24]
// 0054d308  c644241801           mov byte ptr [esp + 0x18], 1
// 0054d30d  ff159ce67700         call dword ptr [0x77e69c]
// 0054d313  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0054d316  894e40               mov dword ptr [esi + 0x40], ecx
// 0054d319  8b5744               mov edx, dword ptr [edi + 0x44]
// 0054d31c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054d320  895644               mov dword ptr [esi + 0x44], edx
// 0054d323  5f                   pop edi
// 0054d324  8bc6                 mov eax, esi
// 0054d326  5e                   pop esi
// 0054d327  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d32e  83c410               add esp, 0x10
// 0054d331  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp