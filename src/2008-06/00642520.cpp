// roc 2008-06 00642520  unit: RBX::VWidget::?$NonFactoryProduct  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642520
//
// 00642520  64a100000000         mov eax, dword ptr fs:[0]
// 00642526  6aff                 push -1
// 00642528  6809e77c00           push 0x7ce709
// 0064252d  50                   push eax
// 0064252e  64892500000000       mov dword ptr fs:[0], esp
// 00642535  83ec6c               sub esp, 0x6c
// 00642538  56                   push esi
// 00642539  8bf1                 mov esi, ecx
// 0064253b  8b06                 mov eax, dword ptr [esi]
// 0064253d  8b5054               mov edx, dword ptr [eax + 0x54]
// 00642540  ffd2                 call edx
// 00642542  84c0                 test al, al
// 00642544  0f842f010000         je 0x642679
// 0064254a  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00642550  53                   push ebx
// 00642551  57                   push edi
// 00642552  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00642559  83f801               cmp eax, 1
// 0064255c  744a                 je 0x6425a8
// 0064255e  83f803               cmp eax, 3
// 00642561  7445                 je 0x6425a8
// 00642563  83f802               cmp eax, 2
// 00642566  0f858c000000         jne 0x6425f8
// 0064256c  e80f24edff           call 0x514980
// 00642571  d900                 fld dword ptr [eax]
// 00642573  8b1f                 mov ebx, dword ptr [edi]
// 00642575  d95c240c             fstp dword ptr [esp + 0xc]
// 00642579  d94004               fld dword ptr [eax + 4]
// 0064257c  8d4c242c             lea ecx, [esp + 0x2c]
// 00642580  d95c2410             fstp dword ptr [esp + 0x10]
// 00642584  d94008               fld dword ptr [eax + 8]
// 00642587  8d44240c             lea eax, [esp + 0xc]
// 0064258b  d95c2414             fstp dword ptr [esp + 0x14]
// 0064258f  50                   push eax
// 00642590  d9e8                 fld1 
// 00642592  51                   push ecx
// 00642593  8bce                 mov ecx, esi
// 00642595  d95c2420             fstp dword ptr [esp + 0x20]
// 00642599  e8c213f3ff           call 0x573960
// 0064259e  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 006425a1  50                   push eax
// 006425a2  8bcf                 mov ecx, edi
// 006425a4  ffd2                 call edx
// 006425a6  eb50                 jmp 0x6425f8
// 006425a8  e87324edff           call 0x514a20
// 006425ad  d900                 fld dword ptr [eax]
// 006425af  d95c240c             fstp dword ptr [esp + 0xc]
// 006425b3  8bce                 mov ecx, esi
// 006425b5  d94004               fld dword ptr [eax + 4]
// 006425b8  d95c2410             fstp dword ptr [esp + 0x10]
// 006425bc  d94008               fld dword ptr [eax + 8]
// 006425bf  8d44243c             lea eax, [esp + 0x3c]
// 006425c3  d95c2414             fstp dword ptr [esp + 0x14]
// 006425c7  50                   push eax
// 006425c8  d9e8                 fld1 
// 006425ca  d95c241c             fstp dword ptr [esp + 0x1c]
// 006425ce  e83d0df3ff           call 0x573310
// 006425d3  8d4808               lea ecx, [eax + 8]
// 006425d6  51                   push ecx
// 006425d7  50                   push eax
// 006425d8  8d542434             lea edx, [esp + 0x34]
// 006425dc  52                   push edx
// 006425dd  e8ee0febff           call 0x4f35d0
// 006425e2  8b07                 mov eax, dword ptr [edi]
// 006425e4  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006425e7  83c40c               add esp, 0xc
// 006425ea  8d4c240c             lea ecx, [esp + 0xc]
// 006425ee  51                   push ecx
// 006425ef  8d542430             lea edx, [esp + 0x30]
// 006425f3  52                   push edx
// 006425f4  8bcf                 mov ecx, edi
// 006425f6  ffd0                 call eax
// 006425f8  8b16                 mov edx, dword ptr [esi]
// 006425fa  8b4278               mov eax, dword ptr [edx + 0x78]
// 006425fd  8bce                 mov ecx, esi
// 006425ff  ffd0                 call eax
// 00642601  84c0                 test al, al
// 00642603  7410                 je 0x642615
// 00642605  8b16                 mov edx, dword ptr [esi]
// 00642607  8b5274               mov edx, dword ptr [edx + 0x74]
// 0064260a  8d44244c             lea eax, [esp + 0x4c]
// 0064260e  50                   push eax
// 0064260f  8bce                 mov ecx, esi
// 00642611  ffd2                 call edx
// 00642613  eb05                 jmp 0x64261a
// 00642615  e8760bf3ff           call 0x573190
// 0064261a  8bd8                 mov ebx, eax
// 0064261c  8b06                 mov eax, dword ptr [esi]
// 0064261e  8b5058               mov edx, dword ptr [eax + 0x58]
// 00642621  8d4c245c             lea ecx, [esp + 0x5c]
// 00642625  51                   push ecx
// 00642626  8bce                 mov ecx, esi
// 00642628  ffd2                 call edx
// 0064262a  d905ac9b8100         fld dword ptr [0x819bac]
// 00642630  6a01                 push 1
// 00642632  d9542420             fst dword ptr [esp + 0x20]
// 00642636  8d4c2420             lea ecx, [esp + 0x20]
// 0064263a  d9542424             fst dword ptr [esp + 0x24]
// 0064263e  51                   push ecx
// 0064263f  d95c242c             fstp dword ptr [esp + 0x2c]
// 00642643  d905e4a38300         fld dword ptr [0x83a3e4]
// 00642649  53                   push ebx
// 0064264a  50                   push eax
// 0064264b  d95c2438             fstp dword ptr [esp + 0x38]
// 0064264f  57                   push edi
// 00642650  8bce                 mov ecx, esi
// 00642652  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0064265d  e8fe0cf3ff           call 0x573360
// 00642662  8d4c245c             lea ecx, [esp + 0x5c]
// 00642666  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00642671  ff1568248000         call dword ptr [0x802468]
// 00642677  5f                   pop edi
// 00642678  5b                   pop ebx
// 00642679  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0064267d  5e                   pop esi
// 0064267e  64890d00000000       mov dword ptr fs:[0], ecx
// 00642685  83c478               add esp, 0x78
// 00642688  c20400               ret 4
// library openrbx-client/App\gui\Widget.cpp (function ?render2d@Widget@RBX@@MAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/Widget.cpp
