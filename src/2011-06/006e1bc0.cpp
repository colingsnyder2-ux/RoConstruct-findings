// roc 2011-06 006e1bc0  unit: UString_sink::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1bc0
//
// 006e1bc0  6aff                 push -1
// 006e1bc2  685211a000           push 0xa01152
// 006e1bc7  64a100000000         mov eax, dword ptr fs:[0]
// 006e1bcd  50                   push eax
// 006e1bce  64892500000000       mov dword ptr fs:[0], esp
// 006e1bd5  83ec20               sub esp, 0x20
// 006e1bd8  56                   push esi
// 006e1bd9  680883aa00           push 0xaa8308
// 006e1bde  8d4c240c             lea ecx, [esp + 0xc]
// 006e1be2  c744240800000000     mov dword ptr [esp + 8], 0
// 006e1bea  ff15c404a400         call dword ptr [0xa404c4]
// 006e1bf0  8b742434             mov esi, dword ptr [esp + 0x34]
// 006e1bf4  8d442408             lea eax, [esp + 8]
// 006e1bf8  50                   push eax
// 006e1bf9  8bce                 mov ecx, esi
// 006e1bfb  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006e1c03  e8488dd2ff           call 0x40a950
// 006e1c08  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e1c0e  8d4c2408             lea ecx, [esp + 8]
// 006e1c12  c744240401000000     mov dword ptr [esp + 4], 1
// 006e1c1a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006e1c1f  ff15d004a400         call dword ptr [0xa404d0]
// 006e1c25  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e1c29  8bc6                 mov eax, esi
// 006e1c2b  5e                   pop esi
// 006e1c2c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1c33  83c42c               add esp, 0x2c
// 006e1c36  c3                   ret 
// copied from an identical function in another client (function ?cant_write@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp