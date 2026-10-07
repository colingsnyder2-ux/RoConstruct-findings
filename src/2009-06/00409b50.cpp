// roc 2009-06 00409b50  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409b50
//
// 00409b50  56                   push esi
// 00409b51  6a08                 push 8
// 00409b53  8bf1                 mov esi, ecx
// 00409b55  e8deee3000           call 0x718a38
// 00409b5a  83c404               add esp, 4
// 00409b5d  85c0                 test eax, eax
// 00409b5f  7411                 je 0x409b72
// 00409b61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409b65  c700a0d38a00         mov dword ptr [eax], 0x8ad3a0
// 00409b6b  8a11                 mov dl, byte ptr [ecx]
// 00409b6d  885004               mov byte ptr [eax + 4], dl
// 00409b70  eb02                 jmp 0x409b74
// 00409b72  33c0                 xor eax, eax
// 00409b74  8d542408             lea edx, [esp + 8]
// 00409b78  8bc8                 mov ecx, eax
// 00409b7a  3bd6                 cmp edx, esi
// 00409b7c  7404                 je 0x409b82
// 00409b7e  8b0e                 mov ecx, dword ptr [esi]
// 00409b80  8906                 mov dword ptr [esi], eax
// 00409b82  85c9                 test ecx, ecx
// 00409b84  7408                 je 0x409b8e
// 00409b86  8b01                 mov eax, dword ptr [ecx]
// 00409b88  8b10                 mov edx, dword ptr [eax]
// 00409b8a  6a01                 push 1
// 00409b8c  ffd2                 call edx
// 00409b8e  8bc6                 mov eax, esi
// 00409b90  5e                   pop esi
// 00409b91  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
