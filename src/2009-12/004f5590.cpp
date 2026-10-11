// roc 2009-12 004f5590  unit: RBX::GfxAttachement  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f5590
//
// 004f5590  56                   push esi
// 004f5591  8b742408             mov esi, dword ptr [esp + 8]
// 004f5595  85f6                 test esi, esi
// 004f5597  742c                 je 0x4f55c5
// 004f5599  8b0e                 mov ecx, dword ptr [esi]
// 004f559b  85c9                 test ecx, ecx
// 004f559d  7409                 je 0x4f55a8
// 004f559f  8b01                 mov eax, dword ptr [ecx]
// 004f55a1  8b5004               mov edx, dword ptr [eax + 4]
// 004f55a4  ffd2                 call edx
// 004f55a6  eb05                 jmp 0x4f55ad
// 004f55a8  b80c03b000           mov eax, 0xb0030c
// 004f55ad  68e833b000           push 0xb033e8
// 004f55b2  8bc8                 mov ecx, eax
// 004f55b4  ff1568b79800         call dword ptr [0x98b768]
// 004f55ba  84c0                 test al, al
// 004f55bc  7407                 je 0x4f55c5
// 004f55be  8b06                 mov eax, dword ptr [esi]
// 004f55c0  83c004               add eax, 4
// 004f55c3  5e                   pop esi
// 004f55c4  c3                   ret 
// 004f55c5  33c0                 xor eax, eax
// 004f55c7  5e                   pop esi
// 004f55c8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
