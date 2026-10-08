// roc 2008-06 00599e50  unit: RBX::P8PartInstance::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599e50
//
// 00599e50  b801000000           mov eax, 1
// 00599e55  840590639700         test byte ptr [0x976390], al
// 00599e5b  7533                 jne 0x599e90
// 00599e5d  090590639700         or dword ptr [0x976390], eax
// 00599e63  33c0                 xor eax, eax
// 00599e65  c70584639700e0e18100 mov dword ptr [0x976384], 0x81e1e0
// 00599e6f  68c0db7f00           push 0x7fdbc0
// 00599e74  a388639700           mov dword ptr [0x976388], eax
// 00599e79  a38c639700           mov dword ptr [0x97638c], eax
// 00599e7e  c70584639700042a8300 mov dword ptr [0x976384], 0x832a04
// 00599e88  e822791000           call 0x6a17af
// 00599e8d  83c404               add esp, 4
// 00599e90  b884639700           mov eax, 0x976384
// 00599e95  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ?getStaticNullController@NullController@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
