// roc 2007-08 004fce90  unit: RBX::Render::AggregateChunk  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fce90
//
// 004fce90  51                   push ecx
// 004fce91  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fce95  56                   push esi
// 004fce96  8b742414             mov esi, dword ptr [esp + 0x14]
// 004fce9a  8bc6                 mov eax, esi
// 004fce9c  2bc1                 sub eax, ecx
// 004fce9e  c1f802               sar eax, 2
// 004fcea1  83f828               cmp eax, 0x28
// 004fcea4  7e7a                 jle 0x4fcf20
// 004fcea6  83c001               add eax, 1
// 004fcea9  99                   cdq 
// 004fceaa  53                   push ebx
// 004fceab  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004fceaf  83e207               and edx, 7
// 004fceb2  03c2                 add eax, edx
// 004fceb4  55                   push ebp
// 004fceb5  c1f803               sar eax, 3
// 004fceb8  57                   push edi
// 004fceb9  8d14c500000000       lea edx, [eax*8]
// 004fcec0  89542420             mov dword ptr [esp + 0x20], edx
// 004fcec4  53                   push ebx
// 004fcec5  8d3c8500000000       lea edi, [eax*4]
// 004fcecc  03d1                 add edx, ecx
// 004fcece  8d040f               lea eax, [edi + ecx]
// 004fced1  52                   push edx
// 004fced2  50                   push eax
// 004fced3  51                   push ecx
// 004fced4  89442420             mov dword ptr [esp + 0x20], eax
// 004fced8  e8e3feffff           call 0x4fcdc0
// 004fcedd  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004fcee1  53                   push ebx
// 004fcee2  8d042f               lea eax, [edi + ebp]
// 004fcee5  50                   push eax
// 004fcee6  8bcd                 mov ecx, ebp
// 004fcee8  2bcf                 sub ecx, edi
// 004fceea  55                   push ebp
// 004fceeb  51                   push ecx
// 004fceec  e8cffeffff           call 0x4fcdc0
// 004fcef1  53                   push ebx
// 004fcef2  8bc6                 mov eax, esi
// 004fcef4  2bc7                 sub eax, edi
// 004fcef6  56                   push esi
// 004fcef7  2b742448             sub esi, dword ptr [esp + 0x48]
// 004fcefb  50                   push eax
// 004fcefc  56                   push esi
// 004fcefd  89442448             mov dword ptr [esp + 0x48], eax
// 004fcf01  e8bafeffff           call 0x4fcdc0
// 004fcf06  8b542448             mov edx, dword ptr [esp + 0x48]
// 004fcf0a  8b442440             mov eax, dword ptr [esp + 0x40]
// 004fcf0e  53                   push ebx
// 004fcf0f  52                   push edx
// 004fcf10  55                   push ebp
// 004fcf11  50                   push eax
// 004fcf12  e8a9feffff           call 0x4fcdc0
// 004fcf17  83c440               add esp, 0x40
// 004fcf1a  5f                   pop edi
// 004fcf1b  5d                   pop ebp
// 004fcf1c  5b                   pop ebx
// 004fcf1d  5e                   pop esi
// 004fcf1e  59                   pop ecx
// 004fcf1f  c3                   ret 
// 004fcf20  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fcf24  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fcf28  52                   push edx
// 004fcf29  56                   push esi
// 004fcf2a  50                   push eax
// 004fcf2b  51                   push ecx
// 004fcf2c  e88ffeffff           call 0x4fcdc0
// 004fcf31  83c410               add esp, 0x10
// 004fcf34  5e                   pop esi
// 004fcf35  59                   pop ecx
// 004fcf36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
