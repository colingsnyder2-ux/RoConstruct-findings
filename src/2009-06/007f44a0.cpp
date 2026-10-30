// roc 2009-06 007f44a0  unit: CXTPTabManagerItem  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f44a0
//
// 007f44a0  6aff                 push -1
// 007f44a2  683b0d8800           push 0x880d3b
// 007f44a7  64a100000000         mov eax, dword ptr fs:[0]
// 007f44ad  50                   push eax
// 007f44ae  51                   push ecx
// 007f44af  56                   push esi
// 007f44b0  57                   push edi
// 007f44b1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f44b6  33c4                 xor eax, esp
// 007f44b8  50                   push eax
// 007f44b9  8d442410             lea eax, [esp + 0x10]
// 007f44bd  64a300000000         mov dword ptr fs:[0], eax
// 007f44c3  8bf9                 mov edi, ecx
// 007f44c5  897c240c             mov dword ptr [esp + 0xc], edi
// 007f44c9  c707eca29000         mov dword ptr [edi], 0x90a2ec
// 007f44cf  33f6                 xor esi, esi
// 007f44d1  397774               cmp dword ptr [edi + 0x74], esi
// 007f44d4  c744241803000000     mov dword ptr [esp + 0x18], 3
// 007f44dc  7e26                 jle 0x7f4504
// 007f44de  8bff                 mov edi, edi
// 007f44e0  85f6                 test esi, esi
// 007f44e2  7c60                 jl 0x7f4544
// 007f44e4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 007f44e7  7d5b                 jge 0x7f4544
// 007f44e9  8b4770               mov eax, dword ptr [edi + 0x70]
// 007f44ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f44ef  8d04b0               lea eax, [eax + esi*4]
// 007f44f2  85c9                 test ecx, ecx
// 007f44f4  7408                 je 0x7f44fe
// 007f44f6  8b11                 mov edx, dword ptr [ecx]
// 007f44f8  8b02                 mov eax, dword ptr [edx]
// 007f44fa  6a01                 push 1
// 007f44fc  ffd0                 call eax
// 007f44fe  46                   inc esi
// 007f44ff  3b7774               cmp esi, dword ptr [edi + 0x74]
// 007f4502  7cdc                 jl 0x7f44e0
// 007f4504  8d4f6c               lea ecx, [edi + 0x6c]
// 007f4507  c644241802           mov byte ptr [esp + 0x18], 2
// 007f450c  e83ffeffff           call 0x7f4350
// 007f4511  8d4f58               lea ecx, [edi + 0x58]
// 007f4514  ff1510fd8900         call dword ptr [0x89fd10]
// 007f451a  8d4f54               lea ecx, [edi + 0x54]
// 007f451d  ff1510fd8900         call dword ptr [0x89fd10]
// 007f4523  8bcf                 mov ecx, edi
// 007f4525  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007f452d  e88250f2ff           call 0x7195b4
// 007f4532  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f4536  64890d00000000       mov dword ptr fs:[0], ecx
// 007f453d  59                   pop ecx
// 007f453e  5f                   pop edi
// 007f453f  5e                   pop esi
// 007f4540  83c410               add esp, 0x10
// 007f4543  c3                   ret 
// 007f4544  e89b47f2ff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTPTabManagerItem@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp