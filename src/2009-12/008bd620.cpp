// roc 2009-12 008bd620  unit: CXTPDockingPaneContext  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd620
//
// 008bd620  6aff                 push -1
// 008bd622  68683b9600           push 0x963b68
// 008bd627  64a100000000         mov eax, dword ptr fs:[0]
// 008bd62d  50                   push eax
// 008bd62e  83ec08               sub esp, 8
// 008bd631  53                   push ebx
// 008bd632  a10052b600           mov eax, dword ptr [0xb65200]
// 008bd637  33c4                 xor eax, esp
// 008bd639  50                   push eax
// 008bd63a  8d442410             lea eax, [esp + 0x10]
// 008bd63e  64a300000000         mov dword ptr fs:[0], eax
// 008bd644  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bd648  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008bd64c  3bca                 cmp ecx, edx
// 008bd64e  7d6d                 jge 0x8bd6bd
// 008bd650  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008bd658  c7442408f82a9f00     mov dword ptr [esp + 8], 0x9f2af8
// 008bd660  8b442428             mov eax, dword ptr [esp + 0x28]
// 008bd664  8d5801               lea ebx, [eax + 1]
// 008bd667  53                   push ebx
// 008bd668  52                   push edx
// 008bd669  50                   push eax
// 008bd66a  51                   push ecx
// 008bd66b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008bd673  ff150cb19800         call dword ptr [0x98b10c]
// 008bd679  50                   push eax
// 008bd67a  8d4c240c             lea ecx, [esp + 0xc]
// 008bd67e  e8a767f3ff           call 0x7f3e2a
// 008bd683  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bd687  85c0                 test eax, eax
// 008bd689  7504                 jne 0x8bd68f
// 008bd68b  33c9                 xor ecx, ecx
// 008bd68d  eb03                 jmp 0x8bd692
// 008bd68f  8b4804               mov ecx, dword ptr [eax + 4]
// 008bd692  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008bd696  8b4004               mov eax, dword ptr [eax + 4]
// 008bd699  6a02                 push 2
// 008bd69b  52                   push edx
// 008bd69c  51                   push ecx
// 008bd69d  50                   push eax
// 008bd69e  ff15acb09800         call dword ptr [0x98b0ac]
// 008bd6a4  8d4c2408             lea ecx, [esp + 8]
// 008bd6a8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008bd6b0  c7442408f82a9f00     mov dword ptr [esp + 8], 0x9f2af8
// 008bd6b8  e8731bb5ff           call 0x40f230
// 008bd6bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bd6c1  64890d00000000       mov dword ptr fs:[0], ecx
// 008bd6c8  59                   pop ecx
// 008bd6c9  5b                   pop ebx
// 008bd6ca  83c414               add esp, 0x14
// 008bd6cd  c21000               ret 0x10
// copied from an identical function in another client (function ?IncludeRgnPart@CXTPDockingPaneContext@@AAEXPAVCRgn@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp