// roc 2008-06 00508970  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508970
//
// 00508970  64a100000000         mov eax, dword ptr fs:[0]
// 00508976  6aff                 push -1
// 00508978  685eba7c00           push 0x7cba5e
// 0050897d  50                   push eax
// 0050897e  64892500000000       mov dword ptr fs:[0], esp
// 00508985  e886f7ffff           call 0x508110
// 0050898a  b801000000           mov eax, 1
// 0050898f  840598359700         test byte ptr [0x973598], al
// 00508995  752b                 jne 0x5089c2
// 00508997  090598359700         or dword ptr [0x973598], eax
// 0050899d  6800319700           push 0x973100
// 005089a2  b97c359700           mov ecx, 0x97357c
// 005089a7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005089af  ff1558248000         call dword ptr [0x802458]
// 005089b5  6820c67f00           push 0x7fc620
// 005089ba  e8f08d1900           call 0x6a17af
// 005089bf  83c404               add esp, 4
// 005089c2  8b0c24               mov ecx, dword ptr [esp]
// 005089c5  b87c359700           mov eax, 0x97357c
// 005089ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005089d1  83c40c               add esp, 0xc
// 005089d4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
