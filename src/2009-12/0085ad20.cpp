// roc 2009-12 0085ad20  unit: CXTPStatusBarPane  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ad20
//
// 0085ad20  83ec40               sub esp, 0x40
// 0085ad23  a10052b600           mov eax, dword ptr [0xb65200]
// 0085ad28  33c4                 xor eax, esp
// 0085ad2a  8944243c             mov dword ptr [esp + 0x3c], eax
// 0085ad2e  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085ad32  8b5004               mov edx, dword ptr [eax + 4]
// 0085ad35  56                   push esi
// 0085ad36  57                   push edi
// 0085ad37  8bf9                 mov edi, ecx
// 0085ad39  8d4c2408             lea ecx, [esp + 8]
// 0085ad3d  51                   push ecx
// 0085ad3e  6a3c                 push 0x3c
// 0085ad40  52                   push edx
// 0085ad41  ff155cb19800         call dword ptr [0x98b15c]
// 0085ad47  8db7b0000000         lea esi, [edi + 0xb0]
// 0085ad4d  8bce                 mov ecx, esi
// 0085ad4f  e8ca90f9ff           call 0x7f3e1e
// 0085ad54  8d442408             lea eax, [esp + 8]
// 0085ad58  50                   push eax
// 0085ad59  ff1528b19800         call dword ptr [0x98b128]
// 0085ad5f  50                   push eax
// 0085ad60  8bce                 mov ecx, esi
// 0085ad62  e8c390f9ff           call 0x7f3e2a
// 0085ad67  85f6                 test esi, esi
// 0085ad69  7403                 je 0x85ad6e
// 0085ad6b  8b7604               mov esi, dword ptr [esi + 4]
// 0085ad6e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0085ad72  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085ad75  51                   push ecx
// 0085ad76  56                   push esi
// 0085ad77  6a30                 push 0x30
// 0085ad79  52                   push edx
// 0085ad7a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085ad80  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0085ad84  5f                   pop edi
// 0085ad85  5e                   pop esi
// 0085ad86  33cc                 xor ecx, esp
// 0085ad88  e80da6f9ff           call 0x7f539a
// 0085ad8d  83c440               add esp, 0x40
// 0085ad90  c20800               ret 8
// copied from an identical function in another client (function ?SetFont@CXTPStatusBar@@QAEXPAVCFont@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp