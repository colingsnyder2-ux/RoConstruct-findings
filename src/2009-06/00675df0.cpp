// roc 2009-06 00675df0  unit: RBX::TimerService  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675df0
//
// 00675df0  56                   push esi
// 00675df1  57                   push edi
// 00675df2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00675df6  8d47ff               lea eax, [edi - 1]
// 00675df9  99                   cdq 
// 00675dfa  2bc2                 sub eax, edx
// 00675dfc  8bf0                 mov esi, eax
// 00675dfe  d1fe                 sar esi, 1
// 00675e00  397c2414             cmp dword ptr [esp + 0x14], edi
// 00675e04  7d3a                 jge 0x675e40
// 00675e06  53                   push ebx
// 00675e07  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00675e0b  55                   push ebp
// 00675e0c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00675e10  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00675e13  55                   push ebp
// 00675e14  50                   push eax
// 00675e15  ff54242c             call dword ptr [esp + 0x2c]
// 00675e19  83c408               add esp, 8
// 00675e1c  84c0                 test al, al
// 00675e1e  7418                 je 0x675e38
// 00675e20  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 00675e23  8d46ff               lea eax, [esi - 1]
// 00675e26  99                   cdq 
// 00675e27  2bc2                 sub eax, edx
// 00675e29  890cbb               mov dword ptr [ebx + edi*4], ecx
// 00675e2c  8bfe                 mov edi, esi
// 00675e2e  d1f8                 sar eax, 1
// 00675e30  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00675e34  8bf0                 mov esi, eax
// 00675e36  7cd8                 jl 0x675e10
// 00675e38  892cbb               mov dword ptr [ebx + edi*4], ebp
// 00675e3b  5d                   pop ebp
// 00675e3c  5b                   pop ebx
// 00675e3d  5f                   pop edi
// 00675e3e  5e                   pop esi
// 00675e3f  c3                   ret 
// 00675e40  8b542418             mov edx, dword ptr [esp + 0x18]
// 00675e44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00675e48  8914b8               mov dword ptr [eax + edi*4], edx
// 00675e4b  5f                   pop edi
// 00675e4c  5e                   pop esi
// 00675e4d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
