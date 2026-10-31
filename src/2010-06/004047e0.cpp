// roc 2010-06 004047e0  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004047e0
//
// 004047e0  56                   push esi
// 004047e1  8d7104               lea esi, [ecx + 4]
// 004047e4  8d442408             lea eax, [esp + 8]
// 004047e8  50                   push eax
// 004047e9  8bce                 mov ecx, esi
// 004047eb  e860f2ffff           call 0x403a50
// 004047f0  83f8ff               cmp eax, -1
// 004047f3  7506                 jne 0x4047fb
// 004047f5  33c0                 xor eax, eax
// 004047f7  5e                   pop esi
// 004047f8  c20400               ret 4
// 004047fb  85c0                 test eax, eax
// 004047fd  7c0f                 jl 0x40480e
// 004047ff  3b4608               cmp eax, dword ptr [esi + 8]
// 00404802  7d0a                 jge 0x40480e
// 00404804  8b4e04               mov ecx, dword ptr [esi + 4]
// 00404807  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0040480a  5e                   pop esi
// 0040480b  c20400               ret 4
// 0040480e  6a00                 push 0
// 00404810  6a00                 push 0
// 00404812  6a01                 push 1
// 00404814  688c0000c0           push 0xc000008c
// 00404819  ff15a4a39e00         call dword ptr [0x9ea3a4]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp