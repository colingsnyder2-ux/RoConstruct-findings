// roc 2010-06 005a4f40  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4f40
//
// 005a4f40  56                   push esi
// 005a4f41  8b742408             mov esi, dword ptr [esp + 8]
// 005a4f45  85f6                 test esi, esi
// 005a4f47  742c                 je 0x5a4f75
// 005a4f49  8b0e                 mov ecx, dword ptr [esi]
// 005a4f4b  85c9                 test ecx, ecx
// 005a4f4d  7409                 je 0x5a4f58
// 005a4f4f  8b01                 mov eax, dword ptr [ecx]
// 005a4f51  8b5004               mov edx, dword ptr [eax + 4]
// 005a4f54  ffd2                 call edx
// 005a4f56  eb05                 jmp 0x5a4f5d
// 005a4f58  b80c93b700           mov eax, 0xb7930c
// 005a4f5d  6838c2b700           push 0xb7c238
// 005a4f62  8bc8                 mov ecx, eax
// 005a4f64  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a4f6a  84c0                 test al, al
// 005a4f6c  7407                 je 0x5a4f75
// 005a4f6e  8b06                 mov eax, dword ptr [esi]
// 005a4f70  83c004               add eax, 4
// 005a4f73  5e                   pop esi
// 005a4f74  c3                   ret 
// 005a4f75  33c0                 xor eax, eax
// 005a4f77  5e                   pop esi
// 005a4f78  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@M@boost@@YAPAMPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
