// roc 2009-12 008b1fc0  unit: CXTPDockingPaneTabbedContainer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1fc0
//
// 008b1fc0  6aff                 push -1
// 008b1fc2  68bd2f9600           push 0x962fbd
// 008b1fc7  64a100000000         mov eax, dword ptr fs:[0]
// 008b1fcd  50                   push eax
// 008b1fce  51                   push ecx
// 008b1fcf  53                   push ebx
// 008b1fd0  55                   push ebp
// 008b1fd1  56                   push esi
// 008b1fd2  57                   push edi
// 008b1fd3  a10052b600           mov eax, dword ptr [0xb65200]
// 008b1fd8  33c4                 xor eax, esp
// 008b1fda  50                   push eax
// 008b1fdb  8d442418             lea eax, [esp + 0x18]
// 008b1fdf  64a300000000         mov dword ptr fs:[0], eax
// 008b1fe5  8bf1                 mov esi, ecx
// 008b1fe7  89742414             mov dword ptr [esp + 0x14], esi
// 008b1feb  8d7e54               lea edi, [esi + 0x54]
// 008b1fee  8d9ea8000000         lea ebx, [esi + 0xa8]
// 008b1ff4  8dae38010000         lea ebp, [esi + 0x138]
// 008b1ffa  c706c475a000         mov dword ptr [esi], 0xa075c4
// 008b2000  c7076475a000         mov dword ptr [edi], 0xa07564
// 008b2006  c703dc74a000         mov dword ptr [ebx], 0xa074dc
// 008b200c  c745007c74a000       mov dword ptr [ebp], 0xa0747c
// 008b2013  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b2017  c744242004000000     mov dword ptr [esp + 0x20], 4
// 008b201f  7405                 je 0x8b2026
// 008b2021  e8b818f4ff           call 0x7f38de
// 008b2026  8b8ec0010000         mov ecx, dword ptr [esi + 0x1c0]
// 008b202c  85c9                 test ecx, ecx
// 008b202e  7409                 je 0x8b2039
// 008b2030  8b01                 mov eax, dword ptr [ecx]
// 008b2032  8b5004               mov edx, dword ptr [eax + 4]
// 008b2035  6a01                 push 1
// 008b2037  ffd2                 call edx
// 008b2039  8d8eac010000         lea ecx, [esi + 0x1ac]
// 008b203f  c644242003           mov byte ptr [esp + 0x20], 3
// 008b2044  e8b732faff           call 0x855300
// 008b2049  8bcd                 mov ecx, ebp
// 008b204b  c644242002           mov byte ptr [esp + 0x20], 2
// 008b2050  e8eba3f8ff           call 0x83c440
// 008b2055  8bcb                 mov ecx, ebx
// 008b2057  c644242001           mov byte ptr [esp + 0x20], 1
// 008b205c  e85fd20100           call 0x8cf2c0
// 008b2061  8bcf                 mov ecx, edi
// 008b2063  c644242000           mov byte ptr [esp + 0x20], 0
// 008b2068  e8230f0400           call 0x8f2f90
// 008b206d  8bce                 mov ecx, esi
// 008b206f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008b2077  e89a22f4ff           call 0x7f4316
// 008b207c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b2080  64890d00000000       mov dword ptr fs:[0], ecx
// 008b2087  59                   pop ecx
// 008b2088  5f                   pop edi
// 008b2089  5e                   pop esi
// 008b208a  5d                   pop ebp
// 008b208b  5b                   pop ebx
// 008b208c  83c410               add esp, 0x10
// 008b208f  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneTabbedContainer@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp