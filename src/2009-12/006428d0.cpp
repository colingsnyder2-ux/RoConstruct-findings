// roc 2009-12 006428d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006428d0
//
// 006428d0  56                   push esi
// 006428d1  8b742408             mov esi, dword ptr [esp + 8]
// 006428d5  85f6                 test esi, esi
// 006428d7  742c                 je 0x642905
// 006428d9  8b0e                 mov ecx, dword ptr [esi]
// 006428db  85c9                 test ecx, ecx
// 006428dd  7409                 je 0x6428e8
// 006428df  8b01                 mov eax, dword ptr [ecx]
// 006428e1  8b5004               mov edx, dword ptr [eax + 4]
// 006428e4  ffd2                 call edx
// 006428e6  eb05                 jmp 0x6428ed
// 006428e8  b80c03b000           mov eax, 0xb0030c
// 006428ed  68dc33b000           push 0xb033dc
// 006428f2  8bc8                 mov ecx, eax
// 006428f4  ff1568b79800         call dword ptr [0x98b768]
// 006428fa  84c0                 test al, al
// 006428fc  7407                 je 0x642905
// 006428fe  8b06                 mov eax, dword ptr [esi]
// 00642900  83c008               add eax, 8
// 00642903  5e                   pop esi
// 00642904  c3                   ret 
// 00642905  33c0                 xor eax, eax
// 00642907  5e                   pop esi
// 00642908  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@N@boost@@YAPANPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
