// roc 2010-06 005936a0  unit: RBX::VTaskSchedulerSettings::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005936a0
//
// 005936a0  8b442404             mov eax, dword ptr [esp + 4]
// 005936a4  3b058c5abe00         cmp eax, dword ptr [0xbe5a8c]
// 005936aa  7412                 je 0x5936be
// 005936ac  a38c5abe00           mov dword ptr [0xbe5a8c], eax
// 005936b1  c7442404b0afc000     mov dword ptr [esp + 4], 0xc0afb0
// 005936b9  e9b28de7ff           jmp 0x40c470
// 005936be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
