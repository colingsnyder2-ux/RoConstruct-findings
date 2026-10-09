// roc 2009-12 008efd20  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008efd20
//
// 008efd20  56                   push esi
// 008efd21  57                   push edi
// 008efd22  8bf1                 mov esi, ecx
// 008efd24  e8a747f1ff           call 0x8044d0
// 008efd29  8bc8                 mov ecx, eax
// 008efd2b  e8405ef2ff           call 0x815b70
// 008efd30  8bf8                 mov edi, eax
// 008efd32  837f0400             cmp dword ptr [edi + 4], 0
// 008efd36  7f41                 jg 0x8efd79
// 008efd38  8b4620               mov eax, dword ptr [esi + 0x20]
// 008efd3b  50                   push eax
// 008efd3c  e89ff0f7ff           call 0x86ede0
// 008efd41  83c404               add esp, 4
// 008efd44  85c0                 test eax, eax
// 008efd46  7431                 je 0x8efd79
// 008efd48  56                   push esi
// 008efd49  8bcf                 mov ecx, edi
// 008efd4b  e850f2f7ff           call 0x86efa0
// 008efd50  85c0                 test eax, eax
// 008efd52  7525                 jne 0x8efd79
// 008efd54  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008efd5b  751c                 jne 0x8efd79
// 008efd5d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008efd63  e8084ffaff           call 0x894c70
// 008efd68  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008efd6f  7408                 je 0x8efd79
// 008efd71  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008efd77  eb02                 jmp 0x8efd7b
// 008efd79  33c0                 xor eax, eax
// 008efd7b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008efd81  7420                 je 0x8efda3
// 008efd83  50                   push eax
// 008efd84  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008efd8a  e8b1f9ffff           call 0x8ef740
// 008efd8f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008efd96  740b                 je 0x8efda3
// 008efd98  8b4620               mov eax, dword ptr [esi + 0x20]
// 008efd9b  50                   push eax
// 008efd9c  8bcf                 mov ecx, edi
// 008efd9e  e8adf1f7ff           call 0x86ef50
// 008efda3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008efda7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008efdab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008efdaf  51                   push ecx
// 008efdb0  52                   push edx
// 008efdb1  50                   push eax
// 008efdb2  8bce                 mov ecx, esi
// 008efdb4  e85741f5ff           call 0x843f10
// 008efdb9  5f                   pop edi
// 008efdba  5e                   pop esi
// 008efdbb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
