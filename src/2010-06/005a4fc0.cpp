// roc 2010-06 005a4fc0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4fc0
//
// 005a4fc0  56                   push esi
// 005a4fc1  8b742408             mov esi, dword ptr [esp + 8]
// 005a4fc5  85f6                 test esi, esi
// 005a4fc7  742c                 je 0x5a4ff5
// 005a4fc9  8b0e                 mov ecx, dword ptr [esi]
// 005a4fcb  85c9                 test ecx, ecx
// 005a4fcd  7409                 je 0x5a4fd8
// 005a4fcf  8b01                 mov eax, dword ptr [ecx]
// 005a4fd1  8b5004               mov edx, dword ptr [eax + 4]
// 005a4fd4  ffd2                 call edx
// 005a4fd6  eb05                 jmp 0x5a4fdd
// 005a4fd8  b80c93b700           mov eax, 0xb7930c
// 005a4fdd  683c93b700           push 0xb7933c
// 005a4fe2  8bc8                 mov ecx, eax
// 005a4fe4  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a4fea  84c0                 test al, al
// 005a4fec  7407                 je 0x5a4ff5
// 005a4fee  8b06                 mov eax, dword ptr [esi]
// 005a4ff0  83c004               add eax, 4
// 005a4ff3  5e                   pop esi
// 005a4ff4  c3                   ret 
// 005a4ff5  33c0                 xor eax, eax
// 005a4ff7  5e                   pop esi
// 005a4ff8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
