// from server: 100% by auto
// roc 2009-06 0057c9f0  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c9f0
//
// 0057c9f0  8b442408             mov eax, dword ptr [esp + 8]
// 0057c9f4  2d10010000           sub eax, 0x110
// 0057c9f9  7430                 je 0x57ca2b
// 0057c9fb  83e801               sub eax, 1
// 0057c9fe  0f85a0000000         jne 0x57caa4
// 0057ca04  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0057ca09  2dd0070000           sub eax, 0x7d0
// 0057ca0e  83f809               cmp eax, 9
// 0057ca11  0f878d000000         ja 0x57caa4
// 0057ca17  50                   push eax
// 0057ca18  8b442408             mov eax, dword ptr [esp + 8]
// 0057ca1c  50                   push eax
// 0057ca1d  ff1518ed8900         call dword ptr [0x89ed18]
// 0057ca23  b801000000           mov eax, 1
// 0057ca28  c21000               ret 0x10
// 0057ca2b  53                   push ebx
// 0057ca2c  8b1d1ced8900         mov ebx, dword ptr [0x89ed1c]
// 0057ca32  55                   push ebp
// 0057ca33  56                   push esi
// 0057ca34  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ca38  57                   push edi
// 0057ca39  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057ca3d  8b0f                 mov ecx, dword ptr [edi]
// 0057ca3f  51                   push ecx
// 0057ca40  68e8030000           push 0x3e8
// 0057ca45  56                   push esi
// 0057ca46  ffd3                 call ebx
// 0057ca48  8b2d80ed8900         mov ebp, dword ptr [0x89ed80]
// 0057ca4e  50                   push eax
// 0057ca4f  ffd5                 call ebp
// 0057ca51  68d0070000           push 0x7d0
// 0057ca56  56                   push esi
// 0057ca57  ffd3                 call ebx
// 0057ca59  50                   push eax
// 0057ca5a  ff158cee8900         call dword ptr [0x89ee8c]
// 0057ca60  8b5704               mov edx, dword ptr [edi + 4]
// 0057ca63  52                   push edx
// 0057ca64  56                   push esi
// 0057ca65  ffd5                 call ebp
// 0057ca67  6880c08c00           push 0x8cc080
// 0057ca6c  6a31                 push 0x31
// 0057ca6e  6a02                 push 2
// 0057ca70  6a00                 push 0
// 0057ca72  6a00                 push 0
// 0057ca74  6a00                 push 0
// 0057ca76  6a00                 push 0
// 0057ca78  6a00                 push 0
// 0057ca7a  6a00                 push 0
// 0057ca7c  6890010000           push 0x190
// 0057ca81  6a00                 push 0
// 0057ca83  6a00                 push 0
// 0057ca85  6a00                 push 0
// 0057ca87  6a10                 push 0x10
// 0057ca89  ff1530e18900         call dword ptr [0x89e130]
// 0057ca8f  6a01                 push 1
// 0057ca91  50                   push eax
// 0057ca92  6a30                 push 0x30
// 0057ca94  68e8030000           push 0x3e8
// 0057ca99  56                   push esi
// 0057ca9a  ff1520ed8900         call dword ptr [0x89ed20]
// 0057caa0  5f                   pop edi
// 0057caa1  5e                   pop esi
// 0057caa2  5d                   pop ebp
// 0057caa3  5b                   pop ebx
// 0057caa4  33c0                 xor eax, eax
// 0057caa6  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
