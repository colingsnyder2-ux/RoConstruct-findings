// roc 2007-03 00403fd0  unit: seg_00400000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403fd0
//
// 00403fd0  56                   push esi
// 00403fd1  8d7104               lea esi, [ecx + 4]
// 00403fd4  8d442408             lea eax, [esp + 8]
// 00403fd8  50                   push eax
// 00403fd9  8bce                 mov ecx, esi
// 00403fdb  e860e8ffff           call 0x402840
// 00403fe0  83f8ff               cmp eax, -1
// 00403fe3  7506                 jne 0x403feb
// 00403fe5  33c0                 xor eax, eax
// 00403fe7  5e                   pop esi
// 00403fe8  c20400               ret 4
// 00403feb  85c0                 test eax, eax
// 00403fed  7c0f                 jl 0x403ffe
// 00403fef  3b4608               cmp eax, dword ptr [esi + 8]
// 00403ff2  7d0a                 jge 0x403ffe
// 00403ff4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00403ff7  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00403ffa  5e                   pop esi
// 00403ffb  c20400               ret 4
// 00403ffe  6a00                 push 0
// 00404000  6a00                 push 0
// 00404002  6a01                 push 1
// 00404004  688c0000c0           push 0xc000008c
// 00404009  ff15ccd27700         call dword ptr [0x77d2cc]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp