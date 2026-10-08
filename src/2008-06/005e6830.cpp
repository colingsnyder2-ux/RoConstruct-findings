// from server: 100% by auto
// roc 2008-06 005e6830  unit: RBX::Clump  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6830
//
// 005e6830  51                   push ecx
// 005e6831  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e6835  56                   push esi
// 005e6836  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e683a  8bc6                 mov eax, esi
// 005e683c  2bc1                 sub eax, ecx
// 005e683e  c1f802               sar eax, 2
// 005e6841  83f828               cmp eax, 0x28
// 005e6844  7e78                 jle 0x5e68be
// 005e6846  40                   inc eax
// 005e6847  99                   cdq 
// 005e6848  53                   push ebx
// 005e6849  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005e684d  83e207               and edx, 7
// 005e6850  03c2                 add eax, edx
// 005e6852  55                   push ebp
// 005e6853  c1f803               sar eax, 3
// 005e6856  57                   push edi
// 005e6857  8d14c500000000       lea edx, [eax*8]
// 005e685e  89542420             mov dword ptr [esp + 0x20], edx
// 005e6862  53                   push ebx
// 005e6863  8d3c8500000000       lea edi, [eax*4]
// 005e686a  03d1                 add edx, ecx
// 005e686c  8d040f               lea eax, [edi + ecx]
// 005e686f  52                   push edx
// 005e6870  50                   push eax
// 005e6871  51                   push ecx
// 005e6872  89442420             mov dword ptr [esp + 0x20], eax
// 005e6876  e835feffff           call 0x5e66b0
// 005e687b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005e687f  53                   push ebx
// 005e6880  8d042f               lea eax, [edi + ebp]
// 005e6883  50                   push eax
// 005e6884  8bcd                 mov ecx, ebp
// 005e6886  2bcf                 sub ecx, edi
// 005e6888  55                   push ebp
// 005e6889  51                   push ecx
// 005e688a  e821feffff           call 0x5e66b0
// 005e688f  53                   push ebx
// 005e6890  8bc6                 mov eax, esi
// 005e6892  2bc7                 sub eax, edi
// 005e6894  56                   push esi
// 005e6895  2b742448             sub esi, dword ptr [esp + 0x48]
// 005e6899  50                   push eax
// 005e689a  56                   push esi
// 005e689b  89442448             mov dword ptr [esp + 0x48], eax
// 005e689f  e80cfeffff           call 0x5e66b0
// 005e68a4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005e68a8  8b442440             mov eax, dword ptr [esp + 0x40]
// 005e68ac  53                   push ebx
// 005e68ad  52                   push edx
// 005e68ae  55                   push ebp
// 005e68af  50                   push eax
// 005e68b0  e8fbfdffff           call 0x5e66b0
// 005e68b5  83c440               add esp, 0x40
// 005e68b8  5f                   pop edi
// 005e68b9  5d                   pop ebp
// 005e68ba  5b                   pop ebx
// 005e68bb  5e                   pop esi
// 005e68bc  59                   pop ecx
// 005e68bd  c3                   ret 
// 005e68be  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e68c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e68c6  52                   push edx
// 005e68c7  56                   push esi
// 005e68c8  50                   push eax
// 005e68c9  51                   push ecx
// 005e68ca  e8e1fdffff           call 0x5e66b0
// 005e68cf  83c410               add esp, 0x10
// 005e68d2  5e                   pop esi
// 005e68d3  59                   pop ecx
// 005e68d4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
