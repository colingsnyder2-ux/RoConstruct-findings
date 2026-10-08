// from server: 100% by auto
// roc 2009-06 004ad800  unit: G3D::Win32Window  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad800
//
// 004ad800  8b442404             mov eax, dword ptr [esp + 4]
// 004ad804  3d508b0000           cmp eax, 0x8b50
// 004ad809  7731                 ja 0x4ad83c
// 004ad80b  7423                 je 0x4ad830
// 004ad80d  0500ecffff           add eax, 0xffffec00
// 004ad812  83f80a               cmp eax, 0xa
// 004ad815  774e                 ja 0x4ad865
// 004ad817  ff248568d84a00       jmp dword ptr [eax*4 + 0x4ad868]
// 004ad81e  b802000000           mov eax, 2
// 004ad823  c3                   ret 
// 004ad824  b803000000           mov eax, 3
// 004ad829  c3                   ret 
// 004ad82a  b804000000           mov eax, 4
// 004ad82f  c3                   ret 
// 004ad830  b808000000           mov eax, 8
// 004ad835  c3                   ret 
// 004ad836  b801000000           mov eax, 1
// 004ad83b  c3                   ret 
// 004ad83c  05af74ffff           add eax, 0xffff74af
// 004ad841  83f80b               cmp eax, 0xb
// 004ad844  771f                 ja 0x4ad865
// 004ad846  ff248594d84a00       jmp dword ptr [eax*4 + 0x4ad894]
// 004ad84d  b80c000000           mov eax, 0xc
// 004ad852  c3                   ret 
// 004ad853  b810000000           mov eax, 0x10
// 004ad858  c3                   ret 
// 004ad859  b824000000           mov eax, 0x24
// 004ad85e  c3                   ret 
// 004ad85f  b840000000           mov eax, 0x40
// 004ad864  c3                   ret 
// 004ad865  33c0                 xor eax, eax
// 004ad867  c3                   ret 
// 004ad868  36d84a00             fmul dword ptr ss:[edx]
// 004ad86c  36d84a00             fmul dword ptr ss:[edx]
// 004ad870  1e                   push ds
// 004ad871  d84a00               fmul dword ptr [edx]
// 004ad874  1e                   push ds
// 004ad875  d84a00               fmul dword ptr [edx]
// 004ad878  2ad8                 sub bl, al
// 004ad87a  4a                   dec edx
// 004ad87b  002a                 add byte ptr [edx], ch
// 004ad87d  d84a00               fmul dword ptr [edx]
// 004ad880  2ad8                 sub bl, al
// 004ad882  4a                   dec edx
// 004ad883  001e                 add byte ptr [esi], bl
// 004ad885  d84a00               fmul dword ptr [edx]
// 004ad888  24d8                 and al, 0xd8
// 004ad88a  4a                   dec edx
// 004ad88b  002a                 add byte ptr [edx], ch
// 004ad88d  d84a00               fmul dword ptr [edx]
// 004ad890  30d8                 xor al, bl
// 004ad892  4a                   dec edx
// 004ad893  004dd8               add byte ptr [ebp - 0x28], cl
// 004ad896  4a                   dec edx
// 004ad897  0053d8               add byte ptr [ebx - 0x28], dl
// 004ad89a  4a                   dec edx
// 004ad89b  0030                 add byte ptr [eax], dh
// 004ad89d  d84a00               fmul dword ptr [edx]
// 004ad8a0  4d                   dec ebp
// 004ad8a1  d84a00               fmul dword ptr [edx]
// 004ad8a4  53                   push ebx
// 004ad8a5  d84a00               fmul dword ptr [edx]
// 004ad8a8  65d84a00             fmul dword ptr gs:[edx]
// 004ad8ac  65d84a00             fmul dword ptr gs:[edx]
// 004ad8b0  65d84a00             fmul dword ptr gs:[edx]
// 004ad8b4  65d84a00             fmul dword ptr gs:[edx]
// 004ad8b8  53                   push ebx
// 004ad8b9  d84a00               fmul dword ptr [edx]
// 004ad8bc  59                   pop ecx
// 004ad8bd  d84a00               fmul dword ptr [edx]
// 004ad8c0  5f                   pop edi
// 004ad8c1  d84a00               fmul dword ptr [edx]
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?sizeOfGLFormat@G3D@@YAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
