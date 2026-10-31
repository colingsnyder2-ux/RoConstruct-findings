// roc 2009-06 00404820  unit: ATL::CRegObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00404820
//
// 00404820  56                   push esi
// 00404821  8d7104               lea esi, [ecx + 4]
// 00404824  8d442408             lea eax, [esp + 8]
// 00404828  50                   push eax
// 00404829  8bce                 mov ecx, esi
// 0040482b  e8b0f3ffff           call 0x403be0
// 00404830  83f8ff               cmp eax, -1
// 00404833  7506                 jne 0x40483b
// 00404835  33c0                 xor eax, eax
// 00404837  5e                   pop esi
// 00404838  c20400               ret 4
// 0040483b  85c0                 test eax, eax
// 0040483d  7c0f                 jl 0x40484e
// 0040483f  3b4608               cmp eax, dword ptr [esi + 8]
// 00404842  7d0a                 jge 0x40484e
// 00404844  8b4e04               mov ecx, dword ptr [esi + 4]
// 00404847  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0040484a  5e                   pop esi
// 0040484b  c20400               ret 4
// 0040484e  6a00                 push 0
// 00404850  6a00                 push 0
// 00404852  6a01                 push 1
// 00404854  688c0000c0           push 0xc000008c
// 00404859  ff15fce18900         call dword ptr [0x89e1fc]
// copied from an identical function in another client (function ?StrFromMap@CRegObject@ATL@@QAEPB_WPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp