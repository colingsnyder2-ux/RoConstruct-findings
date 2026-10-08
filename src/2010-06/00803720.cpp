// roc 2010-06 00803720  unit: CPropGrid  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00803720
//
// 00803720  56                   push esi
// 00803721  57                   push edi
// 00803722  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00803726  8bf1                 mov esi, ecx
// 00803728  85ff                 test edi, edi
// 0080372a  7414                 je 0x803740
// 0080372c  8d4670               lea eax, [esi + 0x70]
// 0080372f  85c0                 test eax, eax
// 00803731  7406                 je 0x803739
// 00803733  83782000             cmp dword ptr [eax + 0x20], 0
// 00803737  7507                 jne 0x803740
// 00803739  e8b2f7ffff           call 0x802ef0
// 0080373e  eb1c                 jmp 0x80375c
// 00803740  8d4e70               lea ecx, [esi + 0x70]
// 00803743  85c9                 test ecx, ecx
// 00803745  7415                 je 0x80375c
// 00803747  83792000             cmp dword ptr [ecx + 0x20], 0
// 0080374b  740f                 je 0x80375c
// 0080374d  8bc7                 mov eax, edi
// 0080374f  f7d8                 neg eax
// 00803751  1bc0                 sbb eax, eax
// 00803753  83e005               and eax, 5
// 00803756  50                   push eax
// 00803757  e82c45faff           call 0x7a7c88
// 0080375c  8bce                 mov ecx, esi
// 0080375e  897e6c               mov dword ptr [esi + 0x6c], edi
// 00803761  e84af6ffff           call 0x802db0
// 00803766  8bce                 mov ecx, esi
// 00803768  e8e3f7ffff           call 0x802f50
// 0080376d  5f                   pop edi
// 0080376e  5e                   pop esi
// 0080376f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
