// roc 2010-06 005936d0  unit: RBX::VTaskSchedulerSettings::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005936d0
//
// 005936d0  8b442404             mov eax, dword ptr [esp + 4]
// 005936d4  3b05a421bb00         cmp eax, dword ptr [0xbb21a4]
// 005936da  7412                 je 0x5936ee
// 005936dc  a3a421bb00           mov dword ptr [0xbb21a4], eax
// 005936e1  c7442404a4adc000     mov dword ptr [esp + 4], 0xc0ada4
// 005936e9  e9828de7ff           jmp 0x40c470
// 005936ee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
