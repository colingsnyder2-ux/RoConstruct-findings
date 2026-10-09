// roc 2007-03 004f1030  unit: seg_004f0000  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1030
//
// 004f1030  55                   push ebp
// 004f1031  8bec                 mov ebp, esp
// 004f1033  83e4f8               and esp, 0xfffffff8
// 004f1036  83ec5c               sub esp, 0x5c
// 004f1039  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004f103c  53                   push ebx
// 004f103d  56                   push esi
// 004f103e  8b7508               mov esi, dword ptr [ebp + 8]
// 004f1041  2bce                 sub ecx, esi
// 004f1043  b867666666           mov eax, 0x66666667
// 004f1048  f7e9                 imul ecx
// 004f104a  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004f104d  c1fa05               sar edx, 5
// 004f1050  57                   push edi
// 004f1051  8bfa                 mov edi, edx
// 004f1053  2bce                 sub ecx, esi
// 004f1055  c1ef1f               shr edi, 0x1f
// 004f1058  03fa                 add edi, edx
// 004f105a  b867666666           mov eax, 0x66666667
// 004f105f  f7e9                 imul ecx
// 004f1061  c1fa05               sar edx, 5
// 004f1064  8bca                 mov ecx, edx
// 004f1066  c1e91f               shr ecx, 0x1f
// 004f1069  03ca                 add ecx, edx
// 004f106b  85ff                 test edi, edi
// 004f106d  8bc1                 mov eax, ecx
// 004f106f  89442410             mov dword ptr [esp + 0x10], eax
// 004f1073  8bdf                 mov ebx, edi
// 004f1075  7411                 je 0x4f1088
// 004f1077  99                   cdq 
// 004f1078  f7fb                 idiv ebx
// 004f107a  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f107e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1082  85d2                 test edx, edx
// 004f1084  8bda                 mov ebx, edx
// 004f1086  75ef                 jne 0x4f1077
// 004f1088  3bc1                 cmp eax, ecx
// 004f108a  0f8d02010000         jge 0x4f1192
// 004f1090  85c0                 test eax, eax
// 004f1092  0f8efa000000         jle 0x4f1192
// 004f1098  8d0cbf               lea ecx, [edi + edi*4]
// 004f109b  8d1c80               lea ebx, [eax + eax*4]
// 004f109e  c1e104               shl ecx, 4
// 004f10a1  c1e304               shl ebx, 4
// 004f10a4  894c2414             mov dword ptr [esp + 0x14], ecx
// 004f10a8  03de                 add ebx, esi
// 004f10aa  8d9b00000000         lea ebx, [ebx]
// 004f10b0  53                   push ebx
// 004f10b1  8d4c241c             lea ecx, [esp + 0x1c]
// 004f10b5  8bf3                 mov esi, ebx
// 004f10b7  e8b439f8ff           call 0x474a70
// 004f10bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f10c0  8d0c03               lea ecx, [ebx + eax]
// 004f10c3  3b4d10               cmp ecx, dword ptr [ebp + 0x10]
// 004f10c6  7503                 jne 0x4f10cb
// 004f10c8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004f10cb  3bcb                 cmp ecx, ebx
// 004f10cd  0f849d000000         je 0x4f1170
// 004f10d3  d901                 fld dword ptr [ecx]
// 004f10d5  d91e                 fstp dword ptr [esi]
// 004f10d7  d94104               fld dword ptr [ecx + 4]
// 004f10da  d95e04               fstp dword ptr [esi + 4]
// 004f10dd  d94108               fld dword ptr [ecx + 8]
// 004f10e0  d95e08               fstp dword ptr [esi + 8]
// 004f10e3  d9410c               fld dword ptr [ecx + 0xc]
// 004f10e6  d95e0c               fstp dword ptr [esi + 0xc]
// 004f10e9  d94110               fld dword ptr [ecx + 0x10]
// 004f10ec  d95e10               fstp dword ptr [esi + 0x10]
// 004f10ef  d94114               fld dword ptr [ecx + 0x14]
// 004f10f2  d95e14               fstp dword ptr [esi + 0x14]
// 004f10f5  d94118               fld dword ptr [ecx + 0x18]
// 004f10f8  d95e18               fstp dword ptr [esi + 0x18]
// 004f10fb  dd4120               fld qword ptr [ecx + 0x20]
// 004f10fe  dd5e20               fstp qword ptr [esi + 0x20]
// 004f1101  dd4128               fld qword ptr [ecx + 0x28]
// 004f1104  dd5e28               fstp qword ptr [esi + 0x28]
// 004f1107  dd4130               fld qword ptr [ecx + 0x30]
// 004f110a  dd5e30               fstp qword ptr [esi + 0x30]
// 004f110d  dd4138               fld qword ptr [ecx + 0x38]
// 004f1110  dd5e38               fstp qword ptr [esi + 0x38]
// 004f1113  d94140               fld dword ptr [ecx + 0x40]
// 004f1116  d95e40               fstp dword ptr [esi + 0x40]
// 004f1119  d94144               fld dword ptr [ecx + 0x44]
// 004f111c  d95e44               fstp dword ptr [esi + 0x44]
// 004f111f  d94148               fld dword ptr [ecx + 0x48]
// 004f1122  d95e48               fstp dword ptr [esi + 0x48]
// 004f1125  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 004f1129  88564c               mov byte ptr [esi + 0x4c], dl
// 004f112c  8a414d               mov al, byte ptr [ecx + 0x4d]
// 004f112f  88464d               mov byte ptr [esi + 0x4d], al
// 004f1132  0fb6514e             movzx edx, byte ptr [ecx + 0x4e]
// 004f1136  88564e               mov byte ptr [esi + 0x4e], dl
// 004f1139  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004f113c  2bd1                 sub edx, ecx
// 004f113e  b867666666           mov eax, 0x66666667
// 004f1143  f7ea                 imul edx
// 004f1145  c1fa05               sar edx, 5
// 004f1148  8bc2                 mov eax, edx
// 004f114a  c1e81f               shr eax, 0x1f
// 004f114d  03c2                 add eax, edx
// 004f114f  3bf8                 cmp edi, eax
// 004f1151  8bf1                 mov esi, ecx
// 004f1153  7d06                 jge 0x4f115b
// 004f1155  034c2414             add ecx, dword ptr [esp + 0x14]
// 004f1159  eb0d                 jmp 0x4f1168
// 004f115b  8bcf                 mov ecx, edi
// 004f115d  2bc8                 sub ecx, eax
// 004f115f  8d0c89               lea ecx, [ecx + ecx*4]
// 004f1162  c1e104               shl ecx, 4
// 004f1165  034d08               add ecx, dword ptr [ebp + 8]
// 004f1168  3bcb                 cmp ecx, ebx
// 004f116a  0f8563ffffff         jne 0x4f10d3
// 004f1170  8d442418             lea eax, [esp + 0x18]
// 004f1174  50                   push eax
// 004f1175  8bce                 mov ecx, esi
// 004f1177  e84424f8ff           call 0x4735c0
// 004f117c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1180  83e801               sub eax, 1
// 004f1183  83eb50               sub ebx, 0x50
// 004f1186  85c0                 test eax, eax
// 004f1188  89442410             mov dword ptr [esp + 0x10], eax
// 004f118c  0f8f1effffff         jg 0x4f10b0
// 004f1192  5f                   pop edi
// 004f1193  5e                   pop esi
// 004f1194  5b                   pop ebx
// 004f1195  8be5                 mov esp, ebp
// 004f1197  5d                   pop ebp
// 004f1198  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Rotate@PAVGLight@G3D@@HV12@@std@@YAXPAVGLight@G3D@@00PAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
