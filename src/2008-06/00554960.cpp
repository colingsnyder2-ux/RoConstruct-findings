// roc 2008-06 00554960  unit: RBX::RunService  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554960
//
// 00554960  83ec0c               sub esp, 0xc
// 00554963  56                   push esi
// 00554964  8bf1                 mov esi, ecx
// 00554966  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554969  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 0055496c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0055496f  c1f902               sar ecx, 2
// 00554972  57                   push edi
// 00554973  33c0                 xor eax, eax
// 00554975  8d7c2408             lea edi, [esp + 8]
// 00554979  89442408             mov dword ptr [esp + 8], eax
// 0055497d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00554981  89542410             mov dword ptr [esp + 0x10], edx
// 00554985  897e1c               mov dword ptr [esi + 0x1c], edi
// 00554988  85c9                 test ecx, ecx
// 0055498a  7644                 jbe 0x5549d0
// 0055498c  53                   push ebx
// 0055498d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00554993  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554996  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554999  8bf8                 mov edi, eax
// 0055499b  c1f902               sar ecx, 2
// 0055499e  3bc1                 cmp eax, ecx
// 005549a0  7202                 jb 0x5549a4
// 005549a2  ffd3                 call ebx
// 005549a4  8b5610               mov edx, dword ptr [esi + 0x10]
// 005549a7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005549aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005549ae  50                   push eax
// 005549af  8b442424             mov eax, dword ptr [esp + 0x24]
// 005549b3  50                   push eax
// 005549b4  51                   push ecx
// 005549b5  8bce                 mov ecx, esi
// 005549b7  e854fbffff           call 0x554510
// 005549bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005549c0  40                   inc eax
// 005549c1  8944240c             mov dword ptr [esp + 0xc], eax
// 005549c5  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005549c9  72c8                 jb 0x554993
// 005549cb  8b542414             mov edx, dword ptr [esp + 0x14]
// 005549cf  5b                   pop ebx
// 005549d0  5f                   pop edi
// 005549d1  89561c               mov dword ptr [esi + 0x1c], edx
// 005549d4  5e                   pop esi
// 005549d5  83c40c               add esp, 0xc
// 005549d8  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
