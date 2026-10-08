// roc 2012-06 0045bec0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0045bec0
//
// 0045bec0  6aff                 push -1
// 0045bec2  68e9f3a900           push 0xa9f3e9
// 0045bec7  64a100000000         mov eax, dword ptr fs:[0]
// 0045becd  50                   push eax
// 0045bece  64892500000000       mov dword ptr fs:[0], esp
// 0045bed5  51                   push ecx
// 0045bed6  56                   push esi
// 0045bed7  8bf1                 mov esi, ecx
// 0045bed9  89742404             mov dword ptr [esp + 4], esi
// 0045bedd  ff155426b200         call dword ptr [0xb22654]
// 0045bee3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045beeb  e890352200           call 0x67f480
// 0045bef0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045bef4  89461c               mov dword ptr [esi + 0x1c], eax
// 0045bef7  8bc6                 mov eax, esi
// 0045bef9  5e                   pop esi
// 0045befa  64890d00000000       mov dword ptr fs:[0], ecx
// 0045bf01  83c410               add esp, 0x10
// 0045bf04  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
