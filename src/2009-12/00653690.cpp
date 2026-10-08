// roc 2009-12 00653690  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653690
//
// 00653690  64a100000000         mov eax, dword ptr fs:[0]
// 00653696  6aff                 push -1
// 00653698  68de309400           push 0x9430de
// 0065369d  50                   push eax
// 0065369e  b801000000           mov eax, 1
// 006536a3  64892500000000       mov dword ptr fs:[0], esp
// 006536aa  84053cf7b800         test byte ptr [0xb8f73c], al
// 006536b0  7525                 jne 0x6536d7
// 006536b2  09053cf7b800         or dword ptr [0xb8f73c], eax
// 006536b8  b950f6b800           mov ecx, 0xb8f650
// 006536bd  c744240800000000     mov dword ptr [esp + 8], 0
// 006536c5  e8c6f41100           call 0x772b90
// 006536ca  68d0379800           push 0x9837d0
// 006536cf  e855121a00           call 0x7f4929
// 006536d4  83c404               add esp, 4
// 006536d7  8b0c24               mov ecx, dword ptr [esp]
// 006536da  b850f6b800           mov eax, 0xb8f650
// 006536df  64890d00000000       mov dword ptr fs:[0], ecx
// 006536e6  83c40c               add esp, 0xc
// 006536e9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
