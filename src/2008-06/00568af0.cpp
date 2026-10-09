// roc 2008-06 00568af0  unit: RBX::VInstance::?$NonFactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568af0
//
// 00568af0  6aff                 push -1
// 00568af2  6850f77c00           push 0x7cf750
// 00568af7  64a100000000         mov eax, dword ptr fs:[0]
// 00568afd  50                   push eax
// 00568afe  64892500000000       mov dword ptr fs:[0], esp
// 00568b05  51                   push ecx
// 00568b06  56                   push esi
// 00568b07  8bf1                 mov esi, ecx
// 00568b09  57                   push edi
// 00568b0a  89742408             mov dword ptr [esp + 8], esi
// 00568b0e  8d8ea8010000         lea ecx, [esi + 0x1a8]
// 00568b14  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00568b1c  e87f8bf4ff           call 0x4b16a0
// 00568b21  8d8e90010000         lea ecx, [esi + 0x190]
// 00568b27  c644241403           mov byte ptr [esp + 0x14], 3
// 00568b2c  e8afa40300           call 0x5a2fe0
// 00568b31  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00568b37  33ff                 xor edi, edi
// 00568b39  3bc7                 cmp eax, edi
// 00568b3b  7409                 je 0x568b46
// 00568b3d  50                   push eax
// 00568b3e  e8377b1300           call 0x6a067a
// 00568b43  83c404               add esp, 4
// 00568b46  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00568b4c  50                   push eax
// 00568b4d  89be80010000         mov dword ptr [esi + 0x180], edi
// 00568b53  89be84010000         mov dword ptr [esi + 0x184], edi
// 00568b59  89be88010000         mov dword ptr [esi + 0x188], edi
// 00568b5f  e8167b1300           call 0x6a067a
// 00568b64  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 00568b6a  83c404               add esp, 4
// 00568b6d  3bc7                 cmp eax, edi
// 00568b6f  7409                 je 0x568b7a
// 00568b71  50                   push eax
// 00568b72  e8037b1300           call 0x6a067a
// 00568b77  83c404               add esp, 4
// 00568b7a  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 00568b80  50                   push eax
// 00568b81  89be60010000         mov dword ptr [esi + 0x160], edi
// 00568b87  89be64010000         mov dword ptr [esi + 0x164], edi
// 00568b8d  89be68010000         mov dword ptr [esi + 0x168], edi
// 00568b93  e8e27a1300           call 0x6a067a
// 00568b98  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 00568b9e  83c404               add esp, 4
// 00568ba1  3bc7                 cmp eax, edi
// 00568ba3  7409                 je 0x568bae
// 00568ba5  50                   push eax
// 00568ba6  e8cf7a1300           call 0x6a067a
// 00568bab  83c404               add esp, 4
// 00568bae  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 00568bb4  50                   push eax
// 00568bb5  89be40010000         mov dword ptr [esi + 0x140], edi
// 00568bbb  89be44010000         mov dword ptr [esi + 0x144], edi
// 00568bc1  89be48010000         mov dword ptr [esi + 0x148], edi
// 00568bc7  e8ae7a1300           call 0x6a067a
// 00568bcc  83c404               add esp, 4
// 00568bcf  8bce                 mov ecx, esi
// 00568bd1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00568bd9  e86219ffff           call 0x55a540
// 00568bde  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00568be2  5f                   pop edi
// 00568be3  5e                   pop esi
// 00568be4  64890d00000000       mov dword ptr fs:[0], ecx
// 00568beb  83c410               add esp, 0x10
// 00568bee  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??1ServiceProvider@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
