// roc 2010-06 0054b0c0  unit: RBX::AggregateChunk  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b0c0
//
// 0054b0c0  51                   push ecx
// 0054b0c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b0c5  56                   push esi
// 0054b0c6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054b0ca  8bc6                 mov eax, esi
// 0054b0cc  2bc1                 sub eax, ecx
// 0054b0ce  c1f802               sar eax, 2
// 0054b0d1  83f828               cmp eax, 0x28
// 0054b0d4  7e78                 jle 0x54b14e
// 0054b0d6  40                   inc eax
// 0054b0d7  99                   cdq 
// 0054b0d8  53                   push ebx
// 0054b0d9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0054b0dd  83e207               and edx, 7
// 0054b0e0  03c2                 add eax, edx
// 0054b0e2  55                   push ebp
// 0054b0e3  c1f803               sar eax, 3
// 0054b0e6  57                   push edi
// 0054b0e7  8d14c500000000       lea edx, [eax*8]
// 0054b0ee  89542420             mov dword ptr [esp + 0x20], edx
// 0054b0f2  53                   push ebx
// 0054b0f3  8d3c8500000000       lea edi, [eax*4]
// 0054b0fa  03d1                 add edx, ecx
// 0054b0fc  8d040f               lea eax, [edi + ecx]
// 0054b0ff  52                   push edx
// 0054b100  50                   push eax
// 0054b101  51                   push ecx
// 0054b102  89442420             mov dword ptr [esp + 0x20], eax
// 0054b106  e8e5feffff           call 0x54aff0
// 0054b10b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0054b10f  53                   push ebx
// 0054b110  8d042f               lea eax, [edi + ebp]
// 0054b113  50                   push eax
// 0054b114  8bcd                 mov ecx, ebp
// 0054b116  2bcf                 sub ecx, edi
// 0054b118  55                   push ebp
// 0054b119  51                   push ecx
// 0054b11a  e8d1feffff           call 0x54aff0
// 0054b11f  53                   push ebx
// 0054b120  8bc6                 mov eax, esi
// 0054b122  2bc7                 sub eax, edi
// 0054b124  56                   push esi
// 0054b125  2b742448             sub esi, dword ptr [esp + 0x48]
// 0054b129  50                   push eax
// 0054b12a  56                   push esi
// 0054b12b  89442448             mov dword ptr [esp + 0x48], eax
// 0054b12f  e8bcfeffff           call 0x54aff0
// 0054b134  8b542448             mov edx, dword ptr [esp + 0x48]
// 0054b138  8b442440             mov eax, dword ptr [esp + 0x40]
// 0054b13c  53                   push ebx
// 0054b13d  52                   push edx
// 0054b13e  55                   push ebp
// 0054b13f  50                   push eax
// 0054b140  e8abfeffff           call 0x54aff0
// 0054b145  83c440               add esp, 0x40
// 0054b148  5f                   pop edi
// 0054b149  5d                   pop ebp
// 0054b14a  5b                   pop ebx
// 0054b14b  5e                   pop esi
// 0054b14c  59                   pop ecx
// 0054b14d  c3                   ret 
// 0054b14e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054b152  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054b156  52                   push edx
// 0054b157  56                   push esi
// 0054b158  50                   push eax
// 0054b159  51                   push ecx
// 0054b15a  e891feffff           call 0x54aff0
// 0054b15f  83c410               add esp, 0x10
// 0054b162  5e                   pop esi
// 0054b163  59                   pop ecx
// 0054b164  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
