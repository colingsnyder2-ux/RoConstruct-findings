// roc 2010-06 00676960  unit: RBX::Assembly  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676960
//
// 00676960  51                   push ecx
// 00676961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00676965  56                   push esi
// 00676966  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067696a  8bc6                 mov eax, esi
// 0067696c  2bc1                 sub eax, ecx
// 0067696e  c1f802               sar eax, 2
// 00676971  83f828               cmp eax, 0x28
// 00676974  7e78                 jle 0x6769ee
// 00676976  40                   inc eax
// 00676977  99                   cdq 
// 00676978  53                   push ebx
// 00676979  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0067697d  83e207               and edx, 7
// 00676980  03c2                 add eax, edx
// 00676982  55                   push ebp
// 00676983  c1f803               sar eax, 3
// 00676986  57                   push edi
// 00676987  8d14c500000000       lea edx, [eax*8]
// 0067698e  89542420             mov dword ptr [esp + 0x20], edx
// 00676992  53                   push ebx
// 00676993  8d3c8500000000       lea edi, [eax*4]
// 0067699a  03d1                 add edx, ecx
// 0067699c  8d040f               lea eax, [edi + ecx]
// 0067699f  52                   push edx
// 006769a0  50                   push eax
// 006769a1  51                   push ecx
// 006769a2  89442420             mov dword ptr [esp + 0x20], eax
// 006769a6  e865fcffff           call 0x676610
// 006769ab  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006769af  53                   push ebx
// 006769b0  8d042f               lea eax, [edi + ebp]
// 006769b3  50                   push eax
// 006769b4  8bcd                 mov ecx, ebp
// 006769b6  2bcf                 sub ecx, edi
// 006769b8  55                   push ebp
// 006769b9  51                   push ecx
// 006769ba  e851fcffff           call 0x676610
// 006769bf  53                   push ebx
// 006769c0  8bc6                 mov eax, esi
// 006769c2  2bc7                 sub eax, edi
// 006769c4  56                   push esi
// 006769c5  2b742448             sub esi, dword ptr [esp + 0x48]
// 006769c9  50                   push eax
// 006769ca  56                   push esi
// 006769cb  89442448             mov dword ptr [esp + 0x48], eax
// 006769cf  e83cfcffff           call 0x676610
// 006769d4  8b542448             mov edx, dword ptr [esp + 0x48]
// 006769d8  8b442440             mov eax, dword ptr [esp + 0x40]
// 006769dc  53                   push ebx
// 006769dd  52                   push edx
// 006769de  55                   push ebp
// 006769df  50                   push eax
// 006769e0  e82bfcffff           call 0x676610
// 006769e5  83c440               add esp, 0x40
// 006769e8  5f                   pop edi
// 006769e9  5d                   pop ebp
// 006769ea  5b                   pop ebx
// 006769eb  5e                   pop esi
// 006769ec  59                   pop ecx
// 006769ed  c3                   ret 
// 006769ee  8b542418             mov edx, dword ptr [esp + 0x18]
// 006769f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006769f6  52                   push edx
// 006769f7  56                   push esi
// 006769f8  50                   push eax
// 006769f9  51                   push ecx
// 006769fa  e811fcffff           call 0x676610
// 006769ff  83c410               add esp, 0x10
// 00676a02  5e                   pop esi
// 00676a03  59                   pop ecx
// 00676a04  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
