// roc 2008-06 0040a420  unit: boost::any::_N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a420
//
// 0040a420  56                   push esi
// 0040a421  6a08                 push 8
// 0040a423  8bf1                 mov esi, ecx
// 0040a425  e8f6642900           call 0x6a0920
// 0040a42a  83c404               add esp, 4
// 0040a42d  85c0                 test eax, eax
// 0040a42f  7411                 je 0x40a442
// 0040a431  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040a435  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0040a43b  8a11                 mov dl, byte ptr [ecx]
// 0040a43d  885004               mov byte ptr [eax + 4], dl
// 0040a440  eb02                 jmp 0x40a444
// 0040a442  33c0                 xor eax, eax
// 0040a444  8d542408             lea edx, [esp + 8]
// 0040a448  8bc8                 mov ecx, eax
// 0040a44a  3bd6                 cmp edx, esi
// 0040a44c  7404                 je 0x40a452
// 0040a44e  8b0e                 mov ecx, dword ptr [esi]
// 0040a450  8906                 mov dword ptr [esi], eax
// 0040a452  85c9                 test ecx, ecx
// 0040a454  7408                 je 0x40a45e
// 0040a456  8b01                 mov eax, dword ptr [ecx]
// 0040a458  8b10                 mov edx, dword ptr [eax]
// 0040a45a  6a01                 push 1
// 0040a45c  ffd2                 call edx
// 0040a45e  8bc6                 mov eax, esi
// 0040a460  5e                   pop esi
// 0040a461  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
