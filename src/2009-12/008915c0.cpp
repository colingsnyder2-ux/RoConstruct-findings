// roc 2009-12 008915c0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008915c0
//
// 008915c0  6aff                 push -1
// 008915c2  68683d9600           push 0x963d68
// 008915c7  64a100000000         mov eax, dword ptr fs:[0]
// 008915cd  50                   push eax
// 008915ce  51                   push ecx
// 008915cf  56                   push esi
// 008915d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008915d5  33c4                 xor eax, esp
// 008915d7  50                   push eax
// 008915d8  8d44240c             lea eax, [esp + 0xc]
// 008915dc  64a300000000         mov dword ptr fs:[0], eax
// 008915e2  8bf1                 mov esi, ecx
// 008915e4  89742408             mov dword ptr [esp + 8], esi
// 008915e8  c7069c3aa000         mov dword ptr [esi], 0xa03a9c
// 008915ee  8d4e58               lea ecx, [esi + 0x58]
// 008915f1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008915f9  e84231f8ff           call 0x814740
// 008915fe  8bce                 mov ecx, esi
// 00891600  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00891608  e8092df6ff           call 0x7f4316
// 0089160d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00891611  64890d00000000       mov dword ptr fs:[0], ecx
// 00891618  59                   pop ecx
// 00891619  5e                   pop esi
// 0089161a  83c410               add esp, 0x10
// 0089161d  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockBar@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp