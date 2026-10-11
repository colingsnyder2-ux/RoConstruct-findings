// roc 2009-06 005e4f90  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e4f90
//
// 005e4f90  56                   push esi
// 005e4f91  8b742408             mov esi, dword ptr [esp + 8]
// 005e4f95  85f6                 test esi, esi
// 005e4f97  742c                 je 0x5e4fc5
// 005e4f99  8b0e                 mov ecx, dword ptr [esi]
// 005e4f9b  85c9                 test ecx, ecx
// 005e4f9d  7409                 je 0x5e4fa8
// 005e4f9f  8b01                 mov eax, dword ptr [ecx]
// 005e4fa1  8b5004               mov edx, dword ptr [eax + 4]
// 005e4fa4  ffd2                 call edx
// 005e4fa6  eb05                 jmp 0x5e4fad
// 005e4fa8  b8d4c29d00           mov eax, 0x9dc2d4
// 005e4fad  68f4f29d00           push 0x9df2f4
// 005e4fb2  8bc8                 mov ecx, eax
// 005e4fb4  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e4fba  84c0                 test al, al
// 005e4fbc  7407                 je 0x5e4fc5
// 005e4fbe  8b06                 mov eax, dword ptr [esi]
// 005e4fc0  83c008               add eax, 8
// 005e4fc3  5e                   pop esi
// 005e4fc4  c3                   ret 
// 005e4fc5  33c0                 xor eax, eax
// 005e4fc7  5e                   pop esi
// 005e4fc8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@N@boost@@YAPANPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
