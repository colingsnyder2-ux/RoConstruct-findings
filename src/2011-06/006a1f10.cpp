// from server: 100% by auto
// roc 2011-06 006a1f10  unit: RBX::Assembly  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1f10
//
// 006a1f10  51                   push ecx
// 006a1f11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a1f15  56                   push esi
// 006a1f16  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a1f1a  8bc6                 mov eax, esi
// 006a1f1c  2bc1                 sub eax, ecx
// 006a1f1e  c1f802               sar eax, 2
// 006a1f21  83f828               cmp eax, 0x28
// 006a1f24  7e78                 jle 0x6a1f9e
// 006a1f26  40                   inc eax
// 006a1f27  99                   cdq 
// 006a1f28  53                   push ebx
// 006a1f29  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006a1f2d  83e207               and edx, 7
// 006a1f30  03c2                 add eax, edx
// 006a1f32  55                   push ebp
// 006a1f33  c1f803               sar eax, 3
// 006a1f36  57                   push edi
// 006a1f37  8d14c500000000       lea edx, [eax*8]
// 006a1f3e  89542420             mov dword ptr [esp + 0x20], edx
// 006a1f42  53                   push ebx
// 006a1f43  8d3c8500000000       lea edi, [eax*4]
// 006a1f4a  03d1                 add edx, ecx
// 006a1f4c  8d040f               lea eax, [edi + ecx]
// 006a1f4f  52                   push edx
// 006a1f50  50                   push eax
// 006a1f51  51                   push ecx
// 006a1f52  89442420             mov dword ptr [esp + 0x20], eax
// 006a1f56  e875fdffff           call 0x6a1cd0
// 006a1f5b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006a1f5f  53                   push ebx
// 006a1f60  8d042f               lea eax, [edi + ebp]
// 006a1f63  50                   push eax
// 006a1f64  8bcd                 mov ecx, ebp
// 006a1f66  2bcf                 sub ecx, edi
// 006a1f68  55                   push ebp
// 006a1f69  51                   push ecx
// 006a1f6a  e861fdffff           call 0x6a1cd0
// 006a1f6f  53                   push ebx
// 006a1f70  8bc6                 mov eax, esi
// 006a1f72  2bc7                 sub eax, edi
// 006a1f74  56                   push esi
// 006a1f75  2b742448             sub esi, dword ptr [esp + 0x48]
// 006a1f79  50                   push eax
// 006a1f7a  56                   push esi
// 006a1f7b  89442448             mov dword ptr [esp + 0x48], eax
// 006a1f7f  e84cfdffff           call 0x6a1cd0
// 006a1f84  8b542448             mov edx, dword ptr [esp + 0x48]
// 006a1f88  8b442440             mov eax, dword ptr [esp + 0x40]
// 006a1f8c  53                   push ebx
// 006a1f8d  52                   push edx
// 006a1f8e  55                   push ebp
// 006a1f8f  50                   push eax
// 006a1f90  e83bfdffff           call 0x6a1cd0
// 006a1f95  83c440               add esp, 0x40
// 006a1f98  5f                   pop edi
// 006a1f99  5d                   pop ebp
// 006a1f9a  5b                   pop ebx
// 006a1f9b  5e                   pop esi
// 006a1f9c  59                   pop ecx
// 006a1f9d  c3                   ret 
// 006a1f9e  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a1fa2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a1fa6  52                   push edx
// 006a1fa7  56                   push esi
// 006a1fa8  50                   push eax
// 006a1fa9  51                   push ecx
// 006a1faa  e821fdffff           call 0x6a1cd0
// 006a1faf  83c410               add esp, 0x10
// 006a1fb2  5e                   pop esi
// 006a1fb3  59                   pop ecx
// 006a1fb4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
