// roc 2011-06 009c44f0  unit: seg_009c0000  size: 514 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c44f0
//
// 009c44f0  83ec40               sub esp, 0x40
// 009c44f3  53                   push ebx
// 009c44f4  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 009c44f8  55                   push ebp
// 009c44f9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 009c44fd  56                   push esi
// 009c44fe  8bf1                 mov esi, ecx
// 009c4500  8b06                 mov eax, dword ptr [esi]
// 009c4502  57                   push edi
// 009c4503  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009c4507  3bf8                 cmp edi, eax
// 009c4509  7210                 jb 0x9c451b
// 009c450b  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c450e  c1e104               shl ecx, 4
// 009c4511  03c8                 add ecx, eax
// 009c4513  3bf9                 cmp edi, ecx
// 009c4515  0f8201010000         jb 0x9c461c
// 009c451b  3bd8                 cmp ebx, eax
// 009c451d  7210                 jb 0x9c452f
// 009c451f  8b5604               mov edx, dword ptr [esi + 4]
// 009c4522  c1e204               shl edx, 4
// 009c4525  03d0                 add edx, eax
// 009c4527  3bda                 cmp ebx, edx
// 009c4529  0f82ed000000         jb 0x9c461c
// 009c452f  3be8                 cmp ebp, eax
// 009c4531  7210                 jb 0x9c4543
// 009c4533  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c4536  c1e104               shl ecx, 4
// 009c4539  03c8                 add ecx, eax
// 009c453b  3be9                 cmp ebp, ecx
// 009c453d  0f82d9000000         jb 0x9c461c
// 009c4543  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009c4547  3bc8                 cmp ecx, eax
// 009c4549  7210                 jb 0x9c455b
// 009c454b  8b5604               mov edx, dword ptr [esi + 4]
// 009c454e  c1e204               shl edx, 4
// 009c4551  03d0                 add edx, eax
// 009c4553  3bca                 cmp ecx, edx
// 009c4555  0f82c5000000         jb 0x9c4620
// 009c455b  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c455e  8d5103               lea edx, [ecx + 3]
// 009c4561  3b5608               cmp edx, dword ptr [esi + 8]
// 009c4564  7d56                 jge 0x9c45bc
// 009c4566  c1e104               shl ecx, 4
// 009c4569  03c8                 add ecx, eax
// 009c456b  7406                 je 0x9c4573
// 009c456d  57                   push edi
// 009c456e  e8cddcb8ff           call 0x552240
// 009c4573  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c4576  41                   inc ecx
// 009c4577  c1e104               shl ecx, 4
// 009c457a  030e                 add ecx, dword ptr [esi]
// 009c457c  7406                 je 0x9c4584
// 009c457e  53                   push ebx
// 009c457f  e8bcdcb8ff           call 0x552240
// 009c4584  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c4587  83c102               add ecx, 2
// 009c458a  c1e104               shl ecx, 4
// 009c458d  030e                 add ecx, dword ptr [esi]
// 009c458f  7406                 je 0x9c4597
// 009c4591  55                   push ebp
// 009c4592  e8a9dcb8ff           call 0x552240
// 009c4597  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c459a  83c103               add ecx, 3
// 009c459d  c1e104               shl ecx, 4
// 009c45a0  030e                 add ecx, dword ptr [esi]
// 009c45a2  740a                 je 0x9c45ae
// 009c45a4  8b442460             mov eax, dword ptr [esp + 0x60]
// 009c45a8  50                   push eax
// 009c45a9  e892dcb8ff           call 0x552240
// 009c45ae  83460404             add dword ptr [esi + 4], 4
// 009c45b2  5f                   pop edi
// 009c45b3  5e                   pop esi
// 009c45b4  5d                   pop ebp
// 009c45b5  5b                   pop ebx
// 009c45b6  83c440               add esp, 0x40
// 009c45b9  c21000               ret 0x10
// 009c45bc  83c104               add ecx, 4
// 009c45bf  6a00                 push 0
// 009c45c1  51                   push ecx
// 009c45c2  8bce                 mov ecx, esi
// 009c45c4  e81782f6ff           call 0x92c7e0
// 009c45c9  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c45cc  83e904               sub ecx, 4
// 009c45cf  c1e104               shl ecx, 4
// 009c45d2  030e                 add ecx, dword ptr [esi]
// 009c45d4  57                   push edi
// 009c45d5  e866dcb8ff           call 0x552240
// 009c45da  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c45dd  83e903               sub ecx, 3
// 009c45e0  c1e104               shl ecx, 4
// 009c45e3  030e                 add ecx, dword ptr [esi]
// 009c45e5  53                   push ebx
// 009c45e6  e855dcb8ff           call 0x552240
// 009c45eb  8b4e04               mov ecx, dword ptr [esi + 4]
// 009c45ee  83e902               sub ecx, 2
// 009c45f1  c1e104               shl ecx, 4
// 009c45f4  030e                 add ecx, dword ptr [esi]
// 009c45f6  55                   push ebp
// 009c45f7  e844dcb8ff           call 0x552240
// 009c45fc  8b5604               mov edx, dword ptr [esi + 4]
// 009c45ff  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009c4603  8b06                 mov eax, dword ptr [esi]
// 009c4605  c1e204               shl edx, 4
// 009c4608  51                   push ecx
// 009c4609  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 009c460d  e82edcb8ff           call 0x552240
// 009c4612  5f                   pop edi
// 009c4613  5e                   pop esi
// 009c4614  5d                   pop ebp
// 009c4615  5b                   pop ebx
// 009c4616  83c440               add esp, 0x40
// 009c4619  c21000               ret 0x10
// 009c461c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009c4620  f30f1007             movss xmm0, dword ptr [edi]
// 009c4624  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 009c462a  f30f104704           movss xmm0, dword ptr [edi + 4]
// 009c462f  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 009c4635  f30f104708           movss xmm0, dword ptr [edi + 8]
// 009c463a  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 009c4640  f30f10470c           movss xmm0, dword ptr [edi + 0xc]
// 009c4645  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 009c464b  f30f1003             movss xmm0, dword ptr [ebx]
// 009c464f  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 009c4655  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 009c465a  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 009c4660  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 009c4665  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 009c466b  f30f10430c           movss xmm0, dword ptr [ebx + 0xc]
// 009c4670  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 009c4676  f30f104500           movss xmm0, dword ptr [ebp]
// 009c467b  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 009c4681  f30f104504           movss xmm0, dword ptr [ebp + 4]
// 009c4686  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 009c468c  f30f104508           movss xmm0, dword ptr [ebp + 8]
// 009c4691  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 009c4697  f30f10450c           movss xmm0, dword ptr [ebp + 0xc]
// 009c469c  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 009c46a2  f30f1001             movss xmm0, dword ptr [ecx]
// 009c46a6  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 009c46ac  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 009c46b1  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 009c46b7  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 009c46bc  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 009c46c2  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 009c46c7  8d4c2410             lea ecx, [esp + 0x10]
// 009c46cb  51                   push ecx
// 009c46cc  8d542424             lea edx, [esp + 0x24]
// 009c46d0  52                   push edx
// 009c46d1  8d442438             lea eax, [esp + 0x38]
// 009c46d5  50                   push eax
// 009c46d6  8d4c244c             lea ecx, [esp + 0x4c]
// 009c46da  51                   push ecx
// 009c46db  8bce                 mov ecx, esi
// 009c46dd  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 009c46e3  e808feffff           call 0x9c44f0
// 009c46e8  5f                   pop edi
// 009c46e9  5e                   pop esi
// 009c46ea  5d                   pop ebp
// 009c46eb  5b                   pop ebx
// 009c46ec  83c440               add esp, 0x40
// 009c46ef  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
