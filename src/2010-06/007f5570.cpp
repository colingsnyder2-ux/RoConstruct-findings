// roc 2010-06 007f5570  unit: CXTPCustomizeCommandsPage  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5570
//
// 007f5570  8b442404             mov eax, dword ptr [esp + 4]
// 007f5574  53                   push ebx
// 007f5575  55                   push ebp
// 007f5576  56                   push esi
// 007f5577  57                   push edi
// 007f5578  6aff                 push -1
// 007f557a  50                   push eax
// 007f557b  e890fcffff           call 0x7f5210
// 007f5580  8b742418             mov esi, dword ptr [esp + 0x18]
// 007f5584  8b4e04               mov ecx, dword ptr [esi + 4]
// 007f5587  51                   push ecx
// 007f5588  8bd8                 mov ebx, eax
// 007f558a  ff156cbc9e00         call dword ptr [0x9ebc6c]
// 007f5590  8bf8                 mov edi, eax
// 007f5592  33ed                 xor ebp, ebp
// 007f5594  897c2414             mov dword ptr [esp + 0x14], edi
// 007f5598  85ff                 test edi, edi
// 007f559a  0f8e8c000000         jle 0x7f562c
// 007f55a0  8b5604               mov edx, dword ptr [esi + 4]
// 007f55a3  55                   push ebp
// 007f55a4  52                   push edx
// 007f55a5  ff1568bc9e00         call dword ptr [0x9ebc68]
// 007f55ab  85c0                 test eax, eax
// 007f55ad  7674                 jbe 0x7f5623
// 007f55af  55                   push ebp
// 007f55b0  56                   push esi
// 007f55b1  8bcb                 mov ecx, ebx
// 007f55b3  e868570000           call 0x7fad20
// 007f55b8  50                   push eax
// 007f55b9  e85296ffff           call 0x7eec10
// 007f55be  50                   push eax
// 007f55bf  e8ba27fbff           call 0x7a7d7e
// 007f55c4  83c408               add esp, 8
// 007f55c7  85c0                 test eax, eax
// 007f55c9  7458                 je 0x7f5623
// 007f55cb  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f55d0  7451                 je 0x7f5623
// 007f55d2  8b10                 mov edx, dword ptr [eax]
// 007f55d4  8bc8                 mov ecx, eax
// 007f55d6  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007f55dc  ffd0                 call eax
// 007f55de  8bb8fc000000         mov edi, dword ptr [eax + 0xfc]
// 007f55e4  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f55e7  33f6                 xor esi, esi
// 007f55e9  85c0                 test eax, eax
// 007f55eb  7e2e                 jle 0x7f561b
// 007f55ed  8d4900               lea ecx, [ecx]
// 007f55f0  85f6                 test esi, esi
// 007f55f2  7c11                 jl 0x7f5605
// 007f55f4  3bf0                 cmp esi, eax
// 007f55f6  7d0d                 jge 0x7f5605
// 007f55f8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007f55fb  7d3b                 jge 0x7f5638
// 007f55fd  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007f5600  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007f5603  eb02                 jmp 0x7f5607
// 007f5605  33c0                 xor eax, eax
// 007f5607  6a00                 push 0
// 007f5609  6aff                 push -1
// 007f560b  50                   push eax
// 007f560c  8bcb                 mov ecx, ebx
// 007f560e  e83d5d0000           call 0x7fb350
// 007f5613  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f5616  46                   inc esi
// 007f5617  3bf0                 cmp esi, eax
// 007f5619  7cd5                 jl 0x7f55f0
// 007f561b  8b742418             mov esi, dword ptr [esp + 0x18]
// 007f561f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f5623  45                   inc ebp
// 007f5624  3bef                 cmp ebp, edi
// 007f5626  0f8c74ffffff         jl 0x7f55a0
// 007f562c  5f                   pop edi
// 007f562d  5e                   pop esi
// 007f562e  5d                   pop ebp
// 007f562f  b801000000           mov eax, 1
// 007f5634  5b                   pop ebx
// 007f5635  c20c00               ret 0xc
// 007f5638  e80f26fbff           call 0x7a7c4c
// copied from an identical function in another client (function ?AddCategory@CXTPCustomizeCommandsPage@@QAEHPBDPAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp