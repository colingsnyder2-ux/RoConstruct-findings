// roc 2009-12 0088e150  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e150
//
// 0088e150  6aff                 push -1
// 0088e152  68560f9600           push 0x960f56
// 0088e157  64a100000000         mov eax, dword ptr fs:[0]
// 0088e15d  50                   push eax
// 0088e15e  51                   push ecx
// 0088e15f  56                   push esi
// 0088e160  a10052b600           mov eax, dword ptr [0xb65200]
// 0088e165  33c4                 xor eax, esp
// 0088e167  50                   push eax
// 0088e168  8d44240c             lea eax, [esp + 0xc]
// 0088e16c  64a300000000         mov dword ptr fs:[0], eax
// 0088e172  8bf1                 mov esi, ecx
// 0088e174  89742408             mov dword ptr [esp + 8], esi
// 0088e178  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0088e180  e82bfcffff           call 0x88ddb0
// 0088e185  8d4e1c               lea ecx, [esi + 0x1c]
// 0088e188  c644241400           mov byte ptr [esp + 0x14], 0
// 0088e18d  e8bef3ffff           call 0x88d550
// 0088e192  8d4e04               lea ecx, [esi + 4]
// 0088e195  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088e19d  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 0088e1a3  e88810b8ff           call 0x40f230
// 0088e1a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e1ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e1b3  59                   pop ecx
// 0088e1b4  5e                   pop esi
// 0088e1b5  83c410               add esp, 0x10
// 0088e1b8  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCommandBarAnimation@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp