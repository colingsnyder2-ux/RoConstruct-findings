// roc 2009-06 006bb2e0  unit: RBX::UniversalTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb2e0
//
// 006bb2e0  53                   push ebx
// 006bb2e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006bb2e5  56                   push esi
// 006bb2e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb2ea  57                   push edi
// 006bb2eb  53                   push ebx
// 006bb2ec  56                   push esi
// 006bb2ed  e86edfffff           call 0x6b9260
// 006bb2f2  8bf8                 mov edi, eax
// 006bb2f4  83c408               add esp, 8
// 006bb2f7  85ff                 test edi, edi
// 006bb2f9  7460                 je 0x6bb35b
// 006bb2fb  53                   push ebx
// 006bb2fc  56                   push esi
// 006bb2fd  e80ee4ffff           call 0x6b9710
// 006bb302  83c408               add esp, 8
// 006bb305  85c0                 test eax, eax
// 006bb307  7447                 je 0x6bb350
// 006bb309  a1a428a200           mov eax, dword ptr [0xa228a4]
// 006bb30e  50                   push eax
// 006bb30f  68f0d8ffff           push 0xffffd8f0
// 006bb314  56                   push esi
// 006bb315  e8b6e2ffff           call 0x6b95d0
// 006bb31a  6afe                 push -2
// 006bb31c  6aff                 push -1
// 006bb31e  56                   push esi
// 006bb31f  e82cddffff           call 0x6b9050
// 006bb324  83c418               add esp, 0x18
// 006bb327  85c0                 test eax, eax
// 006bb329  7430                 je 0x6bb35b
// 006bb32b  6afd                 push -3
// 006bb32d  56                   push esi
// 006bb32e  e85ddaffff           call 0x6b8d90
// 006bb333  8b0f                 mov ecx, dword ptr [edi]
// 006bb335  8b442420             mov eax, dword ptr [esp + 0x20]
// 006bb339  83c408               add esp, 8
// 006bb33c  83c704               add edi, 4
// 006bb33f  8908                 mov dword ptr [eax], ecx
// 006bb341  57                   push edi
// 006bb342  8d4804               lea ecx, [eax + 4]
// 006bb345  e8b671d4ff           call 0x402500
// 006bb34a  5f                   pop edi
// 006bb34b  5e                   pop esi
// 006bb34c  b001                 mov al, 1
// 006bb34e  5b                   pop ebx
// 006bb34f  c3                   ret 
// 006bb350  6afe                 push -2
// 006bb352  56                   push esi
// 006bb353  e838daffff           call 0x6b8d90
// 006bb358  83c408               add esp, 8
// 006bb35b  5f                   pop edi
// 006bb35c  5e                   pop esi
// 006bb35d  32c0                 xor al, al
// 006bb35f  5b                   pop ebx
// 006bb360  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
