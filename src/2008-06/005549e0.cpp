// roc 2008-06 005549e0  unit: RBX::RunService  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005549e0
//
// 005549e0  83ec0c               sub esp, 0xc
// 005549e3  56                   push esi
// 005549e4  8bf1                 mov esi, ecx
// 005549e6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005549e9  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005549ec  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005549ef  c1f902               sar ecx, 2
// 005549f2  57                   push edi
// 005549f3  33c0                 xor eax, eax
// 005549f5  8d7c2408             lea edi, [esp + 8]
// 005549f9  89442408             mov dword ptr [esp + 8], eax
// 005549fd  894c240c             mov dword ptr [esp + 0xc], ecx
// 00554a01  89542410             mov dword ptr [esp + 0x10], edx
// 00554a05  897e1c               mov dword ptr [esi + 0x1c], edi
// 00554a08  85c9                 test ecx, ecx
// 00554a0a  7644                 jbe 0x554a50
// 00554a0c  53                   push ebx
// 00554a0d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00554a13  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554a16  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554a19  8bf8                 mov edi, eax
// 00554a1b  c1f902               sar ecx, 2
// 00554a1e  3bc1                 cmp eax, ecx
// 00554a20  7202                 jb 0x554a24
// 00554a22  ffd3                 call ebx
// 00554a24  8b5610               mov edx, dword ptr [esi + 0x10]
// 00554a27  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00554a2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554a2e  50                   push eax
// 00554a2f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00554a33  50                   push eax
// 00554a34  51                   push ecx
// 00554a35  8bce                 mov ecx, esi
// 00554a37  e894fbffff           call 0x5545d0
// 00554a3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00554a40  40                   inc eax
// 00554a41  8944240c             mov dword ptr [esp + 0xc], eax
// 00554a45  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00554a49  72c8                 jb 0x554a13
// 00554a4b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00554a4f  5b                   pop ebx
// 00554a50  5f                   pop edi
// 00554a51  89561c               mov dword ptr [esi + 0x1c], edx
// 00554a54  5e                   pop esi
// 00554a55  83c40c               add esp, 0xc
// 00554a58  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
