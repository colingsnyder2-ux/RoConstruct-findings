// roc 2008-06 00507c00  unit: G3D::Shader  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507c00
//
// 00507c00  55                   push ebp
// 00507c01  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00507c05  56                   push esi
// 00507c06  8bf1                 mov esi, ecx
// 00507c08  85ed                 test ebp, ebp
// 00507c0a  0f84e4000000         je 0x507cf4
// 00507c10  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 00507c16  57                   push edi
// 00507c17  3be8                 cmp ebp, eax
// 00507c19  7236                 jb 0x507c51
// 00507c1b  0500007d00           add eax, 0x7d0000
// 00507c20  3be8                 cmp ebp, eax
// 00507c22  732d                 jae 0x507c51
// 00507c24  8dbe10280400         lea edi, [esi + 0x42810]
// 00507c2a  57                   push edi
// 00507c2b  ff15d4228000         call dword ptr [0x8022d4]
// 00507c31  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 00507c37  89ac8608400000       mov dword ptr [esi + eax*4 + 0x4008], ebp
// 00507c3e  ff8608280400         inc dword ptr [esi + 0x42808]
// 00507c44  57                   push edi
// 00507c45  ff15f4218000         call dword ptr [0x8021f4]
// 00507c4b  5f                   pop edi
// 00507c4c  5e                   pop esi
// 00507c4d  5d                   pop ebp
// 00507c4e  c20400               ret 4
// 00507c51  8b7dfc               mov edi, dword ptr [ebp - 4]
// 00507c54  53                   push ebx
// 00507c55  8d45fc               lea eax, [ebp - 4]
// 00507c58  8d9e10280400         lea ebx, [esi + 0x42810]
// 00507c5e  53                   push ebx
// 00507c5f  89442418             mov dword ptr [esp + 0x18], eax
// 00507c63  ff15d4228000         call dword ptr [0x8022d4]
// 00507c69  81ff00040000         cmp edi, 0x400
// 00507c6f  7728                 ja 0x507c99
// 00507c71  8b8600200000         mov eax, dword ptr [esi + 0x2000]
// 00507c77  3d00040000           cmp eax, 0x400
// 00507c7c  7d52                 jge 0x507cd0
// 00507c7e  892cc6               mov dword ptr [esi + eax*8], ebp
// 00507c81  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 00507c85  ff8600200000         inc dword ptr [esi + 0x2000]
// 00507c8b  53                   push ebx
// 00507c8c  ff15f4218000         call dword ptr [0x8021f4]
// 00507c92  5b                   pop ebx
// 00507c93  5f                   pop edi
// 00507c94  5e                   pop esi
// 00507c95  5d                   pop ebp
// 00507c96  c20400               ret 4
// 00507c99  81ff00100000         cmp edi, 0x1000
// 00507c9f  772f                 ja 0x507cd0
// 00507ca1  8b8604400000         mov eax, dword ptr [esi + 0x4004]
// 00507ca7  3d00040000           cmp eax, 0x400
// 00507cac  7d22                 jge 0x507cd0
// 00507cae  89acc604200000       mov dword ptr [esi + eax*8 + 0x2004], ebp
// 00507cb5  89bcc608200000       mov dword ptr [esi + eax*8 + 0x2008], edi
// 00507cbc  ff8604400000         inc dword ptr [esi + 0x4004]
// 00507cc2  53                   push ebx
// 00507cc3  ff15f4218000         call dword ptr [0x8021f4]
// 00507cc9  5b                   pop ebx
// 00507cca  5f                   pop edi
// 00507ccb  5e                   pop esi
// 00507ccc  5d                   pop ebp
// 00507ccd  c20400               ret 4
// 00507cd0  b9fcffffff           mov ecx, 0xfffffffc
// 00507cd5  2bcf                 sub ecx, edi
// 00507cd7  018e38280400         add dword ptr [esi + 0x42838], ecx
// 00507cdd  53                   push ebx
// 00507cde  ff15f4218000         call dword ptr [0x8021f4]
// 00507ce4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00507ce8  52                   push edx
// 00507ce9  ff15c0288000         call dword ptr [0x8028c0]
// 00507cef  83c404               add esp, 4
// 00507cf2  5b                   pop ebx
// 00507cf3  5f                   pop edi
// 00507cf4  5e                   pop esi
// 00507cf5  5d                   pop ebp
// 00507cf6  c20400               ret 4
// library g3d-6.09/G3Dcpp\System.cpp (function ?free@BufferPool@G3D@@QAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
