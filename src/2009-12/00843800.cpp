// roc 2009-12 00843800  unit: CXTPPopupBar  size: 652 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843800
//
// 00843800  83ec4c               sub esp, 0x4c
// 00843803  53                   push ebx
// 00843804  8b1d28cc9800         mov ebx, dword ptr [0x98cc28]
// 0084380a  57                   push edi
// 0084380b  8bf9                 mov edi, ecx
// 0084380d  ffd3                 call ebx
// 0084380f  85c0                 test eax, eax
// 00843811  0f852f020000         jne 0x843a46
// 00843817  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0084381d  56                   push esi
// 0084381e  50                   push eax
// 0084381f  6a01                 push 1
// 00843821  6aff                 push -1
// 00843823  6a0a                 push 0xa
// 00843825  e8161b0000           call 0x845340
// 0084382a  8bf0                 mov esi, eax
// 0084382c  85f6                 test esi, esi
// 0084382e  0f8411020000         je 0x843a45
// 00843834  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0084383a  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00843840  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00843846  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084384a  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00843850  2bc1                 sub eax, ecx
// 00843852  89542434             mov dword ptr [esp + 0x34], edx
// 00843856  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 0084385c  89442420             mov dword ptr [esp + 0x20], eax
// 00843860  89442428             mov dword ptr [esp + 0x28], eax
// 00843864  8b06                 mov eax, dword ptr [esi]
// 00843866  8954241c             mov dword ptr [esp + 0x1c], edx
// 0084386a  89542424             mov dword ptr [esp + 0x24], edx
// 0084386e  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00843874  55                   push ebp
// 00843875  8bce                 mov ecx, esi
// 00843877  ffd2                 call edx
// 00843879  89442414             mov dword ptr [esp + 0x14], eax
// 0084387d  8b06                 mov eax, dword ptr [esi]
// 0084387f  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00843885  8bce                 mov ecx, esi
// 00843887  ffd2                 call edx
// 00843889  6a00                 push 0
// 0084388b  6aff                 push -1
// 0084388d  8bcf                 mov ecx, edi
// 0084388f  89442438             mov dword ptr [esp + 0x38], eax
// 00843893  e8082dfcff           call 0x8065a0
// 00843898  8b07                 mov eax, dword ptr [edi]
// 0084389a  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008438a0  6a00                 push 0
// 008438a2  6aff                 push -1
// 008438a4  8bcf                 mov ecx, edi
// 008438a6  ffd2                 call edx
// 008438a8  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 008438ae  8be8                 mov ebp, eax
// 008438b0  83e002               and eax, 2
// 008438b3  89442410             mov dword ptr [esp + 0x10], eax
// 008438b7  8b4720               mov eax, dword ptr [edi + 0x20]
// 008438ba  50                   push eax
// 008438bb  83e501               and ebp, 1
// 008438be  ff152ccc9800         call dword ptr [0x98cc2c]
// 008438c4  50                   push eax
// 008438c5  e86002fbff           call 0x7f3b2a
// 008438ca  33c0                 xor eax, eax
// 008438cc  8d4c2418             lea ecx, [esp + 0x18]
// 008438d0  51                   push ecx
// 008438d1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008438d5  89442420             mov dword ptr [esp + 0x20], eax
// 008438d9  ff1538cc9800         call dword ptr [0x98cc38]
// 008438df  ffd3                 call ebx
// 008438e1  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008438e4  0f8554010000         jne 0x843a3e
// 008438ea  8d9b00000000         lea ebx, [ebx]
// 008438f0  8b1d24cc9800         mov ebx, dword ptr [0x98cc24]
// 008438f6  6a00                 push 0
// 008438f8  6a0f                 push 0xf
// 008438fa  6a0f                 push 0xf
// 008438fc  6a00                 push 0
// 008438fe  8d542450             lea edx, [esp + 0x50]
// 00843902  52                   push edx
// 00843903  ffd3                 call ebx
// 00843905  85c0                 test eax, eax
// 00843907  743a                 je 0x843943
// 00843909  8da42400000000       lea esp, [esp]
// 00843910  6a0f                 push 0xf
// 00843912  6a0f                 push 0xf
// 00843914  6a00                 push 0
// 00843916  8d44244c             lea eax, [esp + 0x4c]
// 0084391a  50                   push eax
// 0084391b  ff15b0ca9800         call dword ptr [0x98cab0]
// 00843921  85c0                 test eax, eax
// 00843923  741e                 je 0x843943
// 00843925  8d4c2440             lea ecx, [esp + 0x40]
// 00843929  51                   push ecx
// 0084392a  ff1594ca9800         call dword ptr [0x98ca94]
// 00843930  6a00                 push 0
// 00843932  6a0f                 push 0xf
// 00843934  6a0f                 push 0xf
// 00843936  6a00                 push 0
// 00843938  8d542450             lea edx, [esp + 0x50]
// 0084393c  52                   push edx
// 0084393d  ffd3                 call ebx
// 0084393f  85c0                 test eax, eax
// 00843941  75cd                 jne 0x843910
// 00843943  6a00                 push 0
// 00843945  6a00                 push 0
// 00843947  6a00                 push 0
// 00843949  8d44244c             lea eax, [esp + 0x4c]
// 0084394d  50                   push eax
// 0084394e  ff15b0ca9800         call dword ptr [0x98cab0]
// 00843954  85c0                 test eax, eax
// 00843956  0f8418010000         je 0x843a74
// 0084395c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00843960  3d02020000           cmp eax, 0x202
// 00843965  0f84d3000000         je 0x843a3e
// 0084396b  3d00020000           cmp eax, 0x200
// 00843970  0f8586000000         jne 0x8439fc
// 00843976  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084397a  8b442454             mov eax, dword ptr [esp + 0x54]
// 0084397e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00843982  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00843986  3bd0                 cmp edx, eax
// 00843988  7508                 jne 0x843992
// 0084398a  3bd9                 cmp ebx, ecx
// 0084398c  0f84ba000000         je 0x843a4c
// 00843992  2bc2                 sub eax, edx
// 00843994  8b542420             mov edx, dword ptr [esp + 0x20]
// 00843998  2bcb                 sub ecx, ebx
// 0084399a  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0084399e  03d0                 add edx, eax
// 008439a0  03d9                 add ebx, ecx
// 008439a2  89542420             mov dword ptr [esp + 0x20], edx
// 008439a6  895c2424             mov dword ptr [esp + 0x24], ebx
// 008439aa  85ed                 test ebp, ebp
// 008439ac  7417                 je 0x8439c5
// 008439ae  8b442430             mov eax, dword ptr [esp + 0x30]
// 008439b2  3bd0                 cmp edx, eax
// 008439b4  7f02                 jg 0x8439b8
// 008439b6  8bd0                 mov edx, eax
// 008439b8  8b06                 mov eax, dword ptr [esi]
// 008439ba  52                   push edx
// 008439bb  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008439c1  8bce                 mov ecx, esi
// 008439c3  ffd2                 call edx
// 008439c5  837c241000           cmp dword ptr [esp + 0x10], 0
// 008439ca  7417                 je 0x8439e3
// 008439cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008439d0  3bd8                 cmp ebx, eax
// 008439d2  7f02                 jg 0x8439d6
// 008439d4  8bd8                 mov ebx, eax
// 008439d6  8b06                 mov eax, dword ptr [esi]
// 008439d8  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008439de  53                   push ebx
// 008439df  8bce                 mov ecx, esi
// 008439e1  ffd2                 call edx
// 008439e3  8bcf                 mov ecx, edi
// 008439e5  e876e7ffff           call 0x842160
// 008439ea  8b442454             mov eax, dword ptr [esp + 0x54]
// 008439ee  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008439f2  89442418             mov dword ptr [esp + 0x18], eax
// 008439f6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008439fa  eb5b                 jmp 0x843a57
// 008439fc  3d00010000           cmp eax, 0x100
// 00843a01  7549                 jne 0x843a4c
// 00843a03  837c24481b           cmp dword ptr [esp + 0x48], 0x1b
// 00843a08  754d                 jne 0x843a57
// 00843a0a  85ed                 test ebp, ebp
// 00843a0c  7411                 je 0x843a1f
// 00843a0e  8b16                 mov edx, dword ptr [esi]
// 00843a10  8b442428             mov eax, dword ptr [esp + 0x28]
// 00843a14  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 00843a1a  50                   push eax
// 00843a1b  8bce                 mov ecx, esi
// 00843a1d  ffd2                 call edx
// 00843a1f  837c241000           cmp dword ptr [esp + 0x10], 0
// 00843a24  7411                 je 0x843a37
// 00843a26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00843a2a  8b06                 mov eax, dword ptr [esi]
// 00843a2c  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00843a32  51                   push ecx
// 00843a33  8bce                 mov ecx, esi
// 00843a35  ffd2                 call edx
// 00843a37  8bcf                 mov ecx, edi
// 00843a39  e822e7ffff           call 0x842160
// 00843a3e  ff1520cc9800         call dword ptr [0x98cc20]
// 00843a44  5d                   pop ebp
// 00843a45  5e                   pop esi
// 00843a46  5f                   pop edi
// 00843a47  5b                   pop ebx
// 00843a48  83c44c               add esp, 0x4c
// 00843a4b  c3                   ret 
// 00843a4c  8d542440             lea edx, [esp + 0x40]
// 00843a50  52                   push edx
// 00843a51  ff1594ca9800         call dword ptr [0x98ca94]
// 00843a57  ff1528cc9800         call dword ptr [0x98cc28]
// 00843a5d  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00843a60  0f848afeffff         je 0x8438f0
// 00843a66  ff1520cc9800         call dword ptr [0x98cc20]
// 00843a6c  5d                   pop ebp
// 00843a6d  5e                   pop esi
// 00843a6e  5f                   pop edi
// 00843a6f  5b                   pop ebx
// 00843a70  83c44c               add esp, 0x4c
// 00843a73  c3                   ret 
// 00843a74  8b442448             mov eax, dword ptr [esp + 0x48]
// 00843a78  50                   push eax
// 00843a79  e87c0cfbff           call 0x7f46fa
// 00843a7e  ff1520cc9800         call dword ptr [0x98cc20]
// 00843a84  5d                   pop ebp
// 00843a85  5e                   pop esi
// 00843a86  5f                   pop edi
// 00843a87  5b                   pop ebx
// 00843a88  83c44c               add esp, 0x4c
// 00843a8b  c3                   ret 
// copied from an identical function in another client (function ?TrackResize@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp