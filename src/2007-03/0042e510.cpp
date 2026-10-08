// roc 2007-03 0042e510  unit: seg_00420000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e510
//
// 0042e510  56                   push esi
// 0042e511  6a08                 push 8
// 0042e513  8bf1                 mov esi, ecx
// 0042e515  e8eefb1e00           call 0x61e108
// 0042e51a  83c404               add esp, 4
// 0042e51d  85c0                 test eax, eax
// 0042e51f  740e                 je 0x42e52f
// 0042e521  c7003c987800         mov dword ptr [eax], 0x78983c
// 0042e527  8a4e04               mov cl, byte ptr [esi + 4]
// 0042e52a  884804               mov byte ptr [eax + 4], cl
// 0042e52d  5e                   pop esi
// 0042e52e  c3                   ret 
// 0042e52f  33c0                 xor eax, eax
// 0042e531  5e                   pop esi
// 0042e532  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
