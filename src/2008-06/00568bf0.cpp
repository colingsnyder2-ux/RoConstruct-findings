// roc 2008-06 00568bf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568bf0
//
// 00568bf0  6aff                 push -1
// 00568bf2  68a8f77c00           push 0x7cf7a8
// 00568bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00568bfd  50                   push eax
// 00568bfe  64892500000000       mov dword ptr fs:[0], esp
// 00568c05  83ec0c               sub esp, 0xc
// 00568c08  53                   push ebx
// 00568c09  55                   push ebp
// 00568c0a  56                   push esi
// 00568c0b  8bf1                 mov esi, ecx
// 00568c0d  57                   push edi
// 00568c0e  89742418             mov dword ptr [esp + 0x18], esi
// 00568c12  e839feffff           call 0x568a50
// 00568c17  8dbe30010000         lea edi, [esi + 0x130]
// 00568c1d  8bcf                 mov ecx, edi
// 00568c1f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00568c27  e894120800           call 0x5e9ec0
// 00568c2c  8d9e50010000         lea ebx, [esi + 0x150]
// 00568c32  8bcb                 mov ecx, ebx
// 00568c34  c644242401           mov byte ptr [esp + 0x24], 1
// 00568c39  e882120800           call 0x5e9ec0
// 00568c3e  8dae70010000         lea ebp, [esi + 0x170]
// 00568c44  8bcd                 mov ecx, ebp
// 00568c46  c644242402           mov byte ptr [esp + 0x24], 2
// 00568c4b  e870120800           call 0x5e9ec0
// 00568c50  c70700f28200         mov dword ptr [edi], 0x82f200
// 00568c56  6a04                 push 4
// 00568c58  c644242803           mov byte ptr [esp + 0x28], 3
// 00568c5d  c706bcf18200         mov dword ptr [esi], 0x82f1bc
// 00568c63  c74610b0f18200       mov dword ptr [esi + 0x10], 0x82f1b0
// 00568c6a  c74614a8f18200       mov dword ptr [esi + 0x14], 0x82f1a8
// 00568c71  c74620a0f18200       mov dword ptr [esi + 0x20], 0x82f1a0
// 00568c78  c7462490f18200       mov dword ptr [esi + 0x24], 0x82f190
// 00568c7f  c7464480f18200       mov dword ptr [esi + 0x44], 0x82f180
// 00568c86  c7466470f18200       mov dword ptr [esi + 0x64], 0x82f170
// 00568c8d  c7868400000060f18200 mov dword ptr [esi + 0x84], 0x82f160
// 00568c97  c786a400000050f18200 mov dword ptr [esi + 0xa4], 0x82f150
// 00568ca1  c786c400000040f18200 mov dword ptr [esi + 0xc4], 0x82f140
// 00568cab  c70330f18200         mov dword ptr [ebx], 0x82f130
// 00568cb1  c7450020f18200       mov dword ptr [ebp], 0x82f120
// 00568cb8  8dbe90010000         lea edi, [esi + 0x190]
// 00568cbe  e85d7c1300           call 0x6a0920
// 00568cc3  33c9                 xor ecx, ecx
// 00568cc5  83c404               add esp, 4
// 00568cc8  3bc1                 cmp eax, ecx
// 00568cca  7404                 je 0x568cd0
// 00568ccc  8938                 mov dword ptr [eax], edi
// 00568cce  eb02                 jmp 0x568cd2
// 00568cd0  33c0                 xor eax, eax
// 00568cd2  8907                 mov dword ptr [edi], eax
// 00568cd4  894f0c               mov dword ptr [edi + 0xc], ecx
// 00568cd7  894f10               mov dword ptr [edi + 0x10], ecx
// 00568cda  894f14               mov dword ptr [edi + 0x14], ecx
// 00568cdd  8d442417             lea eax, [esp + 0x17]
// 00568ce1  50                   push eax
// 00568ce2  8d4c241b             lea ecx, [esp + 0x1b]
// 00568ce6  51                   push ecx
// 00568ce7  8d8ea8010000         lea ecx, [esi + 0x1a8]
// 00568ced  c644242c05           mov byte ptr [esp + 0x2c], 5
// 00568cf2  e899040200           call 0x589190
// 00568cf7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00568cfb  5f                   pop edi
// 00568cfc  8bc6                 mov eax, esi
// 00568cfe  5e                   pop esi
// 00568cff  5d                   pop ebp
// 00568d00  5b                   pop ebx
// 00568d01  64890d00000000       mov dword ptr fs:[0], ecx
// 00568d08  83c418               add esp, 0x18
// 00568d0b  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??0ServiceProvider@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
