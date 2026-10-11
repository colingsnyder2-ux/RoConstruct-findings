// roc 2008-06 00576940  unit: RBX::DataModel  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576940
//
// 00576940  83ec0c               sub esp, 0xc
// 00576943  56                   push esi
// 00576944  8bf1                 mov esi, ecx
// 00576946  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00576949  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 0057694c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0057694f  c1f902               sar ecx, 2
// 00576952  57                   push edi
// 00576953  33c0                 xor eax, eax
// 00576955  8d7c2408             lea edi, [esp + 8]
// 00576959  89442408             mov dword ptr [esp + 8], eax
// 0057695d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00576961  89542410             mov dword ptr [esp + 0x10], edx
// 00576965  897e1c               mov dword ptr [esi + 0x1c], edi
// 00576968  85c9                 test ecx, ecx
// 0057696a  764a                 jbe 0x5769b6
// 0057696c  53                   push ebx
// 0057696d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00576973  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00576976  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00576979  8bf8                 mov edi, eax
// 0057697b  c1f902               sar ecx, 2
// 0057697e  3bc1                 cmp eax, ecx
// 00576980  7202                 jb 0x576984
// 00576982  ffd3                 call ebx
// 00576984  8b5610               mov edx, dword ptr [esi + 0x10]
// 00576987  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0057698a  50                   push eax
// 0057698b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057698f  50                   push eax
// 00576990  8bce                 mov ecx, esi
// 00576992  e8b9faffff           call 0x576450
// 00576997  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057699b  40                   inc eax
// 0057699c  8944240c             mov dword ptr [esp + 0xc], eax
// 005769a0  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005769a4  72cd                 jb 0x576973
// 005769a6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005769aa  5b                   pop ebx
// 005769ab  5f                   pop edi
// 005769ac  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005769af  5e                   pop esi
// 005769b0  83c40c               add esp, 0xc
// 005769b3  c20400               ret 4
// 005769b6  5f                   pop edi
// 005769b7  89561c               mov dword ptr [esi + 0x1c], edx
// 005769ba  5e                   pop esi
// 005769bb  83c40c               add esp, 0xc
// 005769be  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/World.cpp
