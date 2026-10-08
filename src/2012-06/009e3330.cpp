// roc 2012-06 009e3330  unit: CPropGrid  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3330
//
// 009e3330  56                   push esi
// 009e3331  57                   push edi
// 009e3332  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e3336  8bf1                 mov esi, ecx
// 009e3338  85ff                 test edi, edi
// 009e333a  7414                 je 0x9e3350
// 009e333c  8d4670               lea eax, [esi + 0x70]
// 009e333f  85c0                 test eax, eax
// 009e3341  7406                 je 0x9e3349
// 009e3343  83782000             cmp dword ptr [eax + 0x20], 0
// 009e3347  7507                 jne 0x9e3350
// 009e3349  e8b2f7ffff           call 0x9e2b00
// 009e334e  eb1c                 jmp 0x9e336c
// 009e3350  8d4e70               lea ecx, [esi + 0x70]
// 009e3353  85c9                 test ecx, ecx
// 009e3355  7415                 je 0x9e336c
// 009e3357  83792000             cmp dword ptr [ecx + 0x20], 0
// 009e335b  740f                 je 0x9e336c
// 009e335d  8bc7                 mov eax, edi
// 009e335f  f7d8                 neg eax
// 009e3361  1bc0                 sbb eax, eax
// 009e3363  83e005               and eax, 5
// 009e3366  50                   push eax
// 009e3367  e838f7f9ff           call 0x982aa4
// 009e336c  8bce                 mov ecx, esi
// 009e336e  897e6c               mov dword ptr [esi + 0x6c], edi
// 009e3371  e84af6ffff           call 0x9e29c0
// 009e3376  8bce                 mov ecx, esi
// 009e3378  e8e3f7ffff           call 0x9e2b60
// 009e337d  5f                   pop edi
// 009e337e  5e                   pop esi
// 009e337f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
