// roc 2012-06 004637d0  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004637d0
//
// 004637d0  6aff                 push -1
// 004637d2  68e0f9a900           push 0xa9f9e0
// 004637d7  64a100000000         mov eax, dword ptr fs:[0]
// 004637dd  50                   push eax
// 004637de  64892500000000       mov dword ptr fs:[0], esp
// 004637e5  83ec18               sub esp, 0x18
// 004637e8  53                   push ebx
// 004637e9  56                   push esi
// 004637ea  33db                 xor ebx, ebx
// 004637ec  57                   push edi
// 004637ed  8bf1                 mov esi, ecx
// 004637ef  895c240c             mov dword ptr [esp + 0xc], ebx
// 004637f3  895c2410             mov dword ptr [esp + 0x10], ebx
// 004637f7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004637fb  8d44240c             lea eax, [esp + 0xc]
// 004637ff  50                   push eax
// 00463800  8bcf                 mov ecx, edi
// 00463802  895c2430             mov dword ptr [esp + 0x30], ebx
// 00463806  e8a5e52800           call 0x6f1db0
// 0046380b  84c0                 test al, al
// 0046380d  0f84eb000000         je 0x4638fe
// 00463813  8d4c240c             lea ecx, [esp + 0xc]
// 00463817  e824cc2e00           call 0x750440
// 0046381c  84c0                 test al, al
// 0046381e  7516                 jne 0x463836
// 00463820  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00463824  8b11                 mov edx, dword ptr [ecx]
// 00463826  8b12                 mov edx, dword ptr [edx]
// 00463828  8d44240c             lea eax, [esp + 0xc]
// 0046382c  50                   push eax
// 0046382d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00463831  50                   push eax
// 00463832  ffd2                 call edx
// 00463834  eb78                 jmp 0x4638ae
// 00463836  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0046383a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0046383e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00463842  89442414             mov dword ptr [esp + 0x14], eax
// 00463846  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046384a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0046384e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00463852  89442420             mov dword ptr [esp + 0x20], eax
// 00463856  3bc3                 cmp eax, ebx
// 00463858  740c                 je 0x463866
// 0046385a  83c004               add eax, 4
// 0046385d  b901000000           mov ecx, 1
// 00463862  f00fc108             lock xadd dword ptr [eax], ecx
// 00463866  8d542414             lea edx, [esp + 0x14]
// 0046386a  52                   push edx
// 0046386b  8d4e04               lea ecx, [esi + 4]
// 0046386e  c644243001           mov byte ptr [esp + 0x30], 1
// 00463873  e838faffff           call 0x4632b0
// 00463878  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046387c  885c242c             mov byte ptr [esp + 0x2c], bl
// 00463880  3bf3                 cmp esi, ebx
// 00463882  742a                 je 0x4638ae
// 00463884  8d4604               lea eax, [esi + 4]
// 00463887  83c9ff               or ecx, 0xffffffff
// 0046388a  f00fc108             lock xadd dword ptr [eax], ecx
// 0046388e  751e                 jne 0x4638ae
// 00463890  8b16                 mov edx, dword ptr [esi]
// 00463892  8b4204               mov eax, dword ptr [edx + 4]
// 00463895  8bce                 mov ecx, esi
// 00463897  ffd0                 call eax
// 00463899  8d4e08               lea ecx, [esi + 8]
// 0046389c  83caff               or edx, 0xffffffff
// 0046389f  f00fc111             lock xadd dword ptr [ecx], edx
// 004638a3  7509                 jne 0x4638ae
// 004638a5  8b06                 mov eax, dword ptr [esi]
// 004638a7  8b5008               mov edx, dword ptr [eax + 8]
// 004638aa  8bce                 mov ecx, esi
// 004638ac  ffd2                 call edx
// 004638ae  8b742410             mov esi, dword ptr [esp + 0x10]
// 004638b2  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004638ba  3bf3                 cmp esi, ebx
// 004638bc  742a                 je 0x4638e8
// 004638be  8d4604               lea eax, [esi + 4]
// 004638c1  83c9ff               or ecx, 0xffffffff
// 004638c4  f00fc108             lock xadd dword ptr [eax], ecx
// 004638c8  751e                 jne 0x4638e8
// 004638ca  8b16                 mov edx, dword ptr [esi]
// 004638cc  8b4204               mov eax, dword ptr [edx + 4]
// 004638cf  8bce                 mov ecx, esi
// 004638d1  ffd0                 call eax
// 004638d3  8d4e08               lea ecx, [esi + 8]
// 004638d6  83caff               or edx, 0xffffffff
// 004638d9  f00fc111             lock xadd dword ptr [ecx], edx
// 004638dd  7509                 jne 0x4638e8
// 004638df  8b06                 mov eax, dword ptr [esi]
// 004638e1  8b5008               mov edx, dword ptr [eax + 8]
// 004638e4  8bce                 mov ecx, esi
// 004638e6  ffd2                 call edx
// 004638e8  5f                   pop edi
// 004638e9  5e                   pop esi
// 004638ea  b001                 mov al, 1
// 004638ec  5b                   pop ebx
// 004638ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004638f1  64890d00000000       mov dword ptr fs:[0], ecx
// 004638f8  83c424               add esp, 0x24
// 004638fb  c20c00               ret 0xc
// 004638fe  a1d801e300           mov eax, dword ptr [0xe301d8]
// 00463903  50                   push eax
// 00463904  8bcf                 mov ecx, edi
// 00463906  e8e5de2800           call 0x6f17f0
// 0046390b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046390f  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00463917  84c0                 test al, al
// 00463919  7444                 je 0x46395f
// 0046391b  3bf3                 cmp esi, ebx
// 0046391d  742a                 je 0x463949
// 0046391f  8d4e04               lea ecx, [esi + 4]
// 00463922  83caff               or edx, 0xffffffff
// 00463925  f00fc111             lock xadd dword ptr [ecx], edx
// 00463929  751e                 jne 0x463949
// 0046392b  8b06                 mov eax, dword ptr [esi]
// 0046392d  8b5004               mov edx, dword ptr [eax + 4]
// 00463930  8bce                 mov ecx, esi
// 00463932  ffd2                 call edx
// 00463934  8d4608               lea eax, [esi + 8]
// 00463937  83c9ff               or ecx, 0xffffffff
// 0046393a  f00fc108             lock xadd dword ptr [eax], ecx
// 0046393e  7509                 jne 0x463949
// 00463940  8b16                 mov edx, dword ptr [esi]
// 00463942  8b4208               mov eax, dword ptr [edx + 8]
// 00463945  8bce                 mov ecx, esi
// 00463947  ffd0                 call eax
// 00463949  5f                   pop edi
// 0046394a  5e                   pop esi
// 0046394b  b001                 mov al, 1
// 0046394d  5b                   pop ebx
// 0046394e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00463952  64890d00000000       mov dword ptr fs:[0], ecx
// 00463959  83c424               add esp, 0x24
// 0046395c  c20c00               ret 0xc
// 0046395f  3bf3                 cmp esi, ebx
// 00463961  742a                 je 0x46398d
// 00463963  8d4e04               lea ecx, [esi + 4]
// 00463966  83caff               or edx, 0xffffffff
// 00463969  f00fc111             lock xadd dword ptr [ecx], edx
// 0046396d  751e                 jne 0x46398d
// 0046396f  8b06                 mov eax, dword ptr [esi]
// 00463971  8b5004               mov edx, dword ptr [eax + 4]
// 00463974  8bce                 mov ecx, esi
// 00463976  ffd2                 call edx
// 00463978  8d4608               lea eax, [esi + 8]
// 0046397b  83c9ff               or ecx, 0xffffffff
// 0046397e  f00fc108             lock xadd dword ptr [eax], ecx
// 00463982  7509                 jne 0x46398d
// 00463984  8b16                 mov edx, dword ptr [esi]
// 00463986  8b4208               mov eax, dword ptr [edx + 8]
// 00463989  8bce                 mov ecx, esi
// 0046398b  ffd0                 call eax
// 0046398d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00463991  5f                   pop edi
// 00463992  5e                   pop esi
// 00463993  32c0                 xor al, al
// 00463995  5b                   pop ebx
// 00463996  64890d00000000       mov dword ptr fs:[0], ecx
// 0046399d  83c424               add esp, 0x24
// 004639a0  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
