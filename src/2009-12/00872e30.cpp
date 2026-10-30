// roc 2009-12 00872e30  unit: CXTPRibbonTheme  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872e30
//
// 00872e30  83ec30               sub esp, 0x30
// 00872e33  837c244000           cmp dword ptr [esp + 0x40], 0
// 00872e38  53                   push ebx
// 00872e39  56                   push esi
// 00872e3a  57                   push edi
// 00872e3b  0f84bd000000         je 0x872efe
// 00872e41  8b742448             mov esi, dword ptr [esp + 0x48]
// 00872e45  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00872e4b  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00872e51  8944241c             mov dword ptr [esp + 0x1c], eax
// 00872e55  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00872e5b  89542420             mov dword ptr [esp + 0x20], edx
// 00872e5f  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00872e65  682013a000           push 0xa01320
// 00872e6a  89442428             mov dword ptr [esp + 0x28], eax
// 00872e6e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00872e72  e889be0000           call 0x87ed00
// 00872e77  8bf8                 mov edi, eax
// 00872e79  8b06                 mov eax, dword ptr [esi]
// 00872e7b  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00872e7e  8bce                 mov ecx, esi
// 00872e80  33db                 xor ebx, ebx
// 00872e82  ffd2                 call edx
// 00872e84  85c0                 test eax, eax
// 00872e86  7405                 je 0x872e8d
// 00872e88  bb01000000           mov ebx, 1
// 00872e8d  8b06                 mov eax, dword ptr [esi]
// 00872e8f  8b5078               mov edx, dword ptr [eax + 0x78]
// 00872e92  8bce                 mov ecx, esi
// 00872e94  ffd2                 call edx
// 00872e96  b902000000           mov ecx, 2
// 00872e9b  85c0                 test eax, eax
// 00872e9d  7402                 je 0x872ea1
// 00872e9f  8bd9                 mov ebx, ecx
// 00872ea1  85ff                 test edi, edi
// 00872ea3  7459                 je 0x872efe
// 00872ea5  6a04                 push 4
// 00872ea7  53                   push ebx
// 00872ea8  8d442434             lea eax, [esp + 0x34]
// 00872eac  894c2418             mov dword ptr [esp + 0x18], ecx
// 00872eb0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00872eb4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00872eb8  50                   push eax
// 00872eb9  8bcf                 mov ecx, edi
// 00872ebb  c744241803000000     mov dword ptr [esp + 0x18], 3
// 00872ec3  e8f8d90600           call 0x8e08c0
// 00872ec8  8b10                 mov edx, dword ptr [eax]
// 00872eca  68ff00ff00           push 0xff00ff
// 00872ecf  8d4c2410             lea ecx, [esp + 0x10]
// 00872ed3  51                   push ecx
// 00872ed4  83ec10               sub esp, 0x10
// 00872ed7  8bcc                 mov ecx, esp
// 00872ed9  8911                 mov dword ptr [ecx], edx
// 00872edb  8b5004               mov edx, dword ptr [eax + 4]
// 00872ede  895104               mov dword ptr [ecx + 4], edx
// 00872ee1  8b5008               mov edx, dword ptr [eax + 8]
// 00872ee4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00872ee7  895108               mov dword ptr [ecx + 8], edx
// 00872eea  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00872eee  89410c               mov dword ptr [ecx + 0xc], eax
// 00872ef1  8d4c2434             lea ecx, [esp + 0x34]
// 00872ef5  51                   push ecx
// 00872ef6  52                   push edx
// 00872ef7  8bcf                 mov ecx, edi
// 00872ef9  e802df0600           call 0x8e0e00
// 00872efe  8b442440             mov eax, dword ptr [esp + 0x40]
// 00872f02  5f                   pop edi
// 00872f03  5e                   pop esi
// 00872f04  c7000f000000         mov dword ptr [eax], 0xf
// 00872f0a  c740040e000000       mov dword ptr [eax + 4], 0xe
// 00872f11  5b                   pop ebx
// 00872f12  83c430               add esp, 0x30
// 00872f15  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlGroupOption@CXTPRibbonTheme@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp