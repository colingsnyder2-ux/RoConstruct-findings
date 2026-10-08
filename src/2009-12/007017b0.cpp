// roc 2009-12 007017b0  unit: RBX::Assembly  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007017b0
//
// 007017b0  51                   push ecx
// 007017b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007017b5  56                   push esi
// 007017b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 007017ba  8bc6                 mov eax, esi
// 007017bc  2bc1                 sub eax, ecx
// 007017be  c1f802               sar eax, 2
// 007017c1  83f828               cmp eax, 0x28
// 007017c4  7e78                 jle 0x70183e
// 007017c6  40                   inc eax
// 007017c7  99                   cdq 
// 007017c8  53                   push ebx
// 007017c9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007017cd  83e207               and edx, 7
// 007017d0  03c2                 add eax, edx
// 007017d2  55                   push ebp
// 007017d3  c1f803               sar eax, 3
// 007017d6  57                   push edi
// 007017d7  8d14c500000000       lea edx, [eax*8]
// 007017de  89542420             mov dword ptr [esp + 0x20], edx
// 007017e2  53                   push ebx
// 007017e3  8d3c8500000000       lea edi, [eax*4]
// 007017ea  03d1                 add edx, ecx
// 007017ec  8d040f               lea eax, [edi + ecx]
// 007017ef  52                   push edx
// 007017f0  50                   push eax
// 007017f1  51                   push ecx
// 007017f2  89442420             mov dword ptr [esp + 0x20], eax
// 007017f6  e8d5fcffff           call 0x7014d0
// 007017fb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007017ff  53                   push ebx
// 00701800  8d042f               lea eax, [edi + ebp]
// 00701803  50                   push eax
// 00701804  8bcd                 mov ecx, ebp
// 00701806  2bcf                 sub ecx, edi
// 00701808  55                   push ebp
// 00701809  51                   push ecx
// 0070180a  e8c1fcffff           call 0x7014d0
// 0070180f  53                   push ebx
// 00701810  8bc6                 mov eax, esi
// 00701812  2bc7                 sub eax, edi
// 00701814  56                   push esi
// 00701815  2b742448             sub esi, dword ptr [esp + 0x48]
// 00701819  50                   push eax
// 0070181a  56                   push esi
// 0070181b  89442448             mov dword ptr [esp + 0x48], eax
// 0070181f  e8acfcffff           call 0x7014d0
// 00701824  8b542448             mov edx, dword ptr [esp + 0x48]
// 00701828  8b442440             mov eax, dword ptr [esp + 0x40]
// 0070182c  53                   push ebx
// 0070182d  52                   push edx
// 0070182e  55                   push ebp
// 0070182f  50                   push eax
// 00701830  e89bfcffff           call 0x7014d0
// 00701835  83c440               add esp, 0x40
// 00701838  5f                   pop edi
// 00701839  5d                   pop ebp
// 0070183a  5b                   pop ebx
// 0070183b  5e                   pop esi
// 0070183c  59                   pop ecx
// 0070183d  c3                   ret 
// 0070183e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00701842  8b442410             mov eax, dword ptr [esp + 0x10]
// 00701846  52                   push edx
// 00701847  56                   push esi
// 00701848  50                   push eax
// 00701849  51                   push ecx
// 0070184a  e881fcffff           call 0x7014d0
// 0070184f  83c410               add esp, 0x10
// 00701852  5e                   pop esi
// 00701853  59                   pop ecx
// 00701854  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
