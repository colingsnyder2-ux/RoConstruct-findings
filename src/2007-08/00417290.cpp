// from server: 100% by auto
// roc 2007-08 00417290  unit: boost::X::U?$last_value::?$holder  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417290
//
// 00417290  56                   push esi
// 00417291  57                   push edi
// 00417292  8bf9                 mov edi, ecx
// 00417294  8b4704               mov eax, dword ptr [edi + 4]
// 00417297  8b30                 mov esi, dword ptr [eax]
// 00417299  8900                 mov dword ptr [eax], eax
// 0041729b  8b4704               mov eax, dword ptr [edi + 4]
// 0041729e  894004               mov dword ptr [eax + 4], eax
// 004172a1  3b7704               cmp esi, dword ptr [edi + 4]
// 004172a4  c7470800000000       mov dword ptr [edi + 8], 0
// 004172ab  741e                 je 0x4172cb
// 004172ad  53                   push ebx
// 004172ae  8bff                 mov edi, edi
// 004172b0  8b1e                 mov ebx, dword ptr [esi]
// 004172b2  8d4e08               lea ecx, [esi + 8]
// 004172b5  e8a6113100           call 0x728460
// 004172ba  56                   push esi
// 004172bb  e8a2892100           call 0x62fc62
// 004172c0  83c404               add esp, 4
// 004172c3  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004172c6  8bf3                 mov esi, ebx
// 004172c8  75e6                 jne 0x4172b0
// 004172ca  5b                   pop ebx
// 004172cb  5f                   pop edi
// 004172cc  5e                   pop esi
// 004172cd  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
