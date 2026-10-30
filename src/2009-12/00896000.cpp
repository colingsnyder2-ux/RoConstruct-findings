// roc 2009-12 00896000  unit: CXTPRibbonBar  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896000
//
// 00896000  6aff                 push -1
// 00896002  6870179600           push 0x961770
// 00896007  64a100000000         mov eax, dword ptr fs:[0]
// 0089600d  50                   push eax
// 0089600e  83ec2c               sub esp, 0x2c
// 00896011  53                   push ebx
// 00896012  55                   push ebp
// 00896013  56                   push esi
// 00896014  57                   push edi
// 00896015  a10052b600           mov eax, dword ptr [0xb65200]
// 0089601a  33c4                 xor eax, esp
// 0089601c  50                   push eax
// 0089601d  8d442440             lea eax, [esp + 0x40]
// 00896021  64a300000000         mov dword ptr fs:[0], eax
// 00896027  8bf1                 mov esi, ecx
// 00896029  56                   push esi
// 0089602a  8d4c2430             lea ecx, [esp + 0x30]
// 0089602e  e8a3e6f5ff           call 0x7f46d6
// 00896033  33ff                 xor edi, edi
// 00896035  8bce                 mov ecx, esi
// 00896037  897c2448             mov dword ptr [esp + 0x48], edi
// 0089603b  e850e5f6ff           call 0x804590
// 00896040  8b10                 mov edx, dword ptr [eax]
// 00896042  57                   push edi
// 00896043  8bc8                 mov ecx, eax
// 00896045  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0089604b  56                   push esi
// 0089604c  ffd0                 call eax
// 0089604e  50                   push eax
// 0089604f  8d4c2430             lea ecx, [esp + 0x30]
// 00896053  51                   push ecx
// 00896054  8d4c2424             lea ecx, [esp + 0x24]
// 00896058  e80356fbff           call 0x84b660
// 0089605d  8b16                 mov edx, dword ptr [esi]
// 0089605f  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 00896065  8d442414             lea eax, [esp + 0x14]
// 00896069  50                   push eax
// 0089606a  8bce                 mov ecx, esi
// 0089606c  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00896071  ffd2                 call edx
// 00896073  8b5804               mov ebx, dword ptr [eax + 4]
// 00896076  8b8664020000         mov eax, dword ptr [esi + 0x264]
// 0089607c  83c304               add ebx, 4
// 0089607f  39782c               cmp dword ptr [eax + 0x2c], edi
// 00896082  7e58                 jle 0x8960dc
// 00896084  85ff                 test edi, edi
// 00896086  7c10                 jl 0x896098
// 00896088  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 0089608b  7d0b                 jge 0x896098
// 0089608d  8b4028               mov eax, dword ptr [eax + 0x28]
// 00896090  8b2cb8               mov ebp, dword ptr [eax + edi*4]
// 00896093  8d04b8               lea eax, [eax + edi*4]
// 00896096  eb02                 jmp 0x89609a
// 00896098  33ed                 xor ebp, ebp
// 0089609a  8b5500               mov edx, dword ptr [ebp]
// 0089609d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008960a3  6a00                 push 0
// 008960a5  8bcd                 mov ecx, ebp
// 008960a7  ffd0                 call eax
// 008960a9  85c0                 test eax, eax
// 008960ab  7423                 je 0x8960d0
// 008960ad  8b5500               mov edx, dword ptr [ebp]
// 008960b0  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 008960b6  8d44242c             lea eax, [esp + 0x2c]
// 008960ba  50                   push eax
// 008960bb  8d4c2418             lea ecx, [esp + 0x18]
// 008960bf  51                   push ecx
// 008960c0  8bcd                 mov ecx, ebp
// 008960c2  ffd2                 call edx
// 008960c4  8b4004               mov eax, dword ptr [eax + 4]
// 008960c7  83c004               add eax, 4
// 008960ca  3bc3                 cmp eax, ebx
// 008960cc  7e02                 jle 0x8960d0
// 008960ce  8bd8                 mov ebx, eax
// 008960d0  8b8664020000         mov eax, dword ptr [esi + 0x264]
// 008960d6  47                   inc edi
// 008960d7  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 008960da  7ca8                 jl 0x896084
// 008960dc  8d4c241c             lea ecx, [esp + 0x1c]
// 008960e0  c644244800           mov byte ptr [esp + 0x48], 0
// 008960e5  e8f655fbff           call 0x84b6e0
// 008960ea  8d4c242c             lea ecx, [esp + 0x2c]
// 008960ee  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008960f6  e8d5e5f5ff           call 0x7f46d0
// 008960fb  8bc3                 mov eax, ebx
// 008960fd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00896101  64890d00000000       mov dword ptr fs:[0], ecx
// 00896108  59                   pop ecx
// 00896109  5f                   pop edi
// 0089610a  5e                   pop esi
// 0089610b  5d                   pop ebp
// 0089610c  5b                   pop ebx
// 0089610d  83c438               add esp, 0x38
// 00896110  c3                   ret 
// copied from an identical function in another client (function ?CalcQuickAccessHeight@CXTPRibbonBar@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp