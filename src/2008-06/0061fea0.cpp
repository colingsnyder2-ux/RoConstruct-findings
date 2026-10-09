// roc 2008-06 0061fea0  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061fea0
//
// 0061fea0  6aff                 push -1
// 0061fea2  6838077d00           push 0x7d0738
// 0061fea7  64a100000000         mov eax, dword ptr fs:[0]
// 0061fead  50                   push eax
// 0061feae  64892500000000       mov dword ptr fs:[0], esp
// 0061feb5  51                   push ecx
// 0061feb6  53                   push ebx
// 0061feb7  56                   push esi
// 0061feb8  57                   push edi
// 0061feb9  8bf1                 mov esi, ecx
// 0061febb  6a10                 push 0x10
// 0061febd  89742410             mov dword ptr [esp + 0x10], esi
// 0061fec1  e85a0a0800           call 0x6a0920
// 0061fec6  33db                 xor ebx, ebx
// 0061fec8  83c404               add esp, 4
// 0061fecb  3bc3                 cmp eax, ebx
// 0061fecd  740d                 je 0x61fedc
// 0061fecf  895804               mov dword ptr [eax + 4], ebx
// 0061fed2  895808               mov dword ptr [eax + 8], ebx
// 0061fed5  88580c               mov byte ptr [eax + 0xc], bl
// 0061fed8  8bf8                 mov edi, eax
// 0061feda  eb02                 jmp 0x61fede
// 0061fedc  33ff                 xor edi, edi
// 0061fede  55                   push ebp
// 0061fedf  8d6e04               lea ebp, [esi + 4]
// 0061fee2  57                   push edi
// 0061fee3  8bcd                 mov ecx, ebp
// 0061fee5  893e                 mov dword ptr [esi], edi
// 0061fee7  e8b4f6ffff           call 0x61f5a0
// 0061feec  57                   push edi
// 0061feed  57                   push edi
// 0061feee  55                   push ebp
// 0061feef  e81cd5e5ff           call 0x47d410
// 0061fef4  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0061fef8  57                   push edi
// 0061fef9  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0061fefd  e8de87f8ff           call 0x5a86e0
// 0061ff02  83c410               add esp, 0x10
// 0061ff05  894608               mov dword ptr [esi + 8], eax
// 0061ff08  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061ff0c  50                   push eax
// 0061ff0d  57                   push edi
// 0061ff0e  8d4e0c               lea ecx, [esi + 0xc]
// 0061ff11  e8ea44f7ff           call 0x594400
// 0061ff16  c74630c8eb8000       mov dword ptr [esi + 0x30], 0x80ebc8
// 0061ff1d  8b0d6c5c9700         mov ecx, dword ptr [0x975c6c]
// 0061ff23  894e34               mov dword ptr [esi + 0x34], ecx
// 0061ff26  8b15705c9700         mov edx, dword ptr [0x975c70]
// 0061ff2c  8bc2                 mov eax, edx
// 0061ff2e  895638               mov dword ptr [esi + 0x38], edx
// 0061ff31  5d                   pop ebp
// 0061ff32  3bc3                 cmp eax, ebx
// 0061ff34  740c                 je 0x61ff42
// 0061ff36  83c004               add eax, 4
// 0061ff39  b901000000           mov ecx, 1
// 0061ff3e  f00fc108             lock xadd dword ptr [eax], ecx
// 0061ff42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061ff46  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0061ff49  895e40               mov dword ptr [esi + 0x40], ebx
// 0061ff4c  895e44               mov dword ptr [esi + 0x44], ebx
// 0061ff4f  895e48               mov dword ptr [esi + 0x48], ebx
// 0061ff52  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0061ff55  895e50               mov dword ptr [esi + 0x50], ebx
// 0061ff58  5f                   pop edi
// 0061ff59  8bc6                 mov eax, esi
// 0061ff5b  5e                   pop esi
// 0061ff5c  5b                   pop ebx
// 0061ff5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0061ff64  83c410               add esp, 0x10
// 0061ff67  c20800               ret 8
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??0FunctionScriptSlot@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
