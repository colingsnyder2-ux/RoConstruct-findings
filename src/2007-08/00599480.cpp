// roc 2007-08 00599480  unit: RBX::Camera  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00599480
//
// 00599480  56                   push esi
// 00599481  8bb1bc000000         mov esi, dword ptr [ecx + 0xbc]
// 00599487  85f6                 test esi, esi
// 00599489  742a                 je 0x5994b5
// 0059948b  eb03                 jmp 0x599490
// 0059948d  8d4900               lea ecx, [ecx]
// 00599490  6a00                 push 0
// 00599492  68a4f58900           push 0x89f5a4
// 00599497  684c1f8800           push 0x881f4c
// 0059949c  6a00                 push 0
// 0059949e  56                   push esi
// 0059949f  e892780900           call 0x630d36
// 005994a4  83c414               add esp, 0x14
// 005994a7  85c0                 test eax, eax
// 005994a9  750c                 jne 0x5994b7
// 005994ab  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005994b1  85f6                 test esi, esi
// 005994b3  75db                 jne 0x599490
// 005994b5  33c0                 xor eax, eax
// 005994b7  5e                   pop esi
// 005994b8  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?getCameraOwner@Camera@RBX@@AAEPAVICameraOwner@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
