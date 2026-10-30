// roc 2009-12 00862fe0  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862fe0
//
// 00862fe0  56                   push esi
// 00862fe1  8bf1                 mov esi, ecx
// 00862fe3  e8e8c9fcff           call 0x82f9d0
// 00862fe8  8bc8                 mov ecx, eax
// 00862fea  e841c7fcff           call 0x82f730
// 00862fef  48                   dec eax
// 00862ff0  83f804               cmp eax, 4
// 00862ff3  0f87bb000000         ja 0x8630b4
// 00862ff9  ff2485f0308600       jmp dword ptr [eax*4 + 0x8630f0]
// 00863000  8b742408             mov esi, dword ptr [esp + 8]
// 00863004  6a00                 push 0
// 00863006  68fff2c800           push 0xc8f2ff
// 0086300b  68ffd49700           push 0x97d4ff
// 00863010  8d44241c             lea eax, [esp + 0x1c]
// 00863014  50                   push eax
// 00863015  56                   push esi
// 00863016  e885a2feff           call 0x84d2a0
// 0086301b  8bc8                 mov ecx, eax
// 0086301d  e8aea2feff           call 0x84d2d0
// 00863022  6800008000           push 0x800000
// 00863027  6800008000           push 0x800000
// 0086302c  8d4c2418             lea ecx, [esp + 0x18]
// 00863030  51                   push ecx
// 00863031  8bce                 mov ecx, esi
// 00863033  e8c015f9ff           call 0x7f45f8
// 00863038  5e                   pop esi
// 00863039  c21800               ret 0x18
// 0086303c  8b742408             mov esi, dword ptr [esp + 8]
// 00863040  6a00                 push 0
// 00863042  68fff2c800           push 0xc8f2ff
// 00863047  68ffd49700           push 0x97d4ff
// 0086304c  8d54241c             lea edx, [esp + 0x1c]
// 00863050  52                   push edx
// 00863051  56                   push esi
// 00863052  e849a2feff           call 0x84d2a0
// 00863057  8bc8                 mov ecx, eax
// 00863059  e872a2feff           call 0x84d2d0
// 0086305e  683f5d3800           push 0x385d3f
// 00863063  683f5d3800           push 0x385d3f
// 00863068  8d442418             lea eax, [esp + 0x18]
// 0086306c  50                   push eax
// 0086306d  8bce                 mov ecx, esi
// 0086306f  e88415f9ff           call 0x7f45f8
// 00863074  5e                   pop esi
// 00863075  c21800               ret 0x18
// 00863078  8b742408             mov esi, dword ptr [esp + 8]
// 0086307c  6a00                 push 0
// 0086307e  68fff2c800           push 0xc8f2ff
// 00863083  68ffd49700           push 0x97d4ff
// 00863088  8d4c241c             lea ecx, [esp + 0x1c]
// 0086308c  51                   push ecx
// 0086308d  56                   push esi
// 0086308e  e80da2feff           call 0x84d2a0
// 00863093  8bc8                 mov ecx, eax
// 00863095  e836a2feff           call 0x84d2d0
// 0086309a  684b4b6f00           push 0x6f4b4b
// 0086309f  684b4b6f00           push 0x6f4b4b
// 008630a4  8d542418             lea edx, [esp + 0x18]
// 008630a8  52                   push edx
// 008630a9  8bce                 mov ecx, esi
// 008630ab  e84815f9ff           call 0x7f45f8
// 008630b0  5e                   pop esi
// 008630b1  c21800               ret 0x18
// 008630b4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008630b7  6a00                 push 0
// 008630b9  68ffffff00           push 0xffffff
// 008630be  e8fdd0ffff           call 0x8601c0
// 008630c3  8b742410             mov esi, dword ptr [esp + 0x10]
// 008630c7  50                   push eax
// 008630c8  8d44241c             lea eax, [esp + 0x1c]
// 008630cc  50                   push eax
// 008630cd  56                   push esi
// 008630ce  e8cda1feff           call 0x84d2a0
// 008630d3  8bc8                 mov ecx, eax
// 008630d5  e8f6a1feff           call 0x84d2d0
// 008630da  6a00                 push 0
// 008630dc  6a00                 push 0
// 008630de  8d4c2418             lea ecx, [esp + 0x18]
// 008630e2  51                   push ecx
// 008630e3  8bce                 mov ecx, esi
// 008630e5  e80e15f9ff           call 0x7f45f8
// 008630ea  5e                   pop esi
// 008630eb  c21800               ret 0x18
// 008630ee  8bff                 mov edi, edi
// 008630f0  0030                 add byte ptr [eax], dh
// 008630f2  8600                 xchg byte ptr [eax], al
// 008630f4  3c30                 cmp al, 0x30
// 008630f6  8600                 xchg byte ptr [eax], al
// 008630f8  7830                 js 0x86312a
// 008630fa  8600                 xchg byte ptr [eax], al
// 008630fc  0030                 add byte ptr [eax], dh
// 008630fe  8600                 xchg byte ptr [eax], al
// 00863100  0030                 add byte ptr [eax], dh
// 00863102  8600                 xchg byte ptr [eax], al
// copied from an identical function in another client (function ?DrawBackground@CLunaToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp