// roc 2007-08 00537a40  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537a40
//
// 00537a40  56                   push esi
// 00537a41  8bf1                 mov esi, ecx
// 00537a43  e8685e0300           call 0x56d8b0
// 00537a48  6a08                 push 8
// 00537a4a  8906                 mov dword ptr [esi], eax
// 00537a4c  e8a5840f00           call 0x62fef6
// 00537a51  83c404               add esp, 4
// 00537a54  85c0                 test eax, eax
// 00537a56  7411                 je 0x537a69
// 00537a58  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537a5c  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 00537a62  d901                 fld dword ptr [ecx]
// 00537a64  d95804               fstp dword ptr [eax + 4]
// 00537a67  eb02                 jmp 0x537a6b
// 00537a69  33c0                 xor eax, eax
// 00537a6b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537a6e  85c9                 test ecx, ecx
// 00537a70  894604               mov dword ptr [esi + 4], eax
// 00537a73  7408                 je 0x537a7d
// 00537a75  8b11                 mov edx, dword ptr [ecx]
// 00537a77  8b02                 mov eax, dword ptr [edx]
// 00537a79  6a01                 push 1
// 00537a7b  ffd0                 call eax
// 00537a7d  8bc6                 mov eax, esi
// 00537a7f  5e                   pop esi
// 00537a80  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@Value@Reflection@RBX@@QAEAAV012@ABM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
