// from server: 99% by colin
// roc 2007-08 0056d8b0  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d8b0
//
// 0056d8b0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d8b6  6aff                 push -1
// 0056d8b8  682e4a7500           push 0x754ace
// 0056d8bd  50                   push eax
// 0056d8be  b801000000           mov eax, 1
// 0056d8c3  64892500000000       mov dword ptr fs:[0], esp
// 0056d8ca  840588248c00         test byte ptr [0x8c24ec], al
// 0056d8d0  752f                 jne 0x56db31
// 0056d8d2  090588248c00         or dword ptr [0x8c24ec], eax
// 0056d8d8  68ec278800           push 0x89f88c
// 0056d8dd  6870a67900           push 0x7a9ff0
// 0056d8e2  b978248c00           mov ecx, 0x8c24dc
// 0056d8e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d8ef  e80cedffff           call 0x56c600
// 0056d8f4  68e09e7700           push 0x779e90
// 0056d8f9  e825340c00           call 0x630d23
// 0056d8fe  83c404               add esp, 4
// 0056d901  8b0c24               mov ecx, dword ptr [esp]
// 0056d904  b878248c00           mov eax, 0x8c24dc
// 0056d909  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d910  83c40c               add esp, 0xc
// 0056d913  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@M@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp