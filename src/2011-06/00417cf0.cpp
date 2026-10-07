// roc 2011-06 00417cf0  unit: VCRbxObject::?$CComObjectNoLock  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417cf0
//
// 00417cf0  6aff                 push -1
// 00417cf2  6881669e00           push 0x9e6681
// 00417cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00417cfd  50                   push eax
// 00417cfe  64892500000000       mov dword ptr fs:[0], esp
// 00417d05  51                   push ecx
// 00417d06  56                   push esi
// 00417d07  8b742418             mov esi, dword ptr [esp + 0x18]
// 00417d0b  89742418             mov dword ptr [esp + 0x18], esi
// 00417d0f  89742404             mov dword ptr [esp + 4], esi
// 00417d13  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00417d1b  85f6                 test esi, esi
// 00417d1d  742e                 je 0x417d4d
// 00417d1f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00417d23  8b08                 mov ecx, dword ptr [eax]
// 00417d25  890e                 mov dword ptr [esi], ecx
// 00417d27  8b4804               mov ecx, dword ptr [eax + 4]
// 00417d2a  85c9                 test ecx, ecx
// 00417d2c  741a                 je 0x417d48
// 00417d2e  8b11                 mov edx, dword ptr [ecx]
// 00417d30  8b4208               mov eax, dword ptr [edx + 8]
// 00417d33  ffd0                 call eax
// 00417d35  894604               mov dword ptr [esi + 4], eax
// 00417d38  5e                   pop esi
// 00417d39  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00417d3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00417d44  83c410               add esp, 0x10
// 00417d47  c3                   ret 
// 00417d48  33c0                 xor eax, eax
// 00417d4a  894604               mov dword ptr [esi + 4], eax
// 00417d4d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417d51  5e                   pop esi
// 00417d52  64890d00000000       mov dword ptr fs:[0], ecx
// 00417d59  83c410               add esp, 0x10
// 00417d5c  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Construct@VValue@Reflection@RBX@@V123@@std@@YAXPAVValue@Reflection@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
