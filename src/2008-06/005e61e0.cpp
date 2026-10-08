// roc 2008-06 005e61e0  unit: RBX::Clump  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e61e0
//
// 005e61e0  56                   push esi
// 005e61e1  57                   push edi
// 005e61e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005e61e6  8d47ff               lea eax, [edi - 1]
// 005e61e9  99                   cdq 
// 005e61ea  2bc2                 sub eax, edx
// 005e61ec  8bf0                 mov esi, eax
// 005e61ee  d1fe                 sar esi, 1
// 005e61f0  397c2414             cmp dword ptr [esp + 0x14], edi
// 005e61f4  7d3a                 jge 0x5e6230
// 005e61f6  53                   push ebx
// 005e61f7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e61fb  55                   push ebp
// 005e61fc  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005e6200  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 005e6203  55                   push ebp
// 005e6204  50                   push eax
// 005e6205  ff54242c             call dword ptr [esp + 0x2c]
// 005e6209  83c408               add esp, 8
// 005e620c  84c0                 test al, al
// 005e620e  7418                 je 0x5e6228
// 005e6210  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 005e6213  8d46ff               lea eax, [esi - 1]
// 005e6216  99                   cdq 
// 005e6217  2bc2                 sub eax, edx
// 005e6219  890cbb               mov dword ptr [ebx + edi*4], ecx
// 005e621c  8bfe                 mov edi, esi
// 005e621e  d1f8                 sar eax, 1
// 005e6220  397c241c             cmp dword ptr [esp + 0x1c], edi
// 005e6224  8bf0                 mov esi, eax
// 005e6226  7cd8                 jl 0x5e6200
// 005e6228  892cbb               mov dword ptr [ebx + edi*4], ebp
// 005e622b  5d                   pop ebp
// 005e622c  5b                   pop ebx
// 005e622d  5f                   pop edi
// 005e622e  5e                   pop esi
// 005e622f  c3                   ret 
// 005e6230  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e6234  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e6238  8914b8               mov dword ptr [eax + edi*4], edx
// 005e623b  5f                   pop edi
// 005e623c  5e                   pop esi
// 005e623d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
