// roc 2007-03 004126b0  unit: seg_00410000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004126b0
//
// 004126b0  56                   push esi
// 004126b1  8b742408             mov esi, dword ptr [esp + 8]
// 004126b5  85f6                 test esi, esi
// 004126b7  742c                 je 0x4126e5
// 004126b9  8b0e                 mov ecx, dword ptr [esi]
// 004126bb  85c9                 test ecx, ecx
// 004126bd  7409                 je 0x4126c8
// 004126bf  8b01                 mov eax, dword ptr [ecx]
// 004126c1  8b5004               mov edx, dword ptr [eax + 4]
// 004126c4  ffd2                 call edx
// 004126c6  eb05                 jmp 0x4126cd
// 004126c8  b87c198800           mov eax, 0x88197c
// 004126cd  68b0198800           push 0x8819b0
// 004126d2  8bc8                 mov ecx, eax
// 004126d4  ff1574e97700         call dword ptr [0x77e974]
// 004126da  84c0                 test al, al
// 004126dc  7407                 je 0x4126e5
// 004126de  8b06                 mov eax, dword ptr [esi]
// 004126e0  83c004               add eax, 4
// 004126e3  5e                   pop esi
// 004126e4  c3                   ret 
// 004126e5  33c0                 xor eax, eax
// 004126e7  5e                   pop esi
// 004126e8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
