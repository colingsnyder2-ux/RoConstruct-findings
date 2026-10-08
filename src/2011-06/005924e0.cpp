// roc 2011-06 005924e0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005924e0
//
// 005924e0  8b442404             mov eax, dword ptr [esp + 4]
// 005924e4  3b05a049c500         cmp eax, dword ptr [0xc549a0]
// 005924ea  7412                 je 0x5924fe
// 005924ec  a3a049c500           mov dword ptr [0xc549a0], eax
// 005924f1  c7442404acb5cb00     mov dword ptr [esp + 4], 0xcbb5ac
// 005924f9  e962fae7ff           jmp 0x411f60
// 005924fe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
