// roc 2010-06 00816f90  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00816f90
//
// 00816f90  56                   push esi
// 00816f91  8bf1                 mov esi, ecx
// 00816f93  e888cbfcff           call 0x7e3b20
// 00816f98  8bc8                 mov ecx, eax
// 00816f9a  e831c9fcff           call 0x7e38d0
// 00816f9f  48                   dec eax
// 00816fa0  83f804               cmp eax, 4
// 00816fa3  0f87bb000000         ja 0x817064
// 00816fa9  ff2485a0708100       jmp dword ptr [eax*4 + 0x8170a0]
// 00816fb0  8b742408             mov esi, dword ptr [esp + 8]
// 00816fb4  6a00                 push 0
// 00816fb6  68fff2c800           push 0xc8f2ff
// 00816fbb  68ffd49700           push 0x97d4ff
// 00816fc0  8d44241c             lea eax, [esp + 0x1c]
// 00816fc4  50                   push eax
// 00816fc5  56                   push esi
// 00816fc6  e835a3feff           call 0x801300
// 00816fcb  8bc8                 mov ecx, eax
// 00816fcd  e85ea3feff           call 0x801330
// 00816fd2  6800008000           push 0x800000
// 00816fd7  6800008000           push 0x800000
// 00816fdc  8d4c2418             lea ecx, [esp + 0x18]
// 00816fe0  51                   push ecx
// 00816fe1  8bce                 mov ecx, esi
// 00816fe3  e85017f9ff           call 0x7a8738
// 00816fe8  5e                   pop esi
// 00816fe9  c21800               ret 0x18
// 00816fec  8b742408             mov esi, dword ptr [esp + 8]
// 00816ff0  6a00                 push 0
// 00816ff2  68fff2c800           push 0xc8f2ff
// 00816ff7  68ffd49700           push 0x97d4ff
// 00816ffc  8d54241c             lea edx, [esp + 0x1c]
// 00817000  52                   push edx
// 00817001  56                   push esi
// 00817002  e8f9a2feff           call 0x801300
// 00817007  8bc8                 mov ecx, eax
// 00817009  e822a3feff           call 0x801330
// 0081700e  683f5d3800           push 0x385d3f
// 00817013  683f5d3800           push 0x385d3f
// 00817018  8d442418             lea eax, [esp + 0x18]
// 0081701c  50                   push eax
// 0081701d  8bce                 mov ecx, esi
// 0081701f  e81417f9ff           call 0x7a8738
// 00817024  5e                   pop esi
// 00817025  c21800               ret 0x18
// 00817028  8b742408             mov esi, dword ptr [esp + 8]
// 0081702c  6a00                 push 0
// 0081702e  68fff2c800           push 0xc8f2ff
// 00817033  68ffd49700           push 0x97d4ff
// 00817038  8d4c241c             lea ecx, [esp + 0x1c]
// 0081703c  51                   push ecx
// 0081703d  56                   push esi
// 0081703e  e8bda2feff           call 0x801300
// 00817043  8bc8                 mov ecx, eax
// 00817045  e8e6a2feff           call 0x801330
// 0081704a  684b4b6f00           push 0x6f4b4b
// 0081704f  684b4b6f00           push 0x6f4b4b
// 00817054  8d542418             lea edx, [esp + 0x18]
// 00817058  52                   push edx
// 00817059  8bce                 mov ecx, esi
// 0081705b  e8d816f9ff           call 0x7a8738
// 00817060  5e                   pop esi
// 00817061  c21800               ret 0x18
// 00817064  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00817067  6a00                 push 0
// 00817069  68ffffff00           push 0xffffff
// 0081706e  e82dd1ffff           call 0x8141a0
// 00817073  8b742410             mov esi, dword ptr [esp + 0x10]
// 00817077  50                   push eax
// 00817078  8d44241c             lea eax, [esp + 0x1c]
// 0081707c  50                   push eax
// 0081707d  56                   push esi
// 0081707e  e87da2feff           call 0x801300
// 00817083  8bc8                 mov ecx, eax
// 00817085  e8a6a2feff           call 0x801330
// 0081708a  6a00                 push 0
// 0081708c  6a00                 push 0
// 0081708e  8d4c2418             lea ecx, [esp + 0x18]
// 00817092  51                   push ecx
// 00817093  8bce                 mov ecx, esi
// 00817095  e89e16f9ff           call 0x7a8738
// 0081709a  5e                   pop esi
// 0081709b  c21800               ret 0x18
// 0081709e  8bff                 mov edi, edi
// 008170a0  b06f                 mov al, 0x6f
// 008170a2  8100ec6f8100         add dword ptr [eax], 0x816fec
// 008170a8  287081               sub byte ptr [eax - 0x7f], dh
// 008170ab  00b06f8100b0         add byte ptr [eax - 0x4fff7e91], dh
// 008170b1  6f                   outsd dx, dword ptr [esi]
// copied from an identical function in another client (function ?DrawBackground@CLunaToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp