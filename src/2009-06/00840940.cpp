// roc 2009-06 00840940  unit: Ogre::RbxSceneNode  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00840940
//
// 00840940  55                   push ebp
// 00840941  8bec                 mov ebp, esp
// 00840943  83e4f8               and esp, 0xfffffff8
// 00840946  83ec24               sub esp, 0x24
// 00840949  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0084094c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0084094f  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00840952  89442414             mov dword ptr [esp + 0x14], eax
// 00840956  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00840959  53                   push ebx
// 0084095a  89442424             mov dword ptr [esp + 0x24], eax
// 0084095e  a1f8c8a300           mov eax, dword ptr [0xa3c8f8]
// 00840963  83f804               cmp eax, 4
// 00840966  56                   push esi
// 00840967  57                   push edi
// 00840968  894c2424             mov dword ptr [esp + 0x24], ecx
// 0084096c  89542428             mov dword ptr [esp + 0x28], edx
// 00840970  8944240c             mov dword ptr [esp + 0xc], eax
// 00840974  7e08                 jle 0x84097e
// 00840976  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 0084097e  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00840981  8bcb                 mov ecx, ebx
// 00840983  e83838c6ff           call 0x4a41c0
// 00840988  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0084098b  d901                 fld dword ptr [ecx]
// 0084098d  8d83a8040000         lea eax, [ebx + 0x4a8]
// 00840993  d918                 fstp dword ptr [eax]
// 00840995  50                   push eax
// 00840996  d94104               fld dword ptr [ecx + 4]
// 00840999  d95804               fstp dword ptr [eax + 4]
// 0084099c  d94108               fld dword ptr [ecx + 8]
// 0084099f  d95808               fstp dword ptr [eax + 8]
// 008409a2  d9410c               fld dword ptr [ecx + 0xc]
// 008409a5  d9580c               fstp dword ptr [eax + 0xc]
// 008409a8  ff1594eb8900         call dword ptr [0x89eb94]
// 008409ae  6a05                 push 5
// 008409b0  8bcb                 mov ecx, ebx
// 008409b2  e8691fc6ff           call 0x4a2920
// 008409b7  33ff                 xor edi, edi
// 008409b9  33f6                 xor esi, esi
// 008409bb  3974240c             cmp dword ptr [esp + 0xc], esi
// 008409bf  7e1f                 jle 0x8409e0
// 008409c1  57                   push edi
// 008409c2  8d4c2414             lea ecx, [esp + 0x14]
// 008409c6  51                   push ecx
// 008409c7  8b4cb428             mov ecx, dword ptr [esp + esi*4 + 0x28]
// 008409cb  e8903cdeff           call 0x624660
// 008409d0  50                   push eax
// 008409d1  56                   push esi
// 008409d2  8bcb                 mov ecx, ebx
// 008409d4  e8f7eac5ff           call 0x49f4d0
// 008409d9  46                   inc esi
// 008409da  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 008409de  7ce1                 jl 0x8409c1
// 008409e0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008409e3  57                   push edi
// 008409e4  8d54241c             lea edx, [esp + 0x1c]
// 008409e8  52                   push edx
// 008409e9  e8723cdeff           call 0x624660
// 008409ee  50                   push eax
// 008409ef  8bcb                 mov ecx, ebx
// 008409f1  e81aebc5ff           call 0x49f510
// 008409f6  47                   inc edi
// 008409f7  83ff04               cmp edi, 4
// 008409fa  7cbd                 jl 0x8409b9
// 008409fc  8bcb                 mov ecx, ebx
// 008409fe  e86df5c5ff           call 0x49ff70
// 00840a03  8bcb                 mov ecx, ebx
// 00840a05  e8f637c6ff           call 0x4a4200
// 00840a0a  5f                   pop edi
// 00840a0b  5e                   pop esi
// 00840a0c  5b                   pop ebx
// 00840a0d  8be5                 mov esp, ebp
// 00840a0f  5d                   pop ebp
// 00840a10  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@0000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
