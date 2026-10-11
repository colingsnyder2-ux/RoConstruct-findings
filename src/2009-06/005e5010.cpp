// roc 2009-06 005e5010  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5010
//
// 005e5010  56                   push esi
// 005e5011  8b742408             mov esi, dword ptr [esp + 8]
// 005e5015  85f6                 test esi, esi
// 005e5017  742c                 je 0x5e5045
// 005e5019  8b0e                 mov ecx, dword ptr [esi]
// 005e501b  85c9                 test ecx, ecx
// 005e501d  7409                 je 0x5e5028
// 005e501f  8b01                 mov eax, dword ptr [ecx]
// 005e5021  8b5004               mov edx, dword ptr [eax + 4]
// 005e5024  ffd2                 call edx
// 005e5026  eb05                 jmp 0x5e502d
// 005e5028  b8d4c29d00           mov eax, 0x9dc2d4
// 005e502d  68dcf29d00           push 0x9df2dc
// 005e5032  8bc8                 mov ecx, eax
// 005e5034  ff15a4e98900         call dword ptr [0x89e9a4]
// 005e503a  84c0                 test al, al
// 005e503c  7407                 je 0x5e5045
// 005e503e  8b06                 mov eax, dword ptr [esi]
// 005e5040  83c004               add eax, 4
// 005e5043  5e                   pop esi
// 005e5044  c3                   ret 
// 005e5045  33c0                 xor eax, eax
// 005e5047  5e                   pop esi
// 005e5048  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
