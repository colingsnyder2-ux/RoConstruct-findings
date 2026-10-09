// roc 2009-12 00409a60  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409a60
//
// 00409a60  56                   push esi
// 00409a61  6a08                 push 8
// 00409a63  8bf1                 mov esi, ecx
// 00409a65  e8f69d3e00           call 0x7f3860
// 00409a6a  83c404               add esp, 4
// 00409a6d  85c0                 test eax, eax
// 00409a6f  7411                 je 0x409a82
// 00409a71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409a75  c700ecfe9900         mov dword ptr [eax], 0x99feec
// 00409a7b  8a11                 mov dl, byte ptr [ecx]
// 00409a7d  885004               mov byte ptr [eax + 4], dl
// 00409a80  eb02                 jmp 0x409a84
// 00409a82  33c0                 xor eax, eax
// 00409a84  8d542408             lea edx, [esp + 8]
// 00409a88  8bc8                 mov ecx, eax
// 00409a8a  3bd6                 cmp edx, esi
// 00409a8c  7404                 je 0x409a92
// 00409a8e  8b0e                 mov ecx, dword ptr [esi]
// 00409a90  8906                 mov dword ptr [esi], eax
// 00409a92  85c9                 test ecx, ecx
// 00409a94  7408                 je 0x409a9e
// 00409a96  8b01                 mov eax, dword ptr [ecx]
// 00409a98  8b10                 mov edx, dword ptr [eax]
// 00409a9a  6a01                 push 1
// 00409a9c  ffd2                 call edx
// 00409a9e  8bc6                 mov eax, esi
// 00409aa0  5e                   pop esi
// 00409aa1  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
