// roc 2010-06 0046ebd0  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ebd0
//
// 0046ebd0  51                   push ecx
// 0046ebd1  53                   push ebx
// 0046ebd2  55                   push ebp
// 0046ebd3  56                   push esi
// 0046ebd4  57                   push edi
// 0046ebd5  8d7158               lea esi, [ecx + 0x58]
// 0046ebd8  6a01                 push 1
// 0046ebda  8bce                 mov ecx, esi
// 0046ebdc  e8bff0ffff           call 0x46dca0
// 0046ebe1  6a01                 push 1
// 0046ebe3  8bce                 mov ecx, esi
// 0046ebe5  8bd8                 mov ebx, eax
// 0046ebe7  e8e4f0ffff           call 0x46dcd0
// 0046ebec  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0046ebf0  55                   push ebp
// 0046ebf1  89442414             mov dword ptr [esp + 0x14], eax
// 0046ebf5  ff1588a39e00         call dword ptr [0x9ea388]
// 0046ebfb  8bf8                 mov edi, eax
// 0046ebfd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046ec01  85c0                 test eax, eax
// 0046ec03  750a                 jne 0x46ec0f
// 0046ec05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046ec09  2bcb                 sub ecx, ebx
// 0046ec0b  3bf9                 cmp edi, ecx
// 0046ec0d  756e                 jne 0x46ec7d
// 0046ec0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046ec13  f7da                 neg edx
// 0046ec15  1bd2                 sbb edx, edx
// 0046ec17  83e204               and edx, 4
// 0046ec1a  f7d8                 neg eax
// 0046ec1c  1bc0                 sbb eax, eax
// 0046ec1e  2500002000           and eax, 0x200000
// 0046ec23  0bd0                 or edx, eax
// 0046ec25  8b442420             mov eax, dword ptr [esp + 0x20]
// 0046ec29  f7d8                 neg eax
// 0046ec2b  1bc0                 sbb eax, eax
// 0046ec2d  83e002               and eax, 2
// 0046ec30  6a01                 push 1
// 0046ec32  0bd0                 or edx, eax
// 0046ec34  52                   push edx
// 0046ec35  8bce                 mov ecx, esi
// 0046ec37  e8c4f6ffff           call 0x46e300
// 0046ec3c  6a01                 push 1
// 0046ec3e  8bce                 mov ecx, esi
// 0046ec40  e86bf8ffff           call 0x46e4b0
// 0046ec45  6a01                 push 1
// 0046ec47  55                   push ebp
// 0046ec48  57                   push edi
// 0046ec49  8bce                 mov ecx, esi
// 0046ec4b  e860f6ffff           call 0x46e2b0
// 0046ec50  85c0                 test eax, eax
// 0046ec52  7c29                 jl 0x46ec7d
// 0046ec54  6a01                 push 1
// 0046ec56  8bce                 mov ecx, esi
// 0046ec58  e8f3f5ffff           call 0x46e250
// 0046ec5d  3bc3                 cmp eax, ebx
// 0046ec5f  751c                 jne 0x46ec7d
// 0046ec61  6a01                 push 1
// 0046ec63  8bce                 mov ecx, esi
// 0046ec65  e816f6ffff           call 0x46e280
// 0046ec6a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0046ec6e  750d                 jne 0x46ec7d
// 0046ec70  5f                   pop edi
// 0046ec71  5e                   pop esi
// 0046ec72  5d                   pop ebp
// 0046ec73  b801000000           mov eax, 1
// 0046ec78  5b                   pop ebx
// 0046ec79  59                   pop ecx
// 0046ec7a  c21000               ret 0x10
// 0046ec7d  5f                   pop edi
// 0046ec7e  5e                   pop esi
// 0046ec7f  5d                   pop ebp
// 0046ec80  33c0                 xor eax, eax
// 0046ec82  5b                   pop ebx
// 0046ec83  59                   pop ecx
// 0046ec84  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
