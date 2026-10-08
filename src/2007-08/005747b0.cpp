// roc 2007-08 005747b0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005747b0
//
// 005747b0  b801000000           mov eax, 1
// 005747b5  8405282b8c00         test byte ptr [0x8c2b28], al
// 005747bb  7533                 jne 0x5747f0
// 005747bd  0905282b8c00         or dword ptr [0x8c2b28], eax
// 005747c3  33c0                 xor eax, eax
// 005747c5  c7051c2b8c0084797900 mov dword ptr [0x8c2b1c], 0x797984
// 005747cf  6880a07700           push 0x77a080
// 005747d4  a3202b8c00           mov dword ptr [0x8c2b20], eax
// 005747d9  a3242b8c00           mov dword ptr [0x8c2b24], eax
// 005747de  c7051c2b8c0094a87a00 mov dword ptr [0x8c2b1c], 0x7aa894
// 005747e8  e836c50b00           call 0x630d23
// 005747ed  83c404               add esp, 4
// 005747f0  b81c2b8c00           mov eax, 0x8c2b1c
// 005747f5  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ?getStaticNullController@NullController@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
