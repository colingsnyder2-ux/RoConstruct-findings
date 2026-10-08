// roc 2007-03 004fd890  unit: seg_004f0000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd890
//
// 004fd890  83ec0c               sub esp, 0xc
// 004fd893  53                   push ebx
// 004fd894  d97c2406             fnstcw word ptr [esp + 6]
// 004fd898  0fb7442406           movzx eax, word ptr [esp + 6]
// 004fd89d  56                   push esi
// 004fd89e  8bf1                 mov esi, ecx
// 004fd8a0  0d000c0000           or eax, 0xc00
// 004fd8a5  8944240c             mov dword ptr [esp + 0xc], eax
// 004fd8a9  db4634               fild dword ptr [esi + 0x34]
// 004fd8ac  57                   push edi
// 004fd8ad  68e8fe7900           push 0x79fee8
// 004fd8b2  bf64000000           mov edi, 0x64
// 004fd8b7  dc0df8fe7900         fmul qword ptr [0x79fef8]
// 004fd8bd  56                   push esi
// 004fd8be  d96c2418             fldcw word ptr [esp + 0x18]
// 004fd8c2  33db                 xor ebx, ebx
// 004fd8c4  df7c2418             fistp qword ptr [esp + 0x18]
// 004fd8c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fd8cc  2bf8                 sub edi, eax
// 004fd8ce  d96c2416             fldcw word ptr [esp + 0x16]
// 004fd8d2  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fd8d8  83c408               add esp, 8
// 004fd8db  84c0                 test al, al
// 004fd8dd  7508                 jne 0x4fd8e7
// 004fd8df  81ff0084d717         cmp edi, 0x17d78400
// 004fd8e5  7322                 jae 0x4fd909
// 004fd8e7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004fd8ea  57                   push edi
// 004fd8eb  51                   push ecx
// 004fd8ec  e81f69ffff           call 0x4f4210
// 004fd8f1  8bd8                 mov ebx, eax
// 004fd8f3  83c408               add esp, 8
// 004fd8f6  85db                 test ebx, ebx
// 004fd8f8  740f                 je 0x4fd909
// 004fd8fa  897e38               mov dword ptr [esi + 0x38], edi
// 004fd8fd  5f                   pop edi
// 004fd8fe  895e30               mov dword ptr [esi + 0x30], ebx
// 004fd901  5e                   pop esi
// 004fd902  5b                   pop ebx
// 004fd903  83c40c               add esp, 0xc
// 004fd906  c20800               ret 8
// 004fd909  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fd90d  85c0                 test eax, eax
// 004fd90f  76ec                 jbe 0x4fd8fd
// 004fd911  8b542420             mov edx, dword ptr [esp + 0x20]
// 004fd915  50                   push eax
// 004fd916  8bce                 mov ecx, esi
// 004fd918  895634               mov dword ptr [esi + 0x34], edx
// 004fd91b  e880fdffff           call 0x4fd6a0
// 004fd920  5f                   pop edi
// 004fd921  5e                   pop esi
// 004fd922  5b                   pop ebx
// 004fd923  83c40c               add esp, 0xc
// 004fd926  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?reallocBuffer@BinaryOutput@G3D@@AAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
