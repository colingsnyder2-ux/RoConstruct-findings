// roc 2010-06 00766ff0  unit: RBX::FilterStairs  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00766ff0
//
// 00766ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00766ff4  55                   push ebp
// 00766ff5  8b6904               mov ebp, dword ptr [ecx + 4]
// 00766ff8  ba01000000           mov edx, 1
// 00766ffd  56                   push esi
// 00766ffe  894104               mov dword ptr [ecx + 4], eax
// 00767001  57                   push edi
// 00767002  84154032c200         test byte ptr [0xc23240], dl
// 00767008  7513                 jne 0x76701d
// 0076700a  09154032c200         or dword ptr [0xc23240], edx
// 00767010  bf0a000000           mov edi, 0xa
// 00767015  893d3c32c200         mov dword ptr [0xc2323c], edi
// 0076701b  eb06                 jmp 0x767023
// 0076701d  8b3d3c32c200         mov edi, dword ptr [0xc2323c]
// 00767023  8b5108               mov edx, dword ptr [ecx + 8]
// 00767026  8b7104               mov esi, dword ptr [ecx + 4]
// 00767029  3bf2                 cmp esi, edx
// 0076702b  0f8e83000000         jle 0x7670b4
// 00767031  85d2                 test edx, edx
// 00767033  750f                 jne 0x767044
// 00767035  55                   push ebp
// 00767036  894108               mov dword ptr [ecx + 8], eax
// 00767039  e8e213d2ff           call 0x488420
// 0076703e  5f                   pop edi
// 0076703f  5e                   pop esi
// 00767040  5d                   pop ebp
// 00767041  c20800               ret 8
// 00767044  3bf7                 cmp esi, edi
// 00767046  7d0f                 jge 0x767057
// 00767048  55                   push ebp
// 00767049  897908               mov dword ptr [ecx + 8], edi
// 0076704c  e8cf13d2ff           call 0x488420
// 00767051  5f                   pop edi
// 00767052  5e                   pop esi
// 00767053  5d                   pop ebp
// 00767054  c20800               ret 8
// 00767057  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0076705f  8bc2                 mov eax, edx
// 00767061  03c0                 add eax, eax
// 00767063  03c0                 add eax, eax
// 00767065  3d801a0600           cmp eax, 0x61a80
// 0076706a  760a                 jbe 0x767076
// 0076706c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00767074  eb0f                 jmp 0x767085
// 00767076  3d00fa0000           cmp eax, 0xfa00
// 0076707b  7608                 jbe 0x767085
// 0076707d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00767085  8bc2                 mov eax, edx
// 00767087  f30f2ac8             cvtsi2ss xmm1, eax
// 0076708b  f30f59c8             mulss xmm1, xmm0
// 0076708f  f30f2cd1             cvttss2si edx, xmm1
// 00767093  2bd0                 sub edx, eax
// 00767095  8d0432               lea eax, [edx + esi]
// 00767098  894108               mov dword ptr [ecx + 8], eax
// 0076709b  8b153c32c200         mov edx, dword ptr [0xc2323c]
// 007670a1  3bc2                 cmp eax, edx
// 007670a3  7d03                 jge 0x7670a8
// 007670a5  895108               mov dword ptr [ecx + 8], edx
// 007670a8  55                   push ebp
// 007670a9  e87213d2ff           call 0x488420
// 007670ae  5f                   pop edi
// 007670af  5e                   pop esi
// 007670b0  5d                   pop ebp
// 007670b1  c20800               ret 8
// 007670b4  b856555555           mov eax, 0x55555556
// 007670b9  f7ea                 imul edx
// 007670bb  8bc2                 mov eax, edx
// 007670bd  c1e81f               shr eax, 0x1f
// 007670c0  03c2                 add eax, edx
// 007670c2  3bf0                 cmp esi, eax
// 007670c4  7f17                 jg 0x7670dd
// 007670c6  807c241400           cmp byte ptr [esp + 0x14], 0
// 007670cb  7410                 je 0x7670dd
// 007670cd  3bf7                 cmp esi, edi
// 007670cf  7e0c                 jle 0x7670dd
// 007670d1  3bf5                 cmp esi, ebp
// 007670d3  7c02                 jl 0x7670d7
// 007670d5  8bf5                 mov esi, ebp
// 007670d7  56                   push esi
// 007670d8  e84313d2ff           call 0x488420
// 007670dd  5f                   pop edi
// 007670de  5e                   pop esi
// 007670df  5d                   pop ebp
// 007670e0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
