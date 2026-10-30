// roc 2007-03 00693ac0  unit: seg_00690000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693ac0
//
// 00693ac0  6aff                 push -1
// 00693ac2  68b84e7600           push 0x764eb8
// 00693ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00693acd  50                   push eax
// 00693ace  83ec28               sub esp, 0x28
// 00693ad1  53                   push ebx
// 00693ad2  55                   push ebp
// 00693ad3  56                   push esi
// 00693ad4  57                   push edi
// 00693ad5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00693ada  33c4                 xor eax, esp
// 00693adc  50                   push eax
// 00693add  8d44243c             lea eax, [esp + 0x3c]
// 00693ae1  64a300000000         mov dword ptr fs:[0], eax
// 00693ae7  8be9                 mov ebp, ecx
// 00693ae9  c7450800000000       mov dword ptr [ebp + 8], 0
// 00693af0  e8c5abf8ff           call 0x61e6ba
// 00693af5  8b742450             mov esi, dword ptr [esp + 0x50]
// 00693af9  85f6                 test esi, esi
// 00693afb  7462                 je 0x693b5f
// 00693afd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00693b01  56                   push esi
// 00693b02  57                   push edi
// 00693b03  ff1598d27700         call dword ptr [0x77d298]
// 00693b09  56                   push esi
// 00693b0a  57                   push edi
// 00693b0b  8bd8                 mov ebx, eax
// 00693b0d  ff1594d27700         call dword ptr [0x77d294]
// 00693b13  85c0                 test eax, eax
// 00693b15  7448                 je 0x693b5f
// 00693b17  50                   push eax
// 00693b18  ff1520d27700         call dword ptr [0x77d220]
// 00693b1e  85c0                 test eax, eax
// 00693b20  743d                 je 0x693b5f
// 00693b22  83fb0a               cmp ebx, 0xa
// 00693b25  7238                 jb 0x693b5f
// 00693b27  6a00                 push 0
// 00693b29  53                   push ebx
// 00693b2a  50                   push eax
// 00693b2b  8d4c2420             lea ecx, [esp + 0x20]
// 00693b2f  e828750a00           call 0x73b05c
// 00693b34  8d442414             lea eax, [esp + 0x14]
// 00693b38  50                   push eax
// 00693b39  8bcd                 mov ecx, ebp
// 00693b3b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00693b43  e8b8fdffff           call 0x693900
// 00693b48  8d4c2414             lea ecx, [esp + 0x14]
// 00693b4c  8bf0                 mov esi, eax
// 00693b4e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00693b56  e8a36f0a00           call 0x73aafe
// 00693b5b  8bc6                 mov eax, esi
// 00693b5d  eb02                 jmp 0x693b61
// 00693b5f  33c0                 xor eax, eax
// 00693b61  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00693b65  64890d00000000       mov dword ptr fs:[0], ecx
// 00693b6c  59                   pop ecx
// 00693b6d  5f                   pop edi
// 00693b6e  5e                   pop esi
// 00693b6f  5d                   pop ebp
// 00693b70  5b                   pop ebx
// 00693b71  83c434               add esp, 0x34
// 00693b74  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp