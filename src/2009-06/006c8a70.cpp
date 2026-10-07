// roc 2009-06 006c8a70  unit: seg_006c0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8a70
//
// 006c8a70  51                   push ecx
// 006c8a71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c8a75  8b4808               mov ecx, dword ptr [eax + 8]
// 006c8a78  53                   push ebx
// 006c8a79  8b1c8d88db8e00       mov ebx, dword ptr [ecx*4 + 0x8edb88]
// 006c8a80  56                   push esi
// 006c8a81  57                   push edi
// 006c8a82  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c8a86  8b5714               mov edx, dword ptr [edi + 0x14]
// 006c8a89  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006c8a91  8b0a                 mov ecx, dword ptr [edx]
// 006c8a93  8b7208               mov esi, dword ptr [edx + 8]
// 006c8a96  3bce                 cmp ecx, esi
// 006c8a98  7311                 jae 0x6c8aab
// 006c8a9a  8d9b00000000         lea ebx, [ebx]
// 006c8aa0  3bc1                 cmp eax, ecx
// 006c8aa2  7420                 je 0x6c8ac4
// 006c8aa4  83c110               add ecx, 0x10
// 006c8aa7  3bce                 cmp ecx, esi
// 006c8aa9  72f5                 jb 0x6c8aa0
// 006c8aab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c8aaf  53                   push ebx
// 006c8ab0  51                   push ecx
// 006c8ab1  68f4c28e00           push 0x8ec2f4
// 006c8ab6  57                   push edi
// 006c8ab7  e884fdffff           call 0x6c8840
// 006c8abc  83c410               add esp, 0x10
// 006c8abf  5f                   pop edi
// 006c8ac0  5e                   pop esi
// 006c8ac1  5b                   pop ebx
// 006c8ac2  59                   pop ecx
// 006c8ac3  c3                   ret 
// 006c8ac4  2b470c               sub eax, dword ptr [edi + 0xc]
// 006c8ac7  8d4c240c             lea ecx, [esp + 0xc]
// 006c8acb  51                   push ecx
// 006c8acc  52                   push edx
// 006c8acd  c1f804               sar eax, 4
// 006c8ad0  57                   push edi
// 006c8ad1  e84afaffff           call 0x6c8520
// 006c8ad6  83c40c               add esp, 0xc
// 006c8ad9  85c0                 test eax, eax
// 006c8adb  74ce                 je 0x6c8aab
// 006c8add  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c8ae1  53                   push ebx
// 006c8ae2  52                   push edx
// 006c8ae3  50                   push eax
// 006c8ae4  8b442428             mov eax, dword ptr [esp + 0x28]
// 006c8ae8  50                   push eax
// 006c8ae9  68d0c28e00           push 0x8ec2d0
// 006c8aee  57                   push edi
// 006c8aef  e84cfdffff           call 0x6c8840
// 006c8af4  83c418               add esp, 0x18
// 006c8af7  5f                   pop edi
// 006c8af8  5e                   pop esi
// 006c8af9  5b                   pop ebx
// 006c8afa  59                   pop ecx
// 006c8afb  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_typeerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
