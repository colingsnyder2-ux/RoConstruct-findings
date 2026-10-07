// roc 2008-06 0061a560  unit: RBX::InletTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a560
//
// 0061a560  53                   push ebx
// 0061a561  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061a565  56                   push esi
// 0061a566  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a56a  57                   push edi
// 0061a56b  53                   push ebx
// 0061a56c  56                   push esi
// 0061a56d  e8ae7bffff           call 0x612120
// 0061a572  8bf8                 mov edi, eax
// 0061a574  83c408               add esp, 8
// 0061a577  85ff                 test edi, edi
// 0061a579  7460                 je 0x61a5db
// 0061a57b  53                   push ebx
// 0061a57c  56                   push esi
// 0061a57d  e82e80ffff           call 0x6125b0
// 0061a582  83c408               add esp, 8
// 0061a585  85c0                 test eax, eax
// 0061a587  7447                 je 0x61a5d0
// 0061a589  a174af9500           mov eax, dword ptr [0x95af74]
// 0061a58e  50                   push eax
// 0061a58f  68f0d8ffff           push 0xffffd8f0
// 0061a594  56                   push esi
// 0061a595  e8f67effff           call 0x612490
// 0061a59a  6afe                 push -2
// 0061a59c  6aff                 push -1
// 0061a59e  56                   push esi
// 0061a59f  e83c79ffff           call 0x611ee0
// 0061a5a4  83c418               add esp, 0x18
// 0061a5a7  85c0                 test eax, eax
// 0061a5a9  7430                 je 0x61a5db
// 0061a5ab  6afd                 push -3
// 0061a5ad  56                   push esi
// 0061a5ae  e86d76ffff           call 0x611c20
// 0061a5b3  8b0f                 mov ecx, dword ptr [edi]
// 0061a5b5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061a5b9  83c408               add esp, 8
// 0061a5bc  83c704               add edi, 4
// 0061a5bf  8908                 mov dword ptr [eax], ecx
// 0061a5c1  57                   push edi
// 0061a5c2  8d4804               lea ecx, [eax + 4]
// 0061a5c5  e8e67fdeff           call 0x4025b0
// 0061a5ca  5f                   pop edi
// 0061a5cb  5e                   pop esi
// 0061a5cc  b001                 mov al, 1
// 0061a5ce  5b                   pop ebx
// 0061a5cf  c3                   ret 
// 0061a5d0  6afe                 push -2
// 0061a5d2  56                   push esi
// 0061a5d3  e84876ffff           call 0x611c20
// 0061a5d8  83c408               add esp, 8
// 0061a5db  5f                   pop edi
// 0061a5dc  5e                   pop esi
// 0061a5dd  32c0                 xor al, al
// 0061a5df  5b                   pop ebx
// 0061a5e0  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
