// roc 2010-06 004fe570  unit: RBX::Network::IdSerializer  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe570
//
// 004fe570  6aff                 push -1
// 004fe572  6898cf9800           push 0x98cf98
// 004fe577  64a100000000         mov eax, dword ptr fs:[0]
// 004fe57d  50                   push eax
// 004fe57e  64892500000000       mov dword ptr fs:[0], esp
// 004fe585  51                   push ecx
// 004fe586  53                   push ebx
// 004fe587  56                   push esi
// 004fe588  8bf1                 mov esi, ecx
// 004fe58a  57                   push edi
// 004fe58b  8974240c             mov dword ptr [esp + 0xc], esi
// 004fe58f  33db                 xor ebx, ebx
// 004fe591  33ff                 xor edi, edi
// 004fe593  895c2418             mov dword ptr [esp + 0x18], ebx
// 004fe597  395e04               cmp dword ptr [esi + 4], ebx
// 004fe59a  7625                 jbe 0x4fe5c1
// 004fe59c  55                   push ebp
// 004fe59d  8d4900               lea ecx, [ecx]
// 004fe5a0  8b06                 mov eax, dword ptr [esi]
// 004fe5a2  8b6cf804             mov ebp, dword ptr [eax + edi*8 + 4]
// 004fe5a6  3beb                 cmp ebp, ebx
// 004fe5a8  7410                 je 0x4fe5ba
// 004fe5aa  8bcd                 mov ecx, ebp
// 004fe5ac  e87f570100           call 0x513d30
// 004fe5b1  55                   push ebp
// 004fe5b2  e8e3932a00           call 0x7a799a
// 004fe5b7  83c404               add esp, 4
// 004fe5ba  47                   inc edi
// 004fe5bb  3b7e04               cmp edi, dword ptr [esi + 4]
// 004fe5be  72e0                 jb 0x4fe5a0
// 004fe5c0  5d                   pop ebp
// 004fe5c1  885e14               mov byte ptr [esi + 0x14], bl
// 004fe5c4  395e08               cmp dword ptr [esi + 8], ebx
// 004fe5c7  7439                 je 0x4fe602
// 004fe5c9  8b0e                 mov ecx, dword ptr [esi]
// 004fe5cb  51                   push ecx
// 004fe5cc  e875962a00           call 0x7a7c46
// 004fe5d1  83c404               add esp, 4
// 004fe5d4  895e08               mov dword ptr [esi + 8], ebx
// 004fe5d7  891e                 mov dword ptr [esi], ebx
// 004fe5d9  895e04               mov dword ptr [esi + 4], ebx
// 004fe5dc  3bdb                 cmp ebx, ebx
// 004fe5de  7422                 je 0x4fe602
// 004fe5e0  8bd3                 mov edx, ebx
// 004fe5e2  52                   push edx
// 004fe5e3  e85e962a00           call 0x7a7c46
// 004fe5e8  83c404               add esp, 4
// 004fe5eb  895e08               mov dword ptr [esi + 8], ebx
// 004fe5ee  891e                 mov dword ptr [esi], ebx
// 004fe5f0  895e04               mov dword ptr [esi + 4], ebx
// 004fe5f3  3bdb                 cmp ebx, ebx
// 004fe5f5  760b                 jbe 0x4fe602
// 004fe5f7  8bc3                 mov eax, ebx
// 004fe5f9  50                   push eax
// 004fe5fa  e847962a00           call 0x7a7c46
// 004fe5ff  83c404               add esp, 4
// 004fe602  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fe606  5f                   pop edi
// 004fe607  5e                   pop esi
// 004fe608  5b                   pop ebx
// 004fe609  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe610  83c410               add esp, 0x10
// 004fe613  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ??1StringCompressor@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
