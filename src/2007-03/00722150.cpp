// roc 2007-03 00722150  unit: seg_00720000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00722150
//
// 00722150  8b442404             mov eax, dword ptr [esp + 4]
// 00722154  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 0072215a  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?setSleepCount@Assembly@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
