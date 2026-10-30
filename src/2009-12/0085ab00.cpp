// roc 2009-12 0085ab00  unit: CXTPStatusBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ab00
//
// 0085ab00  6aff                 push -1
// 0085ab02  689be29500           push 0x95e29b
// 0085ab07  64a100000000         mov eax, dword ptr fs:[0]
// 0085ab0d  50                   push eax
// 0085ab0e  51                   push ecx
// 0085ab0f  56                   push esi
// 0085ab10  57                   push edi
// 0085ab11  a10052b600           mov eax, dword ptr [0xb65200]
// 0085ab16  33c4                 xor eax, esp
// 0085ab18  50                   push eax
// 0085ab19  8d442410             lea eax, [esp + 0x10]
// 0085ab1d  64a300000000         mov dword ptr fs:[0], eax
// 0085ab23  8bf1                 mov esi, ecx
// 0085ab25  8974240c             mov dword ptr [esp + 0xc], esi
// 0085ab29  c70664d29f00         mov dword ptr [esi], 0x9fd264
// 0085ab2f  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085ab32  50                   push eax
// 0085ab33  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 0085ab3b  e8a097f9ff           call 0x7f42e0
// 0085ab40  8bf8                 mov edi, eax
// 0085ab42  85ff                 test edi, edi
// 0085ab44  7428                 je 0x85ab6e
// 0085ab46  8b4720               mov eax, dword ptr [edi + 0x20]
// 0085ab49  50                   push eax
// 0085ab4a  ff1584cc9800         call dword ptr [0x98cc84]
// 0085ab50  85c0                 test eax, eax
// 0085ab52  741a                 je 0x85ab6e
// 0085ab54  8b17                 mov edx, dword ptr [edi]
// 0085ab56  8b4268               mov eax, dword ptr [edx + 0x68]
// 0085ab59  8bcf                 mov ecx, edi
// 0085ab5b  ffd0                 call eax
// 0085ab5d  837e4800             cmp dword ptr [esi + 0x48], 0
// 0085ab61  740b                 je 0x85ab6e
// 0085ab63  8b17                 mov edx, dword ptr [edi]
// 0085ab65  8b4204               mov eax, dword ptr [edx + 4]
// 0085ab68  6a01                 push 1
// 0085ab6a  8bcf                 mov ecx, edi
// 0085ab6c  ffd0                 call eax
// 0085ab6e  8d4e5c               lea ecx, [esi + 0x5c]
// 0085ab71  c644241802           mov byte ptr [esp + 0x18], 2
// 0085ab76  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0085ab7c  e8af46bbff           call 0x40f230
// 0085ab81  8d4e40               lea ecx, [esi + 0x40]
// 0085ab84  ff15c0de9800         call dword ptr [0x98dec0]
// 0085ab8a  8d4e30               lea ecx, [esi + 0x30]
// 0085ab8d  ff15c0de9800         call dword ptr [0x98dec0]
// 0085ab93  8bce                 mov ecx, esi
// 0085ab95  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0085ab9d  e84098f9ff           call 0x7f43e2
// 0085aba2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085aba6  64890d00000000       mov dword ptr fs:[0], ecx
// 0085abad  59                   pop ecx
// 0085abae  5f                   pop edi
// 0085abaf  5e                   pop esi
// 0085abb0  83c410               add esp, 0x10
// 0085abb3  c3                   ret 
// copied from an identical function in another client (function ??1CXTPStatusBarPane@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp