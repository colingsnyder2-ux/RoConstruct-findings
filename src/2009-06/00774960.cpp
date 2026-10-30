// roc 2009-06 00774960  unit: CPropGrid  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00774960
//
// 00774960  56                   push esi
// 00774961  57                   push edi
// 00774962  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00774966  8bf1                 mov esi, ecx
// 00774968  85ff                 test edi, edi
// 0077496a  7414                 je 0x774980
// 0077496c  8d4670               lea eax, [esi + 0x70]
// 0077496f  85c0                 test eax, eax
// 00774971  7406                 je 0x774979
// 00774973  83782000             cmp dword ptr [eax + 0x20], 0
// 00774977  7507                 jne 0x774980
// 00774979  e8b2f7ffff           call 0x774130
// 0077497e  eb1c                 jmp 0x77499c
// 00774980  8d4e70               lea ecx, [esi + 0x70]
// 00774983  85c9                 test ecx, ecx
// 00774985  7415                 je 0x77499c
// 00774987  83792000             cmp dword ptr [ecx + 0x20], 0
// 0077498b  740f                 je 0x77499c
// 0077498d  8bc7                 mov eax, edi
// 0077498f  f7d8                 neg eax
// 00774991  1bc0                 sbb eax, eax
// 00774993  83e005               and eax, 5
// 00774996  50                   push eax
// 00774997  e88443faff           call 0x718d20
// 0077499c  8bce                 mov ecx, esi
// 0077499e  897e6c               mov dword ptr [esi + 0x6c], edi
// 007749a1  e84af6ffff           call 0x773ff0
// 007749a6  8bce                 mov ecx, esi
// 007749a8  e8e3f7ffff           call 0x774190
// 007749ad  5f                   pop edi
// 007749ae  5e                   pop esi
// 007749af  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
