// roc 2009-06 006bad20  unit: RBX::UniversalTool  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bad20
//
// 006bad20  56                   push esi
// 006bad21  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bad25  57                   push edi
// 006bad26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bad2a  56                   push esi
// 006bad2b  57                   push edi
// 006bad2c  e83fe2ffff           call 0x6b8f70
// 006bad31  83c408               add esp, 8
// 006bad34  85c0                 test eax, eax
// 006bad36  7f2d                 jg 0x6bad65
// 006bad38  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006bad3c  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bad40  85ff                 test edi, edi
// 006bad42  7430                 je 0x6bad74
// 006bad44  85c0                 test eax, eax
// 006bad46  7416                 je 0x6bad5e
// 006bad48  8bc8                 mov ecx, eax
// 006bad4a  8d7101               lea esi, [ecx + 1]
// 006bad4d  8d4900               lea ecx, [ecx]
// 006bad50  8a11                 mov dl, byte ptr [ecx]
// 006bad52  41                   inc ecx
// 006bad53  84d2                 test dl, dl
// 006bad55  75f9                 jne 0x6bad50
// 006bad57  2bce                 sub ecx, esi
// 006bad59  890f                 mov dword ptr [edi], ecx
// 006bad5b  5f                   pop edi
// 006bad5c  5e                   pop esi
// 006bad5d  c3                   ret 
// 006bad5e  33c9                 xor ecx, ecx
// 006bad60  890f                 mov dword ptr [edi], ecx
// 006bad62  5f                   pop edi
// 006bad63  5e                   pop esi
// 006bad64  c3                   ret 
// 006bad65  8b442418             mov eax, dword ptr [esp + 0x18]
// 006bad69  50                   push eax
// 006bad6a  56                   push esi
// 006bad6b  57                   push edi
// 006bad6c  e84fffffff           call 0x6bacc0
// 006bad71  83c40c               add esp, 0xc
// 006bad74  5f                   pop edi
// 006bad75  5e                   pop esi
// 006bad76  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
