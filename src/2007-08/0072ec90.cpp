// roc 2007-08 0072ec90  unit: seg_00720000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072ec90
//
// 0072ec90  55                   push ebp
// 0072ec91  8bec                 mov ebp, esp
// 0072ec93  83e4f8               and esp, 0xfffffff8
// 0072ec96  83ec24               sub esp, 0x24
// 0072ec99  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0072ec9c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0072ec9f  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0072eca2  89442414             mov dword ptr [esp + 0x14], eax
// 0072eca6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0072eca9  53                   push ebx
// 0072ecaa  89442424             mov dword ptr [esp + 0x24], eax
// 0072ecae  a14ccf8b00           mov eax, dword ptr [0x8bcf4c]
// 0072ecb3  83f804               cmp eax, 4
// 0072ecb6  56                   push esi
// 0072ecb7  57                   push edi
// 0072ecb8  894c2424             mov dword ptr [esp + 0x24], ecx
// 0072ecbc  89542428             mov dword ptr [esp + 0x28], edx
// 0072ecc0  8944240c             mov dword ptr [esp + 0xc], eax
// 0072ecc4  7e08                 jle 0x72ecce
// 0072ecc6  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 0072ecce  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0072ecd1  8bcb                 mov ecx, ebx
// 0072ecd3  e8b8a9d4ff           call 0x479690
// 0072ecd8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0072ecdb  d901                 fld dword ptr [ecx]
// 0072ecdd  8d83a8040000         lea eax, [ebx + 0x4a8]
// 0072ece3  d918                 fstp dword ptr [eax]
// 0072ece5  50                   push eax
// 0072ece6  d94104               fld dword ptr [ecx + 4]
// 0072ece9  d95804               fstp dword ptr [eax + 4]
// 0072ecec  d94108               fld dword ptr [ecx + 8]
// 0072ecef  d95808               fstp dword ptr [eax + 8]
// 0072ecf2  d9410c               fld dword ptr [ecx + 0xc]
// 0072ecf5  d9580c               fstp dword ptr [eax + 0xc]
// 0072ecf8  ff150ceb7700         call dword ptr [0x77eb0c]
// 0072ecfe  6a05                 push 5
// 0072ed00  8bcb                 mov ecx, ebx
// 0072ed02  e83991d4ff           call 0x477e40
// 0072ed07  33ff                 xor edi, edi
// 0072ed09  33f6                 xor esi, esi
// 0072ed0b  3974240c             cmp dword ptr [esp + 0xc], esi
// 0072ed0f  7e21                 jle 0x72ed32
// 0072ed11  57                   push edi
// 0072ed12  8d4c2414             lea ecx, [esp + 0x14]
// 0072ed16  51                   push ecx
// 0072ed17  8b4cb428             mov ecx, dword ptr [esp + esi*4 + 0x28]
// 0072ed1b  e860dce6ff           call 0x59c980
// 0072ed20  50                   push eax
// 0072ed21  56                   push esi
// 0072ed22  8bcb                 mov ecx, ebx
// 0072ed24  e8675ed4ff           call 0x474b90
// 0072ed29  83c601               add esi, 1
// 0072ed2c  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0072ed30  7cdf                 jl 0x72ed11
// 0072ed32  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0072ed35  57                   push edi
// 0072ed36  8d54241c             lea edx, [esp + 0x1c]
// 0072ed3a  52                   push edx
// 0072ed3b  e840dce6ff           call 0x59c980
// 0072ed40  50                   push eax
// 0072ed41  8bcb                 mov ecx, ebx
// 0072ed43  e8885ed4ff           call 0x474bd0
// 0072ed48  83c701               add edi, 1
// 0072ed4b  83ff04               cmp edi, 4
// 0072ed4e  7cb9                 jl 0x72ed09
// 0072ed50  8bcb                 mov ecx, ebx
// 0072ed52  e8996ad4ff           call 0x4757f0
// 0072ed57  8bcb                 mov ecx, ebx
// 0072ed59  e872a9d4ff           call 0x4796d0
// 0072ed5e  5f                   pop edi
// 0072ed5f  5e                   pop esi
// 0072ed60  5b                   pop ebx
// 0072ed61  8be5                 mov esp, ebp
// 0072ed63  5d                   pop ebp
// 0072ed64  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@0000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
