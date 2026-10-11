// roc 2010-06 005a5000  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5000
//
// 005a5000  56                   push esi
// 005a5001  8b742408             mov esi, dword ptr [esp + 8]
// 005a5005  85f6                 test esi, esi
// 005a5007  742c                 je 0x5a5035
// 005a5009  8b0e                 mov ecx, dword ptr [esi]
// 005a500b  85c9                 test ecx, ecx
// 005a500d  7409                 je 0x5a5018
// 005a500f  8b01                 mov eax, dword ptr [ecx]
// 005a5011  8b5004               mov edx, dword ptr [eax + 4]
// 005a5014  ffd2                 call edx
// 005a5016  eb05                 jmp 0x5a501d
// 005a5018  b80c93b700           mov eax, 0xb7930c
// 005a501d  682cc2b700           push 0xb7c22c
// 005a5022  8bc8                 mov ecx, eax
// 005a5024  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 005a502a  84c0                 test al, al
// 005a502c  7407                 je 0x5a5035
// 005a502e  8b06                 mov eax, dword ptr [esi]
// 005a5030  83c004               add eax, 4
// 005a5033  5e                   pop esi
// 005a5034  c3                   ret 
// 005a5035  33c0                 xor eax, eax
// 005a5037  5e                   pop esi
// 005a5038  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
