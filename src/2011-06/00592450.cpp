// roc 2011-06 00592450  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592450
//
// 00592450  8b442404             mov eax, dword ptr [esp + 4]
// 00592454  3b05a850c900         cmp eax, dword ptr [0xc950a8]
// 0059245a  7412                 je 0x59246e
// 0059245c  a3a850c900           mov dword ptr [0xc950a8], eax
// 00592461  c74424045cb3cb00     mov dword ptr [esp + 4], 0xcbb35c
// 00592469  e9f2fae7ff           jmp 0x411f60
// 0059246e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
