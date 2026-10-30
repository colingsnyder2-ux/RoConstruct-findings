// roc 2011-06 006e35a0  unit: UString_sink::?$stream_buffer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e35a0
//
// 006e35a0  6aff                 push -1
// 006e35a2  68543f9f00           push 0x9f3f54
// 006e35a7  64a100000000         mov eax, dword ptr fs:[0]
// 006e35ad  50                   push eax
// 006e35ae  64892500000000       mov dword ptr fs:[0], esp
// 006e35b5  51                   push ecx
// 006e35b6  56                   push esi
// 006e35b7  57                   push edi
// 006e35b8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e35bc  8b07                 mov eax, dword ptr [edi]
// 006e35be  8bf1                 mov esi, ecx
// 006e35c0  8906                 mov dword ptr [esi], eax
// 006e35c2  8b4704               mov eax, dword ptr [edi + 4]
// 006e35c5  89742408             mov dword ptr [esp + 8], esi
// 006e35c9  894604               mov dword ptr [esi + 4], eax
// 006e35cc  85c0                 test eax, eax
// 006e35ce  740c                 je 0x6e35dc
// 006e35d0  83c004               add eax, 4
// 006e35d3  b901000000           mov ecx, 1
// 006e35d8  f00fc108             lock xadd dword ptr [eax], ecx
// 006e35dc  8d5708               lea edx, [edi + 8]
// 006e35df  52                   push edx
// 006e35e0  8d4e08               lea ecx, [esi + 8]
// 006e35e3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e35eb  ff15c804a400         call dword ptr [0xa404c8]
// 006e35f1  8d4724               lea eax, [edi + 0x24]
// 006e35f4  50                   push eax
// 006e35f5  8d4e24               lea ecx, [esi + 0x24]
// 006e35f8  c644241801           mov byte ptr [esp + 0x18], 1
// 006e35fd  ff15c804a400         call dword ptr [0xa404c8]
// 006e3603  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006e3606  894e40               mov dword ptr [esi + 0x40], ecx
// 006e3609  8b5744               mov edx, dword ptr [edi + 0x44]
// 006e360c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e3610  895644               mov dword ptr [esi + 0x44], edx
// 006e3613  5f                   pop edi
// 006e3614  8bc6                 mov eax, esi
// 006e3616  5e                   pop esi
// 006e3617  64890d00000000       mov dword ptr fs:[0], ecx
// 006e361e  83c410               add esp, 0x10
// 006e3621  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp