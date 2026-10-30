// roc 2009-12 008c5a50  unit: CXTPControlCustom  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5a50
//
// 008c5a50  6aff                 push -1
// 008c5a52  6856459600           push 0x964556
// 008c5a57  64a100000000         mov eax, dword ptr fs:[0]
// 008c5a5d  50                   push eax
// 008c5a5e  51                   push ecx
// 008c5a5f  56                   push esi
// 008c5a60  57                   push edi
// 008c5a61  a10052b600           mov eax, dword ptr [0xb65200]
// 008c5a66  33c4                 xor eax, esp
// 008c5a68  50                   push eax
// 008c5a69  8d442410             lea eax, [esp + 0x10]
// 008c5a6d  64a300000000         mov dword ptr fs:[0], eax
// 008c5a73  8bf1                 mov esi, ecx
// 008c5a75  8974240c             mov dword ptr [esp + 0xc], esi
// 008c5a79  8dbe74010000         lea edi, [esi + 0x174]
// 008c5a7f  c7062499a000         mov dword ptr [esi], 0xa09924
// 008c5a85  c74620c498a000       mov dword ptr [esi + 0x20], 0xa098c4
// 008c5a8c  c707b898a000         mov dword ptr [edi], 0xa098b8
// 008c5a92  57                   push edi
// 008c5a93  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 008c5a9b  e840aefaff           call 0x8708e0
// 008c5aa0  8bc8                 mov ecx, eax
// 008c5aa2  e869b2faff           call 0x870d10
// 008c5aa7  8bcf                 mov ecx, edi
// 008c5aa9  c644241800           mov byte ptr [esp + 0x18], 0
// 008c5aae  e8fda9faff           call 0x8704b0
// 008c5ab3  8bce                 mov ecx, esi
// 008c5ab5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008c5abd  e80ea7fcff           call 0x8901d0
// 008c5ac2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c5ac6  64890d00000000       mov dword ptr fs:[0], ecx
// 008c5acd  59                   pop ecx
// 008c5ace  5f                   pop edi
// 008c5acf  5e                   pop esi
// 008c5ad0  83c410               add esp, 0x10
// 008c5ad3  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlCustom@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlCustom.cpp