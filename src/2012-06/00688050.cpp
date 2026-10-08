// from server: 100% by auto
// roc 2012-06 00688050  unit: RBX::HeartbeatInstance  size: 514 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00688050
//
// 00688050  83ec40               sub esp, 0x40
// 00688053  53                   push ebx
// 00688054  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00688058  55                   push ebp
// 00688059  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0068805d  56                   push esi
// 0068805e  8bf1                 mov esi, ecx
// 00688060  8b06                 mov eax, dword ptr [esi]
// 00688062  57                   push edi
// 00688063  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00688067  3bf8                 cmp edi, eax
// 00688069  7210                 jb 0x68807b
// 0068806b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0068806e  c1e104               shl ecx, 4
// 00688071  03c8                 add ecx, eax
// 00688073  3bf9                 cmp edi, ecx
// 00688075  0f8201010000         jb 0x68817c
// 0068807b  3bd8                 cmp ebx, eax
// 0068807d  7210                 jb 0x68808f
// 0068807f  8b5604               mov edx, dword ptr [esi + 4]
// 00688082  c1e204               shl edx, 4
// 00688085  03d0                 add edx, eax
// 00688087  3bda                 cmp ebx, edx
// 00688089  0f82ed000000         jb 0x68817c
// 0068808f  3be8                 cmp ebp, eax
// 00688091  7210                 jb 0x6880a3
// 00688093  8b4e04               mov ecx, dword ptr [esi + 4]
// 00688096  c1e104               shl ecx, 4
// 00688099  03c8                 add ecx, eax
// 0068809b  3be9                 cmp ebp, ecx
// 0068809d  0f82d9000000         jb 0x68817c
// 006880a3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006880a7  3bc8                 cmp ecx, eax
// 006880a9  7210                 jb 0x6880bb
// 006880ab  8b5604               mov edx, dword ptr [esi + 4]
// 006880ae  c1e204               shl edx, 4
// 006880b1  03d0                 add edx, eax
// 006880b3  3bca                 cmp ecx, edx
// 006880b5  0f82c5000000         jb 0x688180
// 006880bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 006880be  8d5103               lea edx, [ecx + 3]
// 006880c1  3b5608               cmp edx, dword ptr [esi + 8]
// 006880c4  7d56                 jge 0x68811c
// 006880c6  c1e104               shl ecx, 4
// 006880c9  03c8                 add ecx, eax
// 006880cb  7406                 je 0x6880d3
// 006880cd  57                   push edi
// 006880ce  e80d14e3ff           call 0x4b94e0
// 006880d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 006880d6  41                   inc ecx
// 006880d7  c1e104               shl ecx, 4
// 006880da  030e                 add ecx, dword ptr [esi]
// 006880dc  7406                 je 0x6880e4
// 006880de  53                   push ebx
// 006880df  e8fc13e3ff           call 0x4b94e0
// 006880e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 006880e7  83c102               add ecx, 2
// 006880ea  c1e104               shl ecx, 4
// 006880ed  030e                 add ecx, dword ptr [esi]
// 006880ef  7406                 je 0x6880f7
// 006880f1  55                   push ebp
// 006880f2  e8e913e3ff           call 0x4b94e0
// 006880f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006880fa  83c103               add ecx, 3
// 006880fd  c1e104               shl ecx, 4
// 00688100  030e                 add ecx, dword ptr [esi]
// 00688102  740a                 je 0x68810e
// 00688104  8b442460             mov eax, dword ptr [esp + 0x60]
// 00688108  50                   push eax
// 00688109  e8d213e3ff           call 0x4b94e0
// 0068810e  83460404             add dword ptr [esi + 4], 4
// 00688112  5f                   pop edi
// 00688113  5e                   pop esi
// 00688114  5d                   pop ebp
// 00688115  5b                   pop ebx
// 00688116  83c440               add esp, 0x40
// 00688119  c21000               ret 0x10
// 0068811c  83c104               add ecx, 4
// 0068811f  6a00                 push 0
// 00688121  51                   push ecx
// 00688122  8bce                 mov ecx, esi
// 00688124  e84758e4ff           call 0x4cd970
// 00688129  8b4e04               mov ecx, dword ptr [esi + 4]
// 0068812c  83e904               sub ecx, 4
// 0068812f  c1e104               shl ecx, 4
// 00688132  030e                 add ecx, dword ptr [esi]
// 00688134  57                   push edi
// 00688135  e8a613e3ff           call 0x4b94e0
// 0068813a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0068813d  83e903               sub ecx, 3
// 00688140  c1e104               shl ecx, 4
// 00688143  030e                 add ecx, dword ptr [esi]
// 00688145  53                   push ebx
// 00688146  e89513e3ff           call 0x4b94e0
// 0068814b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0068814e  83e902               sub ecx, 2
// 00688151  c1e104               shl ecx, 4
// 00688154  030e                 add ecx, dword ptr [esi]
// 00688156  55                   push ebp
// 00688157  e88413e3ff           call 0x4b94e0
// 0068815c  8b5604               mov edx, dword ptr [esi + 4]
// 0068815f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00688163  8b06                 mov eax, dword ptr [esi]
// 00688165  c1e204               shl edx, 4
// 00688168  51                   push ecx
// 00688169  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 0068816d  e86e13e3ff           call 0x4b94e0
// 00688172  5f                   pop edi
// 00688173  5e                   pop esi
// 00688174  5d                   pop ebp
// 00688175  5b                   pop ebx
// 00688176  83c440               add esp, 0x40
// 00688179  c21000               ret 0x10
// 0068817c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00688180  f30f1007             movss xmm0, dword ptr [edi]
// 00688184  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 0068818a  f30f104704           movss xmm0, dword ptr [edi + 4]
// 0068818f  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00688195  f30f104708           movss xmm0, dword ptr [edi + 8]
// 0068819a  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 006881a0  f30f10470c           movss xmm0, dword ptr [edi + 0xc]
// 006881a5  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 006881ab  f30f1003             movss xmm0, dword ptr [ebx]
// 006881af  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 006881b5  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 006881ba  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 006881c0  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 006881c5  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 006881cb  f30f10430c           movss xmm0, dword ptr [ebx + 0xc]
// 006881d0  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 006881d6  f30f104500           movss xmm0, dword ptr [ebp]
// 006881db  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 006881e1  f30f104504           movss xmm0, dword ptr [ebp + 4]
// 006881e6  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 006881ec  f30f104508           movss xmm0, dword ptr [ebp + 8]
// 006881f1  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 006881f7  f30f10450c           movss xmm0, dword ptr [ebp + 0xc]
// 006881fc  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00688202  f30f1001             movss xmm0, dword ptr [ecx]
// 00688206  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 0068820c  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00688211  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00688217  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 0068821c  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00688222  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 00688227  8d4c2410             lea ecx, [esp + 0x10]
// 0068822b  51                   push ecx
// 0068822c  8d542424             lea edx, [esp + 0x24]
// 00688230  52                   push edx
// 00688231  8d442438             lea eax, [esp + 0x38]
// 00688235  50                   push eax
// 00688236  8d4c244c             lea ecx, [esp + 0x4c]
// 0068823a  51                   push ecx
// 0068823b  8bce                 mov ecx, esi
// 0068823d  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00688243  e808feffff           call 0x688050
// 00688248  5f                   pop edi
// 00688249  5e                   pop esi
// 0068824a  5d                   pop ebp
// 0068824b  5b                   pop ebx
// 0068824c  83c440               add esp, 0x40
// 0068824f  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
