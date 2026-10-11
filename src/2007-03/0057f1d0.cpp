// roc 2007-03 0057f1d0  unit: seg_00570000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f1d0
//
// 0057f1d0  6aff                 push -1
// 0057f1d2  68586d7500           push 0x756d58
// 0057f1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0057f1dd  50                   push eax
// 0057f1de  64892500000000       mov dword ptr fs:[0], esp
// 0057f1e5  51                   push ecx
// 0057f1e6  53                   push ebx
// 0057f1e7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057f1eb  56                   push esi
// 0057f1ec  57                   push edi
// 0057f1ed  8bf9                 mov edi, ecx
// 0057f1ef  33f6                 xor esi, esi
// 0057f1f1  53                   push ebx
// 0057f1f2  8d4f08               lea ecx, [edi + 8]
// 0057f1f5  897c2410             mov dword ptr [esp + 0x10], edi
// 0057f1f9  c70730d97a00         mov dword ptr [edi], 0x7ad930
// 0057f1ff  897704               mov dword ptr [edi + 4], esi
// 0057f202  ff1578e77700         call dword ptr [0x77e778]
// 0057f208  6a01                 push 1
// 0057f20a  6a40                 push 0x40
// 0057f20c  89742420             mov dword ptr [esp + 0x20], esi
// 0057f210  6a02                 push 2
// 0057f212  8d7724               lea esi, [edi + 0x24]
// 0057f215  53                   push ebx
// 0057f216  8bce                 mov ecx, esi
// 0057f218  ff15e4e67700         call dword ptr [0x77e6e4]
// 0057f21e  6a01                 push 1
// 0057f220  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0057f225  e816ffffff           call 0x57f140
// 0057f22a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057f22e  83c404               add esp, 4
// 0057f231  6828d97a00           push 0x7ad928
// 0057f236  50                   push eax
// 0057f237  6820d97a00           push 0x7ad920
// 0057f23c  56                   push esi
// 0057f23d  e8fec1eeff           call 0x46b440
// 0057f242  83c408               add esp, 8
// 0057f245  50                   push eax
// 0057f246  e8f5c1eeff           call 0x46b440
// 0057f24b  83c408               add esp, 8
// 0057f24e  50                   push eax
// 0057f24f  e8ecc1eeff           call 0x46b440
// 0057f254  83c408               add esp, 8
// 0057f257  8bce                 mov ecx, esi
// 0057f259  ff158ce67700         call dword ptr [0x77e68c]
// 0057f25f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f263  8bc7                 mov eax, edi
// 0057f265  5f                   pop edi
// 0057f266  5e                   pop esi
// 0057f267  5b                   pop ebx
// 0057f268  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f26f  83c410               add esp, 0x10
// 0057f272  c20800               ret 8
// library openrbx-client/App\util\Log.cpp (function ??0Log@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
