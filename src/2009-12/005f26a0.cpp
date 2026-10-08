// roc 2009-12 005f26a0  unit: seg_005f0000  size: 514 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f26a0
//
// 005f26a0  83ec40               sub esp, 0x40
// 005f26a3  53                   push ebx
// 005f26a4  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 005f26a8  55                   push ebp
// 005f26a9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 005f26ad  56                   push esi
// 005f26ae  8bf1                 mov esi, ecx
// 005f26b0  8b06                 mov eax, dword ptr [esi]
// 005f26b2  57                   push edi
// 005f26b3  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005f26b7  3bf8                 cmp edi, eax
// 005f26b9  7210                 jb 0x5f26cb
// 005f26bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f26be  c1e104               shl ecx, 4
// 005f26c1  03c8                 add ecx, eax
// 005f26c3  3bf9                 cmp edi, ecx
// 005f26c5  0f8201010000         jb 0x5f27cc
// 005f26cb  3bd8                 cmp ebx, eax
// 005f26cd  7210                 jb 0x5f26df
// 005f26cf  8b5604               mov edx, dword ptr [esi + 4]
// 005f26d2  c1e204               shl edx, 4
// 005f26d5  03d0                 add edx, eax
// 005f26d7  3bda                 cmp ebx, edx
// 005f26d9  0f82ed000000         jb 0x5f27cc
// 005f26df  3be8                 cmp ebp, eax
// 005f26e1  7210                 jb 0x5f26f3
// 005f26e3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f26e6  c1e104               shl ecx, 4
// 005f26e9  03c8                 add ecx, eax
// 005f26eb  3be9                 cmp ebp, ecx
// 005f26ed  0f82d9000000         jb 0x5f27cc
// 005f26f3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f26f7  3bc8                 cmp ecx, eax
// 005f26f9  7210                 jb 0x5f270b
// 005f26fb  8b5604               mov edx, dword ptr [esi + 4]
// 005f26fe  c1e204               shl edx, 4
// 005f2701  03d0                 add edx, eax
// 005f2703  3bca                 cmp ecx, edx
// 005f2705  0f82c5000000         jb 0x5f27d0
// 005f270b  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f270e  8d5103               lea edx, [ecx + 3]
// 005f2711  3b5608               cmp edx, dword ptr [esi + 8]
// 005f2714  7d56                 jge 0x5f276c
// 005f2716  c1e104               shl ecx, 4
// 005f2719  03c8                 add ecx, eax
// 005f271b  7406                 je 0x5f2723
// 005f271d  57                   push edi
// 005f271e  e81d400000           call 0x5f6740
// 005f2723  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f2726  41                   inc ecx
// 005f2727  c1e104               shl ecx, 4
// 005f272a  030e                 add ecx, dword ptr [esi]
// 005f272c  7406                 je 0x5f2734
// 005f272e  53                   push ebx
// 005f272f  e80c400000           call 0x5f6740
// 005f2734  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f2737  83c102               add ecx, 2
// 005f273a  c1e104               shl ecx, 4
// 005f273d  030e                 add ecx, dword ptr [esi]
// 005f273f  7406                 je 0x5f2747
// 005f2741  55                   push ebp
// 005f2742  e8f93f0000           call 0x5f6740
// 005f2747  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f274a  83c103               add ecx, 3
// 005f274d  c1e104               shl ecx, 4
// 005f2750  030e                 add ecx, dword ptr [esi]
// 005f2752  740a                 je 0x5f275e
// 005f2754  8b442460             mov eax, dword ptr [esp + 0x60]
// 005f2758  50                   push eax
// 005f2759  e8e23f0000           call 0x5f6740
// 005f275e  83460404             add dword ptr [esi + 4], 4
// 005f2762  5f                   pop edi
// 005f2763  5e                   pop esi
// 005f2764  5d                   pop ebp
// 005f2765  5b                   pop ebx
// 005f2766  83c440               add esp, 0x40
// 005f2769  c21000               ret 0x10
// 005f276c  83c104               add ecx, 4
// 005f276f  6a00                 push 0
// 005f2771  51                   push ecx
// 005f2772  8bce                 mov ecx, esi
// 005f2774  e8f72ee9ff           call 0x485670
// 005f2779  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f277c  83e904               sub ecx, 4
// 005f277f  c1e104               shl ecx, 4
// 005f2782  030e                 add ecx, dword ptr [esi]
// 005f2784  57                   push edi
// 005f2785  e8b63f0000           call 0x5f6740
// 005f278a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f278d  83e903               sub ecx, 3
// 005f2790  c1e104               shl ecx, 4
// 005f2793  030e                 add ecx, dword ptr [esi]
// 005f2795  53                   push ebx
// 005f2796  e8a53f0000           call 0x5f6740
// 005f279b  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f279e  83e902               sub ecx, 2
// 005f27a1  c1e104               shl ecx, 4
// 005f27a4  030e                 add ecx, dword ptr [esi]
// 005f27a6  55                   push ebp
// 005f27a7  e8943f0000           call 0x5f6740
// 005f27ac  8b5604               mov edx, dword ptr [esi + 4]
// 005f27af  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f27b3  8b06                 mov eax, dword ptr [esi]
// 005f27b5  c1e204               shl edx, 4
// 005f27b8  51                   push ecx
// 005f27b9  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 005f27bd  e87e3f0000           call 0x5f6740
// 005f27c2  5f                   pop edi
// 005f27c3  5e                   pop esi
// 005f27c4  5d                   pop ebp
// 005f27c5  5b                   pop ebx
// 005f27c6  83c440               add esp, 0x40
// 005f27c9  c21000               ret 0x10
// 005f27cc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f27d0  f30f1007             movss xmm0, dword ptr [edi]
// 005f27d4  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 005f27da  f30f104704           movss xmm0, dword ptr [edi + 4]
// 005f27df  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 005f27e5  f30f104708           movss xmm0, dword ptr [edi + 8]
// 005f27ea  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 005f27f0  f30f10470c           movss xmm0, dword ptr [edi + 0xc]
// 005f27f5  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 005f27fb  f30f1003             movss xmm0, dword ptr [ebx]
// 005f27ff  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 005f2805  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 005f280a  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 005f2810  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 005f2815  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 005f281b  f30f10430c           movss xmm0, dword ptr [ebx + 0xc]
// 005f2820  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 005f2826  f30f104500           movss xmm0, dword ptr [ebp]
// 005f282b  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 005f2831  f30f104504           movss xmm0, dword ptr [ebp + 4]
// 005f2836  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 005f283c  f30f104508           movss xmm0, dword ptr [ebp + 8]
// 005f2841  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 005f2847  f30f10450c           movss xmm0, dword ptr [ebp + 0xc]
// 005f284c  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 005f2852  f30f1001             movss xmm0, dword ptr [ecx]
// 005f2856  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 005f285c  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 005f2861  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 005f2867  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 005f286c  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 005f2872  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 005f2877  8d4c2410             lea ecx, [esp + 0x10]
// 005f287b  51                   push ecx
// 005f287c  8d542424             lea edx, [esp + 0x24]
// 005f2880  52                   push edx
// 005f2881  8d442438             lea eax, [esp + 0x38]
// 005f2885  50                   push eax
// 005f2886  8d4c244c             lea ecx, [esp + 0x4c]
// 005f288a  51                   push ecx
// 005f288b  8bce                 mov ecx, esi
// 005f288d  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 005f2893  e808feffff           call 0x5f26a0
// 005f2898  5f                   pop edi
// 005f2899  5e                   pop esi
// 005f289a  5d                   pop ebp
// 005f289b  5b                   pop ebx
// 005f289c  83c440               add esp, 0x40
// 005f289f  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
