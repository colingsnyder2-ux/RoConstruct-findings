// roc 2009-12 00642950  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642950
//
// 00642950  56                   push esi
// 00642951  8b742408             mov esi, dword ptr [esp + 8]
// 00642955  85f6                 test esi, esi
// 00642957  742c                 je 0x642985
// 00642959  8b0e                 mov ecx, dword ptr [esi]
// 0064295b  85c9                 test ecx, ecx
// 0064295d  7409                 je 0x642968
// 0064295f  8b01                 mov eax, dword ptr [ecx]
// 00642961  8b5004               mov edx, dword ptr [eax + 4]
// 00642964  ffd2                 call edx
// 00642966  eb05                 jmp 0x64296d
// 00642968  b80c03b000           mov eax, 0xb0030c
// 0064296d  68c433b000           push 0xb033c4
// 00642972  8bc8                 mov ecx, eax
// 00642974  ff1568b79800         call dword ptr [0x98b768]
// 0064297a  84c0                 test al, al
// 0064297c  7407                 je 0x642985
// 0064297e  8b06                 mov eax, dword ptr [esi]
// 00642980  83c004               add eax, 4
// 00642983  5e                   pop esi
// 00642984  c3                   ret 
// 00642985  33c0                 xor eax, eax
// 00642987  5e                   pop esi
// 00642988  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
