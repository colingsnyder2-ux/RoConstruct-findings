// roc 2009-12 005e85a0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e85a0
//
// 005e85a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e85a4  57                   push edi
// 005e85a5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005e85a9  8bd7                 mov edx, edi
// 005e85ab  2bd1                 sub edx, ecx
// 005e85ad  b867666666           mov eax, 0x66666667
// 005e85b2  f7ea                 imul edx
// 005e85b4  c1fa05               sar edx, 5
// 005e85b7  8bc2                 mov eax, edx
// 005e85b9  c1e81f               shr eax, 0x1f
// 005e85bc  03c2                 add eax, edx
// 005e85be  83f828               cmp eax, 0x28
// 005e85c1  7e72                 jle 0x5e8635
// 005e85c3  40                   inc eax
// 005e85c4  99                   cdq 
// 005e85c5  53                   push ebx
// 005e85c6  83e207               and edx, 7
// 005e85c9  03c2                 add eax, edx
// 005e85cb  55                   push ebp
// 005e85cc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005e85d0  c1f803               sar eax, 3
// 005e85d3  56                   push esi
// 005e85d4  8d1c80               lea ebx, [eax + eax*4]
// 005e85d7  8d3480               lea esi, [eax + eax*4]
// 005e85da  c1e305               shl ebx, 5
// 005e85dd  55                   push ebp
// 005e85de  8d140b               lea edx, [ebx + ecx]
// 005e85e1  c1e604               shl esi, 4
// 005e85e4  8d040e               lea eax, [esi + ecx]
// 005e85e7  52                   push edx
// 005e85e8  50                   push eax
// 005e85e9  51                   push ecx
// 005e85ea  89442424             mov dword ptr [esp + 0x24], eax
// 005e85ee  e8edfdffff           call 0x5e83e0
// 005e85f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e85f7  55                   push ebp
// 005e85f8  8d0c06               lea ecx, [esi + eax]
// 005e85fb  51                   push ecx
// 005e85fc  50                   push eax
// 005e85fd  2bc6                 sub eax, esi
// 005e85ff  50                   push eax
// 005e8600  e8dbfdffff           call 0x5e83e0
// 005e8605  55                   push ebp
// 005e8606  8bc7                 mov eax, edi
// 005e8608  2bc6                 sub eax, esi
// 005e860a  57                   push edi
// 005e860b  50                   push eax
// 005e860c  2bfb                 sub edi, ebx
// 005e860e  57                   push edi
// 005e860f  8944244c             mov dword ptr [esp + 0x4c], eax
// 005e8613  e8c8fdffff           call 0x5e83e0
// 005e8618  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005e861c  8b442448             mov eax, dword ptr [esp + 0x48]
// 005e8620  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005e8624  55                   push ebp
// 005e8625  52                   push edx
// 005e8626  50                   push eax
// 005e8627  51                   push ecx
// 005e8628  e8b3fdffff           call 0x5e83e0
// 005e862d  83c440               add esp, 0x40
// 005e8630  5e                   pop esi
// 005e8631  5d                   pop ebp
// 005e8632  5b                   pop ebx
// 005e8633  5f                   pop edi
// 005e8634  c3                   ret 
// 005e8635  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e8639  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e863d  52                   push edx
// 005e863e  57                   push edi
// 005e863f  50                   push eax
// 005e8640  51                   push ecx
// 005e8641  e89afdffff           call 0x5e83e0
// 005e8646  83c410               add esp, 0x10
// 005e8649  5f                   pop edi
// 005e864a  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
