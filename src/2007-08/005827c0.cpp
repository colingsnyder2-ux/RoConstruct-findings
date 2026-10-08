// roc 2007-08 005827c0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005827c0
//
// 005827c0  8b442404             mov eax, dword ptr [esp + 4]
// 005827c4  3b81fc000000         cmp eax, dword ptr [ecx + 0xfc]
// 005827ca  7413                 je 0x5827df
// 005827cc  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 005827d2  c744240414318c00     mov dword ptr [esp + 4], 0x8c3114
// 005827da  e9311fecff           jmp 0x444710
// 005827df  c20400               ret 4
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?setErrorReporting@DebugSettings@RBX@@QAEXW4ErrorReporting@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
