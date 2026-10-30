// roc 2009-06 007be8d0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007be8d0
//
// 007be8d0  6aff                 push -1
// 007be8d2  6848d88700           push 0x87d848
// 007be8d7  64a100000000         mov eax, dword ptr fs:[0]
// 007be8dd  50                   push eax
// 007be8de  83ec28               sub esp, 0x28
// 007be8e1  53                   push ebx
// 007be8e2  55                   push ebp
// 007be8e3  56                   push esi
// 007be8e4  57                   push edi
// 007be8e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007be8ea  33c4                 xor eax, esp
// 007be8ec  50                   push eax
// 007be8ed  8d44243c             lea eax, [esp + 0x3c]
// 007be8f1  64a300000000         mov dword ptr fs:[0], eax
// 007be8f7  8be9                 mov ebp, ecx
// 007be8f9  c7450800000000       mov dword ptr [ebp + 8], 0
// 007be900  e8f1a6f5ff           call 0x718ff6
// 007be905  8b742450             mov esi, dword ptr [esp + 0x50]
// 007be909  85f6                 test esi, esi
// 007be90b  7462                 je 0x7be96f
// 007be90d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007be911  56                   push esi
// 007be912  57                   push edi
// 007be913  ff15b8e18900         call dword ptr [0x89e1b8]
// 007be919  56                   push esi
// 007be91a  57                   push edi
// 007be91b  8bd8                 mov ebx, eax
// 007be91d  ff15bce18900         call dword ptr [0x89e1bc]
// 007be923  85c0                 test eax, eax
// 007be925  7448                 je 0x7be96f
// 007be927  50                   push eax
// 007be928  ff1550e28900         call dword ptr [0x89e250]
// 007be92e  85c0                 test eax, eax
// 007be930  743d                 je 0x7be96f
// 007be932  83fb0a               cmp ebx, 0xa
// 007be935  7238                 jb 0x7be96f
// 007be937  6a00                 push 0
// 007be939  53                   push ebx
// 007be93a  50                   push eax
// 007be93b  8d4c2420             lea ecx, [esp + 0x20]
// 007be93f  e870aff5ff           call 0x7198b4
// 007be944  8d442414             lea eax, [esp + 0x14]
// 007be948  50                   push eax
// 007be949  8bcd                 mov ecx, ebp
// 007be94b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 007be953  e8e8fdffff           call 0x7be740
// 007be958  8d4c2414             lea ecx, [esp + 0x14]
// 007be95c  8bf0                 mov esi, eax
// 007be95e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 007be966  e83daff5ff           call 0x7198a8
// 007be96b  8bc6                 mov eax, esi
// 007be96d  eb02                 jmp 0x7be971
// 007be96f  33c0                 xor eax, eax
// 007be971  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007be975  64890d00000000       mov dword ptr fs:[0], ecx
// 007be97c  59                   pop ecx
// 007be97d  5f                   pop edi
// 007be97e  5e                   pop esi
// 007be97f  5d                   pop ebp
// 007be980  5b                   pop ebx
// 007be981  83c434               add esp, 0x34
// 007be984  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp