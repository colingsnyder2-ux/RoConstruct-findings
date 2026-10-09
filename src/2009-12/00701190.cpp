// roc 2009-12 00701190  unit: RBX::TimerService  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701190
//
// 00701190  56                   push esi
// 00701191  57                   push edi
// 00701192  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00701196  8d47ff               lea eax, [edi - 1]
// 00701199  99                   cdq 
// 0070119a  2bc2                 sub eax, edx
// 0070119c  8bf0                 mov esi, eax
// 0070119e  d1fe                 sar esi, 1
// 007011a0  397c2414             cmp dword ptr [esp + 0x14], edi
// 007011a4  7d3a                 jge 0x7011e0
// 007011a6  53                   push ebx
// 007011a7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007011ab  55                   push ebp
// 007011ac  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007011b0  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 007011b3  55                   push ebp
// 007011b4  50                   push eax
// 007011b5  ff54242c             call dword ptr [esp + 0x2c]
// 007011b9  83c408               add esp, 8
// 007011bc  84c0                 test al, al
// 007011be  7418                 je 0x7011d8
// 007011c0  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 007011c3  8d46ff               lea eax, [esi - 1]
// 007011c6  99                   cdq 
// 007011c7  2bc2                 sub eax, edx
// 007011c9  890cbb               mov dword ptr [ebx + edi*4], ecx
// 007011cc  8bfe                 mov edi, esi
// 007011ce  d1f8                 sar eax, 1
// 007011d0  397c241c             cmp dword ptr [esp + 0x1c], edi
// 007011d4  8bf0                 mov esi, eax
// 007011d6  7cd8                 jl 0x7011b0
// 007011d8  892cbb               mov dword ptr [ebx + edi*4], ebp
// 007011db  5d                   pop ebp
// 007011dc  5b                   pop ebx
// 007011dd  5f                   pop edi
// 007011de  5e                   pop esi
// 007011df  c3                   ret 
// 007011e0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007011e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007011e8  8914b8               mov dword ptr [eax + edi*4], edx
// 007011eb  5f                   pop edi
// 007011ec  5e                   pop esi
// 007011ed  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
