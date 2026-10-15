// roc 2008-06 0057bc00  unit: RBX::VInstance::?$SignalDesc  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057bc00
//
// 0057bc00  6aff                 push -1
// 0057bc02  68cb0c7d00           push 0x7d0ccb
// 0057bc07  64a100000000         mov eax, dword ptr fs:[0]
// 0057bc0d  50                   push eax
// 0057bc0e  64892500000000       mov dword ptr fs:[0], esp
// 0057bc15  83ec74               sub esp, 0x74
// 0057bc18  56                   push esi
// 0057bc19  c744240400000000     mov dword ptr [esp + 4], 0
// 0057bc21  80bc24a800000000     cmp byte ptr [esp + 0xa8], 0
// 0057bc29  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 0057bc34  742c                 je 0x57bc62
// 0057bc36  83ec1c               sub esp, 0x1c
// 0057bc39  8d8424a8000000       lea eax, [esp + 0xa8]
// 0057bc40  8bcc                 mov ecx, esp
// 0057bc42  89642424             mov dword ptr [esp + 0x24], esp
// 0057bc46  50                   push eax
// 0057bc47  ff155c248000         call dword ptr [0x80245c]
// 0057bc4d  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0057bc54  56                   push esi
// 0057bc55  e80694ffff           call 0x575060
// 0057bc5a  83c420               add esp, 0x20
// 0057bc5d  e96e010000           jmp 0x57bdd0
// 0057bc62  83bc24a000000000     cmp dword ptr [esp + 0xa0], 0
// 0057bc6a  0f864c010000         jbe 0x57bdbc
// 0057bc70  6a00                 push 0
// 0057bc72  83ec20               sub esp, 0x20
// 0057bc75  8964242c             mov dword ptr [esp + 0x2c], esp
// 0057bc79  8bf4                 mov esi, esp
// 0057bc7b  83ec1c               sub esp, 0x1c
// 0057bc7e  8d9424cc000000       lea edx, [esp + 0xcc]
// 0057bc85  8bcc                 mov ecx, esp
// 0057bc87  89642448             mov dword ptr [esp + 0x48], esp
// 0057bc8b  52                   push edx
// 0057bc8c  ff155c248000         call dword ptr [0x80245c]
// 0057bc92  6860505700           push 0x575060
// 0057bc97  56                   push esi
// 0057bc98  e873b4ffff           call 0x577110
// 0057bc9d  83c424               add esp, 0x24
// 0057bca0  8d4c243c             lea ecx, [esp + 0x3c]
// 0057bca4  e877cdffff           call 0x578a20
// 0057bca9  6a00                 push 0
// 0057bcab  83ec38               sub esp, 0x38
// 0057bcae  89642444             mov dword ptr [esp + 0x44], esp
// 0057bcb2  8bf4                 mov esi, esp
// 0057bcb4  6a00                 push 0
// 0057bcb6  6a03                 push 3
// 0057bcb8  83ec20               sub esp, 0x20
// 0057bcbb  8bc4                 mov eax, esp
// 0057bcbd  c70000000000         mov dword ptr [eax], 0
// 0057bcc3  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0057bcc7  c68424e400000002     mov byte ptr [esp + 0xe4], 2
// 0057bccf  8964246c             mov dword ptr [esp + 0x6c], esp
// 0057bcd3  85c9                 test ecx, ecx
// 0057bcd5  741b                 je 0x57bcf2
// 0057bcd7  8908                 mov dword ptr [eax], ecx
// 0057bcd9  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0057bcdd  8b11                 mov edx, dword ptr [ecx]
// 0057bcdf  83c008               add eax, 8
// 0057bce2  6a00                 push 0
// 0057bce4  50                   push eax
// 0057bce5  8d84248c000000       lea eax, [esp + 0x8c]
// 0057bcec  50                   push eax
// 0057bced  ffd2                 call edx
// 0057bcef  83c40c               add esp, 0xc
// 0057bcf2  68f0965600           push 0x5696f0
// 0057bcf7  56                   push esi
// 0057bcf8  e873bcffff           call 0x577970
// 0057bcfd  83c430               add esp, 0x30
// 0057bd00  8d4c2474             lea ecx, [esp + 0x74]
// 0057bd04  e857faffff           call 0x57b760
// 0057bd09  6aff                 push -1
// 0057bd0b  6814048300           push 0x830414
// 0057bd10  8d442440             lea eax, [esp + 0x40]
// 0057bd14  50                   push eax
// 0057bd15  8d4c2464             lea ecx, [esp + 0x64]
// 0057bd19  51                   push ecx
// 0057bd1a  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0057bd22  e8e9b30100           call 0x597110
// 0057bd27  83c410               add esp, 0x10
// 0057bd2a  50                   push eax
// 0057bd2b  8d4c2410             lea ecx, [esp + 0x10]
// 0057bd2f  c684248400000004     mov byte ptr [esp + 0x84], 4
// 0057bd37  e844ad0200           call 0x5a6a80
// 0057bd3c  8d4c240c             lea ecx, [esp + 0xc]
// 0057bd40  e8fbaa0200           call 0x5a6840
// 0057bd45  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057bd49  c684248000000003     mov byte ptr [esp + 0x80], 3
// 0057bd51  85c0                 test eax, eax
// 0057bd53  7415                 je 0x57bd6a
// 0057bd55  8b00                 mov eax, dword ptr [eax]
// 0057bd57  85c0                 test eax, eax
// 0057bd59  740f                 je 0x57bd6a
// 0057bd5b  8d542460             lea edx, [esp + 0x60]
// 0057bd5f  6a01                 push 1
// 0057bd61  52                   push edx
// 0057bd62  8bca                 mov ecx, edx
// 0057bd64  51                   push ecx
// 0057bd65  ffd0                 call eax
// 0057bd67  83c40c               add esp, 0xc
// 0057bd6a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057bd6e  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0057bd76  85c0                 test eax, eax
// 0057bd78  741d                 je 0x57bd97
// 0057bd7a  8b00                 mov eax, dword ptr [eax]
// 0057bd7c  85c0                 test eax, eax
// 0057bd7e  740f                 je 0x57bd8f
// 0057bd80  8d542440             lea edx, [esp + 0x40]
// 0057bd84  6a01                 push 1
// 0057bd86  52                   push edx
// 0057bd87  8bca                 mov ecx, edx
// 0057bd89  51                   push ecx
// 0057bd8a  ffd0                 call eax
// 0057bd8c  83c40c               add esp, 0xc
// 0057bd8f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0057bd97  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057bd9b  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0057bda3  85c0                 test eax, eax
// 0057bda5  7415                 je 0x57bdbc
// 0057bda7  8b00                 mov eax, dword ptr [eax]
// 0057bda9  85c0                 test eax, eax
// 0057bdab  740f                 je 0x57bdbc
// 0057bdad  8d542420             lea edx, [esp + 0x20]
// 0057bdb1  6a01                 push 1
// 0057bdb3  52                   push edx
// 0057bdb4  8bca                 mov ecx, edx
// 0057bdb6  51                   push ecx
// 0057bdb7  ffd0                 call eax
// 0057bdb9  83c40c               add esp, 0xc
// 0057bdbc  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0057bdc3  6816b78000           push 0x80b716
// 0057bdc8  8bce                 mov ecx, esi
// 0057bdca  ff1558248000         call dword ptr [0x802458]
// 0057bdd0  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0057bdd7  c744240401000000     mov dword ptr [esp + 4], 1
// 0057bddf  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0057bde7  ff1568248000         call dword ptr [0x802468]
// 0057bded  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0057bdf1  8bc6                 mov eax, esi
// 0057bdf3  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bdfa  5e                   pop esi
// 0057bdfb  81c480000000         add esp, 0x80
// 0057be01  c22400               ret 0x24
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ?httpGet@DataModel@RBX@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
