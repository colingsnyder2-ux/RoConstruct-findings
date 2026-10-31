// roc 2011-06 004050b0  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004050b0
//
// 004050b0  56                   push esi
// 004050b1  8d7104               lea esi, [ecx + 4]
// 004050b4  8d442408             lea eax, [esp + 8]
// 004050b8  50                   push eax
// 004050b9  8bce                 mov ecx, esi
// 004050bb  e830f2ffff           call 0x4042f0
// 004050c0  83f8ff               cmp eax, -1
// 004050c3  7506                 jne 0x4050cb
// 004050c5  33c0                 xor eax, eax
// 004050c7  5e                   pop esi
// 004050c8  c20400               ret 4
// 004050cb  85c0                 test eax, eax
// 004050cd  7c0f                 jl 0x4050de
// 004050cf  3b4608               cmp eax, dword ptr [esi + 8]
// 004050d2  7d0a                 jge 0x4050de
// 004050d4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004050d7  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004050da  5e                   pop esi
// 004050db  c20400               ret 4
// 004050de  6a00                 push 0
// 004050e0  6a00                 push 0
// 004050e2  6a01                 push 1
// 004050e4  688c0000c0           push 0xc000008c
// 004050e9  ff15ac03a400         call dword ptr [0xa403ac]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp