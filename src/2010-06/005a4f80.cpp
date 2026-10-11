// roc 2010-06 005a4f80  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4f80
//
// 005a4f80  56                   push esi
// 005a4f81  8b742408             mov esi, dword ptr [esp + 8]
// 005a4f85  85f6                 test esi, esi
// 005a4f87  742c                 je 0x5a4fb5
// 005a4f89  8b0e                 mov ecx, dword ptr [esi]
// 005a4f8b  85c9                 test ecx, ecx
// 005a4f8d  7409                 je 0x5a4f98
// 005a4f8f  8b01                 mov eax, dword ptr [ecx]
// 005a4f91  8b5004               mov edx, dword ptr [eax + 4]
// 005a4f94  ffd2                 call edx
// 005a4f96  eb05                 jmp 0x5a4f9d
// 005a4f98  b80c93b700           mov eax, 0xb7930c
// 005a4f9d  6844c2b700           push 0xb7c244
// 005a4fa2  8bc8                 mov ecx, eax
// 005a4fa4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a4faa  84c0                 test al, al
// 005a4fac  7407                 je 0x5a4fb5
// 005a4fae  8b06                 mov eax, dword ptr [esi]
// 005a4fb0  83c008               add eax, 8
// 005a4fb3  5e                   pop esi
// 005a4fb4  c3                   ret 
// 005a4fb5  33c0                 xor eax, eax
// 005a4fb7  5e                   pop esi
// 005a4fb8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@N@boost@@YAPANPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
