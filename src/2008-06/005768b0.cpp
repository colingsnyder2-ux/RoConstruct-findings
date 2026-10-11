// roc 2008-06 005768b0  unit: RBX::DataModel  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005768b0
//
// 005768b0  83ec0c               sub esp, 0xc
// 005768b3  56                   push esi
// 005768b4  8bf1                 mov esi, ecx
// 005768b6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005768b9  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005768bc  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005768bf  c1f902               sar ecx, 2
// 005768c2  57                   push edi
// 005768c3  33c0                 xor eax, eax
// 005768c5  8d7c2408             lea edi, [esp + 8]
// 005768c9  89442408             mov dword ptr [esp + 8], eax
// 005768cd  894c240c             mov dword ptr [esp + 0xc], ecx
// 005768d1  89542410             mov dword ptr [esp + 0x10], edx
// 005768d5  897e1c               mov dword ptr [esi + 0x1c], edi
// 005768d8  85c9                 test ecx, ecx
// 005768da  764a                 jbe 0x576926
// 005768dc  53                   push ebx
// 005768dd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005768e3  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005768e6  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005768e9  8bf8                 mov edi, eax
// 005768eb  c1f902               sar ecx, 2
// 005768ee  3bc1                 cmp eax, ecx
// 005768f0  7202                 jb 0x5768f4
// 005768f2  ffd3                 call ebx
// 005768f4  8b5610               mov edx, dword ptr [esi + 0x10]
// 005768f7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005768fa  50                   push eax
// 005768fb  8b442420             mov eax, dword ptr [esp + 0x20]
// 005768ff  50                   push eax
// 00576900  8bce                 mov ecx, esi
// 00576902  e889faffff           call 0x576390
// 00576907  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057690b  40                   inc eax
// 0057690c  8944240c             mov dword ptr [esp + 0xc], eax
// 00576910  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00576914  72cd                 jb 0x5768e3
// 00576916  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057691a  5b                   pop ebx
// 0057691b  5f                   pop edi
// 0057691c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057691f  5e                   pop esi
// 00576920  83c40c               add esp, 0xc
// 00576923  c20400               ret 4
// 00576926  5f                   pop edi
// 00576927  89561c               mov dword ptr [esi + 0x1c], edx
// 0057692a  5e                   pop esi
// 0057692b  83c40c               add esp, 0xc
// 0057692e  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
