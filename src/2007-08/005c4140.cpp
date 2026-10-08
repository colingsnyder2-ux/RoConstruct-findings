// roc 2007-08 005c4140  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4140
//
// 005c4140  6aff                 push -1
// 005c4142  6853977500           push 0x759753
// 005c4147  64a100000000         mov eax, dword ptr fs:[0]
// 005c414d  50                   push eax
// 005c414e  64892500000000       mov dword ptr fs:[0], esp
// 005c4155  51                   push ecx
// 005c4156  56                   push esi
// 005c4157  57                   push edi
// 005c4158  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005c415c  8b07                 mov eax, dword ptr [edi]
// 005c415e  8bf1                 mov esi, ecx
// 005c4160  8906                 mov dword ptr [esi], eax
// 005c4162  8b4704               mov eax, dword ptr [edi + 4]
// 005c4165  85c0                 test eax, eax
// 005c4167  89742408             mov dword ptr [esp + 8], esi
// 005c416b  894604               mov dword ptr [esi + 4], eax
// 005c416e  740c                 je 0x5c417c
// 005c4170  83c004               add eax, 4
// 005c4173  b901000000           mov ecx, 1
// 005c4178  f00fc108             lock xadd dword ptr [eax], ecx
// 005c417c  8b5708               mov edx, dword ptr [edi + 8]
// 005c417f  8d470c               lea eax, [edi + 0xc]
// 005c4182  50                   push eax
// 005c4183  8d4e0c               lea ecx, [esi + 0xc]
// 005c4186  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c418e  895608               mov dword ptr [esi + 8], edx
// 005c4191  e85a8dfaff           call 0x56cef0
// 005c4196  83c730               add edi, 0x30
// 005c4199  57                   push edi
// 005c419a  8d4e30               lea ecx, [esi + 0x30]
// 005c419d  c644241801           mov byte ptr [esp + 0x18], 1
// 005c41a2  e87988faff           call 0x56ca20
// 005c41a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c41ab  5f                   pop edi
// 005c41ac  8bc6                 mov eax, esi
// 005c41ae  5e                   pop esi
// 005c41af  64890d00000000       mov dword ptr fs:[0], ecx
// 005c41b6  83c410               add esp, 0x10
// 005c41b9  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0FunctionScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
