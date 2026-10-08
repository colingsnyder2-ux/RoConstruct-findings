// roc 2007-08 004316a0  unit: CMainFrame  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004316a0
//
// 004316a0  83ec0c               sub esp, 0xc
// 004316a3  56                   push esi
// 004316a4  8bf1                 mov esi, ecx
// 004316a6  8b5608               mov edx, dword ptr [esi + 8]
// 004316a9  33c0                 xor eax, eax
// 004316ab  85d2                 test edx, edx
// 004316ad  57                   push edi
// 004316ae  89442408             mov dword ptr [esp + 8], eax
// 004316b2  7504                 jne 0x4316b8
// 004316b4  33c9                 xor ecx, ecx
// 004316b6  eb08                 jmp 0x4316c0
// 004316b8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004316bb  2bca                 sub ecx, edx
// 004316bd  c1f902               sar ecx, 2
// 004316c0  85c9                 test ecx, ecx
// 004316c2  8b5614               mov edx, dword ptr [esi + 0x14]
// 004316c5  8d7c2408             lea edi, [esp + 8]
// 004316c9  894c240c             mov dword ptr [esp + 0xc], ecx
// 004316cd  89542410             mov dword ptr [esp + 0x10], edx
// 004316d1  897e14               mov dword ptr [esi + 0x14], edi
// 004316d4  7654                 jbe 0x43172a
// 004316d6  53                   push ebx
// 004316d7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004316db  55                   push ebp
// 004316dc  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004316e2  8b5608               mov edx, dword ptr [esi + 8]
// 004316e5  85d2                 test edx, edx
// 004316e7  8bf8                 mov edi, eax
// 004316e9  740c                 je 0x4316f7
// 004316eb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004316ee  2bca                 sub ecx, edx
// 004316f0  c1f902               sar ecx, 2
// 004316f3  3bc1                 cmp eax, ecx
// 004316f5  7202                 jb 0x4316f9
// 004316f7  ffd5                 call ebp
// 004316f9  8b4608               mov eax, dword ptr [esi + 8]
// 004316fc  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004316ff  50                   push eax
// 00431700  53                   push ebx
// 00431701  8bce                 mov ecx, esi
// 00431703  e838f4ffff           call 0x430b40
// 00431708  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043170c  83c001               add eax, 1
// 0043170f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00431713  89442410             mov dword ptr [esp + 0x10], eax
// 00431717  72c9                 jb 0x4316e2
// 00431719  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043171d  5d                   pop ebp
// 0043171e  5b                   pop ebx
// 0043171f  5f                   pop edi
// 00431720  894e14               mov dword ptr [esi + 0x14], ecx
// 00431723  5e                   pop esi
// 00431724  83c40c               add esp, 0xc
// 00431727  c20400               ret 4
// 0043172a  5f                   pop edi
// 0043172b  895614               mov dword ptr [esi + 0x14], edx
// 0043172e  5e                   pop esi
// 0043172f  83c40c               add esp, 0xc
// 00431732  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
