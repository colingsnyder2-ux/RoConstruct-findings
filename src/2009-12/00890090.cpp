// roc 2009-12 00890090  unit: CBitmap  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890090
//
// 00890090  6aff                 push -1
// 00890092  6878129600           push 0x961278
// 00890097  64a100000000         mov eax, dword ptr fs:[0]
// 0089009d  50                   push eax
// 0089009e  83ec28               sub esp, 0x28
// 008900a1  53                   push ebx
// 008900a2  55                   push ebp
// 008900a3  56                   push esi
// 008900a4  57                   push edi
// 008900a5  a10052b600           mov eax, dword ptr [0xb65200]
// 008900aa  33c4                 xor eax, esp
// 008900ac  50                   push eax
// 008900ad  8d44243c             lea eax, [esp + 0x3c]
// 008900b1  64a300000000         mov dword ptr fs:[0], eax
// 008900b7  8be9                 mov ebp, ecx
// 008900b9  c7450800000000       mov dword ptr [ebp + 8], 0
// 008900c0  e8593df6ff           call 0x7f3e1e
// 008900c5  8b742450             mov esi, dword ptr [esp + 0x50]
// 008900c9  85f6                 test esi, esi
// 008900cb  7462                 je 0x89012f
// 008900cd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008900d1  56                   push esi
// 008900d2  57                   push edi
// 008900d3  ff15f4b19800         call dword ptr [0x98b1f4]
// 008900d9  56                   push esi
// 008900da  57                   push edi
// 008900db  8bd8                 mov ebx, eax
// 008900dd  ff15f0b19800         call dword ptr [0x98b1f0]
// 008900e3  85c0                 test eax, eax
// 008900e5  7448                 je 0x89012f
// 008900e7  50                   push eax
// 008900e8  ff157cb29800         call dword ptr [0x98b27c]
// 008900ee  85c0                 test eax, eax
// 008900f0  743d                 je 0x89012f
// 008900f2  83fb0a               cmp ebx, 0xa
// 008900f5  7238                 jb 0x89012f
// 008900f7  6a00                 push 0
// 008900f9  53                   push ebx
// 008900fa  50                   push eax
// 008900fb  8d4c2420             lea ecx, [esp + 0x20]
// 008900ff  e8e445f6ff           call 0x7f46e8
// 00890104  8d442414             lea eax, [esp + 0x14]
// 00890108  50                   push eax
// 00890109  8bcd                 mov ecx, ebp
// 0089010b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00890113  e8b8fdffff           call 0x88fed0
// 00890118  8d4c2414             lea ecx, [esp + 0x14]
// 0089011c  8bf0                 mov esi, eax
// 0089011e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00890126  e8b145f6ff           call 0x7f46dc
// 0089012b  8bc6                 mov eax, esi
// 0089012d  eb02                 jmp 0x890131
// 0089012f  33c0                 xor eax, eax
// 00890131  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00890135  64890d00000000       mov dword ptr fs:[0], ecx
// 0089013c  59                   pop ecx
// 0089013d  5f                   pop edi
// 0089013e  5e                   pop esi
// 0089013f  5d                   pop ebp
// 00890140  5b                   pop ebx
// 00890141  83c434               add esp, 0x34
// 00890144  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp