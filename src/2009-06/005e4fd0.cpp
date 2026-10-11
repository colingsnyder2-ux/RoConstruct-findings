// roc 2009-06 005e4fd0  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4fd0
//
// 005e4fd0  56                   push esi
// 005e4fd1  8b742408             mov esi, dword ptr [esp + 8]
// 005e4fd5  85f6                 test esi, esi
// 005e4fd7  742c                 je 0x5e5005
// 005e4fd9  8b0e                 mov ecx, dword ptr [esi]
// 005e4fdb  85c9                 test ecx, ecx
// 005e4fdd  7409                 je 0x5e4fe8
// 005e4fdf  8b01                 mov eax, dword ptr [ecx]
// 005e4fe1  8b5004               mov edx, dword ptr [eax + 4]
// 005e4fe4  ffd2                 call edx
// 005e4fe6  eb05                 jmp 0x5e4fed
// 005e4fe8  b8d4c29d00           mov eax, 0x9dc2d4
// 005e4fed  6804c39d00           push 0x9dc304
// 005e4ff2  8bc8                 mov ecx, eax
// 005e4ff4  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e4ffa  84c0                 test al, al
// 005e4ffc  7407                 je 0x5e5005
// 005e4ffe  8b06                 mov eax, dword ptr [esi]
// 005e5000  83c004               add eax, 4
// 005e5003  5e                   pop esi
// 005e5004  c3                   ret 
// 005e5005  33c0                 xor eax, eax
// 005e5007  5e                   pop esi
// 005e5008  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
