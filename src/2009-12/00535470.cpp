// roc 2009-12 00535470  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535470
//
// 00535470  64a100000000         mov eax, dword ptr fs:[0]
// 00535476  6aff                 push -1
// 00535478  681e969300           push 0x93961e
// 0053547d  50                   push eax
// 0053547e  b801000000           mov eax, 1
// 00535483  64892500000000       mov dword ptr fs:[0], esp
// 0053548a  84053405b800         test byte ptr [0xb80534], al
// 00535490  7525                 jne 0x5354b7
// 00535492  09053405b800         or dword ptr [0xb80534], eax
// 00535498  b91c05b800           mov ecx, 0xb8051c
// 0053549d  c744240800000000     mov dword ptr [esp + 8], 0
// 005354a5  e8965c0500           call 0x58b140
// 005354aa  68d0059800           push 0x9805d0
// 005354af  e875f42b00           call 0x7f4929
// 005354b4  83c404               add esp, 4
// 005354b7  8b0c24               mov ecx, dword ptr [esp]
// 005354ba  b81c05b800           mov eax, 0xb8051c
// 005354bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005354c6  83c40c               add esp, 0xc
// 005354c9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
