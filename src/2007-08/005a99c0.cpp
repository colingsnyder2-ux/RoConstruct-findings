// roc 2007-08 005a99c0  unit: RBX::VHumanoid::?$SignalDesc  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a99c0
//
// 005a99c0  83ec0c               sub esp, 0xc
// 005a99c3  56                   push esi
// 005a99c4  8bf1                 mov esi, ecx
// 005a99c6  8b5608               mov edx, dword ptr [esi + 8]
// 005a99c9  33c0                 xor eax, eax
// 005a99cb  85d2                 test edx, edx
// 005a99cd  57                   push edi
// 005a99ce  89442408             mov dword ptr [esp + 8], eax
// 005a99d2  7504                 jne 0x5a99d8
// 005a99d4  33c9                 xor ecx, ecx
// 005a99d6  eb08                 jmp 0x5a99e0
// 005a99d8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a99db  2bca                 sub ecx, edx
// 005a99dd  c1f902               sar ecx, 2
// 005a99e0  85c9                 test ecx, ecx
// 005a99e2  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a99e5  8d7c2408             lea edi, [esp + 8]
// 005a99e9  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a99ed  89542410             mov dword ptr [esp + 0x10], edx
// 005a99f1  897e14               mov dword ptr [esi + 0x14], edi
// 005a99f4  7654                 jbe 0x5a9a4a
// 005a99f6  53                   push ebx
// 005a99f7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a99fb  55                   push ebp
// 005a99fc  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005a9a02  8b5608               mov edx, dword ptr [esi + 8]
// 005a9a05  85d2                 test edx, edx
// 005a9a07  8bf8                 mov edi, eax
// 005a9a09  740c                 je 0x5a9a17
// 005a9a0b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a9a0e  2bca                 sub ecx, edx
// 005a9a10  c1f902               sar ecx, 2
// 005a9a13  3bc1                 cmp eax, ecx
// 005a9a15  7202                 jb 0x5a9a19
// 005a9a17  ffd5                 call ebp
// 005a9a19  8b4608               mov eax, dword ptr [esi + 8]
// 005a9a1c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005a9a1f  50                   push eax
// 005a9a20  53                   push ebx
// 005a9a21  8bce                 mov ecx, esi
// 005a9a23  e888faffff           call 0x5a94b0
// 005a9a28  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a9a2c  83c001               add eax, 1
// 005a9a2f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005a9a33  89442410             mov dword ptr [esp + 0x10], eax
// 005a9a37  72c9                 jb 0x5a9a02
// 005a9a39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a9a3d  5d                   pop ebp
// 005a9a3e  5b                   pop ebx
// 005a9a3f  5f                   pop edi
// 005a9a40  894e14               mov dword ptr [esi + 0x14], ecx
// 005a9a43  5e                   pop esi
// 005a9a44  83c40c               add esp, 0xc
// 005a9a47  c20400               ret 4
// 005a9a4a  5f                   pop edi
// 005a9a4b  895614               mov dword ptr [esi + 0x14], edx
// 005a9a4e  5e                   pop esi
// 005a9a4f  83c40c               add esp, 0xc
// 005a9a52  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
