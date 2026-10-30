// roc 2010-06 006a4560  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4560
//
// 006a4560  6aff                 push -1
// 006a4562  68312a9900           push 0x992a31
// 006a4567  64a100000000         mov eax, dword ptr fs:[0]
// 006a456d  50                   push eax
// 006a456e  64892500000000       mov dword ptr fs:[0], esp
// 006a4575  83ec20               sub esp, 0x20
// 006a4578  56                   push esi
// 006a4579  8bf1                 mov esi, ecx
// 006a457b  68b40ba400           push 0xa40bb4
// 006a4580  8d4c240c             lea ecx, [esp + 0xc]
// 006a4584  89742408             mov dword ptr [esp + 8], esi
// 006a4588  ff1510a49e00         call dword ptr [0x9ea410]
// 006a458e  8d442408             lea eax, [esp + 8]
// 006a4592  50                   push eax
// 006a4593  8bce                 mov ecx, esi
// 006a4595  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006a459d  e80e4ed6ff           call 0x4093b0
// 006a45a2  c706f808a400         mov dword ptr [esi], 0xa408f8
// 006a45a8  8d4c2408             lea ecx, [esp + 8]
// 006a45ac  c644242c02           mov byte ptr [esp + 0x2c], 2
// 006a45b1  ff1500a49e00         call dword ptr [0x9ea400]
// 006a45b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a45bb  894e28               mov dword ptr [esi + 0x28], ecx
// 006a45be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a45c2  c706ac0ba400         mov dword ptr [esi], 0xa40bac
// 006a45c8  8b15303fa500         mov edx, dword ptr [0xa53f30]
// 006a45ce  89562c               mov dword ptr [esi + 0x2c], edx
// 006a45d1  8bc6                 mov eax, esi
// 006a45d3  5e                   pop esi
// 006a45d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006a45db  83c42c               add esp, 0x2c
// 006a45de  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp