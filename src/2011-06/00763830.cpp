// from server: 100% by auto
// roc 2011-06 00763830  unit: seg_00760000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763830
//
// 00763830  56                   push esi
// 00763831  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00763835  8d860f270000         lea eax, [esi + 0x270f]
// 0076383b  57                   push edi
// 0076383c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00763840  3d0f270000           cmp eax, 0x270f
// 00763845  770d                 ja 0x763854
// 00763847  57                   push edi
// 00763848  e813ebffff           call 0x762360
// 0076384d  83c404               add esp, 4
// 00763850  8d740601             lea esi, [esi + eax + 1]
// 00763854  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00763858  51                   push ecx
// 00763859  56                   push esi
// 0076385a  57                   push edi
// 0076385b  e870ffffff           call 0x7637d0
// 00763860  83c40c               add esp, 0xc
// 00763863  85c0                 test eax, eax
// 00763865  7503                 jne 0x76386a
// 00763867  5f                   pop edi
// 00763868  5e                   pop esi
// 00763869  c3                   ret 
// 0076386a  56                   push esi
// 0076386b  57                   push edi
// 0076386c  e8afecffff           call 0x762520
// 00763871  6a01                 push 1
// 00763873  6a01                 push 1
// 00763875  57                   push edi
// 00763876  e805f8ffff           call 0x763080
// 0076387b  83c414               add esp, 0x14
// 0076387e  5f                   pop edi
// 0076387f  b801000000           mov eax, 1
// 00763884  5e                   pop esi
// 00763885  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_callmeta)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
