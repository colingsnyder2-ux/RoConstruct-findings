// roc 2010-06 008159d0  unit: CXTPToolTipContext::CHTMLToolTip  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008159d0
//
// 008159d0  6aff                 push -1
// 008159d2  688d489b00           push 0x9b488d
// 008159d7  64a100000000         mov eax, dword ptr fs:[0]
// 008159dd  50                   push eax
// 008159de  81ec5c010000         sub esp, 0x15c
// 008159e4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008159e9  33c4                 xor eax, esp
// 008159eb  89842458010000       mov dword ptr [esp + 0x158], eax
// 008159f2  53                   push ebx
// 008159f3  55                   push ebp
// 008159f4  56                   push esi
// 008159f5  57                   push edi
// 008159f6  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008159fb  33c4                 xor eax, esp
// 008159fd  50                   push eax
// 008159fe  8d842470010000       lea eax, [esp + 0x170]
// 00815a05  64a300000000         mov dword ptr fs:[0], eax
// 00815a0b  8bf1                 mov esi, ecx
// 00815a0d  89742414             mov dword ptr [esp + 0x14], esi
// 00815a11  e868731600           call 0x97cd7e
// 00815a16  33db                 xor ebx, ebx
// 00815a18  8dbe98000000         lea edi, [esi + 0x98]
// 00815a1e  c7066c22a600         mov dword ptr [esi], 0xa6226c
// 00815a24  899c2478010000       mov dword ptr [esp + 0x178], ebx
// 00815a2b  895f04               mov dword ptr [edi + 4], ebx
// 00815a2e  c707080ea100         mov dword ptr [edi], 0xa10e08
// 00815a34  8daea0000000         lea ebp, [esi + 0xa0]
// 00815a3a  895d04               mov dword ptr [ebp + 4], ebx
// 00815a3d  c74500080ea100       mov dword ptr [ebp], 0xa10e08
// 00815a44  53                   push ebx
// 00815a45  c684247c01000002     mov byte ptr [esp + 0x17c], 2
// 00815a4d  895e60               mov dword ptr [esi + 0x60], ebx
// 00815a50  895e20               mov dword ptr [esi + 0x20], ebx
// 00815a53  895e24               mov dword ptr [esi + 0x24], ebx
// 00815a56  c7462801000000       mov dword ptr [esi + 0x28], 1
// 00815a5d  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00815a60  895e30               mov dword ptr [esi + 0x30], ebx
// 00815a63  ff156cba9e00         call dword ptr [0x9eba6c]
// 00815a69  99                   cdq 
// 00815a6a  2bc2                 sub eax, edx
// 00815a6c  d1f8                 sar eax, 1
// 00815a6e  6a2c                 push 0x2c
// 00815a70  89463c               mov dword ptr [esi + 0x3c], eax
// 00815a73  8d4664               lea eax, [esi + 0x64]
// 00815a76  53                   push ebx
// 00815a77  50                   push eax
// 00815a78  e86731f9ff           call 0x7a8be4
// 00815a7d  83c40c               add esp, 0xc
// 00815a80  e8eb9dfdff           call 0x7ef870
// 00815a85  8bc8                 mov ecx, eax
// 00815a87  e8c4adfdff           call 0x7f0850
// 00815a8c  53                   push ebx
// 00815a8d  53                   push ebx
// 00815a8e  53                   push ebx
// 00815a8f  894634               mov dword ptr [esi + 0x34], eax
// 00815a92  83c8ff               or eax, 0xffffffff
// 00815a95  53                   push ebx
// 00815a96  8d4e44               lea ecx, [esi + 0x44]
// 00815a99  51                   push ecx
// 00815a9a  898690000000         mov dword ptr [esi + 0x90], eax
// 00815aa0  898694000000         mov dword ptr [esi + 0x94], eax
// 00815aa6  c7463801000000       mov dword ptr [esi + 0x38], 1
// 00815aad  c7464002000000       mov dword ptr [esi + 0x40], 2
// 00815ab4  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00815aba  6854010000           push 0x154
// 00815abf  83c8ff               or eax, 0xffffffff
// 00815ac2  8d54241c             lea edx, [esp + 0x1c]
// 00815ac6  53                   push ebx
// 00815ac7  52                   push edx
// 00815ac8  894658               mov dword ptr [esi + 0x58], eax
// 00815acb  894654               mov dword ptr [esi + 0x54], eax
// 00815ace  89465c               mov dword ptr [esi + 0x5c], eax
// 00815ad1  e80e31f9ff           call 0x7a8be4
// 00815ad6  83c40c               add esp, 0xc
// 00815ad9  53                   push ebx
// 00815ada  8d44241c             lea eax, [esp + 0x1c]
// 00815ade  50                   push eax
// 00815adf  6854010000           push 0x154
// 00815ae4  6a29                 push 0x29
// 00815ae6  c744242854010000     mov dword ptr [esp + 0x28], 0x154
// 00815aee  ff1594ba9e00         call dword ptr [0x9eba94]
// 00815af4  8b1d70a19e00         mov ebx, dword ptr [0x9ea170]
// 00815afa  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00815b01  51                   push ecx
// 00815b02  c784240801000090010000 mov dword ptr [esp + 0x108], 0x190
// 00815b0d  ffd3                 call ebx
// 00815b0f  50                   push eax
// 00815b10  8bcf                 mov ecx, edi
// 00815b12  e85324f9ff           call 0x7a7f6a
// 00815b17  8d9424f4000000       lea edx, [esp + 0xf4]
// 00815b1e  52                   push edx
// 00815b1f  c7842408010000bc020000 mov dword ptr [esp + 0x108], 0x2bc
// 00815b2a  ffd3                 call ebx
// 00815b2c  50                   push eax
// 00815b2d  8bcd                 mov ecx, ebp
// 00815b2f  e83624f9ff           call 0x7a7f6a
// 00815b34  8bc6                 mov eax, esi
// 00815b36  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 00815b3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00815b44  59                   pop ecx
// 00815b45  5f                   pop edi
// 00815b46  5e                   pop esi
// 00815b47  5d                   pop ebp
// 00815b48  5b                   pop ebx
// 00815b49  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00815b50  33cc                 xor ecx, esp
// 00815b52  e87d39f9ff           call 0x7a94d4
// 00815b57  81c468010000         add esp, 0x168
// 00815b5d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolTipContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp