// roc 2009-12 008cf2c0  unit: CXTPTabManagerItem  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf2c0
//
// 008cf2c0  6aff                 push -1
// 008cf2c2  68594f9600           push 0x964f59
// 008cf2c7  64a100000000         mov eax, dword ptr fs:[0]
// 008cf2cd  50                   push eax
// 008cf2ce  51                   push ecx
// 008cf2cf  53                   push ebx
// 008cf2d0  56                   push esi
// 008cf2d1  57                   push edi
// 008cf2d2  a10052b600           mov eax, dword ptr [0xb65200]
// 008cf2d7  33c4                 xor eax, esp
// 008cf2d9  50                   push eax
// 008cf2da  8d442414             lea eax, [esp + 0x14]
// 008cf2de  64a300000000         mov dword ptr fs:[0], eax
// 008cf2e4  8bf1                 mov esi, ecx
// 008cf2e6  89742410             mov dword ptr [esp + 0x10], esi
// 008cf2ea  c706c4a7a000         mov dword ptr [esi], 0xa0a7c4
// 008cf2f0  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008cf2f3  33ff                 xor edi, edi
// 008cf2f5  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 008cf2fd  85c0                 test eax, eax
// 008cf2ff  7e30                 jle 0x8cf331
// 008cf301  85ff                 test edi, edi
// 008cf303  0f8cac000000         jl 0x8cf3b5
// 008cf309  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008cf30c  0f8da3000000         jge 0x8cf3b5
// 008cf312  8b4658               mov eax, dword ptr [esi + 0x58]
// 008cf315  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008cf318  8b13                 mov edx, dword ptr [ebx]
// 008cf31a  8d04b8               lea eax, [eax + edi*4]
// 008cf31d  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008cf320  8bcb                 mov ecx, ebx
// 008cf322  ffd0                 call eax
// 008cf324  8bcb                 mov ecx, ebx
// 008cf326  e8b14af2ff           call 0x7f3ddc
// 008cf32b  47                   inc edi
// 008cf32c  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008cf32f  7cd0                 jl 0x8cf301
// 008cf331  33ff                 xor edi, edi
// 008cf333  397e70               cmp dword ptr [esi + 0x70], edi
// 008cf336  7e23                 jle 0x8cf35b
// 008cf338  85ff                 test edi, edi
// 008cf33a  7c79                 jl 0x8cf3b5
// 008cf33c  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008cf33f  7d74                 jge 0x8cf3b5
// 008cf341  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008cf344  8d04b9               lea eax, [ecx + edi*4]
// 008cf347  8b08                 mov ecx, dword ptr [eax]
// 008cf349  85c9                 test ecx, ecx
// 008cf34b  7408                 je 0x8cf355
// 008cf34d  8b11                 mov edx, dword ptr [ecx]
// 008cf34f  8b02                 mov eax, dword ptr [edx]
// 008cf351  6a01                 push 1
// 008cf353  ffd0                 call eax
// 008cf355  47                   inc edi
// 008cf356  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008cf359  7cdd                 jl 0x8cf338
// 008cf35b  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 008cf361  85ff                 test edi, edi
// 008cf363  7410                 je 0x8cf375
// 008cf365  8bcf                 mov ecx, edi
// 008cf367  e804eeffff           call 0x8ce170
// 008cf36c  57                   push edi
// 008cf36d  e8e844f2ff           call 0x7f385a
// 008cf372  83c404               add esp, 4
// 008cf375  8d4e7c               lea ecx, [esi + 0x7c]
// 008cf378  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008cf37d  e88ecdf9ff           call 0x86c110
// 008cf382  8d4e68               lea ecx, [esi + 0x68]
// 008cf385  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008cf38a  e871fbffff           call 0x8cef00
// 008cf38f  8d4e54               lea ecx, [esi + 0x54]
// 008cf392  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008cf397  e83479f8ff           call 0x856cd0
// 008cf39c  c706c0c69f00         mov dword ptr [esi], 0x9fc6c0
// 008cf3a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008cf3a6  64890d00000000       mov dword ptr fs:[0], ecx
// 008cf3ad  59                   pop ecx
// 008cf3ae  5f                   pop edi
// 008cf3af  5e                   pop esi
// 008cf3b0  5b                   pop ebx
// 008cf3b1  83c410               add esp, 0x10
// 008cf3b4  c3                   ret 
// 008cf3b5  e85247f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPTabManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp