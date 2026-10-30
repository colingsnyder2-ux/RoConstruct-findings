// roc 2009-12 00890e70  unit: CXTPDockBar  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890e70
//
// 00890e70  6aff                 push -1
// 00890e72  6848a49500           push 0x95a448
// 00890e77  64a100000000         mov eax, dword ptr fs:[0]
// 00890e7d  50                   push eax
// 00890e7e  83ec58               sub esp, 0x58
// 00890e81  a10052b600           mov eax, dword ptr [0xb65200]
// 00890e86  33c4                 xor eax, esp
// 00890e88  89442454             mov dword ptr [esp + 0x54], eax
// 00890e8c  56                   push esi
// 00890e8d  a10052b600           mov eax, dword ptr [0xb65200]
// 00890e92  33c4                 xor eax, esp
// 00890e94  50                   push eax
// 00890e95  8d442460             lea eax, [esp + 0x60]
// 00890e99  64a300000000         mov dword ptr fs:[0], eax
// 00890e9f  8bf1                 mov esi, ecx
// 00890ea1  56                   push esi
// 00890ea2  8d4c240c             lea ecx, [esp + 0xc]
// 00890ea6  e84533f6ff           call 0x7f41f0
// 00890eab  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00890eae  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00890eb6  e82538f8ff           call 0x8146e0
// 00890ebb  8b10                 mov edx, dword ptr [eax]
// 00890ebd  8b92a4000000         mov edx, dword ptr [edx + 0xa4]
// 00890ec3  56                   push esi
// 00890ec4  8d4c240c             lea ecx, [esp + 0xc]
// 00890ec8  51                   push ecx
// 00890ec9  8bc8                 mov ecx, eax
// 00890ecb  ffd2                 call edx
// 00890ecd  8d4c2408             lea ecx, [esp + 8]
// 00890ed1  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00890ed9  e80c33f6ff           call 0x7f41ea
// 00890ede  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00890ee2  64890d00000000       mov dword ptr fs:[0], ecx
// 00890ee9  59                   pop ecx
// 00890eea  5e                   pop esi
// 00890eeb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00890eef  33cc                 xor ecx, esp
// 00890ef1  e8a444f6ff           call 0x7f539a
// 00890ef6  83c464               add esp, 0x64
// 00890ef9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp