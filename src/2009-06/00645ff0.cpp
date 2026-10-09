// roc 2009-06 00645ff0  unit: RBX::Soundscape::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00645ff0
//
// 00645ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00645ff6  6aff                 push -1
// 00645ff8  688ea98600           push 0x86a98e
// 00645ffd  50                   push eax
// 00645ffe  b801000000           mov eax, 1
// 00646003  64892500000000       mov dword ptr fs:[0], esp
// 0064600a  840558c1a400         test byte ptr [0xa4c158], al
// 00646010  7530                 jne 0x646042
// 00646012  090558c1a400         or dword ptr [0xa4c158], eax
// 00646018  6894d9a000           push 0xa0d994
// 0064601d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00646025  e8e6feffff           call 0x645f10
// 0064602a  50                   push eax
// 0064602b  b998c0a400           mov ecx, 0xa4c098
// 00646030  e8ab37fbff           call 0x5f97e0
// 00646035  68f0a28900           push 0x89a2f0
// 0064603a  e8bc3a0d00           call 0x719afb
// 0064603f  83c404               add esp, 4
// 00646042  8b0c24               mov ecx, dword ptr [esp]
// 00646045  b898c0a400           mov eax, 0xa4c098
// 0064604a  64890d00000000       mov dword ptr fs:[0], ecx
// 00646051  83c40c               add esp, 0xc
// 00646054  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
