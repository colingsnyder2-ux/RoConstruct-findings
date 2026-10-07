// roc 2007-08 00511780  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511780
//
// 00511780  8b442408             mov eax, dword ptr [esp + 8]
// 00511784  2d10010000           sub eax, 0x110
// 00511789  7430                 je 0x5117bb
// 0051178b  83e801               sub eax, 1
// 0051178e  0f85a0000000         jne 0x511834
// 00511794  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00511799  2dd0070000           sub eax, 0x7d0
// 0051179e  83f809               cmp eax, 9
// 005117a1  0f878d000000         ja 0x511834
// 005117a7  50                   push eax
// 005117a8  8b442408             mov eax, dword ptr [esp + 8]
// 005117ac  50                   push eax
// 005117ad  ff1504ed7700         call dword ptr [0x77ed04]
// 005117b3  b801000000           mov eax, 1
// 005117b8  c21000               ret 0x10
// 005117bb  53                   push ebx
// 005117bc  8b1d08ed7700         mov ebx, dword ptr [0x77ed08]
// 005117c2  55                   push ebp
// 005117c3  56                   push esi
// 005117c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005117c8  57                   push edi
// 005117c9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005117cd  8b0f                 mov ecx, dword ptr [edi]
// 005117cf  51                   push ecx
// 005117d0  68e8030000           push 0x3e8
// 005117d5  56                   push esi
// 005117d6  ffd3                 call ebx
// 005117d8  8b2d50ed7700         mov ebp, dword ptr [0x77ed50]
// 005117de  50                   push eax
// 005117df  ffd5                 call ebp
// 005117e1  68d0070000           push 0x7d0
// 005117e6  56                   push esi
// 005117e7  ffd3                 call ebx
// 005117e9  50                   push eax
// 005117ea  ff15ecec7700         call dword ptr [0x77ecec]
// 005117f0  8b5704               mov edx, dword ptr [edi + 4]
// 005117f3  52                   push edx
// 005117f4  56                   push esi
// 005117f5  ffd5                 call ebp
// 005117f7  68040f7a00           push 0x7a0f04
// 005117fc  6a31                 push 0x31
// 005117fe  6a02                 push 2
// 00511800  6a00                 push 0
// 00511802  6a00                 push 0
// 00511804  6a00                 push 0
// 00511806  6a00                 push 0
// 00511808  6a00                 push 0
// 0051180a  6a00                 push 0
// 0051180c  6890010000           push 0x190
// 00511811  6a00                 push 0
// 00511813  6a00                 push 0
// 00511815  6a00                 push 0
// 00511817  6a10                 push 0x10
// 00511819  ff1598d07700         call dword ptr [0x77d098]
// 0051181f  6a01                 push 1
// 00511821  50                   push eax
// 00511822  6a30                 push 0x30
// 00511824  68e8030000           push 0x3e8
// 00511829  56                   push esi
// 0051182a  ff150ced7700         call dword ptr [0x77ed0c]
// 00511830  5f                   pop edi
// 00511831  5e                   pop esi
// 00511832  5d                   pop ebp
// 00511833  5b                   pop ebx
// 00511834  33c0                 xor eax, eax
// 00511836  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
