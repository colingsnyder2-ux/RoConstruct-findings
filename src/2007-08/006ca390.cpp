// roc 2007-08 006ca390  unit: VCRect::?$CArray  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca390
//
// 006ca390  6aff                 push -1
// 006ca392  68d8627600           push 0x7662d8
// 006ca397  64a100000000         mov eax, dword ptr fs:[0]
// 006ca39d  50                   push eax
// 006ca39e  83ec28               sub esp, 0x28
// 006ca3a1  53                   push ebx
// 006ca3a2  55                   push ebp
// 006ca3a3  56                   push esi
// 006ca3a4  57                   push edi
// 006ca3a5  a188518b00           mov eax, dword ptr [0x8b5188]
// 006ca3aa  33c4                 xor eax, esp
// 006ca3ac  50                   push eax
// 006ca3ad  8d44243c             lea eax, [esp + 0x3c]
// 006ca3b1  64a300000000         mov dword ptr fs:[0], eax
// 006ca3b7  8be9                 mov ebp, ecx
// 006ca3b9  c7450800000000       mov dword ptr [ebp + 8], 0
// 006ca3c0  e8675ef6ff           call 0x63022c
// 006ca3c5  8b742450             mov esi, dword ptr [esp + 0x50]
// 006ca3c9  85f6                 test esi, esi
// 006ca3cb  7462                 je 0x6ca42f
// 006ca3cd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006ca3d1  56                   push esi
// 006ca3d2  57                   push edi
// 006ca3d3  ff15d8d27700         call dword ptr [0x77d2d8]
// 006ca3d9  56                   push esi
// 006ca3da  57                   push edi
// 006ca3db  8bd8                 mov ebx, eax
// 006ca3dd  ff15d4d27700         call dword ptr [0x77d2d4]
// 006ca3e3  85c0                 test eax, eax
// 006ca3e5  7448                 je 0x6ca42f
// 006ca3e7  50                   push eax
// 006ca3e8  ff1568d27700         call dword ptr [0x77d268]
// 006ca3ee  85c0                 test eax, eax
// 006ca3f0  743d                 je 0x6ca42f
// 006ca3f2  83fb0a               cmp ebx, 0xa
// 006ca3f5  7238                 jb 0x6ca42f
// 006ca3f7  6a00                 push 0
// 006ca3f9  53                   push ebx
// 006ca3fa  50                   push eax
// 006ca3fb  8d4c2420             lea ecx, [esp + 0x20]
// 006ca3ff  e8c6e50600           call 0x7389ca
// 006ca404  8d442414             lea eax, [esp + 0x14]
// 006ca408  50                   push eax
// 006ca409  8bcd                 mov ecx, ebp
// 006ca40b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 006ca413  e8e8fdffff           call 0x6ca200
// 006ca418  8d4c2414             lea ecx, [esp + 0x14]
// 006ca41c  8bf0                 mov esi, eax
// 006ca41e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 006ca426  e817e00600           call 0x738442
// 006ca42b  8bc6                 mov eax, esi
// 006ca42d  eb02                 jmp 0x6ca431
// 006ca42f  33c0                 xor eax, eax
// 006ca431  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006ca435  64890d00000000       mov dword ptr fs:[0], ecx
// 006ca43c  59                   pop ecx
// 006ca43d  5f                   pop edi
// 006ca43e  5e                   pop esi
// 006ca43f  5d                   pop ebp
// 006ca440  5b                   pop ebx
// 006ca441  83c434               add esp, 0x34
// 006ca444  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp