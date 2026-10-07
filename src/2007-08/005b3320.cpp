// roc 2007-08 005b3320  unit: RBX::Assembly  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3320
//
// 005b3320  51                   push ecx
// 005b3321  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b3325  56                   push esi
// 005b3326  8b742414             mov esi, dword ptr [esp + 0x14]
// 005b332a  8bc6                 mov eax, esi
// 005b332c  2bc1                 sub eax, ecx
// 005b332e  c1f802               sar eax, 2
// 005b3331  83f828               cmp eax, 0x28
// 005b3334  7e7a                 jle 0x5b33b0
// 005b3336  83c001               add eax, 1
// 005b3339  99                   cdq 
// 005b333a  53                   push ebx
// 005b333b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005b333f  83e207               and edx, 7
// 005b3342  03c2                 add eax, edx
// 005b3344  55                   push ebp
// 005b3345  c1f803               sar eax, 3
// 005b3348  57                   push edi
// 005b3349  8d14c500000000       lea edx, [eax*8]
// 005b3350  89542420             mov dword ptr [esp + 0x20], edx
// 005b3354  53                   push ebx
// 005b3355  8d3c8500000000       lea edi, [eax*4]
// 005b335c  03d1                 add edx, ecx
// 005b335e  8d040f               lea eax, [edi + ecx]
// 005b3361  52                   push edx
// 005b3362  50                   push eax
// 005b3363  51                   push ecx
// 005b3364  89442420             mov dword ptr [esp + 0x20], eax
// 005b3368  e893feffff           call 0x5b3200
// 005b336d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005b3371  53                   push ebx
// 005b3372  8d042f               lea eax, [edi + ebp]
// 005b3375  50                   push eax
// 005b3376  8bcd                 mov ecx, ebp
// 005b3378  2bcf                 sub ecx, edi
// 005b337a  55                   push ebp
// 005b337b  51                   push ecx
// 005b337c  e87ffeffff           call 0x5b3200
// 005b3381  53                   push ebx
// 005b3382  8bc6                 mov eax, esi
// 005b3384  2bc7                 sub eax, edi
// 005b3386  56                   push esi
// 005b3387  2b742448             sub esi, dword ptr [esp + 0x48]
// 005b338b  50                   push eax
// 005b338c  56                   push esi
// 005b338d  89442448             mov dword ptr [esp + 0x48], eax
// 005b3391  e86afeffff           call 0x5b3200
// 005b3396  8b542448             mov edx, dword ptr [esp + 0x48]
// 005b339a  8b442440             mov eax, dword ptr [esp + 0x40]
// 005b339e  53                   push ebx
// 005b339f  52                   push edx
// 005b33a0  55                   push ebp
// 005b33a1  50                   push eax
// 005b33a2  e859feffff           call 0x5b3200
// 005b33a7  83c440               add esp, 0x40
// 005b33aa  5f                   pop edi
// 005b33ab  5d                   pop ebp
// 005b33ac  5b                   pop ebx
// 005b33ad  5e                   pop esi
// 005b33ae  59                   pop ecx
// 005b33af  c3                   ret 
// 005b33b0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b33b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005b33b8  52                   push edx
// 005b33b9  56                   push esi
// 005b33ba  50                   push eax
// 005b33bb  51                   push ecx
// 005b33bc  e83ffeffff           call 0x5b3200
// 005b33c1  83c410               add esp, 0x10
// 005b33c4  5e                   pop esi
// 005b33c5  59                   pop ecx
// 005b33c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
