// roc 2007-03 0053a060  unit: seg_00530000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a060
//
// 0053a060  53                   push ebx
// 0053a061  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0053a065  56                   push esi
// 0053a066  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053a06a  57                   push edi
// 0053a06b  53                   push ebx
// 0053a06c  56                   push esi
// 0053a06d  e8eeee0700           call 0x5b8f60
// 0053a072  8bf8                 mov edi, eax
// 0053a074  83c408               add esp, 8
// 0053a077  85ff                 test edi, edi
// 0053a079  7456                 je 0x53a0d1
// 0053a07b  53                   push ebx
// 0053a07c  56                   push esi
// 0053a07d  e86ef30700           call 0x5b93f0
// 0053a082  83c408               add esp, 8
// 0053a085  85c0                 test eax, eax
// 0053a087  743d                 je 0x53a0c6
// 0053a089  a14c828a00           mov eax, dword ptr [0x8a824c]
// 0053a08e  50                   push eax
// 0053a08f  68f0d8ffff           push 0xffffd8f0
// 0053a094  56                   push esi
// 0053a095  e836f20700           call 0x5b92d0
// 0053a09a  6afe                 push -2
// 0053a09c  6aff                 push -1
// 0053a09e  56                   push esi
// 0053a09f  e87cec0700           call 0x5b8d20
// 0053a0a4  83c418               add esp, 0x18
// 0053a0a7  85c0                 test eax, eax
// 0053a0a9  7426                 je 0x53a0d1
// 0053a0ab  6afd                 push -3
// 0053a0ad  56                   push esi
// 0053a0ae  e8ade90700           call 0x5b8a60
// 0053a0b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053a0b7  83c408               add esp, 8
// 0053a0ba  57                   push edi
// 0053a0bb  e8e0f6ffff           call 0x5397a0
// 0053a0c0  5f                   pop edi
// 0053a0c1  5e                   pop esi
// 0053a0c2  b001                 mov al, 1
// 0053a0c4  5b                   pop ebx
// 0053a0c5  c3                   ret 
// 0053a0c6  6afe                 push -2
// 0053a0c8  56                   push esi
// 0053a0c9  e892e90700           call 0x5b8a60
// 0053a0ce  83c408               add esp, 8
// 0053a0d1  5f                   pop edi
// 0053a0d2  5e                   pop esi
// 0053a0d3  32c0                 xor al, al
// 0053a0d5  5b                   pop ebx
// 0053a0d6  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
