// roc 2009-12 005e7af0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7af0
//
// 005e7af0  51                   push ecx
// 005e7af1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e7af5  56                   push esi
// 005e7af6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e7afa  8bc6                 mov eax, esi
// 005e7afc  2bc1                 sub eax, ecx
// 005e7afe  c1f802               sar eax, 2
// 005e7b01  83f828               cmp eax, 0x28
// 005e7b04  7e78                 jle 0x5e7b7e
// 005e7b06  40                   inc eax
// 005e7b07  99                   cdq 
// 005e7b08  53                   push ebx
// 005e7b09  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005e7b0d  83e207               and edx, 7
// 005e7b10  03c2                 add eax, edx
// 005e7b12  55                   push ebp
// 005e7b13  c1f803               sar eax, 3
// 005e7b16  57                   push edi
// 005e7b17  8d14c500000000       lea edx, [eax*8]
// 005e7b1e  89542420             mov dword ptr [esp + 0x20], edx
// 005e7b22  53                   push ebx
// 005e7b23  8d3c8500000000       lea edi, [eax*4]
// 005e7b2a  03d1                 add edx, ecx
// 005e7b2c  8d040f               lea eax, [edi + ecx]
// 005e7b2f  52                   push edx
// 005e7b30  50                   push eax
// 005e7b31  51                   push ecx
// 005e7b32  89442420             mov dword ptr [esp + 0x20], eax
// 005e7b36  e8e5feffff           call 0x5e7a20
// 005e7b3b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005e7b3f  53                   push ebx
// 005e7b40  8d042f               lea eax, [edi + ebp]
// 005e7b43  50                   push eax
// 005e7b44  8bcd                 mov ecx, ebp
// 005e7b46  2bcf                 sub ecx, edi
// 005e7b48  55                   push ebp
// 005e7b49  51                   push ecx
// 005e7b4a  e8d1feffff           call 0x5e7a20
// 005e7b4f  53                   push ebx
// 005e7b50  8bc6                 mov eax, esi
// 005e7b52  2bc7                 sub eax, edi
// 005e7b54  56                   push esi
// 005e7b55  2b742448             sub esi, dword ptr [esp + 0x48]
// 005e7b59  50                   push eax
// 005e7b5a  56                   push esi
// 005e7b5b  89442448             mov dword ptr [esp + 0x48], eax
// 005e7b5f  e8bcfeffff           call 0x5e7a20
// 005e7b64  8b542448             mov edx, dword ptr [esp + 0x48]
// 005e7b68  8b442440             mov eax, dword ptr [esp + 0x40]
// 005e7b6c  53                   push ebx
// 005e7b6d  52                   push edx
// 005e7b6e  55                   push ebp
// 005e7b6f  50                   push eax
// 005e7b70  e8abfeffff           call 0x5e7a20
// 005e7b75  83c440               add esp, 0x40
// 005e7b78  5f                   pop edi
// 005e7b79  5d                   pop ebp
// 005e7b7a  5b                   pop ebx
// 005e7b7b  5e                   pop esi
// 005e7b7c  59                   pop ecx
// 005e7b7d  c3                   ret 
// 005e7b7e  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e7b82  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e7b86  52                   push edx
// 005e7b87  56                   push esi
// 005e7b88  50                   push eax
// 005e7b89  51                   push ecx
// 005e7b8a  e891feffff           call 0x5e7a20
// 005e7b8f  83c410               add esp, 0x10
// 005e7b92  5e                   pop esi
// 005e7b93  59                   pop ecx
// 005e7b94  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
