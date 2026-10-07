// roc 2010-06 00488d80  unit: G3D::Win32Window  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488d80
//
// 00488d80  8b442404             mov eax, dword ptr [esp + 4]
// 00488d84  53                   push ebx
// 00488d85  55                   push ebp
// 00488d86  56                   push esi
// 00488d87  57                   push edi
// 00488d88  8b38                 mov edi, dword ptr [eax]
// 00488d8a  8bf1                 mov esi, ecx
// 00488d8c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00488d8f  33d2                 xor edx, edx
// 00488d91  8bc7                 mov eax, edi
// 00488d93  f7f5                 div ebp
// 00488d95  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488d98  8bda                 mov ebx, edx
// 00488d9a  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 00488d9d  85c0                 test eax, eax
// 00488d9f  753d                 jne 0x488dde
// 00488da1  6a10                 push 0x10
// 00488da3  e8f81d0800           call 0x50aba0
// 00488da8  83c404               add esp, 4
// 00488dab  85c0                 test eax, eax
// 00488dad  0f84d1000000         je 0x488e84
// 00488db3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00488db7  8a0a                 mov cl, byte ptr [edx]
// 00488db9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00488dbd  8b12                 mov edx, dword ptr [edx]
// 00488dbf  8938                 mov dword ptr [eax], edi
// 00488dc1  895004               mov dword ptr [eax + 4], edx
// 00488dc4  884808               mov byte ptr [eax + 8], cl
// 00488dc7  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00488dce  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488dd1  5f                   pop edi
// 00488dd2  890499               mov dword ptr [ecx + ebx*4], eax
// 00488dd5  ff4604               inc dword ptr [esi + 4]
// 00488dd8  5e                   pop esi
// 00488dd9  5d                   pop ebp
// 00488dda  5b                   pop ebx
// 00488ddb  c20800               ret 8
// 00488dde  ba01000000           mov edx, 1
// 00488de3  8aca                 mov cl, dl
// 00488de5  84c9                 test cl, cl
// 00488de7  7408                 je 0x488df1
// 00488de9  3b38                 cmp edi, dword ptr [eax]
// 00488deb  7504                 jne 0x488df1
// 00488ded  b101                 mov cl, 1
// 00488def  eb02                 jmp 0x488df3
// 00488df1  32c9                 xor cl, cl
// 00488df3  3b38                 cmp edi, dword ptr [eax]
// 00488df5  7505                 jne 0x488dfc
// 00488df7  397804               cmp dword ptr [eax + 4], edi
// 00488dfa  7478                 je 0x488e74
// 00488dfc  8b400c               mov eax, dword ptr [eax + 0xc]
// 00488dff  42                   inc edx
// 00488e00  85c0                 test eax, eax
// 00488e02  75e1                 jne 0x488de5
// 00488e04  84c9                 test cl, cl
// 00488e06  0f94c0               sete al
// 00488e09  33c9                 xor ecx, ecx
// 00488e0b  83fa05               cmp edx, 5
// 00488e0e  0f9fc1               setg cl
// 00488e11  85c1                 test ecx, eax
// 00488e13  741a                 je 0x488e2f
// 00488e15  8b4604               mov eax, dword ptr [esi + 4]
// 00488e18  8d1480               lea edx, [eax + eax*4]
// 00488e1b  03d2                 add edx, edx
// 00488e1d  03d2                 add edx, edx
// 00488e1f  3bea                 cmp ebp, edx
// 00488e21  7d0c                 jge 0x488e2f
// 00488e23  8d442d01             lea eax, [ebp + ebp + 1]
// 00488e27  50                   push eax
// 00488e28  8bce                 mov ecx, esi
// 00488e2a  e801f5ffff           call 0x488330
// 00488e2f  33d2                 xor edx, edx
// 00488e31  8bc7                 mov eax, edi
// 00488e33  f7760c               div dword ptr [esi + 0xc]
// 00488e36  6a10                 push 0x10
// 00488e38  8bda                 mov ebx, edx
// 00488e3a  e8611d0800           call 0x50aba0
// 00488e3f  83c404               add esp, 4
// 00488e42  85c0                 test eax, eax
// 00488e44  743e                 je 0x488e84
// 00488e46  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488e49  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 00488e4c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00488e50  8a12                 mov dl, byte ptr [edx]
// 00488e52  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00488e56  8b6d00               mov ebp, dword ptr [ebp]
// 00488e59  896804               mov dword ptr [eax + 4], ebp
// 00488e5c  8938                 mov dword ptr [eax], edi
// 00488e5e  885008               mov byte ptr [eax + 8], dl
// 00488e61  89480c               mov dword ptr [eax + 0xc], ecx
// 00488e64  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488e67  5f                   pop edi
// 00488e68  890499               mov dword ptr [ecx + ebx*4], eax
// 00488e6b  ff4604               inc dword ptr [esi + 4]
// 00488e6e  5e                   pop esi
// 00488e6f  5d                   pop ebp
// 00488e70  5b                   pop ebx
// 00488e71  c20800               ret 8
// 00488e74  8b542418             mov edx, dword ptr [esp + 0x18]
// 00488e78  8a0a                 mov cl, byte ptr [edx]
// 00488e7a  5f                   pop edi
// 00488e7b  5e                   pop esi
// 00488e7c  5d                   pop ebp
// 00488e7d  884808               mov byte ptr [eax + 8], cl
// 00488e80  5b                   pop ebx
// 00488e81  c20800               ret 8
// 00488e84  8b4e08               mov ecx, dword ptr [esi + 8]
// 00488e87  33c0                 xor eax, eax
// 00488e89  5f                   pop edi
// 00488e8a  890499               mov dword ptr [ecx + ebx*4], eax
// 00488e8d  ff4604               inc dword ptr [esi + 4]
// 00488e90  5e                   pop esi
// 00488e91  5d                   pop ebp
// 00488e92  5b                   pop ebx
// 00488e93  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?set@?$Table@PAV?$Array@H@G3D@@_N@G3D@@QAEXABQAV?$Array@H@2@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
