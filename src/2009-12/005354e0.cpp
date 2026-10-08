// roc 2009-12 005354e0  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005354e0
//
// 005354e0  64a100000000         mov eax, dword ptr fs:[0]
// 005354e6  6aff                 push -1
// 005354e8  683e969300           push 0x93963e
// 005354ed  50                   push eax
// 005354ee  b801000000           mov eax, 1
// 005354f3  64892500000000       mov dword ptr fs:[0], esp
// 005354fa  84055005b800         test byte ptr [0xb80550], al
// 00535500  7525                 jne 0x535527
// 00535502  09055005b800         or dword ptr [0xb80550], eax
// 00535508  b93805b800           mov ecx, 0xb80538
// 0053550d  c744240800000000     mov dword ptr [esp + 8], 0
// 00535515  e8265c0500           call 0x58b140
// 0053551a  6890059800           push 0x980590
// 0053551f  e805f42b00           call 0x7f4929
// 00535524  83c404               add esp, 4
// 00535527  8b0c24               mov ecx, dword ptr [esp]
// 0053552a  b83805b800           mov eax, 0xb80538
// 0053552f  64890d00000000       mov dword ptr fs:[0], ecx
// 00535536  83c40c               add esp, 0xc
// 00535539  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
