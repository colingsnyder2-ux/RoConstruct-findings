// roc 2007-08 005c4820  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4820
//
// 005c4820  6aff                 push -1
// 005c4822  6891987500           push 0x759891
// 005c4827  64a100000000         mov eax, dword ptr fs:[0]
// 005c482d  50                   push eax
// 005c482e  64892500000000       mov dword ptr fs:[0], esp
// 005c4835  51                   push ecx
// 005c4836  56                   push esi
// 005c4837  8bf1                 mov esi, ecx
// 005c4839  c744240400000000     mov dword ptr [esp + 4], 0
// 005c4841  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005c4845  50                   push eax
// 005c4846  83ec50               sub esp, 0x50
// 005c4849  8d542470             lea edx, [esp + 0x70]
// 005c484d  8bcc                 mov ecx, esp
// 005c484f  89a424c0000000       mov dword ptr [esp + 0xc0], esp
// 005c4856  52                   push edx
// 005c4857  c744246801000000     mov dword ptr [esp + 0x68], 1
// 005c485f  e8dcf8ffff           call 0x5c4140
// 005c4864  e827feffff           call 0x5c4690
// 005c4869  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c486c  8b11                 mov edx, dword ptr [ecx]
// 005c486e  83c450               add esp, 0x50
// 005c4871  50                   push eax
// 005c4872  8b4204               mov eax, dword ptr [edx + 4]
// 005c4875  56                   push esi
// 005c4876  8b742424             mov esi, dword ptr [esp + 0x24]
// 005c487a  56                   push esi
// 005c487b  ffd0                 call eax
// 005c487d  8d4c241c             lea ecx, [esp + 0x1c]
// 005c4881  c744240401000000     mov dword ptr [esp + 4], 1
// 005c4889  c644241000           mov byte ptr [esp + 0x10], 0
// 005c488e  e83defffff           call 0x5c37d0
// 005c4893  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4897  8bc6                 mov eax, esi
// 005c4899  64890d00000000       mov dword ptr fs:[0], ecx
// 005c48a0  5e                   pop esi
// 005c48a1  83c410               add esp, 0x10
// 005c48a4  c25800               ret 0x58
// library rbxgs/script\LuaSignalBridge.cpp (function ??$connectGeneric@VFunctionScriptSlot@@@SignalInstance@Reflection@RBX@@QAE?AVconnection@signals@boost@@VFunctionScriptSlot@@W4connect_position@45@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
