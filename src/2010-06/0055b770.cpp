// from server: 100% by auto
// roc 2010-06 0055b770  unit: G3D::GCamera  size: 514 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b770
//
// 0055b770  83ec40               sub esp, 0x40
// 0055b773  53                   push ebx
// 0055b774  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0055b778  55                   push ebp
// 0055b779  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0055b77d  56                   push esi
// 0055b77e  8bf1                 mov esi, ecx
// 0055b780  8b06                 mov eax, dword ptr [esi]
// 0055b782  57                   push edi
// 0055b783  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0055b787  3bf8                 cmp edi, eax
// 0055b789  7210                 jb 0x55b79b
// 0055b78b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b78e  c1e104               shl ecx, 4
// 0055b791  03c8                 add ecx, eax
// 0055b793  3bf9                 cmp edi, ecx
// 0055b795  0f8201010000         jb 0x55b89c
// 0055b79b  3bd8                 cmp ebx, eax
// 0055b79d  7210                 jb 0x55b7af
// 0055b79f  8b5604               mov edx, dword ptr [esi + 4]
// 0055b7a2  c1e204               shl edx, 4
// 0055b7a5  03d0                 add edx, eax
// 0055b7a7  3bda                 cmp ebx, edx
// 0055b7a9  0f82ed000000         jb 0x55b89c
// 0055b7af  3be8                 cmp ebp, eax
// 0055b7b1  7210                 jb 0x55b7c3
// 0055b7b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b7b6  c1e104               shl ecx, 4
// 0055b7b9  03c8                 add ecx, eax
// 0055b7bb  3be9                 cmp ebp, ecx
// 0055b7bd  0f82d9000000         jb 0x55b89c
// 0055b7c3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0055b7c7  3bc8                 cmp ecx, eax
// 0055b7c9  7210                 jb 0x55b7db
// 0055b7cb  8b5604               mov edx, dword ptr [esi + 4]
// 0055b7ce  c1e204               shl edx, 4
// 0055b7d1  03d0                 add edx, eax
// 0055b7d3  3bca                 cmp ecx, edx
// 0055b7d5  0f82c5000000         jb 0x55b8a0
// 0055b7db  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b7de  8d5103               lea edx, [ecx + 3]
// 0055b7e1  3b5608               cmp edx, dword ptr [esi + 8]
// 0055b7e4  7d56                 jge 0x55b83c
// 0055b7e6  c1e104               shl ecx, 4
// 0055b7e9  03c8                 add ecx, eax
// 0055b7eb  7406                 je 0x55b7f3
// 0055b7ed  57                   push edi
// 0055b7ee  e8ad52f3ff           call 0x490aa0
// 0055b7f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b7f6  41                   inc ecx
// 0055b7f7  c1e104               shl ecx, 4
// 0055b7fa  030e                 add ecx, dword ptr [esi]
// 0055b7fc  7406                 je 0x55b804
// 0055b7fe  53                   push ebx
// 0055b7ff  e89c52f3ff           call 0x490aa0
// 0055b804  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b807  83c102               add ecx, 2
// 0055b80a  c1e104               shl ecx, 4
// 0055b80d  030e                 add ecx, dword ptr [esi]
// 0055b80f  7406                 je 0x55b817
// 0055b811  55                   push ebp
// 0055b812  e88952f3ff           call 0x490aa0
// 0055b817  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b81a  83c103               add ecx, 3
// 0055b81d  c1e104               shl ecx, 4
// 0055b820  030e                 add ecx, dword ptr [esi]
// 0055b822  740a                 je 0x55b82e
// 0055b824  8b442460             mov eax, dword ptr [esp + 0x60]
// 0055b828  50                   push eax
// 0055b829  e87252f3ff           call 0x490aa0
// 0055b82e  83460404             add dword ptr [esi + 4], 4
// 0055b832  5f                   pop edi
// 0055b833  5e                   pop esi
// 0055b834  5d                   pop ebp
// 0055b835  5b                   pop ebx
// 0055b836  83c440               add esp, 0x40
// 0055b839  c21000               ret 0x10
// 0055b83c  83c104               add ecx, 4
// 0055b83f  6a00                 push 0
// 0055b841  51                   push ecx
// 0055b842  8bce                 mov ecx, esi
// 0055b844  e8f7fcffff           call 0x55b540
// 0055b849  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b84c  83e904               sub ecx, 4
// 0055b84f  c1e104               shl ecx, 4
// 0055b852  030e                 add ecx, dword ptr [esi]
// 0055b854  57                   push edi
// 0055b855  e84652f3ff           call 0x490aa0
// 0055b85a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b85d  83e903               sub ecx, 3
// 0055b860  c1e104               shl ecx, 4
// 0055b863  030e                 add ecx, dword ptr [esi]
// 0055b865  53                   push ebx
// 0055b866  e83552f3ff           call 0x490aa0
// 0055b86b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055b86e  83e902               sub ecx, 2
// 0055b871  c1e104               shl ecx, 4
// 0055b874  030e                 add ecx, dword ptr [esi]
// 0055b876  55                   push ebp
// 0055b877  e82452f3ff           call 0x490aa0
// 0055b87c  8b5604               mov edx, dword ptr [esi + 4]
// 0055b87f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0055b883  8b06                 mov eax, dword ptr [esi]
// 0055b885  c1e204               shl edx, 4
// 0055b888  51                   push ecx
// 0055b889  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 0055b88d  e80e52f3ff           call 0x490aa0
// 0055b892  5f                   pop edi
// 0055b893  5e                   pop esi
// 0055b894  5d                   pop ebp
// 0055b895  5b                   pop ebx
// 0055b896  83c440               add esp, 0x40
// 0055b899  c21000               ret 0x10
// 0055b89c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0055b8a0  f30f1007             movss xmm0, dword ptr [edi]
// 0055b8a4  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 0055b8aa  f30f104704           movss xmm0, dword ptr [edi + 4]
// 0055b8af  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 0055b8b5  f30f104708           movss xmm0, dword ptr [edi + 8]
// 0055b8ba  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 0055b8c0  f30f10470c           movss xmm0, dword ptr [edi + 0xc]
// 0055b8c5  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 0055b8cb  f30f1003             movss xmm0, dword ptr [ebx]
// 0055b8cf  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 0055b8d5  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 0055b8da  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0055b8e0  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 0055b8e5  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 0055b8eb  f30f10430c           movss xmm0, dword ptr [ebx + 0xc]
// 0055b8f0  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 0055b8f6  f30f104500           movss xmm0, dword ptr [ebp]
// 0055b8fb  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 0055b901  f30f104504           movss xmm0, dword ptr [ebp + 4]
// 0055b906  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 0055b90c  f30f104508           movss xmm0, dword ptr [ebp + 8]
// 0055b911  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 0055b917  f30f10450c           movss xmm0, dword ptr [ebp + 0xc]
// 0055b91c  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 0055b922  f30f1001             movss xmm0, dword ptr [ecx]
// 0055b926  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 0055b92c  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0055b931  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0055b937  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 0055b93c  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 0055b942  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 0055b947  8d4c2410             lea ecx, [esp + 0x10]
// 0055b94b  51                   push ecx
// 0055b94c  8d542424             lea edx, [esp + 0x24]
// 0055b950  52                   push edx
// 0055b951  8d442438             lea eax, [esp + 0x38]
// 0055b955  50                   push eax
// 0055b956  8d4c244c             lea ecx, [esp + 0x4c]
// 0055b95a  51                   push ecx
// 0055b95b  8bce                 mov ecx, esi
// 0055b95d  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 0055b963  e808feffff           call 0x55b770
// 0055b968  5f                   pop edi
// 0055b969  5e                   pop esi
// 0055b96a  5d                   pop ebp
// 0055b96b  5b                   pop ebx
// 0055b96c  83c440               add esp, 0x40
// 0055b96f  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
