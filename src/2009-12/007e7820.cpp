// roc 2009-12 007e7820  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e7820
//
// 007e7820  64a100000000         mov eax, dword ptr fs:[0]
// 007e7826  6aff                 push -1
// 007e7828  681e7d9500           push 0x957d1e
// 007e782d  50                   push eax
// 007e782e  b801000000           mov eax, 1
// 007e7833  64892500000000       mov dword ptr fs:[0], esp
// 007e783a  8405489bb900         test byte ptr [0xb99b48], al
// 007e7840  7525                 jne 0x7e7867
// 007e7842  0905489bb900         or dword ptr [0xb99b48], eax
// 007e7848  b9a899b900           mov ecx, 0xb999a8
// 007e784d  c744240800000000     mov dword ptr [esp + 8], 0
// 007e7855  e876fbffff           call 0x7e73d0
// 007e785a  6840a49800           push 0x98a440
// 007e785f  e8c5d00000           call 0x7f4929
// 007e7864  83c404               add esp, 4
// 007e7867  8b0c24               mov ecx, dword ptr [esp]
// 007e786a  b8a899b900           mov eax, 0xb999a8
// 007e786f  64890d00000000       mov dword ptr fs:[0], ecx
// 007e7876  83c40c               add esp, 0xc
// 007e7879  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
