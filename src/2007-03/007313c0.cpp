// roc 2007-03 007313c0  unit: seg_00730000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007313c0
//
// 007313c0  55                   push ebp
// 007313c1  8bec                 mov ebp, esp
// 007313c3  83e4f8               and esp, 0xfffffff8
// 007313c6  83ec24               sub esp, 0x24
// 007313c9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007313cc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007313cf  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007313d2  89442414             mov dword ptr [esp + 0x14], eax
// 007313d6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007313d9  53                   push ebx
// 007313da  89442424             mov dword ptr [esp + 0x24], eax
// 007313de  a114768b00           mov eax, dword ptr [0x8b7614]
// 007313e3  83f804               cmp eax, 4
// 007313e6  56                   push esi
// 007313e7  57                   push edi
// 007313e8  894c2424             mov dword ptr [esp + 0x24], ecx
// 007313ec  89542428             mov dword ptr [esp + 0x28], edx
// 007313f0  8944240c             mov dword ptr [esp + 0xc], eax
// 007313f4  7e08                 jle 0x7313fe
// 007313f6  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 007313fe  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00731401  8bcb                 mov ecx, ebx
// 00731403  e8d883d4ff           call 0x4797e0
// 00731408  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0073140b  d901                 fld dword ptr [ecx]
// 0073140d  8d83a8040000         lea eax, [ebx + 0x4a8]
// 00731413  d918                 fstp dword ptr [eax]
// 00731415  50                   push eax
// 00731416  d94104               fld dword ptr [ecx + 4]
// 00731419  d95804               fstp dword ptr [eax + 4]
// 0073141c  d94108               fld dword ptr [ecx + 8]
// 0073141f  d95808               fstp dword ptr [eax + 8]
// 00731422  d9410c               fld dword ptr [ecx + 0xc]
// 00731425  d9580c               fstp dword ptr [eax + 0xc]
// 00731428  ff15b0eb7700         call dword ptr [0x77ebb0]
// 0073142e  6a05                 push 5
// 00731430  8bcb                 mov ecx, ebx
// 00731432  e8696bd4ff           call 0x477fa0
// 00731437  33ff                 xor edi, edi
// 00731439  33f6                 xor esi, esi
// 0073143b  3974240c             cmp dword ptr [esp + 0xc], esi
// 0073143f  7e21                 jle 0x731462
// 00731441  57                   push edi
// 00731442  8d4c2414             lea ecx, [esp + 0x14]
// 00731446  51                   push ecx
// 00731447  8b4cb428             mov ecx, dword ptr [esp + esi*4 + 0x28]
// 0073144b  e800b6e6ff           call 0x59ca50
// 00731450  50                   push eax
// 00731451  56                   push esi
// 00731452  8bcb                 mov ecx, ebx
// 00731454  e83738d4ff           call 0x474c90
// 00731459  83c601               add esi, 1
// 0073145c  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00731460  7cdf                 jl 0x731441
// 00731462  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00731465  57                   push edi
// 00731466  8d54241c             lea edx, [esp + 0x1c]
// 0073146a  52                   push edx
// 0073146b  e8e0b5e6ff           call 0x59ca50
// 00731470  50                   push eax
// 00731471  8bcb                 mov ecx, ebx
// 00731473  e85838d4ff           call 0x474cd0
// 00731478  83c701               add edi, 1
// 0073147b  83ff04               cmp edi, 4
// 0073147e  7cb9                 jl 0x731439
// 00731480  8bcb                 mov ecx, ebx
// 00731482  e88944d4ff           call 0x475910
// 00731487  8bcb                 mov ecx, ebx
// 00731489  e89283d4ff           call 0x479820
// 0073148e  5f                   pop edi
// 0073148f  5e                   pop esi
// 00731490  5b                   pop ebx
// 00731491  8be5                 mov esp, ebp
// 00731493  5d                   pop ebp
// 00731494  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@0000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
