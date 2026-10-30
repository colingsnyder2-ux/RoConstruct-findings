// roc 2010-06 006a0af0  unit: UString_sink::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0af0
//
// 006a0af0  6aff                 push -1
// 006a0af2  6862d59a00           push 0x9ad562
// 006a0af7  64a100000000         mov eax, dword ptr fs:[0]
// 006a0afd  50                   push eax
// 006a0afe  64892500000000       mov dword ptr fs:[0], esp
// 006a0b05  83ec20               sub esp, 0x20
// 006a0b08  56                   push esi
// 006a0b09  68b809a400           push 0xa409b8
// 006a0b0e  8d4c240c             lea ecx, [esp + 0xc]
// 006a0b12  c744240800000000     mov dword ptr [esp + 8], 0
// 006a0b1a  ff1510a49e00         call dword ptr [0x9ea410]
// 006a0b20  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a0b24  8d442408             lea eax, [esp + 8]
// 006a0b28  50                   push eax
// 006a0b29  8bce                 mov ecx, esi
// 006a0b2b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006a0b33  e87888d6ff           call 0x4093b0
// 006a0b38  c706f808a400         mov dword ptr [esi], 0xa408f8
// 006a0b3e  8d4c2408             lea ecx, [esp + 8]
// 006a0b42  c744240401000000     mov dword ptr [esp + 4], 1
// 006a0b4a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006a0b4f  ff1500a49e00         call dword ptr [0x9ea400]
// 006a0b55  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a0b59  8bc6                 mov eax, esi
// 006a0b5b  5e                   pop esi
// 006a0b5c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0b63  83c42c               add esp, 0x2c
// 006a0b66  c3                   ret 
// copied from an identical function in another client (function ?cant_write@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp