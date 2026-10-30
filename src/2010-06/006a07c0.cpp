// roc 2010-06 006a07c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a07c0
//
// 006a07c0  6aff                 push -1
// 006a07c2  6862d59a00           push 0x9ad562
// 006a07c7  64a100000000         mov eax, dword ptr fs:[0]
// 006a07cd  50                   push eax
// 006a07ce  64892500000000       mov dword ptr fs:[0], esp
// 006a07d5  83ec20               sub esp, 0x20
// 006a07d8  56                   push esi
// 006a07d9  689009a400           push 0xa40990
// 006a07de  8d4c240c             lea ecx, [esp + 0xc]
// 006a07e2  c744240800000000     mov dword ptr [esp + 8], 0
// 006a07ea  ff1510a49e00         call dword ptr [0x9ea410]
// 006a07f0  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a07f4  8d442408             lea eax, [esp + 8]
// 006a07f8  50                   push eax
// 006a07f9  8bce                 mov ecx, esi
// 006a07fb  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006a0803  e8a88bd6ff           call 0x4093b0
// 006a0808  c706f808a400         mov dword ptr [esi], 0xa408f8
// 006a080e  8d4c2408             lea ecx, [esp + 8]
// 006a0812  c744240401000000     mov dword ptr [esp + 4], 1
// 006a081a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006a081f  ff1500a49e00         call dword ptr [0x9ea400]
// 006a0825  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a0829  8bc6                 mov eax, esi
// 006a082b  5e                   pop esi
// 006a082c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0833  83c42c               add esp, 0x2c
// 006a0836  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp