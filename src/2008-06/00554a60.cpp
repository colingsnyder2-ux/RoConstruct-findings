// roc 2008-06 00554a60  unit: RBX::RunService  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554a60
//
// 00554a60  83ec0c               sub esp, 0xc
// 00554a63  56                   push esi
// 00554a64  8bf1                 mov esi, ecx
// 00554a66  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554a69  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554a6c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00554a6f  c1f902               sar ecx, 2
// 00554a72  57                   push edi
// 00554a73  33c0                 xor eax, eax
// 00554a75  8d7c2408             lea edi, [esp + 8]
// 00554a79  89442408             mov dword ptr [esp + 8], eax
// 00554a7d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00554a81  89542410             mov dword ptr [esp + 0x10], edx
// 00554a85  897e1c               mov dword ptr [esi + 0x1c], edi
// 00554a88  85c9                 test ecx, ecx
// 00554a8a  7644                 jbe 0x554ad0
// 00554a8c  53                   push ebx
// 00554a8d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00554a93  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554a96  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554a99  8bf8                 mov edi, eax
// 00554a9b  c1f902               sar ecx, 2
// 00554a9e  3bc1                 cmp eax, ecx
// 00554aa0  7202                 jb 0x554aa4
// 00554aa2  ffd3                 call ebx
// 00554aa4  8b5610               mov edx, dword ptr [esi + 0x10]
// 00554aa7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00554aaa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554aae  50                   push eax
// 00554aaf  8b442424             mov eax, dword ptr [esp + 0x24]
// 00554ab3  50                   push eax
// 00554ab4  51                   push ecx
// 00554ab5  8bce                 mov ecx, esi
// 00554ab7  e8d4fbffff           call 0x554690
// 00554abc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00554ac0  40                   inc eax
// 00554ac1  8944240c             mov dword ptr [esp + 0xc], eax
// 00554ac5  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00554ac9  72c8                 jb 0x554a93
// 00554acb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00554acf  5b                   pop ebx
// 00554ad0  5f                   pop edi
// 00554ad1  89561c               mov dword ptr [esi + 0x1c], edx
// 00554ad4  5e                   pop esi
// 00554ad5  83c40c               add esp, 0xc
// 00554ad8  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
