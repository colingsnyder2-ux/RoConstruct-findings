// roc 2011-06 0054b7b0  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b7b0
//
// 0054b7b0  8b442408             mov eax, dword ptr [esp + 8]
// 0054b7b4  2d10010000           sub eax, 0x110
// 0054b7b9  7430                 je 0x54b7eb
// 0054b7bb  83e801               sub eax, 1
// 0054b7be  0f85a0000000         jne 0x54b864
// 0054b7c4  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0054b7c9  2dd0070000           sub eax, 0x7d0
// 0054b7ce  83f809               cmp eax, 9
// 0054b7d1  0f878d000000         ja 0x54b864
// 0054b7d7  50                   push eax
// 0054b7d8  8b442408             mov eax, dword ptr [esp + 8]
// 0054b7dc  50                   push eax
// 0054b7dd  ff15301ca400         call dword ptr [0xa41c30]
// 0054b7e3  b801000000           mov eax, 1
// 0054b7e8  c21000               ret 0x10
// 0054b7eb  53                   push ebx
// 0054b7ec  8b1d341ca400         mov ebx, dword ptr [0xa41c34]
// 0054b7f2  55                   push ebp
// 0054b7f3  56                   push esi
// 0054b7f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0054b7f8  57                   push edi
// 0054b7f9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0054b7fd  8b0f                 mov ecx, dword ptr [edi]
// 0054b7ff  51                   push ecx
// 0054b800  68e8030000           push 0x3e8
// 0054b805  56                   push esi
// 0054b806  ffd3                 call ebx
// 0054b808  8b2d381ca400         mov ebp, dword ptr [0xa41c38]
// 0054b80e  50                   push eax
// 0054b80f  ffd5                 call ebp
// 0054b811  68d0070000           push 0x7d0
// 0054b816  56                   push esi
// 0054b817  ffd3                 call ebx
// 0054b819  50                   push eax
// 0054b81a  ff15c419a400         call dword ptr [0xa419c4]
// 0054b820  8b5704               mov edx, dword ptr [edi + 4]
// 0054b823  52                   push edx
// 0054b824  56                   push esi
// 0054b825  ffd5                 call ebp
// 0054b827  6878cea500           push 0xa5ce78
// 0054b82c  6a31                 push 0x31
// 0054b82e  6a02                 push 2
// 0054b830  6a00                 push 0
// 0054b832  6a00                 push 0
// 0054b834  6a00                 push 0
// 0054b836  6a00                 push 0
// 0054b838  6a00                 push 0
// 0054b83a  6a00                 push 0
// 0054b83c  6890010000           push 0x190
// 0054b841  6a00                 push 0
// 0054b843  6a00                 push 0
// 0054b845  6a00                 push 0
// 0054b847  6a10                 push 0x10
// 0054b849  ff153401a400         call dword ptr [0xa40134]
// 0054b84f  6a01                 push 1
// 0054b851  50                   push eax
// 0054b852  6a30                 push 0x30
// 0054b854  68e8030000           push 0x3e8
// 0054b859  56                   push esi
// 0054b85a  ff15981ba400         call dword ptr [0xa41b98]
// 0054b860  5f                   pop edi
// 0054b861  5e                   pop esi
// 0054b862  5d                   pop ebp
// 0054b863  5b                   pop ebx
// 0054b864  33c0                 xor eax, eax
// 0054b866  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
