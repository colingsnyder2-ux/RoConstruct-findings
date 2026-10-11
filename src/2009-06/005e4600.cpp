// roc 2009-06 005e4600  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4600
//
// 005e4600  56                   push esi
// 005e4601  8b742408             mov esi, dword ptr [esp + 8]
// 005e4605  85f6                 test esi, esi
// 005e4607  742c                 je 0x5e4635
// 005e4609  8b0e                 mov ecx, dword ptr [esi]
// 005e460b  85c9                 test ecx, ecx
// 005e460d  7409                 je 0x5e4618
// 005e460f  8b01                 mov eax, dword ptr [ecx]
// 005e4611  8b5004               mov edx, dword ptr [eax + 4]
// 005e4614  ffd2                 call edx
// 005e4616  eb05                 jmp 0x5e461d
// 005e4618  b8d4c29d00           mov eax, 0x9dc2d4
// 005e461d  6800f39d00           push 0x9df300
// 005e4622  8bc8                 mov ecx, eax
// 005e4624  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e462a  84c0                 test al, al
// 005e462c  7407                 je 0x5e4635
// 005e462e  8b06                 mov eax, dword ptr [esi]
// 005e4630  83c004               add eax, 4
// 005e4633  5e                   pop esi
// 005e4634  c3                   ret 
// 005e4635  33c0                 xor eax, eax
// 005e4637  5e                   pop esi
// 005e4638  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
