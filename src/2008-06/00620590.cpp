// roc 2008-06 00620590  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620590
//
// 00620590  6aff                 push -1
// 00620592  6881967d00           push 0x7d9681
// 00620597  64a100000000         mov eax, dword ptr fs:[0]
// 0062059d  50                   push eax
// 0062059e  64892500000000       mov dword ptr fs:[0], esp
// 006205a5  51                   push ecx
// 006205a6  56                   push esi
// 006205a7  8bf1                 mov esi, ecx
// 006205a9  c744240400000000     mov dword ptr [esp + 4], 0
// 006205b1  8b442470             mov eax, dword ptr [esp + 0x70]
// 006205b5  50                   push eax
// 006205b6  83ec54               sub esp, 0x54
// 006205b9  8d542474             lea edx, [esp + 0x74]
// 006205bd  8bcc                 mov ecx, esp
// 006205bf  89a424c8000000       mov dword ptr [esp + 0xc8], esp
// 006205c6  52                   push edx
// 006205c7  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 006205cf  e88cf3ffff           call 0x61f960
// 006205d4  e8c7fcffff           call 0x6202a0
// 006205d9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006205dc  8b11                 mov edx, dword ptr [ecx]
// 006205de  83c454               add esp, 0x54
// 006205e1  50                   push eax
// 006205e2  8b4204               mov eax, dword ptr [edx + 4]
// 006205e5  56                   push esi
// 006205e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 006205ea  56                   push esi
// 006205eb  ffd0                 call eax
// 006205ed  8d4c241c             lea ecx, [esp + 0x1c]
// 006205f1  c744240401000000     mov dword ptr [esp + 4], 1
// 006205f9  c644241000           mov byte ptr [esp + 0x10], 0
// 006205fe  e8bdecffff           call 0x61f2c0
// 00620603  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00620607  8bc6                 mov eax, esi
// 00620609  64890d00000000       mov dword ptr fs:[0], ecx
// 00620610  5e                   pop esi
// 00620611  83c410               add esp, 0x10
// 00620614  c25c00               ret 0x5c
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$connectGeneric@VFunctionScriptSlot@@@SignalInstance@Reflection@RBX@@QAE?AVconnection@signals@boost@@VFunctionScriptSlot@@W4connect_position@45@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
