// roc 2011-06 006a1b90  unit: RBX::LuaWebService::UCachedLuaWebServiceInfo::?$AsyncHttpCache  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1b90
//
// 006a1b90  56                   push esi
// 006a1b91  57                   push edi
// 006a1b92  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a1b96  8d47ff               lea eax, [edi - 1]
// 006a1b99  99                   cdq 
// 006a1b9a  2bc2                 sub eax, edx
// 006a1b9c  8bf0                 mov esi, eax
// 006a1b9e  d1fe                 sar esi, 1
// 006a1ba0  397c2414             cmp dword ptr [esp + 0x14], edi
// 006a1ba4  7d3a                 jge 0x6a1be0
// 006a1ba6  53                   push ebx
// 006a1ba7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a1bab  55                   push ebp
// 006a1bac  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006a1bb0  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 006a1bb3  55                   push ebp
// 006a1bb4  50                   push eax
// 006a1bb5  ff54242c             call dword ptr [esp + 0x2c]
// 006a1bb9  83c408               add esp, 8
// 006a1bbc  84c0                 test al, al
// 006a1bbe  7418                 je 0x6a1bd8
// 006a1bc0  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 006a1bc3  8d46ff               lea eax, [esi - 1]
// 006a1bc6  99                   cdq 
// 006a1bc7  2bc2                 sub eax, edx
// 006a1bc9  890cbb               mov dword ptr [ebx + edi*4], ecx
// 006a1bcc  8bfe                 mov edi, esi
// 006a1bce  d1f8                 sar eax, 1
// 006a1bd0  397c241c             cmp dword ptr [esp + 0x1c], edi
// 006a1bd4  8bf0                 mov esi, eax
// 006a1bd6  7cd8                 jl 0x6a1bb0
// 006a1bd8  892cbb               mov dword ptr [ebx + edi*4], ebp
// 006a1bdb  5d                   pop ebp
// 006a1bdc  5b                   pop ebx
// 006a1bdd  5f                   pop edi
// 006a1bde  5e                   pop esi
// 006a1bdf  c3                   ret 
// 006a1be0  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a1be4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a1be8  8914b8               mov dword ptr [eax + edi*4], edx
// 006a1beb  5f                   pop edi
// 006a1bec  5e                   pop esi
// 006a1bed  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Push_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
