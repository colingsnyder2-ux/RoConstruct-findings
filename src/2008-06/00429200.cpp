// roc 2008-06 00429200  unit: MainLogManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429200
//
// 00429200  55                   push ebp
// 00429201  8bec                 mov ebp, esp
// 00429203  6aff                 push -1
// 00429205  68b0f27b00           push 0x7bf2b0
// 0042920a  64a100000000         mov eax, dword ptr fs:[0]
// 00429210  50                   push eax
// 00429211  64892500000000       mov dword ptr fs:[0], esp
// 00429218  83ec24               sub esp, 0x24
// 0042921b  8b4508               mov eax, dword ptr [ebp + 8]
// 0042921e  53                   push ebx
// 0042921f  56                   push esi
// 00429220  57                   push edi
// 00429221  8965f0               mov dword ptr [ebp - 0x10], esp
// 00429224  8bf1                 mov esi, ecx
// 00429226  85c0                 test eax, eax
// 00429228  7516                 jne 0x429240
// 0042922a  8d4de0               lea ecx, [ebp - 0x20]
// 0042922d  e8fef11300           call 0x568430
// 00429232  68304f8d00           push 0x8d4f30
// 00429237  8d45e0               lea eax, [ebp - 0x20]
// 0042923a  50                   push eax
// 0042923b  e84c832700           call 0x6a158c
// 00429240  50                   push eax
// 00429241  8bce                 mov ecx, esi
// 00429243  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042924a  e881e31700           call 0x5a75d0
// 0042924f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00429252  5f                   pop edi
// 00429253  8bc6                 mov eax, esi
// 00429255  5e                   pop esi
// 00429256  64890d00000000       mov dword ptr fs:[0], ecx
// 0042925d  5b                   pop ebx
// 0042925e  8be5                 mov esp, ebp
// 00429260  5d                   pop ebp
// 00429261  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0tss@detail@boost@@QAE@PAV?$function1@XPAXV?$allocator@Vfunction_base@boost@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
