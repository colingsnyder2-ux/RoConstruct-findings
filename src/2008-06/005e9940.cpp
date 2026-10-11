// roc 2008-06 005e9940  unit: RBX::PhysicsService  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9940
//
// 005e9940  83ec0c               sub esp, 0xc
// 005e9943  56                   push esi
// 005e9944  8bf1                 mov esi, ecx
// 005e9946  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9949  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e994c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005e994f  c1f902               sar ecx, 2
// 005e9952  57                   push edi
// 005e9953  33c0                 xor eax, eax
// 005e9955  8d7c2408             lea edi, [esp + 8]
// 005e9959  89442408             mov dword ptr [esp + 8], eax
// 005e995d  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e9961  89542410             mov dword ptr [esp + 0x10], edx
// 005e9965  897e1c               mov dword ptr [esi + 0x1c], edi
// 005e9968  85c9                 test ecx, ecx
// 005e996a  764a                 jbe 0x5e99b6
// 005e996c  53                   push ebx
// 005e996d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e9973  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9976  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9979  8bf8                 mov edi, eax
// 005e997b  c1f902               sar ecx, 2
// 005e997e  3bc1                 cmp eax, ecx
// 005e9980  7202                 jb 0x5e9984
// 005e9982  ffd3                 call ebx
// 005e9984  8b5610               mov edx, dword ptr [esi + 0x10]
// 005e9987  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005e998a  50                   push eax
// 005e998b  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e998f  50                   push eax
// 005e9990  8bce                 mov ecx, esi
// 005e9992  e829fcffff           call 0x5e95c0
// 005e9997  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e999b  40                   inc eax
// 005e999c  8944240c             mov dword ptr [esp + 0xc], eax
// 005e99a0  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e99a4  72cd                 jb 0x5e9973
// 005e99a6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e99aa  5b                   pop ebx
// 005e99ab  5f                   pop edi
// 005e99ac  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e99af  5e                   pop esi
// 005e99b0  83c40c               add esp, 0xc
// 005e99b3  c20400               ret 4
// 005e99b6  5f                   pop edi
// 005e99b7  89561c               mov dword ptr [esi + 0x1c], edx
// 005e99ba  5e                   pop esi
// 005e99bb  83c40c               add esp, 0xc
// 005e99be  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/World.cpp
