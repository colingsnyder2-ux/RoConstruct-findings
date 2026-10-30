// roc 2009-12 00729160  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00729160
//
// 00729160  55                   push ebp
// 00729161  8bec                 mov ebp, esp
// 00729163  6aff                 push -1
// 00729165  6810f29400           push 0x94f210
// 0072916a  64a100000000         mov eax, dword ptr fs:[0]
// 00729170  50                   push eax
// 00729171  64892500000000       mov dword ptr fs:[0], esp
// 00729178  83ec38               sub esp, 0x38
// 0072917b  53                   push ebx
// 0072917c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0072917f  56                   push esi
// 00729180  8bf1                 mov esi, ecx
// 00729182  f6465001             test byte ptr [esi + 0x50], 1
// 00729186  57                   push edi
// 00729187  8965f0               mov dword ptr [ebp - 0x10], esp
// 0072918a  7510                 jne 0x72919c
// 0072918c  8d4508               lea eax, [ebp + 8]
// 0072918f  50                   push eax
// 00729190  895d08               mov dword ptr [ebp + 8], ebx
// 00729193  e868f2ffff           call 0x728400
// 00729198  834e5001             or dword ptr [esi + 0x50], 1
// 0072919c  f6465002             test byte ptr [esi + 0x50], 2
// 007291a0  7416                 je 0x7291b8
// 007291a2  83c8ff               or eax, 0xffffffff
// 007291a5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007291a8  64890d00000000       mov dword ptr fs:[0], ecx
// 007291af  5f                   pop edi
// 007291b0  5e                   pop esi
// 007291b1  5b                   pop ebx
// 007291b2  8be5                 mov esp, ebp
// 007291b4  5d                   pop ebp
// 007291b5  c20c00               ret 0xc
// 007291b8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 007291bb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007291be  57                   push edi
// 007291bf  51                   push ecx
// 007291c0  33c0                 xor eax, eax
// 007291c2  53                   push ebx
// 007291c3  8bce                 mov ecx, esi
// 007291c5  8945fc               mov dword ptr [ebp - 4], eax
// 007291c8  894508               mov dword ptr [ebp + 8], eax
// 007291cb  e820dbffff           call 0x726cf0
// 007291d0  83f8ff               cmp eax, -1
// 007291d3  7436                 je 0x72920b
// 007291d5  3bc7                 cmp eax, edi
// 007291d7  894508               mov dword ptr [ebp + 8], eax
// 007291da  7d41                 jge 0x72921d
// 007291dc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 007291df  2bf8                 sub edi, eax
// 007291e1  57                   push edi
// 007291e2  03c2                 add eax, edx
// 007291e4  50                   push eax
// 007291e5  53                   push ebx
// 007291e6  8bce                 mov ecx, esi
// 007291e8  e803dbffff           call 0x726cf0
// 007291ed  83f8ff               cmp eax, -1
// 007291f0  7419                 je 0x72920b
// 007291f2  014508               add dword ptr [ebp + 8], eax
// 007291f5  8b4508               mov eax, dword ptr [ebp + 8]
// 007291f8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007291fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00729202  5f                   pop edi
// 00729203  5e                   pop esi
// 00729204  5b                   pop ebx
// 00729205  8be5                 mov esp, ebp
// 00729207  5d                   pop ebp
// 00729208  c20c00               ret 0xc
// 0072920b  8d450c               lea eax, [ebp + 0xc]
// 0072920e  50                   push eax
// 0072920f  8bce                 mov ecx, esi
// 00729211  895d0c               mov dword ptr [ebp + 0xc], ebx
// 00729214  e8c7faffff           call 0x728ce0
// 00729219  834e5002             or dword ptr [esi + 0x50], 2
// 0072921d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00729220  8b4508               mov eax, dword ptr [ebp + 8]
// 00729223  5f                   pop edi
// 00729224  5e                   pop esi
// 00729225  64890d00000000       mov dword ptr fs:[0], ecx
// 0072922c  5b                   pop ebx
// 0072922d  8be5                 mov esp, ebp
// 0072922f  5d                   pop ebp
// 00729230  c20c00               ret 0xc
// 00729233  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00729236  51                   push ecx
// 00729237  8d4dbc               lea ecx, [ebp - 0x44]
// 0072923a  e8a1ceffff           call 0x7260e0
// 0072923f  68188aac00           push 0xac8a18
// 00729244  8d55bc               lea edx, [ebp - 0x44]
// 00729247  52                   push edx
// 00729248  e82bb60c00           call 0x7f4878
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp