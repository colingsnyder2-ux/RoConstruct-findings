// roc 2011-06 005b9a10  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9a10
//
// 005b9a10  56                   push esi
// 005b9a11  8b742408             mov esi, dword ptr [esp + 8]
// 005b9a15  85f6                 test esi, esi
// 005b9a17  742c                 je 0x5b9a45
// 005b9a19  8b0e                 mov ecx, dword ptr [esi]
// 005b9a1b  85c9                 test ecx, ecx
// 005b9a1d  7409                 je 0x5b9a28
// 005b9a1f  8b01                 mov eax, dword ptr [ecx]
// 005b9a21  8b5004               mov edx, dword ptr [eax + 4]
// 005b9a24  ffd2                 call edx
// 005b9a26  eb05                 jmp 0x5b9a2d
// 005b9a28  b8447ac000           mov eax, 0xc07a44
// 005b9a2d  68d0abc000           push 0xc0abd0
// 005b9a32  8bc8                 mov ecx, eax
// 005b9a34  ff15500aa400         call dword ptr [0xa40a50]
// 005b9a3a  84c0                 test al, al
// 005b9a3c  7407                 je 0x5b9a45
// 005b9a3e  8b06                 mov eax, dword ptr [esi]
// 005b9a40  83c008               add eax, 8
// 005b9a43  5e                   pop esi
// 005b9a44  c3                   ret 
// 005b9a45  33c0                 xor eax, eax
// 005b9a47  5e                   pop esi
// 005b9a48  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@N@boost@@YAPANPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
