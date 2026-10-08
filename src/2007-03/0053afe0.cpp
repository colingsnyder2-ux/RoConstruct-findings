// roc 2007-03 0053afe0  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053afe0
//
// 0053afe0  6aff                 push -1
// 0053afe2  68a81b7500           push 0x751ba8
// 0053afe7  64a100000000         mov eax, dword ptr fs:[0]
// 0053afed  50                   push eax
// 0053afee  64892500000000       mov dword ptr fs:[0], esp
// 0053aff5  83ec08               sub esp, 8
// 0053aff8  56                   push esi
// 0053aff9  8bf1                 mov esi, ecx
// 0053affb  8d4c2404             lea ecx, [esp + 4]
// 0053afff  e84c1e0300           call 0x56ce50
// 0053b004  50                   push eax
// 0053b005  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053b009  50                   push eax
// 0053b00a  8bce                 mov ecx, esi
// 0053b00c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053b014  e827fdffff           call 0x53ad40
// 0053b019  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053b01d  85c9                 test ecx, ecx
// 0053b01f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053b027  7408                 je 0x53b031
// 0053b029  8b11                 mov edx, dword ptr [ecx]
// 0053b02b  8b02                 mov eax, dword ptr [edx]
// 0053b02d  6a01                 push 1
// 0053b02f  ffd0                 call eax
// 0053b031  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053b035  8bc6                 mov eax, esi
// 0053b037  5e                   pop esi
// 0053b038  64890d00000000       mov dword ptr fs:[0], ecx
// 0053b03f  83c414               add esp, 0x14
// 0053b042  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
