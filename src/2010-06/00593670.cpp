// roc 2010-06 00593670  unit: RBX::VTaskSchedulerSettings::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00593670
//
// 00593670  8b442404             mov eax, dword ptr [esp + 4]
// 00593674  3b057857be00         cmp eax, dword ptr [0xbe5778]
// 0059367a  7412                 je 0x59368e
// 0059367c  a37857be00           mov dword ptr [0xbe5778], eax
// 00593681  c7442404b4abc000     mov dword ptr [esp + 4], 0xc0abb4
// 00593689  e9e28de7ff           jmp 0x40c470
// 0059368e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
