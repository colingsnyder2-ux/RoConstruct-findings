// roc 2007-08 004fd990  unit: RBX::Render::AggregateChunk  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd990
//
// 004fd990  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fd994  57                   push edi
// 004fd995  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fd999  8bd7                 mov edx, edi
// 004fd99b  2bd1                 sub edx, ecx
// 004fd99d  b867666666           mov eax, 0x66666667
// 004fd9a2  f7ea                 imul edx
// 004fd9a4  c1fa05               sar edx, 5
// 004fd9a7  8bc2                 mov eax, edx
// 004fd9a9  c1e81f               shr eax, 0x1f
// 004fd9ac  03c2                 add eax, edx
// 004fd9ae  83f828               cmp eax, 0x28
// 004fd9b1  7e74                 jle 0x4fda27
// 004fd9b3  83c001               add eax, 1
// 004fd9b6  99                   cdq 
// 004fd9b7  53                   push ebx
// 004fd9b8  83e207               and edx, 7
// 004fd9bb  03c2                 add eax, edx
// 004fd9bd  55                   push ebp
// 004fd9be  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004fd9c2  c1f803               sar eax, 3
// 004fd9c5  56                   push esi
// 004fd9c6  8d1c80               lea ebx, [eax + eax*4]
// 004fd9c9  8d3480               lea esi, [eax + eax*4]
// 004fd9cc  c1e305               shl ebx, 5
// 004fd9cf  55                   push ebp
// 004fd9d0  8d140b               lea edx, [ebx + ecx]
// 004fd9d3  c1e604               shl esi, 4
// 004fd9d6  8d040e               lea eax, [esi + ecx]
// 004fd9d9  52                   push edx
// 004fd9da  50                   push eax
// 004fd9db  51                   push ecx
// 004fd9dc  89442424             mov dword ptr [esp + 0x24], eax
// 004fd9e0  e8fbfdffff           call 0x4fd7e0
// 004fd9e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd9e9  55                   push ebp
// 004fd9ea  8d0c06               lea ecx, [esi + eax]
// 004fd9ed  51                   push ecx
// 004fd9ee  50                   push eax
// 004fd9ef  2bc6                 sub eax, esi
// 004fd9f1  50                   push eax
// 004fd9f2  e8e9fdffff           call 0x4fd7e0
// 004fd9f7  55                   push ebp
// 004fd9f8  8bc7                 mov eax, edi
// 004fd9fa  2bc6                 sub eax, esi
// 004fd9fc  57                   push edi
// 004fd9fd  50                   push eax
// 004fd9fe  2bfb                 sub edi, ebx
// 004fda00  57                   push edi
// 004fda01  8944244c             mov dword ptr [esp + 0x4c], eax
// 004fda05  e8d6fdffff           call 0x4fd7e0
// 004fda0a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004fda0e  8b442448             mov eax, dword ptr [esp + 0x48]
// 004fda12  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004fda16  55                   push ebp
// 004fda17  52                   push edx
// 004fda18  50                   push eax
// 004fda19  51                   push ecx
// 004fda1a  e8c1fdffff           call 0x4fd7e0
// 004fda1f  83c440               add esp, 0x40
// 004fda22  5e                   pop esi
// 004fda23  5d                   pop ebp
// 004fda24  5b                   pop ebx
// 004fda25  5f                   pop edi
// 004fda26  c3                   ret 
// 004fda27  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fda2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fda2f  52                   push edx
// 004fda30  57                   push edi
// 004fda31  50                   push eax
// 004fda32  51                   push ecx
// 004fda33  e8a8fdffff           call 0x4fd7e0
// 004fda38  83c410               add esp, 0x10
// 004fda3b  5f                   pop edi
// 004fda3c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
