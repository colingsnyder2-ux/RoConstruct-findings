// roc 2009-12 0051be70  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051be70
//
// 0051be70  64a100000000         mov eax, dword ptr fs:[0]
// 0051be76  6aff                 push -1
// 0051be78  686e7f9300           push 0x937f6e
// 0051be7d  50                   push eax
// 0051be7e  b801000000           mov eax, 1
// 0051be83  64892500000000       mov dword ptr fs:[0], esp
// 0051be8a  84055cebb700         test byte ptr [0xb7eb5c], al
// 0051be90  7525                 jne 0x51beb7
// 0051be92  09055cebb700         or dword ptr [0xb7eb5c], eax
// 0051be98  b970eab700           mov ecx, 0xb7ea70
// 0051be9d  c744240800000000     mov dword ptr [esp + 8], 0
// 0051bea5  e876fdffff           call 0x51bc20
// 0051beaa  6870fb9700           push 0x97fb70
// 0051beaf  e8758a2d00           call 0x7f4929
// 0051beb4  83c404               add esp, 4
// 0051beb7  8b0c24               mov ecx, dword ptr [esp]
// 0051beba  b870eab700           mov eax, 0xb7ea70
// 0051bebf  64890d00000000       mov dword ptr fs:[0], ecx
// 0051bec6  83c40c               add esp, 0xc
// 0051bec9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
