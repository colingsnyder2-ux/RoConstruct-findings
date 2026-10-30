// roc 2007-08 0054c3e0  unit: UString_sink::?$stream_buffer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c3e0
//
// 0054c3e0  6aff                 push -1
// 0054c3e2  68b4247500           push 0x7524b4
// 0054c3e7  64a100000000         mov eax, dword ptr fs:[0]
// 0054c3ed  50                   push eax
// 0054c3ee  64892500000000       mov dword ptr fs:[0], esp
// 0054c3f5  51                   push ecx
// 0054c3f6  56                   push esi
// 0054c3f7  57                   push edi
// 0054c3f8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054c3fc  8b07                 mov eax, dword ptr [edi]
// 0054c3fe  8bf1                 mov esi, ecx
// 0054c400  8906                 mov dword ptr [esi], eax
// 0054c402  8b4704               mov eax, dword ptr [edi + 4]
// 0054c405  85c0                 test eax, eax
// 0054c407  89742408             mov dword ptr [esp + 8], esi
// 0054c40b  894604               mov dword ptr [esi + 4], eax
// 0054c40e  740c                 je 0x54c41c
// 0054c410  83c004               add eax, 4
// 0054c413  b901000000           mov ecx, 1
// 0054c418  f00fc108             lock xadd dword ptr [eax], ecx
// 0054c41c  8d5708               lea edx, [edi + 8]
// 0054c41f  52                   push edx
// 0054c420  8d4e08               lea ecx, [esi + 8]
// 0054c423  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054c42b  ff159ce67700         call dword ptr [0x77e69c]
// 0054c431  8d4724               lea eax, [edi + 0x24]
// 0054c434  50                   push eax
// 0054c435  8d4e24               lea ecx, [esi + 0x24]
// 0054c438  c644241801           mov byte ptr [esp + 0x18], 1
// 0054c43d  ff159ce67700         call dword ptr [0x77e69c]
// 0054c443  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0054c446  894e40               mov dword ptr [esi + 0x40], ecx
// 0054c449  8b5748               mov edx, dword ptr [edi + 0x48]
// 0054c44c  895648               mov dword ptr [esi + 0x48], edx
// 0054c44f  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0054c452  89464c               mov dword ptr [esi + 0x4c], eax
// 0054c455  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 0054c458  894e50               mov dword ptr [esi + 0x50], ecx
// 0054c45b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054c45f  5f                   pop edi
// 0054c460  8bc6                 mov eax, esi
// 0054c462  5e                   pop esi
// 0054c463  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c46a  83c410               add esp, 0x10
// 0054c46d  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp