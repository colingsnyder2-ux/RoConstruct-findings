// roc 2008-06 00448ed0  unit: CRenderSettings  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448ed0
//
// 00448ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00448ed4  3b0568069300         cmp eax, dword ptr [0x930668]
// 00448eda  7412                 je 0x448eee
// 00448edc  a368069300           mov dword ptr [0x930668], eax
// 00448ee1  c7442404d4d49600     mov dword ptr [esp + 4], 0x96d4d4
// 00448ee9  e9124cfcff           jmp 0x40db00
// 00448eee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
