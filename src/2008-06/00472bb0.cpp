// roc 2008-06 00472bb0  unit: G3D::ReferenceCountedObject  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472bb0
//
// 00472bb0  83ec10               sub esp, 0x10
// 00472bb3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472bb7  53                   push ebx
// 00472bb8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00472bbc  55                   push ebp
// 00472bbd  56                   push esi
// 00472bbe  8b742430             mov esi, dword ptr [esp + 0x30]
// 00472bc2  57                   push edi
// 00472bc3  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00472bc7  8beb                 mov ebp, ebx
// 00472bc9  c644242800           mov byte ptr [esp + 0x28], 0
// 00472bce  81f9f5840000         cmp ecx, 0x84f5
// 00472bd4  7716                 ja 0x472bec
// 00472bd6  0f843c010000         je 0x472d18
// 00472bdc  81f9e10d0000         cmp ecx, 0xde1
// 00472be2  7420                 je 0x472c04
// 00472be4  5f                   pop edi
// 00472be5  5e                   pop esi
// 00472be6  5d                   pop ebp
// 00472be7  5b                   pop ebx
// 00472be8  83c410               add esp, 0x10
// 00472beb  c3                   ret 
// 00472bec  81f915850000         cmp ecx, 0x8515
// 00472bf2  0f8292010000         jb 0x472d8a
// 00472bf8  81f91a850000         cmp ecx, 0x851a
// 00472bfe  0f8786010000         ja 0x472d8a
// 00472c04  8bc6                 mov eax, esi
// 00472c06  f7d8                 neg eax
// 00472c08  23c6                 and eax, esi
// 00472c0a  3bc6                 cmp eax, esi
// 00472c0c  750e                 jne 0x472c1c
// 00472c0e  8bd7                 mov edx, edi
// 00472c10  f7da                 neg edx
// 00472c12  23d7                 and edx, edi
// 00472c14  3bd7                 cmp edx, edi
// 00472c16  0f84fc000000         je 0x472d18
// 00472c1c  807c244c00           cmp byte ptr [esp + 0x4c], 0
// 00472c21  740d                 je 0x472c30
// 00472c23  803d78ee960000       cmp byte ptr [0x96ee78], 0
// 00472c2a  0f85e8000000         jne 0x472d18
// 00472c30  db442434             fild dword ptr [esp + 0x34]
// 00472c34  8974241c             mov dword ptr [esp + 0x1c], esi
// 00472c38  d9442450             fld dword ptr [esp + 0x50]
// 00472c3c  897c2418             mov dword ptr [esp + 0x18], edi
// 00472c40  d97c2428             fnstcw word ptr [esp + 0x28]
// 00472c44  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 00472c49  dcc9                 fmul st(1), st(0)
// 00472c4b  0d000c0000           or eax, 0xc00
// 00472c50  d9c9                 fxch st(1)
// 00472c52  89442410             mov dword ptr [esp + 0x10], eax
// 00472c56  d96c2410             fldcw word ptr [esp + 0x10]
// 00472c5a  df7c2410             fistp qword ptr [esp + 0x10]
// 00472c5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472c62  48                   dec eax
// 00472c63  8bc8                 mov ecx, eax
// 00472c65  d96c2428             fldcw word ptr [esp + 0x28]
// 00472c69  c1e910               shr ecx, 0x10
// 00472c6c  0bc1                 or eax, ecx
// 00472c6e  8bd0                 mov edx, eax
// 00472c70  c1ea08               shr edx, 8
// 00472c73  0bc2                 or eax, edx
// 00472c75  8bc8                 mov ecx, eax
// 00472c77  c1e904               shr ecx, 4
// 00472c7a  0bc1                 or eax, ecx
// 00472c7c  da4c2438             fimul dword ptr [esp + 0x38]
// 00472c80  8bd0                 mov edx, eax
// 00472c82  c1ea02               shr edx, 2
// 00472c85  0bc2                 or eax, edx
// 00472c87  8bc8                 mov ecx, eax
// 00472c89  d97c2428             fnstcw word ptr [esp + 0x28]
// 00472c8d  d1e9                 shr ecx, 1
// 00472c8f  0bc8                 or ecx, eax
// 00472c91  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 00472c96  0d000c0000           or eax, 0xc00
// 00472c9b  89442410             mov dword ptr [esp + 0x10], eax
// 00472c9f  41                   inc ecx
// 00472ca0  8bf1                 mov esi, ecx
// 00472ca2  d96c2410             fldcw word ptr [esp + 0x10]
// 00472ca6  df7c2410             fistp qword ptr [esp + 0x10]
// 00472caa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472cae  48                   dec eax
// 00472caf  8bd0                 mov edx, eax
// 00472cb1  c1ea10               shr edx, 0x10
// 00472cb4  d96c2428             fldcw word ptr [esp + 0x28]
// 00472cb8  0bc2                 or eax, edx
// 00472cba  8bc8                 mov ecx, eax
// 00472cbc  c1e908               shr ecx, 8
// 00472cbf  0bc1                 or eax, ecx
// 00472cc1  8bd0                 mov edx, eax
// 00472cc3  c1ea04               shr edx, 4
// 00472cc6  0bc2                 or eax, edx
// 00472cc8  8bc8                 mov ecx, eax
// 00472cca  c1e902               shr ecx, 2
// 00472ccd  0bc1                 or eax, ecx
// 00472ccf  8bd0                 mov edx, eax
// 00472cd1  d1ea                 shr edx, 1
// 00472cd3  0bd0                 or edx, eax
// 00472cd5  42                   inc edx
// 00472cd6  8bfa                 mov edi, edx
// 00472cd8  8bc6                 mov eax, esi
// 00472cda  0fafc7               imul eax, edi
// 00472cdd  0faf442440           imul eax, dword ptr [esp + 0x40]
// 00472ce2  50                   push eax
// 00472ce3  e86edc2200           call 0x6a0956
// 00472ce8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00472cec  8b542420             mov edx, dword ptr [esp + 0x20]
// 00472cf0  83c404               add esp, 4
// 00472cf3  8be8                 mov ebp, eax
// 00472cf5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00472cf9  55                   push ebp
// 00472cfa  6801140000           push 0x1401
// 00472cff  57                   push edi
// 00472d00  56                   push esi
// 00472d01  53                   push ebx
// 00472d02  6801140000           push 0x1401
// 00472d07  51                   push ecx
// 00472d08  52                   push edx
// 00472d09  50                   push eax
// 00472d0a  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00472d0f  e872363300           call 0x7a6386
// 00472d14  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472d18  807c244800           cmp byte ptr [esp + 0x48], 0
// 00472d1d  743b                 je 0x472d5a
// 00472d1f  53                   push ebx
// 00472d20  8d4603               lea eax, [esi + 3]
// 00472d23  99                   cdq 
// 00472d24  83e203               and edx, 3
// 00472d27  03c2                 add eax, edx
// 00472d29  8bd8                 mov ebx, eax
// 00472d2b  8d4703               lea eax, [edi + 3]
// 00472d2e  99                   cdq 
// 00472d2f  83e203               and edx, 3
// 00472d32  03c2                 add eax, edx
// 00472d34  8b542434             mov edx, dword ptr [esp + 0x34]
// 00472d38  c1fb02               sar ebx, 2
// 00472d3b  c1f802               sar eax, 2
// 00472d3e  0fafd8               imul ebx, eax
// 00472d41  0faf5c2444           imul ebx, dword ptr [esp + 0x44]
// 00472d46  8b442448             mov eax, dword ptr [esp + 0x48]
// 00472d4a  53                   push ebx
// 00472d4b  6a00                 push 0
// 00472d4d  57                   push edi
// 00472d4e  56                   push esi
// 00472d4f  52                   push edx
// 00472d50  50                   push eax
// 00472d51  51                   push ecx
// 00472d52  ff152cf89600         call dword ptr [0x96f82c]
// 00472d58  eb20                 jmp 0x472d7a
// 00472d5a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00472d5e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00472d62  55                   push ebp
// 00472d63  6801140000           push 0x1401
// 00472d68  52                   push edx
// 00472d69  8b542450             mov edx, dword ptr [esp + 0x50]
// 00472d6d  6a00                 push 0
// 00472d6f  57                   push edi
// 00472d70  56                   push esi
// 00472d71  50                   push eax
// 00472d72  52                   push edx
// 00472d73  51                   push ecx
// 00472d74  ff1554298000         call dword ptr [0x802954]
// 00472d7a  807c242800           cmp byte ptr [esp + 0x28], 0
// 00472d7f  7409                 je 0x472d8a
// 00472d81  55                   push ebp
// 00472d82  e8c3db2200           call 0x6a094a
// 00472d87  83c404               add esp, 4
// 00472d8a  5f                   pop edi
// 00472d8b  5e                   pop esi
// 00472d8c  5d                   pop ebp
// 00472d8d  5b                   pop ebx
// 00472d8e  83c410               add esp, 0x10
// 00472d91  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createTexture@G3D@@YAXIPBEIIHHIHH_N1M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
