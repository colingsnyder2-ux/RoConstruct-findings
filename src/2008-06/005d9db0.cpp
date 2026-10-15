// roc 2008-06 005d9db0  unit: RBX::Humanoid  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9db0
//
// 005d9db0  85c9                 test ecx, ecx
// 005d9db2  7433                 je 0x5d9de7
// 005d9db4  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 005d9dba  6a00                 push 0
// 005d9dbc  68402a9300           push 0x932a40
// 005d9dc1  687c909200           push 0x92907c
// 005d9dc6  6a00                 push 0
// 005d9dc8  50                   push eax
// 005d9dc9  e8f8790c00           call 0x6a17c6
// 005d9dce  83c414               add esp, 0x14
// 005d9dd1  85c0                 test eax, eax
// 005d9dd3  7412                 je 0x5d9de7
// 005d9dd5  8b542404             mov edx, dword ptr [esp + 4]
// 005d9dd9  b9109d5d00           mov ecx, 0x5d9d10
// 005d9dde  52                   push edx
// 005d9ddf  51                   push ecx
// 005d9de0  8bc8                 mov ecx, eax
// 005d9de2  e859e7ffff           call 0x5d8540
// 005d9de7  c20400               ret 4
// library rbxgs/roc_unit_06906e269c7d4d71.cpp (function ?getIgnorePrims@Humanoid@RBX@@UAEXAAV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_06906e269c7d4d71.cpp
