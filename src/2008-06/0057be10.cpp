// roc 2008-06 0057be10  unit: RBX::VInstance::?$SignalDesc  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057be10
//
// 0057be10  6aff                 push -1
// 0057be12  683c0d7d00           push 0x7d0d3c
// 0057be17  64a100000000         mov eax, dword ptr fs:[0]
// 0057be1d  50                   push eax
// 0057be1e  64892500000000       mov dword ptr fs:[0], esp
// 0057be25  83ec78               sub esp, 0x78
// 0057be28  53                   push ebx
// 0057be29  56                   push esi
// 0057be2a  c744240800000000     mov dword ptr [esp + 8], 0
// 0057be32  80bc24cc00000000     cmp byte ptr [esp + 0xcc], 0
// 0057be3a  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0057be45  8d8424b0000000       lea eax, [esp + 0xb0]
// 0057be4c  7455                 je 0x57bea3
// 0057be4e  83ec1c               sub esp, 0x1c
// 0057be51  8bcc                 mov ecx, esp
// 0057be53  89642428             mov dword ptr [esp + 0x28], esp
// 0057be57  50                   push eax
// 0057be58  ff155c248000         call dword ptr [0x80245c]
// 0057be5e  83ec1c               sub esp, 0x1c
// 0057be61  8d9424cc000000       lea edx, [esp + 0xcc]
// 0057be68  8bcc                 mov ecx, esp
// 0057be6a  89642448             mov dword ptr [esp + 0x48], esp
// 0057be6e  52                   push edx
// 0057be6f  c68424c400000003     mov byte ptr [esp + 0xc4], 3
// 0057be77  ff155c248000         call dword ptr [0x80245c]
// 0057be7d  8bb424c8000000       mov esi, dword ptr [esp + 0xc8]
// 0057be84  56                   push esi
// 0057be85  c68424c400000002     mov byte ptr [esp + 0xc4], 2
// 0057be8d  e88e92ffff           call 0x575120
// 0057be92  83c43c               add esp, 0x3c
// 0057be95  bb01000000           mov ebx, 1
// 0057be9a  895c2408             mov dword ptr [esp + 8], ebx
// 0057be9e  e997010000           jmp 0x57c03a
// 0057bea3  6a00                 push 0
// 0057bea5  83ec3c               sub esp, 0x3c
// 0057bea8  89642450             mov dword ptr [esp + 0x50], esp
// 0057beac  8bf4                 mov esi, esp
// 0057beae  83ec1c               sub esp, 0x1c
// 0057beb1  8bcc                 mov ecx, esp
// 0057beb3  8964246c             mov dword ptr [esp + 0x6c], esp
// 0057beb7  50                   push eax
// 0057beb8  ff155c248000         call dword ptr [0x80245c]
// 0057bebe  83ec1c               sub esp, 0x1c
// 0057bec1  8d94240c010000       lea edx, [esp + 0x10c]
// 0057bec8  8bcc                 mov ecx, esp
// 0057beca  89a42484000000       mov dword ptr [esp + 0x84], esp
// 0057bed1  52                   push edx
// 0057bed2  c684240401000004     mov byte ptr [esp + 0x104], 4
// 0057beda  ff155c248000         call dword ptr [0x80245c]
// 0057bee0  6820515700           push 0x575120
// 0057bee5  56                   push esi
// 0057bee6  c684240801000002     mov byte ptr [esp + 0x108], 2
// 0057beee  e8bdb5ffff           call 0x5774b0
// 0057bef3  83c440               add esp, 0x40
// 0057bef6  8d4c2460             lea ecx, [esp + 0x60]
// 0057befa  e8d1cbffff           call 0x578ad0
// 0057beff  6a00                 push 0
// 0057bf01  83ec38               sub esp, 0x38
// 0057bf04  8964244c             mov dword ptr [esp + 0x4c], esp
// 0057bf08  8bf4                 mov esi, esp
// 0057bf0a  6a00                 push 0
// 0057bf0c  6a03                 push 3
// 0057bf0e  83ec20               sub esp, 0x20
// 0057bf11  8bc4                 mov eax, esp
// 0057bf13  c70000000000         mov dword ptr [eax], 0
// 0057bf19  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0057bf20  c68424ec00000005     mov byte ptr [esp + 0xec], 5
// 0057bf28  89642474             mov dword ptr [esp + 0x74], esp
// 0057bf2c  85c9                 test ecx, ecx
// 0057bf2e  741e                 je 0x57bf4e
// 0057bf30  8908                 mov dword ptr [eax], ecx
// 0057bf32  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0057bf39  8b11                 mov edx, dword ptr [ecx]
// 0057bf3b  83c008               add eax, 8
// 0057bf3e  6a00                 push 0
// 0057bf40  50                   push eax
// 0057bf41  8d842494000000       lea eax, [esp + 0x94]
// 0057bf48  50                   push eax
// 0057bf49  ffd2                 call edx
// 0057bf4b  83c40c               add esp, 0xc
// 0057bf4e  68f0965600           push 0x5696f0
// 0057bf53  56                   push esi
// 0057bf54  e817baffff           call 0x577970
// 0057bf59  83c430               add esp, 0x30
// 0057bf5c  8d4c247c             lea ecx, [esp + 0x7c]
// 0057bf60  e8fbf7ffff           call 0x57b760
// 0057bf65  6aff                 push -1
// 0057bf67  6820048300           push 0x830420
// 0057bf6c  8d442448             lea eax, [esp + 0x48]
// 0057bf70  50                   push eax
// 0057bf71  8d4c246c             lea ecx, [esp + 0x6c]
// 0057bf75  b306                 mov bl, 6
// 0057bf77  51                   push ecx
// 0057bf78  889c2498000000       mov byte ptr [esp + 0x98], bl
// 0057bf7f  e88cb10100           call 0x597110
// 0057bf84  83c410               add esp, 0x10
// 0057bf87  50                   push eax
// 0057bf88  8d4c2418             lea ecx, [esp + 0x18]
// 0057bf8c  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 0057bf94  e8e7aa0200           call 0x5a6a80
// 0057bf99  8d4c2414             lea ecx, [esp + 0x14]
// 0057bf9d  e89ea80200           call 0x5a6840
// 0057bfa2  8b442460             mov eax, dword ptr [esp + 0x60]
// 0057bfa6  889c2488000000       mov byte ptr [esp + 0x88], bl
// 0057bfad  bb01000000           mov ebx, 1
// 0057bfb2  85c0                 test eax, eax
// 0057bfb4  7414                 je 0x57bfca
// 0057bfb6  8b00                 mov eax, dword ptr [eax]
// 0057bfb8  85c0                 test eax, eax
// 0057bfba  740e                 je 0x57bfca
// 0057bfbc  8d542468             lea edx, [esp + 0x68]
// 0057bfc0  53                   push ebx
// 0057bfc1  52                   push edx
// 0057bfc2  8bca                 mov ecx, edx
// 0057bfc4  51                   push ecx
// 0057bfc5  ffd0                 call eax
// 0057bfc7  83c40c               add esp, 0xc
// 0057bfca  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0057bfd1  6816b78000           push 0x80b716
// 0057bfd6  8bce                 mov ecx, esi
// 0057bfd8  ff1558248000         call dword ptr [0x802458]
// 0057bfde  8b442440             mov eax, dword ptr [esp + 0x40]
// 0057bfe2  895c2408             mov dword ptr [esp + 8], ebx
// 0057bfe6  c684248800000005     mov byte ptr [esp + 0x88], 5
// 0057bfee  85c0                 test eax, eax
// 0057bff0  741c                 je 0x57c00e
// 0057bff2  8b00                 mov eax, dword ptr [eax]
// 0057bff4  85c0                 test eax, eax
// 0057bff6  740e                 je 0x57c006
// 0057bff8  8d542448             lea edx, [esp + 0x48]
// 0057bffc  53                   push ebx
// 0057bffd  52                   push edx
// 0057bffe  8bca                 mov ecx, edx
// 0057c000  51                   push ecx
// 0057c001  ffd0                 call eax
// 0057c003  83c40c               add esp, 0xc
// 0057c006  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0057c00e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057c012  c684248800000002     mov byte ptr [esp + 0x88], 2
// 0057c01a  85c0                 test eax, eax
// 0057c01c  741c                 je 0x57c03a
// 0057c01e  8b00                 mov eax, dword ptr [eax]
// 0057c020  85c0                 test eax, eax
// 0057c022  740e                 je 0x57c032
// 0057c024  8d542428             lea edx, [esp + 0x28]
// 0057c028  53                   push ebx
// 0057c029  52                   push edx
// 0057c02a  8bca                 mov ecx, edx
// 0057c02c  51                   push ecx
// 0057c02d  ffd0                 call eax
// 0057c02f  83c40c               add esp, 0xc
// 0057c032  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057c03a  8d8c2494000000       lea ecx, [esp + 0x94]
// 0057c041  889c2488000000       mov byte ptr [esp + 0x88], bl
// 0057c048  ff1568248000         call dword ptr [0x802468]
// 0057c04e  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0057c055  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0057c05d  ff1568248000         call dword ptr [0x802468]
// 0057c063  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0057c06a  8bc6                 mov eax, esi
// 0057c06c  5e                   pop esi
// 0057c06d  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c074  5b                   pop ebx
// 0057c075  81c484000000         add esp, 0x84
// 0057c07b  c24000               ret 0x40
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ?httpPost@DataModel@RBX@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@0_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
