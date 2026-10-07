// roc 2010-06 00409b00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409b00
//
// 00409b00  56                   push esi
// 00409b01  6a08                 push 8
// 00409b03  8bf1                 mov esi, ecx
// 00409b05  e896de3900           call 0x7a79a0
// 00409b0a  83c404               add esp, 4
// 00409b0d  85c0                 test eax, eax
// 00409b0f  7411                 je 0x409b22
// 00409b11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409b15  c700a40aa000         mov dword ptr [eax], 0xa00aa4
// 00409b1b  8a11                 mov dl, byte ptr [ecx]
// 00409b1d  885004               mov byte ptr [eax + 4], dl
// 00409b20  eb02                 jmp 0x409b24
// 00409b22  33c0                 xor eax, eax
// 00409b24  8d542408             lea edx, [esp + 8]
// 00409b28  8bc8                 mov ecx, eax
// 00409b2a  3bd6                 cmp edx, esi
// 00409b2c  7404                 je 0x409b32
// 00409b2e  8b0e                 mov ecx, dword ptr [esi]
// 00409b30  8906                 mov dword ptr [esi], eax
// 00409b32  85c9                 test ecx, ecx
// 00409b34  7408                 je 0x409b3e
// 00409b36  8b01                 mov eax, dword ptr [ecx]
// 00409b38  8b10                 mov edx, dword ptr [eax]
// 00409b3a  6a01                 push 1
// 00409b3c  ffd2                 call edx
// 00409b3e  8bc6                 mov eax, esi
// 00409b40  5e                   pop esi
// 00409b41  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
