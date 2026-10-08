// roc 2007-08 005b3150  unit: RBX::Assembly  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3150
//
// 005b3150  56                   push esi
// 005b3151  57                   push edi
// 005b3152  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b3156  8d47ff               lea eax, [edi - 1]
// 005b3159  99                   cdq 
// 005b315a  2bc2                 sub eax, edx
// 005b315c  8bf0                 mov esi, eax
// 005b315e  d1fe                 sar esi, 1
// 005b3160  397c2414             cmp dword ptr [esp + 0x14], edi
// 005b3164  7d3a                 jge 0x5b31a0
// 005b3166  53                   push ebx
// 005b3167  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b316b  55                   push ebp
// 005b316c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005b3170  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 005b3173  55                   push ebp
// 005b3174  50                   push eax
// 005b3175  ff54242c             call dword ptr [esp + 0x2c]
// 005b3179  83c408               add esp, 8
// 005b317c  84c0                 test al, al
// 005b317e  7418                 je 0x5b3198
// 005b3180  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 005b3183  8d46ff               lea eax, [esi - 1]
// 005b3186  99                   cdq 
// 005b3187  2bc2                 sub eax, edx
// 005b3189  890cbb               mov dword ptr [ebx + edi*4], ecx
// 005b318c  8bfe                 mov edi, esi
// 005b318e  d1f8                 sar eax, 1
// 005b3190  397c241c             cmp dword ptr [esp + 0x1c], edi
// 005b3194  8bf0                 mov esi, eax
// 005b3196  7cd8                 jl 0x5b3170
// 005b3198  892cbb               mov dword ptr [ebx + edi*4], ebp
// 005b319b  5d                   pop ebp
// 005b319c  5b                   pop ebx
// 005b319d  5f                   pop edi
// 005b319e  5e                   pop esi
// 005b319f  c3                   ret 
// 005b31a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b31a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b31a8  8914b8               mov dword ptr [eax + edi*4], edx
// 005b31ab  5f                   pop edi
// 005b31ac  5e                   pop esi
// 005b31ad  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
