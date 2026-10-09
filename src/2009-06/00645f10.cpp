// roc 2009-06 00645f10  unit: RBX::Soundscape::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00645f10
//
// 00645f10  64a100000000         mov eax, dword ptr fs:[0]
// 00645f16  6aff                 push -1
// 00645f18  684ea98600           push 0x86a94e
// 00645f1d  50                   push eax
// 00645f1e  b801000000           mov eax, 1
// 00645f23  64892500000000       mov dword ptr fs:[0], esp
// 00645f2a  840590c0a400         test byte ptr [0xa4c090], al
// 00645f30  7530                 jne 0x645f62
// 00645f32  090590c0a400         or dword ptr [0xa4c090], eax
// 00645f38  68a0d9a000           push 0xa0d9a0
// 00645f3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00645f45  e8a645dcff           call 0x40a4f0
// 00645f4a  50                   push eax
// 00645f4b  b9d0bfa400           mov ecx, 0xa4bfd0
// 00645f50  e88b38fbff           call 0x5f97e0
// 00645f55  68e0a28900           push 0x89a2e0
// 00645f5a  e89c3b0d00           call 0x719afb
// 00645f5f  83c404               add esp, 4
// 00645f62  8b0c24               mov ecx, dword ptr [esp]
// 00645f65  b8d0bfa400           mov eax, 0xa4bfd0
// 00645f6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00645f71  83c40c               add esp, 0xc
// 00645f74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
