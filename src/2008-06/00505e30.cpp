// roc 2008-06 00505e30  unit: RBX::Render::RenderScene  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505e30
//
// 00505e30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00505e34  57                   push edi
// 00505e35  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00505e39  8bd7                 mov edx, edi
// 00505e3b  2bd1                 sub edx, ecx
// 00505e3d  b867666666           mov eax, 0x66666667
// 00505e42  f7ea                 imul edx
// 00505e44  c1fa05               sar edx, 5
// 00505e47  8bc2                 mov eax, edx
// 00505e49  c1e81f               shr eax, 0x1f
// 00505e4c  03c2                 add eax, edx
// 00505e4e  83f828               cmp eax, 0x28
// 00505e51  7e72                 jle 0x505ec5
// 00505e53  40                   inc eax
// 00505e54  99                   cdq 
// 00505e55  53                   push ebx
// 00505e56  83e207               and edx, 7
// 00505e59  03c2                 add eax, edx
// 00505e5b  55                   push ebp
// 00505e5c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00505e60  c1f803               sar eax, 3
// 00505e63  56                   push esi
// 00505e64  8d1c80               lea ebx, [eax + eax*4]
// 00505e67  8d3480               lea esi, [eax + eax*4]
// 00505e6a  c1e305               shl ebx, 5
// 00505e6d  55                   push ebp
// 00505e6e  8d140b               lea edx, [ebx + ecx]
// 00505e71  c1e604               shl esi, 4
// 00505e74  8d040e               lea eax, [esi + ecx]
// 00505e77  52                   push edx
// 00505e78  50                   push eax
// 00505e79  51                   push ecx
// 00505e7a  89442424             mov dword ptr [esp + 0x24], eax
// 00505e7e  e8edfdffff           call 0x505c70
// 00505e83  8b442428             mov eax, dword ptr [esp + 0x28]
// 00505e87  55                   push ebp
// 00505e88  8d0c06               lea ecx, [esi + eax]
// 00505e8b  51                   push ecx
// 00505e8c  50                   push eax
// 00505e8d  2bc6                 sub eax, esi
// 00505e8f  50                   push eax
// 00505e90  e8dbfdffff           call 0x505c70
// 00505e95  55                   push ebp
// 00505e96  8bc7                 mov eax, edi
// 00505e98  2bc6                 sub eax, esi
// 00505e9a  57                   push edi
// 00505e9b  50                   push eax
// 00505e9c  2bfb                 sub edi, ebx
// 00505e9e  57                   push edi
// 00505e9f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00505ea3  e8c8fdffff           call 0x505c70
// 00505ea8  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00505eac  8b442448             mov eax, dword ptr [esp + 0x48]
// 00505eb0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00505eb4  55                   push ebp
// 00505eb5  52                   push edx
// 00505eb6  50                   push eax
// 00505eb7  51                   push ecx
// 00505eb8  e8b3fdffff           call 0x505c70
// 00505ebd  83c440               add esp, 0x40
// 00505ec0  5e                   pop esi
// 00505ec1  5d                   pop ebp
// 00505ec2  5b                   pop ebx
// 00505ec3  5f                   pop edi
// 00505ec4  c3                   ret 
// 00505ec5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00505ec9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00505ecd  52                   push edx
// 00505ece  57                   push edi
// 00505ecf  50                   push eax
// 00505ed0  51                   push ecx
// 00505ed1  e89afdffff           call 0x505c70
// 00505ed6  83c410               add esp, 0x10
// 00505ed9  5f                   pop edi
// 00505eda  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
