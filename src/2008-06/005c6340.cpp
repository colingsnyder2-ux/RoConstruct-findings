// roc 2008-06 005c6340  unit: RBX::VArrowTool::?$TToolVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6340
//
// 005c6340  6aff                 push -1
// 005c6342  68f8a97d00           push 0x7da9f8
// 005c6347  64a100000000         mov eax, dword ptr fs:[0]
// 005c634d  50                   push eax
// 005c634e  64892500000000       mov dword ptr fs:[0], esp
// 005c6355  51                   push ecx
// 005c6356  56                   push esi
// 005c6357  8bf1                 mov esi, ecx
// 005c6359  89742404             mov dword ptr [esp + 4], esi
// 005c635d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005c6360  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c6368  85c9                 test ecx, ecx
// 005c636a  7413                 je 0x5c637f
// 005c636c  8d4108               lea eax, [ecx + 8]
// 005c636f  83caff               or edx, 0xffffffff
// 005c6372  f00fc110             lock xadd dword ptr [eax], edx
// 005c6376  7507                 jne 0x5c637f
// 005c6378  8b01                 mov eax, dword ptr [ecx]
// 005c637a  8b5008               mov edx, dword ptr [eax + 8]
// 005c637d  ffd2                 call edx
// 005c637f  8bce                 mov ecx, esi
// 005c6381  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c6389  e8f2f30400           call 0x615780
// 005c638e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c6392  5e                   pop esi
// 005c6393  64890d00000000       mov dword ptr fs:[0], ecx
// 005c639a  83c410               add esp, 0x10
// 005c639d  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
