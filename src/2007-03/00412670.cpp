// roc 2007-03 00412670  unit: seg_00410000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412670
//
// 00412670  56                   push esi
// 00412671  8b742408             mov esi, dword ptr [esp + 8]
// 00412675  85f6                 test esi, esi
// 00412677  742c                 je 0x4126a5
// 00412679  8b0e                 mov ecx, dword ptr [esi]
// 0041267b  85c9                 test ecx, ecx
// 0041267d  7409                 je 0x412688
// 0041267f  8b01                 mov eax, dword ptr [ecx]
// 00412681  8b5004               mov edx, dword ptr [eax + 4]
// 00412684  ffd2                 call edx
// 00412686  eb05                 jmp 0x41268d
// 00412688  b87c198800           mov eax, 0x88197c
// 0041268d  6894198800           push 0x881994
// 00412692  8bc8                 mov ecx, eax
// 00412694  ff1574e97700         call dword ptr [0x77e974]
// 0041269a  84c0                 test al, al
// 0041269c  7407                 je 0x4126a5
// 0041269e  8b06                 mov eax, dword ptr [esi]
// 004126a0  83c004               add eax, 4
// 004126a3  5e                   pop esi
// 004126a4  c3                   ret 
// 004126a5  33c0                 xor eax, eax
// 004126a7  5e                   pop esi
// 004126a8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
