// roc 2007-08 00537a90  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537a90
//
// 00537a90  56                   push esi
// 00537a91  8bf1                 mov esi, ecx
// 00537a93  e8a85d0300           call 0x56d840
// 00537a98  6a08                 push 8
// 00537a9a  8906                 mov dword ptr [esi], eax
// 00537a9c  e855840f00           call 0x62fef6
// 00537aa1  83c404               add esp, 4
// 00537aa4  85c0                 test eax, eax
// 00537aa6  7411                 je 0x537ab9
// 00537aa8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537aac  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 00537ab2  8a11                 mov dl, byte ptr [ecx]
// 00537ab4  885004               mov byte ptr [eax + 4], dl
// 00537ab7  eb02                 jmp 0x537abb
// 00537ab9  33c0                 xor eax, eax
// 00537abb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537abe  85c9                 test ecx, ecx
// 00537ac0  894604               mov dword ptr [esi + 4], eax
// 00537ac3  7408                 je 0x537acd
// 00537ac5  8b01                 mov eax, dword ptr [ecx]
// 00537ac7  8b10                 mov edx, dword ptr [eax]
// 00537ac9  6a01                 push 1
// 00537acb  ffd2                 call edx
// 00537acd  8bc6                 mov eax, esi
// 00537acf  5e                   pop esi
// 00537ad0  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@Value@Reflection@RBX@@QAEAAV012@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
