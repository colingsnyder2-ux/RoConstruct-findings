// roc 2009-12 0084fc90  unit: CXTPPropertyGrid  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fc90
//
// 0084fc90  53                   push ebx
// 0084fc91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0084fc95  55                   push ebp
// 0084fc96  56                   push esi
// 0084fc97  53                   push ebx
// 0084fc98  8bf1                 mov esi, ecx
// 0084fc9a  e871dfffff           call 0x84dc10
// 0084fc9f  50                   push eax
// 0084fca0  8bce                 mov ecx, esi
// 0084fca2  e869ffffff           call 0x84fc10
// 0084fca7  8bce                 mov ecx, esi
// 0084fca9  e8d2ddffff           call 0x84da80
// 0084fcae  33ed                 xor ebp, ebp
// 0084fcb0  55                   push ebp
// 0084fcb1  89a848010000         mov dword ptr [eax + 0x148], ebp
// 0084fcb7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0084fcba  6a01                 push 1
// 0084fcbc  50                   push eax
// 0084fcbd  8bce                 mov ecx, esi
// 0084fcbf  e8bcddffff           call 0x84da80
// 0084fcc4  8bc8                 mov ecx, eax
// 0084fcc6  e8c5a60100           call 0x86a390
// 0084fccb  396b3c               cmp dword ptr [ebx + 0x3c], ebp
// 0084fcce  7709                 ja 0x84fcd9
// 0084fcd0  396b40               cmp dword ptr [ebx + 0x40], ebp
// 0084fcd3  0f8699000000         jbe 0x84fd72
// 0084fcd9  8bce                 mov ecx, esi
// 0084fcdb  e8a0ddffff           call 0x84da80
// 0084fce0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084fce3  55                   push ebp
// 0084fce4  55                   push ebp
// 0084fce5  688b010000           push 0x18b
// 0084fcea  51                   push ecx
// 0084fceb  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084fcf1  85c0                 test eax, eax
// 0084fcf3  7e7d                 jle 0x84fd72
// 0084fcf5  57                   push edi
// 0084fcf6  55                   push ebp
// 0084fcf7  8bce                 mov ecx, esi
// 0084fcf9  e882ddffff           call 0x84da80
// 0084fcfe  8bc8                 mov ecx, eax
// 0084fd00  e8fb8c0100           call 0x868a00
// 0084fd05  8bf8                 mov edi, eax
// 0084fd07  8b4340               mov eax, dword ptr [ebx + 0x40]
// 0084fd0a  85c0                 test eax, eax
// 0084fd0c  7628                 jbe 0x84fd36
// 0084fd0e  85ff                 test edi, edi
// 0084fd10  7424                 je 0x84fd36
// 0084fd12  398788000000         cmp dword ptr [edi + 0x88], eax
// 0084fd18  751c                 jne 0x84fd36
// 0084fd1a  8bcf                 mov ecx, edi
// 0084fd1c  e8ff4c0100           call 0x864a20
// 0084fd21  50                   push eax
// 0084fd22  8bce                 mov ecx, esi
// 0084fd24  e8f7f2ffff           call 0x84f020
// 0084fd29  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0084fd2d  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 0084fd34  743b                 je 0x84fd71
// 0084fd36  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0084fd39  85c0                 test eax, eax
// 0084fd3b  760c                 jbe 0x84fd49
// 0084fd3d  85ff                 test edi, edi
// 0084fd3f  7408                 je 0x84fd49
// 0084fd41  398788000000         cmp dword ptr [edi + 0x88], eax
// 0084fd47  7421                 je 0x84fd6a
// 0084fd49  8bce                 mov ecx, esi
// 0084fd4b  45                   inc ebp
// 0084fd4c  e82fddffff           call 0x84da80
// 0084fd51  8b5020               mov edx, dword ptr [eax + 0x20]
// 0084fd54  6a00                 push 0
// 0084fd56  6a00                 push 0
// 0084fd58  688b010000           push 0x18b
// 0084fd5d  52                   push edx
// 0084fd5e  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084fd64  3be8                 cmp ebp, eax
// 0084fd66  7c8e                 jl 0x84fcf6
// 0084fd68  eb07                 jmp 0x84fd71
// 0084fd6a  8bcf                 mov ecx, edi
// 0084fd6c  e8df520100           call 0x865050
// 0084fd71  5f                   pop edi
// 0084fd72  8bce                 mov ecx, esi
// 0084fd74  e807ddffff           call 0x84da80
// 0084fd79  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084fd7c  6a00                 push 0
// 0084fd7e  6a01                 push 1
// 0084fd80  6a0b                 push 0xb
// 0084fd82  50                   push eax
// 0084fd83  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084fd89  8bce                 mov ecx, esi
// 0084fd8b  e8c0efffff           call 0x84ed50
// 0084fd90  5e                   pop esi
// 0084fd91  5d                   pop ebp
// 0084fd92  5b                   pop ebx
// 0084fd93  c20400               ret 4
// copied from an identical function in another client (function ?EndUpdate@CXTPPropertyGrid@@QAEXAAVCXTPPropertyGridUpdateContext@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp