// roc 2008-06 004829e0  unit: G3D::Win32Window  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004829e0
//
// 004829e0  6aff                 push -1
// 004829e2  68fe537c00           push 0x7c53fe
// 004829e7  64a100000000         mov eax, dword ptr fs:[0]
// 004829ed  50                   push eax
// 004829ee  64892500000000       mov dword ptr fs:[0], esp
// 004829f5  51                   push ecx
// 004829f6  53                   push ebx
// 004829f7  33db                 xor ebx, ebx
// 004829f9  56                   push esi
// 004829fa  8bf1                 mov esi, ecx
// 004829fc  895e08               mov dword ptr [esi + 8], ebx
// 004829ff  895e0c               mov dword ptr [esi + 0xc], ebx
// 00482a02  895e04               mov dword ptr [esi + 4], ebx
// 00482a05  57                   push edi
// 00482a06  8974240c             mov dword ptr [esp + 0xc], esi
// 00482a0a  895e10               mov dword ptr [esi + 0x10], ebx
// 00482a0d  895e14               mov dword ptr [esi + 0x14], ebx
// 00482a10  895e18               mov dword ptr [esi + 0x18], ebx
// 00482a13  d9ee                 fldz 
// 00482a15  c7062cf58100         mov dword ptr [esi], 0x81f52c
// 00482a1b  d9561c               fst dword ptr [esi + 0x1c]
// 00482a1e  8d7e28               lea edi, [esi + 0x28]
// 00482a21  d95e20               fstp dword ptr [esi + 0x20]
// 00482a24  8bcf                 mov ecx, edi
// 00482a26  895c2418             mov dword ptr [esp + 0x18], ebx
// 00482a2a  e8b182fdff           call 0x45ace0
// 00482a2f  8d8e88000000         lea ecx, [esi + 0x88]
// 00482a35  c644241801           mov byte ptr [esp + 0x18], 1
// 00482a3a  ff1560248000         call dword ptr [0x802460]
// 00482a40  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 00482a46  c786b801000014f38100 mov dword ptr [esi + 0x1b8], 0x81f314
// 00482a50  6a10                 push 0x10
// 00482a52  6a28                 push 0x28
// 00482a54  c644242002           mov byte ptr [esp + 0x20], 2
// 00482a59  c786bc010000f8f08100 mov dword ptr [esi + 0x1bc], 0x81f0f8
// 00482a63  c786c80100000a000000 mov dword ptr [esi + 0x1c8], 0xa
// 00482a6d  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 00482a73  e8085b0800           call 0x508580
// 00482a78  8b8ec8010000         mov ecx, dword ptr [esi + 0x1c8]
// 00482a7e  03c9                 add ecx, ecx
// 00482a80  03c9                 add ecx, ecx
// 00482a82  51                   push ecx
// 00482a83  53                   push ebx
// 00482a84  50                   push eax
// 00482a85  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00482a8b  e8a05f0800           call 0x508a30
// 00482a90  83c414               add esp, 0x14
// 00482a93  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 00482a99  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 00482a9f  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 00482aa5  c644241804           mov byte ptr [esp + 0x18], 4
// 00482aaa  889eec010000         mov byte ptr [esi + 0x1ec], bl
// 00482ab0  e88bf4ffff           call 0x481f40
// 00482ab5  ff1530228000         call dword ptr [0x802230]
// 00482abb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00482abf  52                   push edx
// 00482ac0  8bcf                 mov ecx, edi
// 00482ac2  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 00482ac8  e853bfffff           call 0x47ea20
// 00482acd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00482ad1  50                   push eax
// 00482ad2  ff15b42c8000         call dword ptr [0x802cb4]
// 00482ad8  53                   push ebx
// 00482ad9  50                   push eax
// 00482ada  8bce                 mov ecx, esi
// 00482adc  e8efeaffff           call 0x4815d0
// 00482ae1  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 00482ae7  ff15202e8000         call dword ptr [0x802e20]
// 00482aed  3bf8                 cmp edi, eax
// 00482aef  7518                 jne 0x482b09
// 00482af1  57                   push edi
// 00482af2  ff153c2d8000         call dword ptr [0x802d3c]
// 00482af8  85c0                 test eax, eax
// 00482afa  740d                 je 0x482b09
// 00482afc  b801000000           mov eax, 1
// 00482b01  8886ae000000         mov byte ptr [esi + 0xae], al
// 00482b07  eb06                 jmp 0x482b0f
// 00482b09  889eae000000         mov byte ptr [esi + 0xae], bl
// 00482b0f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00482b13  5f                   pop edi
// 00482b14  8bc6                 mov eax, esi
// 00482b16  5e                   pop esi
// 00482b17  5b                   pop ebx
// 00482b18  64890d00000000       mov dword ptr fs:[0], ecx
// 00482b1f  83c410               add esp, 0x10
// 00482b22  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0Win32Window@G3D@@AAE@ABVSettings@GWindow@1@PAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
