// roc 2011-06 005924b0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005924b0
//
// 005924b0  8b442404             mov eax, dword ptr [esp + 4]
// 005924b4  3b05bc53c900         cmp eax, dword ptr [0xc953bc]
// 005924ba  7412                 je 0x5924ce
// 005924bc  a3bc53c900           mov dword ptr [0xc953bc], eax
// 005924c1  c7442404c8b7cb00     mov dword ptr [esp + 4], 0xcbb7c8
// 005924c9  e992fae7ff           jmp 0x411f60
// 005924ce  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
