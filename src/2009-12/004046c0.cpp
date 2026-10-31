// roc 2009-12 004046c0  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004046c0
//
// 004046c0  56                   push esi
// 004046c1  8d7104               lea esi, [ecx + 4]
// 004046c4  8d442408             lea eax, [esp + 8]
// 004046c8  50                   push eax
// 004046c9  8bce                 mov ecx, esi
// 004046cb  e8e0f1ffff           call 0x4038b0
// 004046d0  83f8ff               cmp eax, -1
// 004046d3  7506                 jne 0x4046db
// 004046d5  33c0                 xor eax, eax
// 004046d7  5e                   pop esi
// 004046d8  c20400               ret 4
// 004046db  85c0                 test eax, eax
// 004046dd  7c0f                 jl 0x4046ee
// 004046df  3b4608               cmp eax, dword ptr [esi + 8]
// 004046e2  7d0a                 jge 0x4046ee
// 004046e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004046e7  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004046ea  5e                   pop esi
// 004046eb  c20400               ret 4
// 004046ee  6a00                 push 0
// 004046f0  6a00                 push 0
// 004046f2  6a01                 push 1
// 004046f4  688c0000c0           push 0xc000008c
// 004046f9  ff1534b29800         call dword ptr [0x98b234]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp