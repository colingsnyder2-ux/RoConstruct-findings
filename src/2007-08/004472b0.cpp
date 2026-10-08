// roc 2007-08 004472b0  unit: VCRenderSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004472b0
//
// 004472b0  8b442404             mov eax, dword ptr [esp + 4]
// 004472b4  3b0554858800         cmp eax, dword ptr [0x888554]
// 004472ba  7412                 je 0x4472ce
// 004472bc  a354858800           mov dword ptr [0x888554], eax
// 004472c1  c7442404f8bc8b00     mov dword ptr [esp + 4], 0x8bbcf8
// 004472c9  e942d4ffff           jmp 0x444710
// 004472ce  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
