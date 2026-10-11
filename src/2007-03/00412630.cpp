// roc 2007-03 00412630  unit: seg_00410000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412630
//
// 00412630  56                   push esi
// 00412631  8b742408             mov esi, dword ptr [esp + 8]
// 00412635  85f6                 test esi, esi
// 00412637  742c                 je 0x412665
// 00412639  8b0e                 mov ecx, dword ptr [esi]
// 0041263b  85c9                 test ecx, ecx
// 0041263d  7409                 je 0x412648
// 0041263f  8b01                 mov eax, dword ptr [ecx]
// 00412641  8b5004               mov edx, dword ptr [eax + 4]
// 00412644  ffd2                 call edx
// 00412646  eb05                 jmp 0x41264d
// 00412648  b87c198800           mov eax, 0x88197c
// 0041264d  6888198800           push 0x881988
// 00412652  8bc8                 mov ecx, eax
// 00412654  ff1574e97700         call dword ptr [0x77e974]
// 0041265a  84c0                 test al, al
// 0041265c  7407                 je 0x412665
// 0041265e  8b06                 mov eax, dword ptr [esi]
// 00412660  83c004               add eax, 4
// 00412663  5e                   pop esi
// 00412664  c3                   ret 
// 00412665  33c0                 xor eax, eax
// 00412667  5e                   pop esi
// 00412668  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
