// roc 2009-06 005e4f50  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4f50
//
// 005e4f50  56                   push esi
// 005e4f51  8b742408             mov esi, dword ptr [esp + 8]
// 005e4f55  85f6                 test esi, esi
// 005e4f57  742c                 je 0x5e4f85
// 005e4f59  8b0e                 mov ecx, dword ptr [esi]
// 005e4f5b  85c9                 test ecx, ecx
// 005e4f5d  7409                 je 0x5e4f68
// 005e4f5f  8b01                 mov eax, dword ptr [ecx]
// 005e4f61  8b5004               mov edx, dword ptr [eax + 4]
// 005e4f64  ffd2                 call edx
// 005e4f66  eb05                 jmp 0x5e4f6d
// 005e4f68  b8d4c29d00           mov eax, 0x9dc2d4
// 005e4f6d  68e8f29d00           push 0x9df2e8
// 005e4f72  8bc8                 mov ecx, eax
// 005e4f74  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e4f7a  84c0                 test al, al
// 005e4f7c  7407                 je 0x5e4f85
// 005e4f7e  8b06                 mov eax, dword ptr [esi]
// 005e4f80  83c004               add eax, 4
// 005e4f83  5e                   pop esi
// 005e4f84  c3                   ret 
// 005e4f85  33c0                 xor eax, eax
// 005e4f87  5e                   pop esi
// 005e4f88  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@M@boost@@YAPAMPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
