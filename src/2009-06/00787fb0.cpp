// roc 2009-06 00787fb0  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00787fb0
//
// 00787fb0  56                   push esi
// 00787fb1  8bf1                 mov esi, ecx
// 00787fb3  e868cbfcff           call 0x754b20
// 00787fb8  8bc8                 mov ecx, eax
// 00787fba  e811c9fcff           call 0x7548d0
// 00787fbf  48                   dec eax
// 00787fc0  83f804               cmp eax, 4
// 00787fc3  0f87bb000000         ja 0x788084
// 00787fc9  ff2485c0807800       jmp dword ptr [eax*4 + 0x7880c0]
// 00787fd0  8b742408             mov esi, dword ptr [esp + 8]
// 00787fd4  6a00                 push 0
// 00787fd6  68fff2c800           push 0xc8f2ff
// 00787fdb  68ffd49700           push 0x97d4ff
// 00787fe0  8d44241c             lea eax, [esp + 0x1c]
// 00787fe4  50                   push eax
// 00787fe5  56                   push esi
// 00787fe6  e885a5feff           call 0x772570
// 00787feb  8bc8                 mov ecx, eax
// 00787fed  e8aea5feff           call 0x7725a0
// 00787ff2  6800008000           push 0x800000
// 00787ff7  6800008000           push 0x800000
// 00787ffc  8d4c2418             lea ecx, [esp + 0x18]
// 00788000  51                   push ecx
// 00788001  8bce                 mov ecx, esi
// 00788003  e8c217f9ff           call 0x7197ca
// 00788008  5e                   pop esi
// 00788009  c21800               ret 0x18
// 0078800c  8b742408             mov esi, dword ptr [esp + 8]
// 00788010  6a00                 push 0
// 00788012  68fff2c800           push 0xc8f2ff
// 00788017  68ffd49700           push 0x97d4ff
// 0078801c  8d54241c             lea edx, [esp + 0x1c]
// 00788020  52                   push edx
// 00788021  56                   push esi
// 00788022  e849a5feff           call 0x772570
// 00788027  8bc8                 mov ecx, eax
// 00788029  e872a5feff           call 0x7725a0
// 0078802e  683f5d3800           push 0x385d3f
// 00788033  683f5d3800           push 0x385d3f
// 00788038  8d442418             lea eax, [esp + 0x18]
// 0078803c  50                   push eax
// 0078803d  8bce                 mov ecx, esi
// 0078803f  e88617f9ff           call 0x7197ca
// 00788044  5e                   pop esi
// 00788045  c21800               ret 0x18
// 00788048  8b742408             mov esi, dword ptr [esp + 8]
// 0078804c  6a00                 push 0
// 0078804e  68fff2c800           push 0xc8f2ff
// 00788053  68ffd49700           push 0x97d4ff
// 00788058  8d4c241c             lea ecx, [esp + 0x1c]
// 0078805c  51                   push ecx
// 0078805d  56                   push esi
// 0078805e  e80da5feff           call 0x772570
// 00788063  8bc8                 mov ecx, eax
// 00788065  e836a5feff           call 0x7725a0
// 0078806a  684b4b6f00           push 0x6f4b4b
// 0078806f  684b4b6f00           push 0x6f4b4b
// 00788074  8d542418             lea edx, [esp + 0x18]
// 00788078  52                   push edx
// 00788079  8bce                 mov ecx, esi
// 0078807b  e84a17f9ff           call 0x7197ca
// 00788080  5e                   pop esi
// 00788081  c21800               ret 0x18
// 00788084  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00788087  6a00                 push 0
// 00788089  68ffffff00           push 0xffffff
// 0078808e  e81dd1ffff           call 0x7851b0
// 00788093  8b742410             mov esi, dword ptr [esp + 0x10]
// 00788097  50                   push eax
// 00788098  8d44241c             lea eax, [esp + 0x1c]
// 0078809c  50                   push eax
// 0078809d  56                   push esi
// 0078809e  e8cda4feff           call 0x772570
// 007880a3  8bc8                 mov ecx, eax
// 007880a5  e8f6a4feff           call 0x7725a0
// 007880aa  6a00                 push 0
// 007880ac  6a00                 push 0
// 007880ae  8d4c2418             lea ecx, [esp + 0x18]
// 007880b2  51                   push ecx
// 007880b3  8bce                 mov ecx, esi
// 007880b5  e81017f9ff           call 0x7197ca
// 007880ba  5e                   pop esi
// 007880bb  c21800               ret 0x18
// 007880be  8bff                 mov edi, edi
// 007880c0  d07f78               sar byte ptr [edi + 0x78], 1
// 007880c3  000c80               add byte ptr [eax + eax*4], cl
// 007880c6  7800                 js 0x7880c8
// 007880c8  48                   dec eax
// 007880c9  807800d0             cmp byte ptr [eax], 0xd0
// 007880cd  7f78                 jg 0x788147
// 007880cf  00d0                 add al, dl
// 007880d1  7f78                 jg 0x78814b
// copied from an identical function in another client (function ?DrawBackground@CLunaToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp