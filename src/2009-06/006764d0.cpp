// from server: 100% by auto
// roc 2009-06 006764d0  unit: RBX::Assembly  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006764d0
//
// 006764d0  51                   push ecx
// 006764d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006764d5  56                   push esi
// 006764d6  8b742414             mov esi, dword ptr [esp + 0x14]
// 006764da  8bc6                 mov eax, esi
// 006764dc  2bc1                 sub eax, ecx
// 006764de  c1f802               sar eax, 2
// 006764e1  83f828               cmp eax, 0x28
// 006764e4  7e78                 jle 0x67655e
// 006764e6  40                   inc eax
// 006764e7  99                   cdq 
// 006764e8  53                   push ebx
// 006764e9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006764ed  83e207               and edx, 7
// 006764f0  03c2                 add eax, edx
// 006764f2  55                   push ebp
// 006764f3  c1f803               sar eax, 3
// 006764f6  57                   push edi
// 006764f7  8d14c500000000       lea edx, [eax*8]
// 006764fe  89542420             mov dword ptr [esp + 0x20], edx
// 00676502  53                   push ebx
// 00676503  8d3c8500000000       lea edi, [eax*4]
// 0067650a  03d1                 add edx, ecx
// 0067650c  8d040f               lea eax, [edi + ecx]
// 0067650f  52                   push edx
// 00676510  50                   push eax
// 00676511  51                   push ecx
// 00676512  89442420             mov dword ptr [esp + 0x20], eax
// 00676516  e855fcffff           call 0x676170
// 0067651b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0067651f  53                   push ebx
// 00676520  8d042f               lea eax, [edi + ebp]
// 00676523  50                   push eax
// 00676524  8bcd                 mov ecx, ebp
// 00676526  2bcf                 sub ecx, edi
// 00676528  55                   push ebp
// 00676529  51                   push ecx
// 0067652a  e841fcffff           call 0x676170
// 0067652f  53                   push ebx
// 00676530  8bc6                 mov eax, esi
// 00676532  2bc7                 sub eax, edi
// 00676534  56                   push esi
// 00676535  2b742448             sub esi, dword ptr [esp + 0x48]
// 00676539  50                   push eax
// 0067653a  56                   push esi
// 0067653b  89442448             mov dword ptr [esp + 0x48], eax
// 0067653f  e82cfcffff           call 0x676170
// 00676544  8b542448             mov edx, dword ptr [esp + 0x48]
// 00676548  8b442440             mov eax, dword ptr [esp + 0x40]
// 0067654c  53                   push ebx
// 0067654d  52                   push edx
// 0067654e  55                   push ebp
// 0067654f  50                   push eax
// 00676550  e81bfcffff           call 0x676170
// 00676555  83c440               add esp, 0x40
// 00676558  5f                   pop edi
// 00676559  5d                   pop ebp
// 0067655a  5b                   pop ebx
// 0067655b  5e                   pop esi
// 0067655c  59                   pop ecx
// 0067655d  c3                   ret 
// 0067655e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00676562  8b442410             mov eax, dword ptr [esp + 0x10]
// 00676566  52                   push edx
// 00676567  56                   push esi
// 00676568  50                   push eax
// 00676569  51                   push ecx
// 0067656a  e801fcffff           call 0x676170
// 0067656f  83c410               add esp, 0x10
// 00676572  5e                   pop esi
// 00676573  59                   pop ecx
// 00676574  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
