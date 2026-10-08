// roc 2007-03 004a2900  unit: seg_004a0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a2900
//
// 004a2900  56                   push esi
// 004a2901  6a08                 push 8
// 004a2903  8bf1                 mov esi, ecx
// 004a2905  e8feb71700           call 0x61e108
// 004a290a  83c404               add esp, 4
// 004a290d  85c0                 test eax, eax
// 004a290f  7411                 je 0x4a2922
// 004a2911  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a2915  c7003c987800         mov dword ptr [eax], 0x78983c
// 004a291b  8a11                 mov dl, byte ptr [ecx]
// 004a291d  885004               mov byte ptr [eax + 4], dl
// 004a2920  eb02                 jmp 0x4a2924
// 004a2922  33c0                 xor eax, eax
// 004a2924  8b0e                 mov ecx, dword ptr [esi]
// 004a2926  85c9                 test ecx, ecx
// 004a2928  8906                 mov dword ptr [esi], eax
// 004a292a  7408                 je 0x4a2934
// 004a292c  8b01                 mov eax, dword ptr [ecx]
// 004a292e  8b10                 mov edx, dword ptr [eax]
// 004a2930  6a01                 push 1
// 004a2932  ffd2                 call edx
// 004a2934  8bc6                 mov eax, esi
// 004a2936  5e                   pop esi
// 004a2937  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
