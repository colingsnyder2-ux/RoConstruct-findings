// roc 2009-12 0080bbf0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080bbf0
//
// 0080bbf0  6aff                 push -1
// 0080bbf2  6860999500           push 0x959960
// 0080bbf7  64a100000000         mov eax, dword ptr fs:[0]
// 0080bbfd  50                   push eax
// 0080bbfe  83ec14               sub esp, 0x14
// 0080bc01  56                   push esi
// 0080bc02  57                   push edi
// 0080bc03  a10052b600           mov eax, dword ptr [0xb65200]
// 0080bc08  33c4                 xor eax, esp
// 0080bc0a  50                   push eax
// 0080bc0b  8d442420             lea eax, [esp + 0x20]
// 0080bc0f  64a300000000         mov dword ptr fs:[0], eax
// 0080bc15  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0080bc19  8b742430             mov esi, dword ptr [esp + 0x30]
// 0080bc1d  57                   push edi
// 0080bc1e  56                   push esi
// 0080bc1f  e87cd3ffff           call 0x808fa0
// 0080bc24  83c408               add esp, 8
// 0080bc27  85c0                 test eax, eax
// 0080bc29  747f                 je 0x80bcaa
// 0080bc2b  8d4c2414             lea ecx, [esp + 0x14]
// 0080bc2f  e80c3f0800           call 0x88fb40
// 0080bc34  68d83e9a00           push 0x9a3ed8
// 0080bc39  57                   push edi
// 0080bc3a  56                   push esi
// 0080bc3b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0080bc43  ff15ecb19800         call dword ptr [0x98b1ec]
// 0080bc49  50                   push eax
// 0080bc4a  56                   push esi
// 0080bc4b  8d4c241c             lea ecx, [esp + 0x1c]
// 0080bc4f  e83c440800           call 0x890090
// 0080bc54  85c0                 test eax, eax
// 0080bc56  752d                 jne 0x80bc85
// 0080bc58  8d4c2414             lea ecx, [esp + 0x14]
// 0080bc5c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0080bc64  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0080bc6c  e8bf35c0ff           call 0x40f230
// 0080bc71  33c0                 xor eax, eax
// 0080bc73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080bc77  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bc7e  59                   pop ecx
// 0080bc7f  5f                   pop edi
// 0080bc80  5e                   pop esi
// 0080bc81  83c420               add esp, 0x20
// 0080bc84  c3                   ret 
// 0080bc85  8b442438             mov eax, dword ptr [esp + 0x38]
// 0080bc89  85c0                 test eax, eax
// 0080bc8b  7406                 je 0x80bc93
// 0080bc8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080bc91  8908                 mov dword ptr [eax], ecx
// 0080bc93  8d4c2414             lea ecx, [esp + 0x14]
// 0080bc97  e8d2a81100           call 0x92656e
// 0080bc9c  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0080bca4  8d4c2414             lea ecx, [esp + 0x14]
// 0080bca8  eb58                 jmp 0x80bd02
// 0080bcaa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080bcb2  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080bcba  57                   push edi
// 0080bcbb  56                   push esi
// 0080bcbc  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0080bcc4  e887d3ffff           call 0x809050
// 0080bcc9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080bccd  83c408               add esp, 8
// 0080bcd0  85c9                 test ecx, ecx
// 0080bcd2  7402                 je 0x80bcd6
// 0080bcd4  8901                 mov dword ptr [ecx], eax
// 0080bcd6  85c0                 test eax, eax
// 0080bcd8  740c                 je 0x80bce6
// 0080bcda  57                   push edi
// 0080bcdb  56                   push esi
// 0080bcdc  e8efe6ffff           call 0x80a3d0
// 0080bce1  83c408               add esp, 8
// 0080bce4  eb10                 jmp 0x80bcf6
// 0080bce6  6a40                 push 0x40
// 0080bce8  6a00                 push 0
// 0080bcea  6a00                 push 0
// 0080bcec  6a00                 push 0
// 0080bcee  57                   push edi
// 0080bcef  56                   push esi
// 0080bcf0  ff150ccb9800         call dword ptr [0x98cb0c]
// 0080bcf6  8d4c240c             lea ecx, [esp + 0xc]
// 0080bcfa  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080bd02  8bf0                 mov esi, eax
// 0080bd04  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0080bd0c  e81f35c0ff           call 0x40f230
// 0080bd11  8bc6                 mov eax, esi
// 0080bd13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080bd17  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bd1e  59                   pop ecx
// 0080bd1f  5f                   pop edi
// 0080bd20  5e                   pop esi
// 0080bd21  83c420               add esp, 0x20
// 0080bd24  c3                   ret 
// copied from an identical function in another client (function ?LoadBitmapFromResource@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBDPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp