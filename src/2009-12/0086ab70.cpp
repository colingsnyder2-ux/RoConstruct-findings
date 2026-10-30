// roc 2009-12 0086ab70  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ab70
//
// 0086ab70  6aff                 push -1
// 0086ab72  6878ad9500           push 0x95ad78
// 0086ab77  64a100000000         mov eax, dword ptr fs:[0]
// 0086ab7d  50                   push eax
// 0086ab7e  83ec24               sub esp, 0x24
// 0086ab81  56                   push esi
// 0086ab82  57                   push edi
// 0086ab83  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ab88  33c4                 xor eax, esp
// 0086ab8a  50                   push eax
// 0086ab8b  8d442430             lea eax, [esp + 0x30]
// 0086ab8f  64a300000000         mov dword ptr fs:[0], eax
// 0086ab95  8bf1                 mov esi, ecx
// 0086ab97  e8d46c0700           call 0x8e1870
// 0086ab9c  8b4008               mov eax, dword ptr [eax + 8]
// 0086ab9f  33c9                 xor ecx, ecx
// 0086aba1  85c0                 test eax, eax
// 0086aba3  0f95c1               setne cl
// 0086aba6  8bc1                 mov eax, ecx
// 0086aba8  85c0                 test eax, eax
// 0086abaa  7475                 je 0x86ac21
// 0086abac  56                   push esi
// 0086abad  8d4c2420             lea ecx, [esp + 0x20]
// 0086abb1  e8d4b80b00           call 0x92648a
// 0086abb6  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0086abbe  e80d4efcff           call 0x82f9d0
// 0086abc3  6a2b                 push 0x2b
// 0086abc5  8bc8                 mov ecx, eax
// 0086abc7  e83445fcff           call 0x82f100
// 0086abcc  8d54240c             lea edx, [esp + 0xc]
// 0086abd0  8bf8                 mov edi, eax
// 0086abd2  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086abd5  52                   push edx
// 0086abd6  50                   push eax
// 0086abd7  ff1570cc9800         call dword ptr [0x98cc70]
// 0086abdd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086abe1  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0086abe5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086abe9  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0086abed  57                   push edi
// 0086abee  57                   push edi
// 0086abef  51                   push ecx
// 0086abf0  50                   push eax
// 0086abf1  6a00                 push 0
// 0086abf3  6a00                 push 0
// 0086abf5  8d4c2434             lea ecx, [esp + 0x34]
// 0086abf9  e87ec00b00           call 0x926c7c
// 0086abfe  8d4c241c             lea ecx, [esp + 0x1c]
// 0086ac02  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0086ac0a  e875b80b00           call 0x926484
// 0086ac0f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086ac13  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ac1a  59                   pop ecx
// 0086ac1b  5f                   pop edi
// 0086ac1c  5e                   pop esi
// 0086ac1d  83c430               add esp, 0x30
// 0086ac20  c3                   ret 
// 0086ac21  8bce                 mov ecx, esi
// 0086ac23  e80892f8ff           call 0x7f3e30
// 0086ac28  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086ac2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ac33  59                   pop ecx
// 0086ac34  5f                   pop edi
// 0086ac35  5e                   pop esi
// 0086ac36  83c430               add esp, 0x30
// 0086ac39  c3                   ret 
// copied from an identical function in another client (function ?OnNcPaint@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp