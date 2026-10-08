// roc 2008-06 00505340  unit: RBX::Render::RenderScene  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505340
//
// 00505340  53                   push ebx
// 00505341  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00505345  55                   push ebp
// 00505346  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050534a  56                   push esi
// 0050534b  57                   push edi
// 0050534c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00505350  8d743f02             lea esi, [edi + edi + 2]
// 00505354  3bf5                 cmp esi, ebp
// 00505356  897c2418             mov dword ptr [esp + 0x18], edi
// 0050535a  7d28                 jge 0x505384
// 0050535c  8d642400             lea esp, [esp]
// 00505360  8d04b3               lea eax, [ebx + esi*4]
// 00505363  8d48fc               lea ecx, [eax - 4]
// 00505366  51                   push ecx
// 00505367  50                   push eax
// 00505368  ff54242c             call dword ptr [esp + 0x2c]
// 0050536c  83c408               add esp, 8
// 0050536f  84c0                 test al, al
// 00505371  7401                 je 0x505374
// 00505373  4e                   dec esi
// 00505374  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 00505377  8914bb               mov dword ptr [ebx + edi*4], edx
// 0050537a  8bfe                 mov edi, esi
// 0050537c  8d743602             lea esi, [esi + esi + 2]
// 00505380  3bf5                 cmp esi, ebp
// 00505382  7cdc                 jl 0x505360
// 00505384  750a                 jne 0x505390
// 00505386  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 0050538a  8904bb               mov dword ptr [ebx + edi*4], eax
// 0050538d  8d7dff               lea edi, [ebp - 1]
// 00505390  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00505394  8b542420             mov edx, dword ptr [esp + 0x20]
// 00505398  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050539c  51                   push ecx
// 0050539d  52                   push edx
// 0050539e  50                   push eax
// 0050539f  57                   push edi
// 005053a0  53                   push ebx
// 005053a1  e8cafeffff           call 0x505270
// 005053a6  83c414               add esp, 0x14
// 005053a9  5f                   pop edi
// 005053aa  5e                   pop esi
// 005053ab  5d                   pop ebp
// 005053ac  5b                   pop ebx
// 005053ad  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
