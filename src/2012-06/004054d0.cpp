// roc 2012-06 004054d0  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004054d0
//
// 004054d0  56                   push esi
// 004054d1  8d7104               lea esi, [ecx + 4]
// 004054d4  8d442408             lea eax, [esp + 8]
// 004054d8  50                   push eax
// 004054d9  8bce                 mov ecx, esi
// 004054db  e8b0f5ffff           call 0x404a90
// 004054e0  83f8ff               cmp eax, -1
// 004054e3  7506                 jne 0x4054eb
// 004054e5  33c0                 xor eax, eax
// 004054e7  5e                   pop esi
// 004054e8  c20400               ret 4
// 004054eb  85c0                 test eax, eax
// 004054ed  7c0f                 jl 0x4054fe
// 004054ef  3b4608               cmp eax, dword ptr [esi + 8]
// 004054f2  7d0a                 jge 0x4054fe
// 004054f4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004054f7  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004054fa  5e                   pop esi
// 004054fb  c20400               ret 4
// 004054fe  6a00                 push 0
// 00405500  6a00                 push 0
// 00405502  6a01                 push 1
// 00405504  688c0000c0           push 0xc000008c
// 00405509  ff15c021b200         call dword ptr [0xb221c0]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp