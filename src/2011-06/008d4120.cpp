// roc 2011-06 008d4120  unit: CXTPTabManagerItem  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4120
//
// 008d4120  6aff                 push -1
// 008d4122  680bd1a000           push 0xa0d10b
// 008d4127  64a100000000         mov eax, dword ptr fs:[0]
// 008d412d  50                   push eax
// 008d412e  51                   push ecx
// 008d412f  56                   push esi
// 008d4130  57                   push edi
// 008d4131  a12058c900           mov eax, dword ptr [0xc95820]
// 008d4136  33c4                 xor eax, esp
// 008d4138  50                   push eax
// 008d4139  8d442410             lea eax, [esp + 0x10]
// 008d413d  64a300000000         mov dword ptr fs:[0], eax
// 008d4143  8bf9                 mov edi, ecx
// 008d4145  897c240c             mov dword ptr [esp + 0xc], edi
// 008d4149  c707ac79ad00         mov dword ptr [edi], 0xad79ac
// 008d414f  33f6                 xor esi, esi
// 008d4151  397774               cmp dword ptr [edi + 0x74], esi
// 008d4154  c744241803000000     mov dword ptr [esp + 0x18], 3
// 008d415c  7e26                 jle 0x8d4184
// 008d415e  8bff                 mov edi, edi
// 008d4160  85f6                 test esi, esi
// 008d4162  7c60                 jl 0x8d41c4
// 008d4164  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008d4167  7d5b                 jge 0x8d41c4
// 008d4169  8b4770               mov eax, dword ptr [edi + 0x70]
// 008d416c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008d416f  8d04b0               lea eax, [eax + esi*4]
// 008d4172  85c9                 test ecx, ecx
// 008d4174  7408                 je 0x8d417e
// 008d4176  8b11                 mov edx, dword ptr [ecx]
// 008d4178  8b02                 mov eax, dword ptr [edx]
// 008d417a  6a01                 push 1
// 008d417c  ffd0                 call eax
// 008d417e  46                   inc esi
// 008d417f  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008d4182  7cdc                 jl 0x8d4160
// 008d4184  8d4f6c               lea ecx, [edi + 0x6c]
// 008d4187  c644241802           mov byte ptr [esp + 0x18], 2
// 008d418c  e83ffeffff           call 0x8d3fd0
// 008d4191  8d4f58               lea ecx, [edi + 0x58]
// 008d4194  ff15082ea400         call dword ptr [0xa42e08]
// 008d419a  8d4f54               lea ecx, [edi + 0x54]
// 008d419d  ff15082ea400         call dword ptr [0xa42e08]
// 008d41a3  8bcf                 mov ecx, edi
// 008d41a5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008d41ad  e8346af3ff           call 0x80abe6
// 008d41b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d41b6  64890d00000000       mov dword ptr fs:[0], ecx
// 008d41bd  59                   pop ecx
// 008d41be  5f                   pop edi
// 008d41bf  5e                   pop esi
// 008d41c0  83c410               add esp, 0x10
// 008d41c3  c3                   ret 
// 008d41c4  e84161f3ff           call 0x80a30a
// copied from an identical function in another client (function ??1CXTPTabManagerItem@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp