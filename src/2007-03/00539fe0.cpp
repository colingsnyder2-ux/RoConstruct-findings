// roc 2007-03 00539fe0  unit: seg_00530000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539fe0
//
// 00539fe0  53                   push ebx
// 00539fe1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00539fe5  56                   push esi
// 00539fe6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00539fea  57                   push edi
// 00539feb  53                   push ebx
// 00539fec  56                   push esi
// 00539fed  e86eef0700           call 0x5b8f60
// 00539ff2  8bf8                 mov edi, eax
// 00539ff4  83c408               add esp, 8
// 00539ff7  85ff                 test edi, edi
// 00539ff9  7456                 je 0x53a051
// 00539ffb  53                   push ebx
// 00539ffc  56                   push esi
// 00539ffd  e8eef30700           call 0x5b93f0
// 0053a002  83c408               add esp, 8
// 0053a005  85c0                 test eax, eax
// 0053a007  743d                 je 0x53a046
// 0053a009  a144828a00           mov eax, dword ptr [0x8a8244]
// 0053a00e  50                   push eax
// 0053a00f  68f0d8ffff           push 0xffffd8f0
// 0053a014  56                   push esi
// 0053a015  e8b6f20700           call 0x5b92d0
// 0053a01a  6afe                 push -2
// 0053a01c  6aff                 push -1
// 0053a01e  56                   push esi
// 0053a01f  e8fcec0700           call 0x5b8d20
// 0053a024  83c418               add esp, 0x18
// 0053a027  85c0                 test eax, eax
// 0053a029  7426                 je 0x53a051
// 0053a02b  6afd                 push -3
// 0053a02d  56                   push esi
// 0053a02e  e82dea0700           call 0x5b8a60
// 0053a033  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053a037  83c408               add esp, 8
// 0053a03a  57                   push edi
// 0053a03b  e810f7ffff           call 0x539750
// 0053a040  5f                   pop edi
// 0053a041  5e                   pop esi
// 0053a042  b001                 mov al, 1
// 0053a044  5b                   pop ebx
// 0053a045  c3                   ret 
// 0053a046  6afe                 push -2
// 0053a048  56                   push esi
// 0053a049  e812ea0700           call 0x5b8a60
// 0053a04e  83c408               add esp, 8
// 0053a051  5f                   pop edi
// 0053a052  5e                   pop esi
// 0053a053  32c0                 xor al, al
// 0053a055  5b                   pop ebx
// 0053a056  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
