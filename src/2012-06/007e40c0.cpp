// from server: 100% by auto
// roc 2012-06 007e40c0  unit: RBX::Assembly  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e40c0
//
// 007e40c0  51                   push ecx
// 007e40c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007e40c5  56                   push esi
// 007e40c6  8b742414             mov esi, dword ptr [esp + 0x14]
// 007e40ca  8bc6                 mov eax, esi
// 007e40cc  2bc1                 sub eax, ecx
// 007e40ce  c1f802               sar eax, 2
// 007e40d1  83f828               cmp eax, 0x28
// 007e40d4  7e78                 jle 0x7e414e
// 007e40d6  40                   inc eax
// 007e40d7  99                   cdq 
// 007e40d8  53                   push ebx
// 007e40d9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007e40dd  83e207               and edx, 7
// 007e40e0  03c2                 add eax, edx
// 007e40e2  55                   push ebp
// 007e40e3  c1f803               sar eax, 3
// 007e40e6  57                   push edi
// 007e40e7  8d14c500000000       lea edx, [eax*8]
// 007e40ee  89542420             mov dword ptr [esp + 0x20], edx
// 007e40f2  53                   push ebx
// 007e40f3  8d3c8500000000       lea edi, [eax*4]
// 007e40fa  03d1                 add edx, ecx
// 007e40fc  8d040f               lea eax, [edi + ecx]
// 007e40ff  52                   push edx
// 007e4100  50                   push eax
// 007e4101  51                   push ecx
// 007e4102  89442420             mov dword ptr [esp + 0x20], eax
// 007e4106  e805fcffff           call 0x7e3d10
// 007e410b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007e410f  53                   push ebx
// 007e4110  8d042f               lea eax, [edi + ebp]
// 007e4113  50                   push eax
// 007e4114  8bcd                 mov ecx, ebp
// 007e4116  2bcf                 sub ecx, edi
// 007e4118  55                   push ebp
// 007e4119  51                   push ecx
// 007e411a  e8f1fbffff           call 0x7e3d10
// 007e411f  53                   push ebx
// 007e4120  8bc6                 mov eax, esi
// 007e4122  2bc7                 sub eax, edi
// 007e4124  56                   push esi
// 007e4125  2b742448             sub esi, dword ptr [esp + 0x48]
// 007e4129  50                   push eax
// 007e412a  56                   push esi
// 007e412b  89442448             mov dword ptr [esp + 0x48], eax
// 007e412f  e8dcfbffff           call 0x7e3d10
// 007e4134  8b542448             mov edx, dword ptr [esp + 0x48]
// 007e4138  8b442440             mov eax, dword ptr [esp + 0x40]
// 007e413c  53                   push ebx
// 007e413d  52                   push edx
// 007e413e  55                   push ebp
// 007e413f  50                   push eax
// 007e4140  e8cbfbffff           call 0x7e3d10
// 007e4145  83c440               add esp, 0x40
// 007e4148  5f                   pop edi
// 007e4149  5d                   pop ebp
// 007e414a  5b                   pop ebx
// 007e414b  5e                   pop esi
// 007e414c  59                   pop ecx
// 007e414d  c3                   ret 
// 007e414e  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e4152  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e4156  52                   push edx
// 007e4157  56                   push esi
// 007e4158  50                   push eax
// 007e4159  51                   push ecx
// 007e415a  e8b1fbffff           call 0x7e3d10
// 007e415f  83c410               add esp, 0x10
// 007e4162  5e                   pop esi
// 007e4163  59                   pop ecx
// 007e4164  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
