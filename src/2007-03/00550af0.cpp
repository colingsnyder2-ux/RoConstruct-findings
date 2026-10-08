// roc 2007-03 00550af0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550af0
//
// 00550af0  8b442404             mov eax, dword ptr [esp + 4]
// 00550af4  8981f0000000         mov dword ptr [ecx + 0xf0], eax
// 00550afa  c74424048cbf8b00     mov dword ptr [esp + 4], 0x8bbf8c
// 00550b02  e93933efff           jmp 0x443e40
// library rbxgs/v8datamodel\Team.cpp (function ?setScore@Team@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
