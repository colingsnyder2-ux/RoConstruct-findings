// from server: 100% by auto
// roc 2008-06 00611720  unit: seg_00610000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611720
//
// 00611720  56                   push esi
// 00611721  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611725  57                   push edi
// 00611726  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061172a  56                   push esi
// 0061172b  57                   push edi
// 0061172c  e8cf060000           call 0x611e00
// 00611731  83c408               add esp, 8
// 00611734  85c0                 test eax, eax
// 00611736  7f2d                 jg 0x611765
// 00611738  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061173c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00611740  85ff                 test edi, edi
// 00611742  7430                 je 0x611774
// 00611744  85c0                 test eax, eax
// 00611746  7416                 je 0x61175e
// 00611748  8bc8                 mov ecx, eax
// 0061174a  8d7101               lea esi, [ecx + 1]
// 0061174d  8d4900               lea ecx, [ecx]
// 00611750  8a11                 mov dl, byte ptr [ecx]
// 00611752  41                   inc ecx
// 00611753  84d2                 test dl, dl
// 00611755  75f9                 jne 0x611750
// 00611757  2bce                 sub ecx, esi
// 00611759  890f                 mov dword ptr [edi], ecx
// 0061175b  5f                   pop edi
// 0061175c  5e                   pop esi
// 0061175d  c3                   ret 
// 0061175e  33c9                 xor ecx, ecx
// 00611760  890f                 mov dword ptr [edi], ecx
// 00611762  5f                   pop edi
// 00611763  5e                   pop esi
// 00611764  c3                   ret 
// 00611765  8b442418             mov eax, dword ptr [esp + 0x18]
// 00611769  50                   push eax
// 0061176a  56                   push esi
// 0061176b  57                   push edi
// 0061176c  e84fffffff           call 0x6116c0
// 00611771  83c40c               add esp, 0xc
// 00611774  5f                   pop edi
// 00611775  5e                   pop esi
// 00611776  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
