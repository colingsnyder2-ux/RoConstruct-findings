// roc 2011-06 005b99d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b99d0
//
// 005b99d0  56                   push esi
// 005b99d1  8b742408             mov esi, dword ptr [esp + 8]
// 005b99d5  85f6                 test esi, esi
// 005b99d7  742c                 je 0x5b9a05
// 005b99d9  8b0e                 mov ecx, dword ptr [esi]
// 005b99db  85c9                 test ecx, ecx
// 005b99dd  7409                 je 0x5b99e8
// 005b99df  8b01                 mov eax, dword ptr [ecx]
// 005b99e1  8b5004               mov edx, dword ptr [eax + 4]
// 005b99e4  ffd2                 call edx
// 005b99e6  eb05                 jmp 0x5b99ed
// 005b99e8  b8447ac000           mov eax, 0xc07a44
// 005b99ed  68c4abc000           push 0xc0abc4
// 005b99f2  8bc8                 mov ecx, eax
// 005b99f4  ff15500aa400         call dword ptr [0xa40a50]
// 005b99fa  84c0                 test al, al
// 005b99fc  7407                 je 0x5b9a05
// 005b99fe  8b06                 mov eax, dword ptr [esi]
// 005b9a00  83c004               add eax, 4
// 005b9a03  5e                   pop esi
// 005b9a04  c3                   ret 
// 005b9a05  33c0                 xor eax, eax
// 005b9a07  5e                   pop esi
// 005b9a08  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@M@boost@@YAPAMPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
