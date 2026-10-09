// roc 2009-06 005695b0  unit: RBX::RbxG3D::RenderScene  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005695b0
//
// 005695b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005695b4  57                   push edi
// 005695b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005695b9  8bd7                 mov edx, edi
// 005695bb  2bd1                 sub edx, ecx
// 005695bd  b867666666           mov eax, 0x66666667
// 005695c2  f7ea                 imul edx
// 005695c4  c1fa05               sar edx, 5
// 005695c7  8bc2                 mov eax, edx
// 005695c9  c1e81f               shr eax, 0x1f
// 005695cc  03c2                 add eax, edx
// 005695ce  83f828               cmp eax, 0x28
// 005695d1  7e72                 jle 0x569645
// 005695d3  40                   inc eax
// 005695d4  99                   cdq 
// 005695d5  53                   push ebx
// 005695d6  83e207               and edx, 7
// 005695d9  03c2                 add eax, edx
// 005695db  55                   push ebp
// 005695dc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005695e0  c1f803               sar eax, 3
// 005695e3  56                   push esi
// 005695e4  8d1c80               lea ebx, [eax + eax*4]
// 005695e7  8d3480               lea esi, [eax + eax*4]
// 005695ea  c1e305               shl ebx, 5
// 005695ed  55                   push ebp
// 005695ee  8d140b               lea edx, [ebx + ecx]
// 005695f1  c1e604               shl esi, 4
// 005695f4  8d040e               lea eax, [esi + ecx]
// 005695f7  52                   push edx
// 005695f8  50                   push eax
// 005695f9  51                   push ecx
// 005695fa  89442424             mov dword ptr [esp + 0x24], eax
// 005695fe  e8edfdffff           call 0x5693f0
// 00569603  8b442428             mov eax, dword ptr [esp + 0x28]
// 00569607  55                   push ebp
// 00569608  8d0c06               lea ecx, [esi + eax]
// 0056960b  51                   push ecx
// 0056960c  50                   push eax
// 0056960d  2bc6                 sub eax, esi
// 0056960f  50                   push eax
// 00569610  e8dbfdffff           call 0x5693f0
// 00569615  55                   push ebp
// 00569616  8bc7                 mov eax, edi
// 00569618  2bc6                 sub eax, esi
// 0056961a  57                   push edi
// 0056961b  50                   push eax
// 0056961c  2bfb                 sub edi, ebx
// 0056961e  57                   push edi
// 0056961f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00569623  e8c8fdffff           call 0x5693f0
// 00569628  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0056962c  8b442448             mov eax, dword ptr [esp + 0x48]
// 00569630  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00569634  55                   push ebp
// 00569635  52                   push edx
// 00569636  50                   push eax
// 00569637  51                   push ecx
// 00569638  e8b3fdffff           call 0x5693f0
// 0056963d  83c440               add esp, 0x40
// 00569640  5e                   pop esi
// 00569641  5d                   pop ebp
// 00569642  5b                   pop ebx
// 00569643  5f                   pop edi
// 00569644  c3                   ret 
// 00569645  8b542414             mov edx, dword ptr [esp + 0x14]
// 00569649  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056964d  52                   push edx
// 0056964e  57                   push edi
// 0056964f  50                   push eax
// 00569650  51                   push ecx
// 00569651  e89afdffff           call 0x5693f0
// 00569656  83c410               add esp, 0x10
// 00569659  5f                   pop edi
// 0056965a  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
