// roc 2009-12 0084f6c0  unit: CPropGrid  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f6c0
//
// 0084f6c0  56                   push esi
// 0084f6c1  57                   push edi
// 0084f6c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084f6c6  8bf1                 mov esi, ecx
// 0084f6c8  85ff                 test edi, edi
// 0084f6ca  7414                 je 0x84f6e0
// 0084f6cc  8d4670               lea eax, [esi + 0x70]
// 0084f6cf  85c0                 test eax, eax
// 0084f6d1  7406                 je 0x84f6d9
// 0084f6d3  83782000             cmp dword ptr [eax + 0x20], 0
// 0084f6d7  7507                 jne 0x84f6e0
// 0084f6d9  e8b2f7ffff           call 0x84ee90
// 0084f6de  eb1c                 jmp 0x84f6fc
// 0084f6e0  8d4e70               lea ecx, [esi + 0x70]
// 0084f6e3  85c9                 test ecx, ecx
// 0084f6e5  7415                 je 0x84f6fc
// 0084f6e7  83792000             cmp dword ptr [ecx + 0x20], 0
// 0084f6eb  740f                 je 0x84f6fc
// 0084f6ed  8bc7                 mov eax, edi
// 0084f6ef  f7d8                 neg eax
// 0084f6f1  1bc0                 sbb eax, eax
// 0084f6f3  83e005               and eax, 5
// 0084f6f6  50                   push eax
// 0084f6f7  e84c44faff           call 0x7f3b48
// 0084f6fc  8bce                 mov ecx, esi
// 0084f6fe  897e6c               mov dword ptr [esi + 0x6c], edi
// 0084f701  e84af6ffff           call 0x84ed50
// 0084f706  8bce                 mov ecx, esi
// 0084f708  e8e3f7ffff           call 0x84eef0
// 0084f70d  5f                   pop edi
// 0084f70e  5e                   pop esi
// 0084f70f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
