// roc 2007-03 004468e0  unit: seg_00440000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004468e0
//
// 004468e0  8b442404             mov eax, dword ptr [esp + 4]
// 004468e4  3b052c748800         cmp eax, dword ptr [0x88742c]
// 004468ea  7412                 je 0x4468fe
// 004468ec  a32c748800           mov dword ptr [0x88742c], eax
// 004468f1  c7442404f0618b00     mov dword ptr [esp + 4], 0x8b61f0
// 004468f9  e942d5ffff           jmp 0x443e40
// 004468fe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
