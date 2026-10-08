// roc 2010-06 006761d0  unit: RBX::VHumanoid::?$EventDesc  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006761d0
//
// 006761d0  56                   push esi
// 006761d1  57                   push edi
// 006761d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006761d6  8d47ff               lea eax, [edi - 1]
// 006761d9  99                   cdq 
// 006761da  2bc2                 sub eax, edx
// 006761dc  8bf0                 mov esi, eax
// 006761de  d1fe                 sar esi, 1
// 006761e0  397c2414             cmp dword ptr [esp + 0x14], edi
// 006761e4  7d3a                 jge 0x676220
// 006761e6  53                   push ebx
// 006761e7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006761eb  55                   push ebp
// 006761ec  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006761f0  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 006761f3  55                   push ebp
// 006761f4  50                   push eax
// 006761f5  ff54242c             call dword ptr [esp + 0x2c]
// 006761f9  83c408               add esp, 8
// 006761fc  84c0                 test al, al
// 006761fe  7418                 je 0x676218
// 00676200  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 00676203  8d46ff               lea eax, [esi - 1]
// 00676206  99                   cdq 
// 00676207  2bc2                 sub eax, edx
// 00676209  890cbb               mov dword ptr [ebx + edi*4], ecx
// 0067620c  8bfe                 mov edi, esi
// 0067620e  d1f8                 sar eax, 1
// 00676210  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00676214  8bf0                 mov esi, eax
// 00676216  7cd8                 jl 0x6761f0
// 00676218  892cbb               mov dword ptr [ebx + edi*4], ebp
// 0067621b  5d                   pop ebp
// 0067621c  5b                   pop ebx
// 0067621d  5f                   pop edi
// 0067621e  5e                   pop esi
// 0067621f  c3                   ret 
// 00676220  8b542418             mov edx, dword ptr [esp + 0x18]
// 00676224  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00676228  8914b8               mov dword ptr [eax + edi*4], edx
// 0067622b  5f                   pop edi
// 0067622c  5e                   pop esi
// 0067622d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
