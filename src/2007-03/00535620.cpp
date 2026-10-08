// roc 2007-03 00535620  unit: seg_00530000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00535620
//
// 00535620  6aff                 push -1
// 00535622  6808137500           push 0x751308
// 00535627  64a100000000         mov eax, dword ptr fs:[0]
// 0053562d  50                   push eax
// 0053562e  64892500000000       mov dword ptr fs:[0], esp
// 00535635  51                   push ecx
// 00535636  56                   push esi
// 00535637  8bf1                 mov esi, ecx
// 00535639  89742404             mov dword ptr [esp + 4], esi
// 0053563d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00535640  85c9                 test ecx, ecx
// 00535642  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053564a  7408                 je 0x535654
// 0053564c  8b01                 mov eax, dword ptr [ecx]
// 0053564e  8b10                 mov edx, dword ptr [eax]
// 00535650  6a01                 push 1
// 00535652  ffd2                 call edx
// 00535654  8bce                 mov ecx, esi
// 00535656  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053565e  e80d35eeff           call 0x418b70
// 00535663  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00535667  5e                   pop esi
// 00535668  64890d00000000       mov dword ptr fs:[0], ecx
// 0053566f  83c410               add esp, 0x10
// 00535672  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
