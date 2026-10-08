// roc 2007-03 00418690  unit: seg_00410000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00418690
//
// 00418690  6a08                 push 8
// 00418692  e8715a2000           call 0x61e108
// 00418697  83c404               add esp, 4
// 0041869a  85c0                 test eax, eax
// 0041869c  7407                 je 0x4186a5
// 0041869e  c70084647800         mov dword ptr [eax], 0x786484
// 004186a4  c3                   ret 
// 004186a5  33c0                 xor eax, eax
// 004186a7  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ?clone@?$holder@U?$last_value@X@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
