// from server: 100% by tester
// roc 2007-03 00539ee0  unit: seg_00530000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539ee0
//
// 00539ee0  53                   push ebx
// 00539ee1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00539ee5  56                   push esi
// 00539ee6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00539eea  57                   push edi
// 00539eeb  53                   push ebx
// 00539eec  56                   push esi
// 00539eed  e86ef00700           call 0x5b8f60
// 00539ef2  8bf8                 mov edi, eax
// 00539ef4  83c408               add esp, 8
// 00539ef7  85ff                 test edi, edi
// 00539ef9  7456                 je 0x539f51
// 00539efb  53                   push ebx
// 00539efc  56                   push esi
// 00539efd  e8eef40700           call 0x5b93f0
// 00539f02  83c408               add esp, 8
// 00539f05  85c0                 test eax, eax
// 00539f07  743d                 je 0x539f46
// 00539f09  a150828a00           mov eax, dword ptr [0x8a8250]
// 00539f0e  50                   push eax
// 00539f0f  68f0d8ffff           push 0xffffd8f0
// 00539f14  56                   push esi
// 00539f15  e8b6f30700           call 0x5b92d0
// 00539f1a  6afe                 push -2
// 00539f1c  6aff                 push -1
// 00539f1e  56                   push esi
// 00539f1f  e8fced0700           call 0x5b8d20
// 00539f24  83c418               add esp, 0x18
// 00539f27  85c0                 test eax, eax
// 00539f29  7426                 je 0x539f51
// 00539f2b  6afd                 push -3
// 00539f2d  56                   push esi
// 00539f2e  e82deb0700           call 0x5b8a60
// 00539f33  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00539f37  83c408               add esp, 8
// 00539f3a  57                   push edi
// 00539f3b  e880f7ffff           call 0x5396c0
// 00539f40  5f                   pop edi
// 00539f41  5e                   pop esi
// 00539f42  b001                 mov al, 1
// 00539f44  5b                   pop ebx
// 00539f45  c3                   ret 
// 00539f46  6afe                 push -2
// 00539f48  56                   push esi
// 00539f49  e812eb0700           call 0x5b8a60
// 00539f4e  83c408               add esp, 8
// 00539f51  5f                   pop edi
// 00539f52  5e                   pop esi
// 00539f53  32c0                 xor al, al
// 00539f55  5b                   pop ebx
// 00539f56  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
