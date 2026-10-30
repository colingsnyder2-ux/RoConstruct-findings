// roc 2011-06 006e3630  unit: UString_sink::?$stream_buffer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e3630
//
// 006e3630  6aff                 push -1
// 006e3632  68543f9f00           push 0x9f3f54
// 006e3637  64a100000000         mov eax, dword ptr fs:[0]
// 006e363d  50                   push eax
// 006e363e  64892500000000       mov dword ptr fs:[0], esp
// 006e3645  51                   push ecx
// 006e3646  56                   push esi
// 006e3647  57                   push edi
// 006e3648  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e364c  8b07                 mov eax, dword ptr [edi]
// 006e364e  8bf1                 mov esi, ecx
// 006e3650  8906                 mov dword ptr [esi], eax
// 006e3652  8b4704               mov eax, dword ptr [edi + 4]
// 006e3655  89742408             mov dword ptr [esp + 8], esi
// 006e3659  894604               mov dword ptr [esi + 4], eax
// 006e365c  85c0                 test eax, eax
// 006e365e  740c                 je 0x6e366c
// 006e3660  83c004               add eax, 4
// 006e3663  b901000000           mov ecx, 1
// 006e3668  f00fc108             lock xadd dword ptr [eax], ecx
// 006e366c  8d5708               lea edx, [edi + 8]
// 006e366f  52                   push edx
// 006e3670  8d4e08               lea ecx, [esi + 8]
// 006e3673  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e367b  ff15c804a400         call dword ptr [0xa404c8]
// 006e3681  8d4724               lea eax, [edi + 0x24]
// 006e3684  50                   push eax
// 006e3685  8d4e24               lea ecx, [esi + 0x24]
// 006e3688  c644241801           mov byte ptr [esp + 0x18], 1
// 006e368d  ff15c804a400         call dword ptr [0xa404c8]
// 006e3693  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006e3696  894e40               mov dword ptr [esi + 0x40], ecx
// 006e3699  8b5748               mov edx, dword ptr [edi + 0x48]
// 006e369c  895648               mov dword ptr [esi + 0x48], edx
// 006e369f  8b474c               mov eax, dword ptr [edi + 0x4c]
// 006e36a2  89464c               mov dword ptr [esi + 0x4c], eax
// 006e36a5  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 006e36a8  894e50               mov dword ptr [esi + 0x50], ecx
// 006e36ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e36af  5f                   pop edi
// 006e36b0  8bc6                 mov eax, esi
// 006e36b2  5e                   pop esi
// 006e36b3  64890d00000000       mov dword ptr fs:[0], ecx
// 006e36ba  83c410               add esp, 0x10
// 006e36bd  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp