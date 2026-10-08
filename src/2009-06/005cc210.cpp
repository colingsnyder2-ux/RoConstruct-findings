// from server: 100% by auto
// roc 2009-06 005cc210  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc210
//
// 005cc210  64a100000000         mov eax, dword ptr fs:[0]
// 005cc216  6aff                 push -1
// 005cc218  680e248600           push 0x86240e
// 005cc21d  50                   push eax
// 005cc21e  b801000000           mov eax, 1
// 005cc223  64892500000000       mov dword ptr fs:[0], esp
// 005cc22a  8405dc32a400         test byte ptr [0xa432dc], al
// 005cc230  7525                 jne 0x5cc257
// 005cc232  0905dc32a400         or dword ptr [0xa432dc], eax
// 005cc238  b9f031a400           mov ecx, 0xa431f0
// 005cc23d  c744240800000000     mov dword ptr [esp + 8], 0
// 005cc245  e846f4ffff           call 0x5cb690
// 005cc24a  6810728900           push 0x897210
// 005cc24f  e8a7d81400           call 0x719afb
// 005cc254  83c404               add esp, 4
// 005cc257  8b0c24               mov ecx, dword ptr [esp]
// 005cc25a  b8f031a400           mov eax, 0xa431f0
// 005cc25f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc266  83c40c               add esp, 0xc
// 005cc269  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
