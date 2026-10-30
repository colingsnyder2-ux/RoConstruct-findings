// roc 2010-06 007abd90  unit: PAVCXTPControlAction::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abd90
//
// 007abd90  8b5164               mov edx, dword ptr [ecx + 0x64]
// 007abd93  33c0                 xor eax, eax
// 007abd95  85d2                 test edx, edx
// 007abd97  7e21                 jle 0x7abdba
// 007abd99  56                   push esi
// 007abd9a  8b742408             mov esi, dword ptr [esp + 8]
// 007abd9e  83c15c               add ecx, 0x5c
// 007abda1  57                   push edi
// 007abda2  85c0                 test eax, eax
// 007abda4  7c38                 jl 0x7abdde
// 007abda6  3b4108               cmp eax, dword ptr [ecx + 8]
// 007abda9  7d33                 jge 0x7abdde
// 007abdab  8b7904               mov edi, dword ptr [ecx + 4]
// 007abdae  393487               cmp dword ptr [edi + eax*4], esi
// 007abdb1  740a                 je 0x7abdbd
// 007abdb3  40                   inc eax
// 007abdb4  3bc2                 cmp eax, edx
// 007abdb6  7cea                 jl 0x7abda2
// 007abdb8  5f                   pop edi
// 007abdb9  5e                   pop esi
// 007abdba  c20400               ret 4
// 007abdbd  6a01                 push 1
// 007abdbf  50                   push eax
// 007abdc0  e87bcc0000           call 0x7b8a40
// 007abdc5  5f                   pop edi
// 007abdc6  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 007abdd0  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 007abdda  5e                   pop esi
// 007abddb  c20400               ret 4
// 007abdde  e869beffff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp