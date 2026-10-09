// roc 2008-06 0061f960  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f960
//
// 0061f960  6aff                 push -1
// 0061f962  6803957d00           push 0x7d9503
// 0061f967  64a100000000         mov eax, dword ptr fs:[0]
// 0061f96d  50                   push eax
// 0061f96e  64892500000000       mov dword ptr fs:[0], esp
// 0061f975  51                   push ecx
// 0061f976  56                   push esi
// 0061f977  57                   push edi
// 0061f978  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061f97c  8b07                 mov eax, dword ptr [edi]
// 0061f97e  8bf1                 mov esi, ecx
// 0061f980  8906                 mov dword ptr [esi], eax
// 0061f982  8b4704               mov eax, dword ptr [edi + 4]
// 0061f985  89742408             mov dword ptr [esp + 8], esi
// 0061f989  894604               mov dword ptr [esi + 4], eax
// 0061f98c  85c0                 test eax, eax
// 0061f98e  740c                 je 0x61f99c
// 0061f990  83c004               add eax, 4
// 0061f993  b901000000           mov ecx, 1
// 0061f998  f00fc108             lock xadd dword ptr [eax], ecx
// 0061f99c  8b5708               mov edx, dword ptr [edi + 8]
// 0061f99f  8d470c               lea eax, [edi + 0xc]
// 0061f9a2  50                   push eax
// 0061f9a3  8d4e0c               lea ecx, [esi + 0xc]
// 0061f9a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061f9ae  895608               mov dword ptr [esi + 8], edx
// 0061f9b1  e82a4bf7ff           call 0x5944e0
// 0061f9b6  8d4f30               lea ecx, [edi + 0x30]
// 0061f9b9  51                   push ecx
// 0061f9ba  8d4e30               lea ecx, [esi + 0x30]
// 0061f9bd  c644241801           mov byte ptr [esp + 0x18], 1
// 0061f9c2  e8a945f7ff           call 0x593f70
// 0061f9c7  8b5750               mov edx, dword ptr [edi + 0x50]
// 0061f9ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061f9ce  895650               mov dword ptr [esi + 0x50], edx
// 0061f9d1  5f                   pop edi
// 0061f9d2  8bc6                 mov eax, esi
// 0061f9d4  5e                   pop esi
// 0061f9d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f9dc  83c410               add esp, 0x10
// 0061f9df  c20400               ret 4
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??0FunctionScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
