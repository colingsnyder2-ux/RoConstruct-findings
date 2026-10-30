// roc 2011-06 006e3950  unit: UString_sink::?$stream_buffer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e3950
//
// 006e3950  6aff                 push -1
// 006e3952  68783f9f00           push 0x9f3f78
// 006e3957  64a100000000         mov eax, dword ptr fs:[0]
// 006e395d  50                   push eax
// 006e395e  64892500000000       mov dword ptr fs:[0], esp
// 006e3965  51                   push ecx
// 006e3966  56                   push esi
// 006e3967  8bf1                 mov esi, ecx
// 006e3969  8b4608               mov eax, dword ptr [esi + 8]
// 006e396c  c706cc84aa00         mov dword ptr [esi], 0xaa84cc
// 006e3972  8b4804               mov ecx, dword ptr [eax + 4]
// 006e3975  89742404             mov dword ptr [esp + 4], esi
// 006e3979  c7443108c484aa00     mov dword ptr [ecx + esi + 8], 0xaa84c4
// 006e3981  8b4604               mov eax, dword ptr [esi + 4]
// 006e3984  8b00                 mov eax, dword ptr [eax]
// 006e3986  f6401c01             test byte ptr [eax + 0x1c], 1
// 006e398a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e3992  7410                 je 0x6e39a4
// 006e3994  8b5608               mov edx, dword ptr [esi + 8]
// 006e3997  8b4204               mov eax, dword ptr [edx + 4]
// 006e399a  8b4c3030             mov ecx, dword ptr [eax + esi + 0x30]
// 006e399e  ff151c05a400         call dword ptr [0xa4051c]
// 006e39a4  8bce                 mov ecx, esi
// 006e39a6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006e39ae  e8edf4ffff           call 0x6e2ea0
// 006e39b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e39b7  5e                   pop esi
// 006e39b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006e39bf  83c410               add esp, 0x10
// 006e39c2  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp