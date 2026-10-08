// roc 2007-08 005da520  unit: RBX::VelocityMotor  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005da520
//
// 005da520  64a100000000         mov eax, dword ptr fs:[0]
// 005da526  6aff                 push -1
// 005da528  683ea67500           push 0x75a63e
// 005da52d  50                   push eax
// 005da52e  b801000000           mov eax, 1
// 005da533  64892500000000       mov dword ptr fs:[0], esp
// 005da53a  8405906a8c00         test byte ptr [0x8c6a90], al
// 005da540  753e                 jne 0x5da580
// 005da542  0905906a8c00         or dword ptr [0x8c6a90], eax
// 005da548  68a8ac7900           push 0x79aca8
// 005da54d  68d8c28800           push 0x88c2d8
// 005da552  6884ae7900           push 0x79ae84
// 005da557  b9806a8c00           mov ecx, 0x8c6a80
// 005da55c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005da564  e817c2eaff           call 0x486780
// 005da569  68b0bd7700           push 0x77bdb0
// 005da56e  c705806a8c00a4ac7900 mov dword ptr [0x8c6a80], 0x79aca4
// 005da578  e8a6670500           call 0x630d23
// 005da57d  83c404               add esp, 4
// 005da580  8b0c24               mov ecx, dword ptr [esp]
// 005da583  b8806a8c00           mov eax, 0x8c6a80
// 005da588  64890d00000000       mov dword ptr fs:[0], ecx
// 005da58f  83c40c               add esp, 0xc
// 005da592  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
