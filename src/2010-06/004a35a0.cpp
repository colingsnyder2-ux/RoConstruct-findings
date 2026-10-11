// roc 2010-06 004a35a0  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a35a0
//
// 004a35a0  56                   push esi
// 004a35a1  8b742408             mov esi, dword ptr [esp + 8]
// 004a35a5  85f6                 test esi, esi
// 004a35a7  742c                 je 0x4a35d5
// 004a35a9  8b0e                 mov ecx, dword ptr [esi]
// 004a35ab  85c9                 test ecx, ecx
// 004a35ad  7409                 je 0x4a35b8
// 004a35af  8b01                 mov eax, dword ptr [ecx]
// 004a35b1  8b5004               mov edx, dword ptr [eax + 4]
// 004a35b4  ffd2                 call edx
// 004a35b6  eb05                 jmp 0x4a35bd
// 004a35b8  b80c93b700           mov eax, 0xb7930c
// 004a35bd  6850c2b700           push 0xb7c250
// 004a35c2  8bc8                 mov ecx, eax
// 004a35c4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 004a35ca  84c0                 test al, al
// 004a35cc  7407                 je 0x4a35d5
// 004a35ce  8b06                 mov eax, dword ptr [esi]
// 004a35d0  83c004               add eax, 4
// 004a35d3  5e                   pop esi
// 004a35d4  c3                   ret 
// 004a35d5  33c0                 xor eax, eax
// 004a35d7  5e                   pop esi
// 004a35d8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
