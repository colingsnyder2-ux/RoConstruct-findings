// roc 2007-08 005bf830  unit: boost::detail::H::?$sp_counted_impl_p  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf830
//
// 005bf830  53                   push ebx
// 005bf831  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005bf835  56                   push esi
// 005bf836  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf83a  57                   push edi
// 005bf83b  53                   push ebx
// 005bf83c  56                   push esi
// 005bf83d  e84ee2ffff           call 0x5bda90
// 005bf842  8bf8                 mov edi, eax
// 005bf844  83c408               add esp, 8
// 005bf847  85ff                 test edi, edi
// 005bf849  7460                 je 0x5bf8ab
// 005bf84b  53                   push ebx
// 005bf84c  56                   push esi
// 005bf84d  e8cee6ffff           call 0x5bdf20
// 005bf852  83c408               add esp, 8
// 005bf855  85c0                 test eax, eax
// 005bf857  7447                 je 0x5bf8a0
// 005bf859  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 005bf85e  50                   push eax
// 005bf85f  68f0d8ffff           push 0xffffd8f0
// 005bf864  56                   push esi
// 005bf865  e896e5ffff           call 0x5bde00
// 005bf86a  6afe                 push -2
// 005bf86c  6aff                 push -1
// 005bf86e  56                   push esi
// 005bf86f  e8dcdfffff           call 0x5bd850
// 005bf874  83c418               add esp, 0x18
// 005bf877  85c0                 test eax, eax
// 005bf879  7430                 je 0x5bf8ab
// 005bf87b  6afd                 push -3
// 005bf87d  56                   push esi
// 005bf87e  e80dddffff           call 0x5bd590
// 005bf883  8b0f                 mov ecx, dword ptr [edi]
// 005bf885  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bf889  83c408               add esp, 8
// 005bf88c  83c704               add edi, 4
// 005bf88f  8908                 mov dword ptr [eax], ecx
// 005bf891  57                   push edi
// 005bf892  8d4804               lea ecx, [eax + 4]
// 005bf895  e8c631e4ff           call 0x402a60
// 005bf89a  5f                   pop edi
// 005bf89b  5e                   pop esi
// 005bf89c  b001                 mov al, 1
// 005bf89e  5b                   pop ebx
// 005bf89f  c3                   ret 
// 005bf8a0  6afe                 push -2
// 005bf8a2  56                   push esi
// 005bf8a3  e8e8dcffff           call 0x5bd590
// 005bf8a8  83c408               add esp, 8
// 005bf8ab  5f                   pop edi
// 005bf8ac  5e                   pop esi
// 005bf8ad  32c0                 xor al, al
// 005bf8af  5b                   pop ebx
// 005bf8b0  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
