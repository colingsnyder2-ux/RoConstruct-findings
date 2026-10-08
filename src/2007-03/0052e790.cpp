// roc 2007-03 0052e790  unit: seg_00520000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052e790
//
// 0052e790  6aff                 push -1
// 0052e792  6808137500           push 0x751308
// 0052e797  64a100000000         mov eax, dword ptr fs:[0]
// 0052e79d  50                   push eax
// 0052e79e  64892500000000       mov dword ptr fs:[0], esp
// 0052e7a5  51                   push ecx
// 0052e7a6  56                   push esi
// 0052e7a7  8bf1                 mov esi, ecx
// 0052e7a9  89742404             mov dword ptr [esp + 4], esi
// 0052e7ad  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0052e7b0  85c9                 test ecx, ecx
// 0052e7b2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052e7ba  7408                 je 0x52e7c4
// 0052e7bc  8b01                 mov eax, dword ptr [ecx]
// 0052e7be  8b10                 mov edx, dword ptr [eax]
// 0052e7c0  6a01                 push 1
// 0052e7c2  ffd2                 call edx
// 0052e7c4  8bce                 mov ecx, esi
// 0052e7c6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0052e7ce  e89da3eeff           call 0x418b70
// 0052e7d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e7d7  5e                   pop esi
// 0052e7d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e7df  83c410               add esp, 0x10
// 0052e7e2  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6AXVContentId@2@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
