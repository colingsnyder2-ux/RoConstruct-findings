// roc 2007-08 0054c650  unit: UString_sink::?$stream_buffer  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c650
//
// 0054c650  6aff                 push -1
// 0054c652  6873257500           push 0x752573
// 0054c657  64a100000000         mov eax, dword ptr fs:[0]
// 0054c65d  50                   push eax
// 0054c65e  64892500000000       mov dword ptr fs:[0], esp
// 0054c665  83ec08               sub esp, 8
// 0054c668  56                   push esi
// 0054c669  57                   push edi
// 0054c66a  8bf9                 mov edi, ecx
// 0054c66c  897c240c             mov dword ptr [esp + 0xc], edi
// 0054c670  8b7714               mov esi, dword ptr [edi + 0x14]
// 0054c673  85f6                 test esi, esi
// 0054c675  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0054c67d  742a                 je 0x54c6a9
// 0054c67f  8d4604               lea eax, [esi + 4]
// 0054c682  83c9ff               or ecx, 0xffffffff
// 0054c685  f00fc108             lock xadd dword ptr [eax], ecx
// 0054c689  751e                 jne 0x54c6a9
// 0054c68b  8b16                 mov edx, dword ptr [esi]
// 0054c68d  8b4204               mov eax, dword ptr [edx + 4]
// 0054c690  8bce                 mov ecx, esi
// 0054c692  ffd0                 call eax
// 0054c694  8d4e08               lea ecx, [esi + 8]
// 0054c697  83caff               or edx, 0xffffffff
// 0054c69a  f00fc111             lock xadd dword ptr [ecx], edx
// 0054c69e  7509                 jne 0x54c6a9
// 0054c6a0  8b06                 mov eax, dword ptr [esi]
// 0054c6a2  8b5008               mov edx, dword ptr [eax + 8]
// 0054c6a5  8bce                 mov ecx, esi
// 0054c6a7  ffd2                 call edx
// 0054c6a9  85ff                 test edi, edi
// 0054c6ab  7405                 je 0x54c6b2
// 0054c6ad  8d4708               lea eax, [edi + 8]
// 0054c6b0  eb02                 jmp 0x54c6b4
// 0054c6b2  33c0                 xor eax, eax
// 0054c6b4  8b08                 mov ecx, dword ptr [eax]
// 0054c6b6  8b5104               mov edx, dword ptr [ecx + 4]
// 0054c6b9  8b0de8e47700         mov ecx, dword ptr [0x77e4e8]
// 0054c6bf  890c02               mov dword ptr [edx + eax], ecx
// 0054c6c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054c6c6  c70754787a00         mov dword ptr [edi], 0x7a7854
// 0054c6cc  5f                   pop edi
// 0054c6cd  5e                   pop esi
// 0054c6ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c6d5  83c414               add esp, 0x14
// 0054c6d8  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_ad9867ec1f020831.cpp