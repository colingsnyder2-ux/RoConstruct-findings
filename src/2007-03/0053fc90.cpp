// roc 2007-03 0053fc90  unit: seg_00530000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fc90
//
// 0053fc90  83ec10               sub esp, 0x10
// 0053fc93  53                   push ebx
// 0053fc94  56                   push esi
// 0053fc95  8bf1                 mov esi, ecx
// 0053fc97  8b5608               mov edx, dword ptr [esi + 8]
// 0053fc9a  33c9                 xor ecx, ecx
// 0053fc9c  85d2                 test edx, edx
// 0053fc9e  57                   push edi
// 0053fc9f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053fca3  7504                 jne 0x53fca9
// 0053fca5  33c0                 xor eax, eax
// 0053fca7  eb08                 jmp 0x53fcb1
// 0053fca9  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fcac  2bc2                 sub eax, edx
// 0053fcae  c1f802               sar eax, 2
// 0053fcb1  85c0                 test eax, eax
// 0053fcb3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0053fcb6  89542418             mov dword ptr [esp + 0x18], edx
// 0053fcba  8d542410             lea edx, [esp + 0x10]
// 0053fcbe  89442414             mov dword ptr [esp + 0x14], eax
// 0053fcc2  895614               mov dword ptr [esi + 0x14], edx
// 0053fcc5  0f868c000000         jbe 0x53fd57
// 0053fccb  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 0053fcd1  8b5608               mov edx, dword ptr [esi + 8]
// 0053fcd4  85d2                 test edx, edx
// 0053fcd6  8bf9                 mov edi, ecx
// 0053fcd8  740c                 je 0x53fce6
// 0053fcda  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fcdd  2bc2                 sub eax, edx
// 0053fcdf  c1f802               sar eax, 2
// 0053fce2  3bc8                 cmp ecx, eax
// 0053fce4  7202                 jb 0x53fce8
// 0053fce6  ffd3                 call ebx
// 0053fce8  8b4608               mov eax, dword ptr [esi + 8]
// 0053fceb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053fcee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053fcf2  50                   push eax
// 0053fcf3  83ec10               sub esp, 0x10
// 0053fcf6  8bc4                 mov eax, esp
// 0053fcf8  8908                 mov dword ptr [eax], ecx
// 0053fcfa  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053fcfe  895004               mov dword ptr [eax + 4], edx
// 0053fd01  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053fd05  85c9                 test ecx, ecx
// 0053fd07  89642420             mov dword ptr [esp + 0x20], esp
// 0053fd0b  740c                 je 0x53fd19
// 0053fd0d  83c104               add ecx, 4
// 0053fd10  ba01000000           mov edx, 1
// 0053fd15  f00fc111             lock xadd dword ptr [ecx], edx
// 0053fd19  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053fd1d  894808               mov dword ptr [eax + 8], ecx
// 0053fd20  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053fd24  89500c               mov dword ptr [eax + 0xc], edx
// 0053fd27  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053fd2b  85c0                 test eax, eax
// 0053fd2d  740c                 je 0x53fd3b
// 0053fd2f  83c004               add eax, 4
// 0053fd32  b901000000           mov ecx, 1
// 0053fd37  f00fc108             lock xadd dword ptr [eax], ecx
// 0053fd3b  8bce                 mov ecx, esi
// 0053fd3d  e80ef8ffff           call 0x53f550
// 0053fd42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053fd46  83c101               add ecx, 1
// 0053fd49  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0053fd4d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053fd51  0f827affffff         jb 0x53fcd1
// 0053fd57  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053fd5b  8d4c2420             lea ecx, [esp + 0x20]
// 0053fd5f  895614               mov dword ptr [esi + 0x14], edx
// 0053fd62  e849ebedff           call 0x41e8b0
// 0053fd67  5f                   pop edi
// 0053fd68  5e                   pop esi
// 0053fd69  5b                   pop ebx
// 0053fd6a  83c410               add esp, 0x10
// 0053fd6d  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
