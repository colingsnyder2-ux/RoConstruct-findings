// roc 2009-12 0087b290  unit: CXTPControlGallery  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b290
//
// 0087b290  8b442404             mov eax, dword ptr [esp + 4]
// 0087b294  83ec10               sub esp, 0x10
// 0087b297  56                   push esi
// 0087b298  8bf1                 mov esi, ecx
// 0087b29a  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b2a0  57                   push edi
// 0087b2a1  c786fc01000000000000 mov dword ptr [esi + 0x1fc], 0
// 0087b2ab  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 0087b2b1  c7860002000000000000 mov dword ptr [esi + 0x200], 0
// 0087b2bb  c7862002000001000000 mov dword ptr [esi + 0x220], 1
// 0087b2c5  e886c0ffff           call 0x877350
// 0087b2ca  8bf8                 mov edi, eax
// 0087b2cc  85ff                 test edi, edi
// 0087b2ce  7422                 je 0x87b2f2
// 0087b2d0  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 0087b2d4  741c                 je 0x87b2f2
// 0087b2d6  83faff               cmp edx, -1
// 0087b2d9  7417                 je 0x87b2f2
// 0087b2db  52                   push edx
// 0087b2dc  8d4c240c             lea ecx, [esp + 0xc]
// 0087b2e0  51                   push ecx
// 0087b2e1  8bce                 mov ecx, esi
// 0087b2e3  e888f7ffff           call 0x87aa70
// 0087b2e8  6a01                 push 1
// 0087b2ea  50                   push eax
// 0087b2eb  8bce                 mov ecx, esi
// 0087b2ed  e82ecfffff           call 0x878220
// 0087b2f2  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b2f8  52                   push edx
// 0087b2f9  8bce                 mov ecx, esi
// 0087b2fb  e870f9ffff           call 0x87ac70
// 0087b300  85ff                 test edi, edi
// 0087b302  742e                 je 0x87b332
// 0087b304  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 0087b308  7428                 je 0x87b332
// 0087b30a  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087b310  83f8ff               cmp eax, -1
// 0087b313  7417                 je 0x87b32c
// 0087b315  50                   push eax
// 0087b316  8d44240c             lea eax, [esp + 0xc]
// 0087b31a  50                   push eax
// 0087b31b  8bce                 mov ecx, esi
// 0087b31d  e84ef7ffff           call 0x87aa70
// 0087b322  6a00                 push 0
// 0087b324  50                   push eax
// 0087b325  8bce                 mov ecx, esi
// 0087b327  e8f4ceffff           call 0x878220
// 0087b32c  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 0087b330  750b                 jne 0x87b33d
// 0087b332  6a01                 push 1
// 0087b334  6a00                 push 0
// 0087b336  8bce                 mov ecx, esi
// 0087b338  e8e3ceffff           call 0x878220
// 0087b33d  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b343  83faff               cmp edx, -1
// 0087b346  7424                 je 0x87b36c
// 0087b348  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0087b34e  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0087b354  85c0                 test eax, eax
// 0087b356  7403                 je 0x87b35b
// 0087b358  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087b35b  42                   inc edx
// 0087b35c  52                   push edx
// 0087b35d  51                   push ecx
// 0087b35e  50                   push eax
// 0087b35f  6805800000           push 0x8005
// 0087b364  8d4e20               lea ecx, [esi + 0x20]
// 0087b367  e82406fcff           call 0x83b990
// 0087b36c  83bef8010000ff       cmp dword ptr [esi + 0x1f8], -1
// 0087b373  741f                 je 0x87b394
// 0087b375  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087b37c  751f                 jne 0x87b39d
// 0087b37e  6810100000           push 0x1010
// 0087b383  8bce                 mov ecx, esi
// 0087b385  c7864402000001000000 mov dword ptr [esi + 0x244], 1
// 0087b38f  e8fcd1f7ff           call 0x7f8590
// 0087b394  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087b39b  740c                 je 0x87b3a9
// 0087b39d  6813100000           push 0x1013
// 0087b3a2  8bce                 mov ecx, esi
// 0087b3a4  e8e7d1f7ff           call 0x7f8590
// 0087b3a9  83bef8010000ff       cmp dword ptr [esi + 0x1f8], -1
// 0087b3b0  751f                 jne 0x87b3d1
// 0087b3b2  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087b3b9  7416                 je 0x87b3d1
// 0087b3bb  6811100000           push 0x1011
// 0087b3c0  8bce                 mov ecx, esi
// 0087b3c2  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0087b3cc  e8bfd1f7ff           call 0x7f8590
// 0087b3d1  8b16                 mov edx, dword ptr [esi]
// 0087b3d3  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0087b3d9  8bce                 mov ecx, esi
// 0087b3db  ffd0                 call eax
// 0087b3dd  5f                   pop edi
// 0087b3de  5e                   pop esi
// 0087b3df  83c410               add esp, 0x10
// 0087b3e2  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedItem@CXTPControlGallery@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp