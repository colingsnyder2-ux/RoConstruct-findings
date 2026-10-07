// roc 2008-06 0076a050  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076a050
//
// 0076a050  83ec14               sub esp, 0x14
// 0076a053  53                   push ebx
// 0076a054  55                   push ebp
// 0076a055  56                   push esi
// 0076a056  57                   push edi
// 0076a057  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0076a05b  8d442414             lea eax, [esp + 0x14]
// 0076a05f  8bf1                 mov esi, ecx
// 0076a061  57                   push edi
// 0076a062  50                   push eax
// 0076a063  89742418             mov dword ptr [esp + 0x18], esi
// 0076a067  e814f0f7ff           call 0x6e9080
// 0076a06c  8bc8                 mov ecx, eax
// 0076a06e  e86debf7ff           call 0x6e8be0
// 0076a073  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076a079  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 0076a07f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076a083  2b4f04               sub ecx, dword ptr [edi + 4]
// 0076a086  8b2d682d8000         mov ebp, dword ptr [0x802d68]
// 0076a08c  8bc1                 mov eax, ecx
// 0076a08e  99                   cdq 
// 0076a08f  33c2                 xor eax, edx
// 0076a091  2bc2                 sub eax, edx
// 0076a093  3bc6                 cmp eax, esi
// 0076a095  7d06                 jge 0x76a09d
// 0076a097  51                   push ecx
// 0076a098  6a00                 push 0
// 0076a09a  57                   push edi
// 0076a09b  ffd5                 call ebp
// 0076a09d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0076a0a0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076a0a4  8bc3                 mov eax, ebx
// 0076a0a6  2bc1                 sub eax, ecx
// 0076a0a8  99                   cdq 
// 0076a0a9  33c2                 xor eax, edx
// 0076a0ab  2bc2                 sub eax, edx
// 0076a0ad  3bc6                 cmp eax, esi
// 0076a0af  7d08                 jge 0x76a0b9
// 0076a0b1  2bcb                 sub ecx, ebx
// 0076a0b3  51                   push ecx
// 0076a0b4  6a00                 push 0
// 0076a0b6  57                   push edi
// 0076a0b7  ffd5                 call ebp
// 0076a0b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076a0bd  2b4f08               sub ecx, dword ptr [edi + 8]
// 0076a0c0  8bc1                 mov eax, ecx
// 0076a0c2  99                   cdq 
// 0076a0c3  33c2                 xor eax, edx
// 0076a0c5  2bc2                 sub eax, edx
// 0076a0c7  3bc6                 cmp eax, esi
// 0076a0c9  7d06                 jge 0x76a0d1
// 0076a0cb  6a00                 push 0
// 0076a0cd  51                   push ecx
// 0076a0ce  57                   push edi
// 0076a0cf  ffd5                 call ebp
// 0076a0d1  8b1f                 mov ebx, dword ptr [edi]
// 0076a0d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076a0d7  8bc3                 mov eax, ebx
// 0076a0d9  2bc1                 sub eax, ecx
// 0076a0db  99                   cdq 
// 0076a0dc  33c2                 xor eax, edx
// 0076a0de  2bc2                 sub eax, edx
// 0076a0e0  3bc6                 cmp eax, esi
// 0076a0e2  7d08                 jge 0x76a0ec
// 0076a0e4  6a00                 push 0
// 0076a0e6  2bcb                 sub ecx, ebx
// 0076a0e8  51                   push ecx
// 0076a0e9  57                   push edi
// 0076a0ea  ffd5                 call ebp
// 0076a0ec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0076a0f0  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0076a0f6  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 0076a0fc  e8091f0500           call 0x7bc00a
// 0076a101  a900000021           test eax, 0x21000000
// 0076a106  7515                 jne 0x76a11d
// 0076a108  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0076a10e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 0076a114  51                   push ecx
// 0076a115  57                   push edi
// 0076a116  8bcd                 mov ecx, ebp
// 0076a118  e8c3fdffff           call 0x769ee0
// 0076a11d  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 0076a123  e8f8aef7ff           call 0x6e5020
// 0076a128  8b5804               mov ebx, dword ptr [eax + 4]
// 0076a12b  85db                 test ebx, ebx
// 0076a12d  7448                 je 0x76a177
// 0076a12f  90                   nop 
// 0076a130  8bc3                 mov eax, ebx
// 0076a132  8b4008               mov eax, dword ptr [eax + 8]
// 0076a135  83781803             cmp dword ptr [eax + 0x18], 3
// 0076a139  8b1b                 mov ebx, dword ptr [ebx]
// 0076a13b  7536                 jne 0x76a173
// 0076a13d  8db008ffffff         lea esi, [eax - 0xf8]
// 0076a143  85f6                 test esi, esi
// 0076a145  742c                 je 0x76a173
// 0076a147  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076a14a  85c0                 test eax, eax
// 0076a14c  7425                 je 0x76a173
// 0076a14e  50                   push eax
// 0076a14f  ff153c2d8000         call dword ptr [0x802d3c]
// 0076a155  85c0                 test eax, eax
// 0076a157  741a                 je 0x76a173
// 0076a159  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 0076a15f  8b11                 mov edx, dword ptr [ecx]
// 0076a161  8b4218               mov eax, dword ptr [edx + 0x18]
// 0076a164  ffd0                 call eax
// 0076a166  3bc6                 cmp eax, esi
// 0076a168  7409                 je 0x76a173
// 0076a16a  56                   push esi
// 0076a16b  57                   push edi
// 0076a16c  8bcd                 mov ecx, ebp
// 0076a16e  e86dfdffff           call 0x769ee0
// 0076a173  85db                 test ebx, ebx
// 0076a175  75b9                 jne 0x76a130
// 0076a177  5f                   pop edi
// 0076a178  5e                   pop esi
// 0076a179  5d                   pop ebp
// 0076a17a  5b                   pop ebx
// 0076a17b  83c414               add esp, 0x14
// 0076a17e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
