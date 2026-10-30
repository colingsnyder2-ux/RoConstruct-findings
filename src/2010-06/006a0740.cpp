// roc 2010-06 006a0740  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0740
//
// 006a0740  6aff                 push -1
// 006a0742  6862d59a00           push 0x9ad562
// 006a0747  64a100000000         mov eax, dword ptr fs:[0]
// 006a074d  50                   push eax
// 006a074e  64892500000000       mov dword ptr fs:[0], esp
// 006a0755  83ec20               sub esp, 0x20
// 006a0758  56                   push esi
// 006a0759  688009a400           push 0xa40980
// 006a075e  8d4c240c             lea ecx, [esp + 0xc]
// 006a0762  c744240800000000     mov dword ptr [esp + 8], 0
// 006a076a  ff1510a49e00         call dword ptr [0x9ea410]
// 006a0770  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a0774  8d442408             lea eax, [esp + 8]
// 006a0778  50                   push eax
// 006a0779  8bce                 mov ecx, esi
// 006a077b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006a0783  e8288cd6ff           call 0x4093b0
// 006a0788  c706f808a400         mov dword ptr [esi], 0xa408f8
// 006a078e  8d4c2408             lea ecx, [esp + 8]
// 006a0792  c744240401000000     mov dword ptr [esp + 4], 1
// 006a079a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006a079f  ff1500a49e00         call dword ptr [0x9ea400]
// 006a07a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a07a9  8bc6                 mov eax, esi
// 006a07ab  5e                   pop esi
// 006a07ac  64890d00000000       mov dword ptr fs:[0], ecx
// 006a07b3  83c42c               add esp, 0x2c
// 006a07b6  c3                   ret 
// copied from an identical function in another client (function ?cant_read@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp