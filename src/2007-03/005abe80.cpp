// roc 2007-03 005abe80  unit: seg_005a0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abe80
//
// 005abe80  56                   push esi
// 005abe81  57                   push edi
// 005abe82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005abe86  8d47ff               lea eax, [edi - 1]
// 005abe89  99                   cdq 
// 005abe8a  2bc2                 sub eax, edx
// 005abe8c  8bf0                 mov esi, eax
// 005abe8e  d1fe                 sar esi, 1
// 005abe90  397c2414             cmp dword ptr [esp + 0x14], edi
// 005abe94  7d3a                 jge 0x5abed0
// 005abe96  53                   push ebx
// 005abe97  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005abe9b  55                   push ebp
// 005abe9c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005abea0  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 005abea3  55                   push ebp
// 005abea4  50                   push eax
// 005abea5  ff54242c             call dword ptr [esp + 0x2c]
// 005abea9  83c408               add esp, 8
// 005abeac  84c0                 test al, al
// 005abeae  7418                 je 0x5abec8
// 005abeb0  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 005abeb3  8d46ff               lea eax, [esi - 1]
// 005abeb6  99                   cdq 
// 005abeb7  2bc2                 sub eax, edx
// 005abeb9  890cbb               mov dword ptr [ebx + edi*4], ecx
// 005abebc  8bfe                 mov edi, esi
// 005abebe  d1f8                 sar eax, 1
// 005abec0  397c241c             cmp dword ptr [esp + 0x1c], edi
// 005abec4  8bf0                 mov esi, eax
// 005abec6  7cd8                 jl 0x5abea0
// 005abec8  892cbb               mov dword ptr [ebx + edi*4], ebp
// 005abecb  5d                   pop ebp
// 005abecc  5b                   pop ebx
// 005abecd  5f                   pop edi
// 005abece  5e                   pop esi
// 005abecf  c3                   ret 
// 005abed0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005abed4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005abed8  8914b8               mov dword ptr [eax + edi*4], edx
// 005abedb  5f                   pop edi
// 005abedc  5e                   pop esi
// 005abedd  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
