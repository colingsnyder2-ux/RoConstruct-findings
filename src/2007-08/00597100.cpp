// roc 2007-08 00597100  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597100
//
// 00597100  83ec08               sub esp, 8
// 00597103  8bc1                 mov eax, ecx
// 00597105  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00597108  034c240c             add ecx, dword ptr [esp + 0xc]
// 0059710c  8b4028               mov eax, dword ptr [eax + 0x28]
// 0059710f  56                   push esi
// 00597110  ffd0                 call eax
// 00597112  dd5c2404             fstp qword ptr [esp + 4]
// 00597116  e80568fdff           call 0x56d920
// 0059711b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059711f  6a10                 push 0x10
// 00597121  8906                 mov dword ptr [esi], eax
// 00597123  e8ce8d0900           call 0x62fef6
// 00597128  83c404               add esp, 4
// 0059712b  85c0                 test eax, eax
// 0059712d  740f                 je 0x59713e
// 0059712f  dd442404             fld qword ptr [esp + 4]
// 00597133  c700b49f7a00         mov dword ptr [eax], 0x7a9fb4
// 00597139  dd5808               fstp qword ptr [eax + 8]
// 0059713c  eb02                 jmp 0x597140
// 0059713e  33c0                 xor eax, eax
// 00597140  8b4e04               mov ecx, dword ptr [esi + 4]
// 00597143  85c9                 test ecx, ecx
// 00597145  894604               mov dword ptr [esi + 4], eax
// 00597148  5e                   pop esi
// 00597149  7408                 je 0x597153
// 0059714b  8b11                 mov edx, dword ptr [ecx]
// 0059714d  8b02                 mov eax, dword ptr [edx]
// 0059714f  6a01                 push 1
// 00597151  ffd0                 call eax
// 00597153  83c408               add esp, 8
// 00597156  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ??$call@N@?$BoundFuncDesc@VLighting@RBX@@$$A6ANXZ$0A@@Reflection@RBX@@ABEXPAVLighting@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
