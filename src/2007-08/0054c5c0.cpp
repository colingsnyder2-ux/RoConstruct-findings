// roc 2007-08 0054c5c0  unit: UString_sink::?$stream_buffer  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c5c0
//
// 0054c5c0  6aff                 push -1
// 0054c5c2  6833257500           push 0x752533
// 0054c5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0054c5cd  50                   push eax
// 0054c5ce  64892500000000       mov dword ptr fs:[0], esp
// 0054c5d5  83ec08               sub esp, 8
// 0054c5d8  56                   push esi
// 0054c5d9  57                   push edi
// 0054c5da  8bf9                 mov edi, ecx
// 0054c5dc  897c240c             mov dword ptr [esp + 0xc], edi
// 0054c5e0  8b7710               mov esi, dword ptr [edi + 0x10]
// 0054c5e3  85f6                 test esi, esi
// 0054c5e5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0054c5ed  742a                 je 0x54c619
// 0054c5ef  8d4604               lea eax, [esi + 4]
// 0054c5f2  83c9ff               or ecx, 0xffffffff
// 0054c5f5  f00fc108             lock xadd dword ptr [eax], ecx
// 0054c5f9  751e                 jne 0x54c619
// 0054c5fb  8b16                 mov edx, dword ptr [esi]
// 0054c5fd  8b4204               mov eax, dword ptr [edx + 4]
// 0054c600  8bce                 mov ecx, esi
// 0054c602  ffd0                 call eax
// 0054c604  8d4e08               lea ecx, [esi + 8]
// 0054c607  83caff               or edx, 0xffffffff
// 0054c60a  f00fc111             lock xadd dword ptr [ecx], edx
// 0054c60e  7509                 jne 0x54c619
// 0054c610  8b06                 mov eax, dword ptr [esi]
// 0054c612  8b5008               mov edx, dword ptr [eax + 8]
// 0054c615  8bce                 mov ecx, esi
// 0054c617  ffd2                 call edx
// 0054c619  85ff                 test edi, edi
// 0054c61b  7405                 je 0x54c622
// 0054c61d  8d4708               lea eax, [edi + 8]
// 0054c620  eb02                 jmp 0x54c624
// 0054c622  33c0                 xor eax, eax
// 0054c624  8b08                 mov ecx, dword ptr [eax]
// 0054c626  8b5104               mov edx, dword ptr [ecx + 4]
// 0054c629  8b0df0e47700         mov ecx, dword ptr [0x77e4f0]
// 0054c62f  890c02               mov dword ptr [edx + eax], ecx
// 0054c632  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054c636  c70748787a00         mov dword ptr [edi], 0x7a7848
// 0054c63c  5f                   pop edi
// 0054c63d  5e                   pop esi
// 0054c63e  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c645  83c414               add esp, 0x14
// 0054c648  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp