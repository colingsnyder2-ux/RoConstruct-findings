// roc 2007-08 00538610  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538610
//
// 00538610  53                   push ebx
// 00538611  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00538615  56                   push esi
// 00538616  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053861a  57                   push edi
// 0053861b  53                   push ebx
// 0053861c  56                   push esi
// 0053861d  e86e540800           call 0x5bda90
// 00538622  8bf8                 mov edi, eax
// 00538624  83c408               add esp, 8
// 00538627  85ff                 test edi, edi
// 00538629  7456                 je 0x538681
// 0053862b  53                   push ebx
// 0053862c  56                   push esi
// 0053862d  e8ee580800           call 0x5bdf20
// 00538632  83c408               add esp, 8
// 00538635  85c0                 test eax, eax
// 00538637  743d                 je 0x538676
// 00538639  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 0053863e  50                   push eax
// 0053863f  68f0d8ffff           push 0xffffd8f0
// 00538644  56                   push esi
// 00538645  e8b6570800           call 0x5bde00
// 0053864a  6afe                 push -2
// 0053864c  6aff                 push -1
// 0053864e  56                   push esi
// 0053864f  e8fc510800           call 0x5bd850
// 00538654  83c418               add esp, 0x18
// 00538657  85c0                 test eax, eax
// 00538659  7426                 je 0x538681
// 0053865b  6afd                 push -3
// 0053865d  56                   push esi
// 0053865e  e82d4f0800           call 0x5bd590
// 00538663  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00538667  83c408               add esp, 8
// 0053866a  57                   push edi
// 0053866b  e800f6ffff           call 0x537c70
// 00538670  5f                   pop edi
// 00538671  5e                   pop esi
// 00538672  b001                 mov al, 1
// 00538674  5b                   pop ebx
// 00538675  c3                   ret 
// 00538676  6afe                 push -2
// 00538678  56                   push esi
// 00538679  e8124f0800           call 0x5bd590
// 0053867e  83c408               add esp, 8
// 00538681  5f                   pop edi
// 00538682  5e                   pop esi
// 00538683  32c0                 xor al, al
// 00538685  5b                   pop ebx
// 00538686  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
