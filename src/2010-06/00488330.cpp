// from server: 100% by auto
// roc 2010-06 00488330  unit: G3D::Win32Window  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488330
//
// 00488330  51                   push ecx
// 00488331  53                   push ebx
// 00488332  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00488336  55                   push ebp
// 00488337  56                   push esi
// 00488338  57                   push edi
// 00488339  8bf1                 mov esi, ecx
// 0048833b  8b4608               mov eax, dword ptr [esi + 8]
// 0048833e  8d3c9d00000000       lea edi, [ebx*4]
// 00488345  6a10                 push 0x10
// 00488347  57                   push edi
// 00488348  89442418             mov dword ptr [esp + 0x18], eax
// 0048834c  e84f550c00           call 0x54d8a0
// 00488351  57                   push edi
// 00488352  6a00                 push 0
// 00488354  50                   push eax
// 00488355  894608               mov dword ptr [esi + 8], eax
// 00488358  e843620c00           call 0x54e5a0
// 0048835d  33ed                 xor ebp, ebp
// 0048835f  83c414               add esp, 0x14
// 00488362  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00488365  7e2f                 jle 0x488396
// 00488367  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048836b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0048836e  85c9                 test ecx, ecx
// 00488370  741e                 je 0x488390
// 00488372  8b01                 mov eax, dword ptr [ecx]
// 00488374  33d2                 xor edx, edx
// 00488376  f7f3                 div ebx
// 00488378  8b4608               mov eax, dword ptr [esi + 8]
// 0048837b  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0048837e  8b0490               mov eax, dword ptr [eax + edx*4]
// 00488381  89410c               mov dword ptr [ecx + 0xc], eax
// 00488384  8b4608               mov eax, dword ptr [esi + 8]
// 00488387  890c90               mov dword ptr [eax + edx*4], ecx
// 0048838a  8bcf                 mov ecx, edi
// 0048838c  85ff                 test edi, edi
// 0048838e  75e2                 jne 0x488372
// 00488390  45                   inc ebp
// 00488391  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00488394  7cd1                 jl 0x488367
// 00488396  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048839a  51                   push ecx
// 0048839b  e820560c00           call 0x54d9c0
// 004883a0  83c404               add esp, 4
// 004883a3  5f                   pop edi
// 004883a4  895e0c               mov dword ptr [esi + 0xc], ebx
// 004883a7  5e                   pop esi
// 004883a8  5d                   pop ebp
// 004883a9  5b                   pop ebx
// 004883aa  59                   pop ecx
// 004883ab  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?resize@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
