// roc 2008-06 00620190  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620190
//
// 00620190  6aff                 push -1
// 00620192  6838077d00           push 0x7d0738
// 00620197  64a100000000         mov eax, dword ptr fs:[0]
// 0062019d  50                   push eax
// 0062019e  64892500000000       mov dword ptr fs:[0], esp
// 006201a5  51                   push ecx
// 006201a6  53                   push ebx
// 006201a7  55                   push ebp
// 006201a8  56                   push esi
// 006201a9  57                   push edi
// 006201aa  8bf9                 mov edi, ecx
// 006201ac  6a10                 push 0x10
// 006201ae  897c2414             mov dword ptr [esp + 0x14], edi
// 006201b2  e869070800           call 0x6a0920
// 006201b7  33db                 xor ebx, ebx
// 006201b9  83c404               add esp, 4
// 006201bc  3bc3                 cmp eax, ebx
// 006201be  740d                 je 0x6201cd
// 006201c0  895804               mov dword ptr [eax + 4], ebx
// 006201c3  895808               mov dword ptr [eax + 8], ebx
// 006201c6  88580c               mov byte ptr [eax + 0xc], bl
// 006201c9  8bf0                 mov esi, eax
// 006201cb  eb02                 jmp 0x6201cf
// 006201cd  33f6                 xor esi, esi
// 006201cf  8d6f04               lea ebp, [edi + 4]
// 006201d2  56                   push esi
// 006201d3  8bcd                 mov ecx, ebp
// 006201d5  8937                 mov dword ptr [edi], esi
// 006201d7  e8c4f3ffff           call 0x61f5a0
// 006201dc  56                   push esi
// 006201dd  56                   push esi
// 006201de  55                   push ebp
// 006201df  e82cd2e5ff           call 0x47d410
// 006201e4  83c40c               add esp, 0xc
// 006201e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006201eb  50                   push eax
// 006201ec  8d4f08               lea ecx, [edi + 8]
// 006201ef  895c2420             mov dword ptr [esp + 0x20], ebx
// 006201f3  e8483cf7ff           call 0x593e40
// 006201f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006201fc  8bc7                 mov eax, edi
// 006201fe  5f                   pop edi
// 006201ff  5e                   pop esi
// 00620200  5d                   pop ebp
// 00620201  5b                   pop ebx
// 00620202  64890d00000000       mov dword ptr fs:[0], ecx
// 00620209  83c410               add esp, 0x10
// 0062020c  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
