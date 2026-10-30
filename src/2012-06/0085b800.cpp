// roc 2012-06 0085b800  unit: VWinHttpRequest_source::?$stream_buffer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085b800
//
// 0085b800  6aff                 push -1
// 0085b802  6834e3ac00           push 0xace334
// 0085b807  64a100000000         mov eax, dword ptr fs:[0]
// 0085b80d  50                   push eax
// 0085b80e  64892500000000       mov dword ptr fs:[0], esp
// 0085b815  51                   push ecx
// 0085b816  56                   push esi
// 0085b817  57                   push edi
// 0085b818  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085b81c  8b07                 mov eax, dword ptr [edi]
// 0085b81e  8bf1                 mov esi, ecx
// 0085b820  8906                 mov dword ptr [esi], eax
// 0085b822  8b4704               mov eax, dword ptr [edi + 4]
// 0085b825  89742408             mov dword ptr [esp + 8], esi
// 0085b829  894604               mov dword ptr [esi + 4], eax
// 0085b82c  85c0                 test eax, eax
// 0085b82e  740c                 je 0x85b83c
// 0085b830  83c004               add eax, 4
// 0085b833  b901000000           mov ecx, 1
// 0085b838  f00fc108             lock xadd dword ptr [eax], ecx
// 0085b83c  8d5708               lea edx, [edi + 8]
// 0085b83f  52                   push edx
// 0085b840  8d4e08               lea ecx, [esi + 8]
// 0085b843  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085b84b  ff154426b200         call dword ptr [0xb22644]
// 0085b851  8d4724               lea eax, [edi + 0x24]
// 0085b854  50                   push eax
// 0085b855  8d4e24               lea ecx, [esi + 0x24]
// 0085b858  c644241801           mov byte ptr [esp + 0x18], 1
// 0085b85d  ff154426b200         call dword ptr [0xb22644]
// 0085b863  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0085b866  894e40               mov dword ptr [esi + 0x40], ecx
// 0085b869  8b5744               mov edx, dword ptr [edi + 0x44]
// 0085b86c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b870  895644               mov dword ptr [esi + 0x44], edx
// 0085b873  5f                   pop edi
// 0085b874  8bc6                 mov eax, esi
// 0085b876  5e                   pop esi
// 0085b877  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b87e  83c410               add esp, 0x10
// 0085b881  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp