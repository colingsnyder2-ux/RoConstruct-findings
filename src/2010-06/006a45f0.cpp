// roc 2010-06 006a45f0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a45f0
//
// 006a45f0  6aff                 push -1
// 006a45f2  68312a9900           push 0x992a31
// 006a45f7  64a100000000         mov eax, dword ptr fs:[0]
// 006a45fd  50                   push eax
// 006a45fe  64892500000000       mov dword ptr fs:[0], esp
// 006a4605  83ec20               sub esp, 0x20
// 006a4608  56                   push esi
// 006a4609  8bf1                 mov esi, ecx
// 006a460b  68b40ba400           push 0xa40bb4
// 006a4610  8d4c240c             lea ecx, [esp + 0xc]
// 006a4614  89742408             mov dword ptr [esp + 8], esi
// 006a4618  ff1510a49e00         call dword ptr [0x9ea410]
// 006a461e  8d442408             lea eax, [esp + 8]
// 006a4622  50                   push eax
// 006a4623  8bce                 mov ecx, esi
// 006a4625  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006a462d  e87e4dd6ff           call 0x4093b0
// 006a4632  c706f808a400         mov dword ptr [esi], 0xa408f8
// 006a4638  8d4c2408             lea ecx, [esp + 8]
// 006a463c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 006a4641  ff1500a49e00         call dword ptr [0x9ea400]
// 006a4647  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a464b  c706ac0ba400         mov dword ptr [esi], 0xa40bac
// 006a4651  c7462801000000       mov dword ptr [esi + 0x28], 1
// 006a4658  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006a465b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a465f  89562c               mov dword ptr [esi + 0x2c], edx
// 006a4662  8bc6                 mov eax, esi
// 006a4664  5e                   pop esi
// 006a4665  64890d00000000       mov dword ptr fs:[0], ecx
// 006a466c  83c42c               add esp, 0x2c
// 006a466f  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABVzlib_error@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp