// roc 2009-06 00568b30  unit: RBX::RbxG3D::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568b30
//
// 00568b30  51                   push ecx
// 00568b31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00568b35  56                   push esi
// 00568b36  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568b3a  8bc6                 mov eax, esi
// 00568b3c  2bc1                 sub eax, ecx
// 00568b3e  c1f802               sar eax, 2
// 00568b41  83f828               cmp eax, 0x28
// 00568b44  7e78                 jle 0x568bbe
// 00568b46  40                   inc eax
// 00568b47  99                   cdq 
// 00568b48  53                   push ebx
// 00568b49  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00568b4d  83e207               and edx, 7
// 00568b50  03c2                 add eax, edx
// 00568b52  55                   push ebp
// 00568b53  c1f803               sar eax, 3
// 00568b56  57                   push edi
// 00568b57  8d14c500000000       lea edx, [eax*8]
// 00568b5e  89542420             mov dword ptr [esp + 0x20], edx
// 00568b62  53                   push ebx
// 00568b63  8d3c8500000000       lea edi, [eax*4]
// 00568b6a  03d1                 add edx, ecx
// 00568b6c  8d040f               lea eax, [edi + ecx]
// 00568b6f  52                   push edx
// 00568b70  50                   push eax
// 00568b71  51                   push ecx
// 00568b72  89442420             mov dword ptr [esp + 0x20], eax
// 00568b76  e8e5feffff           call 0x568a60
// 00568b7b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00568b7f  53                   push ebx
// 00568b80  8d042f               lea eax, [edi + ebp]
// 00568b83  50                   push eax
// 00568b84  8bcd                 mov ecx, ebp
// 00568b86  2bcf                 sub ecx, edi
// 00568b88  55                   push ebp
// 00568b89  51                   push ecx
// 00568b8a  e8d1feffff           call 0x568a60
// 00568b8f  53                   push ebx
// 00568b90  8bc6                 mov eax, esi
// 00568b92  2bc7                 sub eax, edi
// 00568b94  56                   push esi
// 00568b95  2b742448             sub esi, dword ptr [esp + 0x48]
// 00568b99  50                   push eax
// 00568b9a  56                   push esi
// 00568b9b  89442448             mov dword ptr [esp + 0x48], eax
// 00568b9f  e8bcfeffff           call 0x568a60
// 00568ba4  8b542448             mov edx, dword ptr [esp + 0x48]
// 00568ba8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00568bac  53                   push ebx
// 00568bad  52                   push edx
// 00568bae  55                   push ebp
// 00568baf  50                   push eax
// 00568bb0  e8abfeffff           call 0x568a60
// 00568bb5  83c440               add esp, 0x40
// 00568bb8  5f                   pop edi
// 00568bb9  5d                   pop ebp
// 00568bba  5b                   pop ebx
// 00568bbb  5e                   pop esi
// 00568bbc  59                   pop ecx
// 00568bbd  c3                   ret 
// 00568bbe  8b542418             mov edx, dword ptr [esp + 0x18]
// 00568bc2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568bc6  52                   push edx
// 00568bc7  56                   push esi
// 00568bc8  50                   push eax
// 00568bc9  51                   push ecx
// 00568bca  e891feffff           call 0x568a60
// 00568bcf  83c410               add esp, 0x10
// 00568bd2  5e                   pop esi
// 00568bd3  59                   pop ecx
// 00568bd4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
