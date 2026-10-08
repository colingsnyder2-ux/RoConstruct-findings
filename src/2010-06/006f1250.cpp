// roc 2010-06 006f1250  unit: RBX::ContentFilter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f1250
//
// 006f1250  6aff                 push -1
// 006f1252  685b679a00           push 0x9a675b
// 006f1257  64a100000000         mov eax, dword ptr fs:[0]
// 006f125d  50                   push eax
// 006f125e  64892500000000       mov dword ptr fs:[0], esp
// 006f1265  51                   push ecx
// 006f1266  56                   push esi
// 006f1267  8bf1                 mov esi, ecx
// 006f1269  89742404             mov dword ptr [esp + 4], esi
// 006f126d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006f1270  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006f1278  85c9                 test ecx, ecx
// 006f127a  7408                 je 0x6f1284
// 006f127c  8b01                 mov eax, dword ptr [ecx]
// 006f127e  8b10                 mov edx, dword ptr [eax]
// 006f1280  6a01                 push 1
// 006f1282  ffd2                 call edx
// 006f1284  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006f1287  c644241000           mov byte ptr [esp + 0x10], 0
// 006f128c  85c9                 test ecx, ecx
// 006f128e  7408                 je 0x6f1298
// 006f1290  8b01                 mov eax, dword ptr [ecx]
// 006f1292  8b10                 mov edx, dword ptr [eax]
// 006f1294  6a01                 push 1
// 006f1296  ffd2                 call edx
// 006f1298  8d4e18               lea ecx, [esi + 0x18]
// 006f129b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 006f12a3  e81893dbff           call 0x4aa5c0
// 006f12a8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f12ac  c7061809a000         mov dword ptr [esi], 0xa00918
// 006f12b2  5e                   pop esi
// 006f12b3  64890d00000000       mov dword ptr fs:[0], ecx
// 006f12ba  83c410               add esp, 0x10
// 006f12bd  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??1?$BoundFuncDesc@VDebrisService@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
