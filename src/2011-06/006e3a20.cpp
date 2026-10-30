// roc 2011-06 006e3a20  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e3a20
//
// 006e3a20  6aff                 push -1
// 006e3a22  68983f9f00           push 0x9f3f98
// 006e3a27  64a100000000         mov eax, dword ptr fs:[0]
// 006e3a2d  50                   push eax
// 006e3a2e  64892500000000       mov dword ptr fs:[0], esp
// 006e3a35  51                   push ecx
// 006e3a36  56                   push esi
// 006e3a37  8bf1                 mov esi, ecx
// 006e3a39  8b4608               mov eax, dword ptr [esi + 8]
// 006e3a3c  c706e084aa00         mov dword ptr [esi], 0xaa84e0
// 006e3a42  8b4804               mov ecx, dword ptr [eax + 4]
// 006e3a45  89742404             mov dword ptr [esp + 4], esi
// 006e3a49  c7443108d884aa00     mov dword ptr [ecx + esi + 8], 0xaa84d8
// 006e3a51  8b4604               mov eax, dword ptr [esi + 4]
// 006e3a54  8b00                 mov eax, dword ptr [eax]
// 006e3a56  f6401c01             test byte ptr [eax + 0x1c], 1
// 006e3a5a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e3a62  7410                 je 0x6e3a74
// 006e3a64  8b5608               mov edx, dword ptr [esi + 8]
// 006e3a67  8b4204               mov eax, dword ptr [edx + 4]
// 006e3a6a  8b4c3030             mov ecx, dword ptr [eax + esi + 0x30]
// 006e3a6e  ff151c05a400         call dword ptr [0xa4051c]
// 006e3a74  8bce                 mov ecx, esi
// 006e3a76  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006e3a7e  e89df4ffff           call 0x6e2f20
// 006e3a83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e3a87  5e                   pop esi
// 006e3a88  64890d00000000       mov dword ptr fs:[0], ecx
// 006e3a8f  83c410               add esp, 0x10
// 006e3a92  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp