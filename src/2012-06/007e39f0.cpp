// roc 2012-06 007e39f0  unit: RBX::LuaWebService::UCachedRawLuaWebServiceInfo::?$AsyncHttpCache  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e39f0
//
// 007e39f0  56                   push esi
// 007e39f1  57                   push edi
// 007e39f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e39f6  8d47ff               lea eax, [edi - 1]
// 007e39f9  99                   cdq 
// 007e39fa  2bc2                 sub eax, edx
// 007e39fc  8bf0                 mov esi, eax
// 007e39fe  d1fe                 sar esi, 1
// 007e3a00  397c2414             cmp dword ptr [esp + 0x14], edi
// 007e3a04  7d3a                 jge 0x7e3a40
// 007e3a06  53                   push ebx
// 007e3a07  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e3a0b  55                   push ebp
// 007e3a0c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007e3a10  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 007e3a13  55                   push ebp
// 007e3a14  50                   push eax
// 007e3a15  ff54242c             call dword ptr [esp + 0x2c]
// 007e3a19  83c408               add esp, 8
// 007e3a1c  84c0                 test al, al
// 007e3a1e  7418                 je 0x7e3a38
// 007e3a20  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 007e3a23  8d46ff               lea eax, [esi - 1]
// 007e3a26  99                   cdq 
// 007e3a27  2bc2                 sub eax, edx
// 007e3a29  890cbb               mov dword ptr [ebx + edi*4], ecx
// 007e3a2c  8bfe                 mov edi, esi
// 007e3a2e  d1f8                 sar eax, 1
// 007e3a30  397c241c             cmp dword ptr [esp + 0x1c], edi
// 007e3a34  8bf0                 mov esi, eax
// 007e3a36  7cd8                 jl 0x7e3a10
// 007e3a38  892cbb               mov dword ptr [ebx + edi*4], ebp
// 007e3a3b  5d                   pop ebp
// 007e3a3c  5b                   pop ebx
// 007e3a3d  5f                   pop edi
// 007e3a3e  5e                   pop esi
// 007e3a3f  c3                   ret 
// 007e3a40  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e3a44  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e3a48  8914b8               mov dword ptr [eax + edi*4], edx
// 007e3a4b  5f                   pop edi
// 007e3a4c  5e                   pop esi
// 007e3a4d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
