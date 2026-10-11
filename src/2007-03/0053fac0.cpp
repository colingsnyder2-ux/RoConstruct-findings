// roc 2007-03 0053fac0  unit: seg_00530000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fac0
//
// 0053fac0  83ec10               sub esp, 0x10
// 0053fac3  53                   push ebx
// 0053fac4  56                   push esi
// 0053fac5  8bf1                 mov esi, ecx
// 0053fac7  8b5608               mov edx, dword ptr [esi + 8]
// 0053faca  33c9                 xor ecx, ecx
// 0053facc  85d2                 test edx, edx
// 0053face  57                   push edi
// 0053facf  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053fad3  7504                 jne 0x53fad9
// 0053fad5  33c0                 xor eax, eax
// 0053fad7  eb08                 jmp 0x53fae1
// 0053fad9  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fadc  2bc2                 sub eax, edx
// 0053fade  c1f802               sar eax, 2
// 0053fae1  85c0                 test eax, eax
// 0053fae3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0053fae6  89542418             mov dword ptr [esp + 0x18], edx
// 0053faea  8d542410             lea edx, [esp + 0x10]
// 0053faee  89442414             mov dword ptr [esp + 0x14], eax
// 0053faf2  895614               mov dword ptr [esi + 0x14], edx
// 0053faf5  0f868c000000         jbe 0x53fb87
// 0053fafb  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 0053fb01  8b5608               mov edx, dword ptr [esi + 8]
// 0053fb04  85d2                 test edx, edx
// 0053fb06  8bf9                 mov edi, ecx
// 0053fb08  740c                 je 0x53fb16
// 0053fb0a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fb0d  2bc2                 sub eax, edx
// 0053fb0f  c1f802               sar eax, 2
// 0053fb12  3bc8                 cmp ecx, eax
// 0053fb14  7202                 jb 0x53fb18
// 0053fb16  ffd3                 call ebx
// 0053fb18  8b4608               mov eax, dword ptr [esi + 8]
// 0053fb1b  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053fb1e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053fb22  50                   push eax
// 0053fb23  83ec10               sub esp, 0x10
// 0053fb26  8bc4                 mov eax, esp
// 0053fb28  8908                 mov dword ptr [eax], ecx
// 0053fb2a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053fb2e  895004               mov dword ptr [eax + 4], edx
// 0053fb31  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053fb35  85c9                 test ecx, ecx
// 0053fb37  89642420             mov dword ptr [esp + 0x20], esp
// 0053fb3b  740c                 je 0x53fb49
// 0053fb3d  83c104               add ecx, 4
// 0053fb40  ba01000000           mov edx, 1
// 0053fb45  f00fc111             lock xadd dword ptr [ecx], edx
// 0053fb49  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053fb4d  894808               mov dword ptr [eax + 8], ecx
// 0053fb50  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053fb54  89500c               mov dword ptr [eax + 0xc], edx
// 0053fb57  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053fb5b  85c0                 test eax, eax
// 0053fb5d  740c                 je 0x53fb6b
// 0053fb5f  83c004               add eax, 4
// 0053fb62  b901000000           mov ecx, 1
// 0053fb67  f00fc108             lock xadd dword ptr [eax], ecx
// 0053fb6b  8bce                 mov ecx, esi
// 0053fb6d  e85ef8ffff           call 0x53f3d0
// 0053fb72  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053fb76  83c101               add ecx, 1
// 0053fb79  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0053fb7d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053fb81  0f827affffff         jb 0x53fb01
// 0053fb87  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053fb8b  8d4c2420             lea ecx, [esp + 0x20]
// 0053fb8f  895614               mov dword ptr [esi + 0x14], edx
// 0053fb92  e819ededff           call 0x41e8b0
// 0053fb97  5f                   pop edi
// 0053fb98  5e                   pop esi
// 0053fb99  5b                   pop ebx
// 0053fb9a  83c410               add esp, 0x10
// 0053fb9d  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
