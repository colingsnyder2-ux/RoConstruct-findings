// roc 2010-06 007b0e20  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b0e20
//
// 007b0e20  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007b0e25  0f84cb000000         je 0x7b0ef6
// 007b0e2b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 007b0e2f  56                   push esi
// 007b0e30  7479                 je 0x7b0eab
// 007b0e32  8db138010000         lea esi, [ecx + 0x138]
// 007b0e38  8bce                 mov ecx, esi
// 007b0e3a  e881ed0600           call 0x81fbc0
// 007b0e3f  85c0                 test eax, eax
// 007b0e41  7468                 je 0x7b0eab
// 007b0e43  33c0                 xor eax, eax
// 007b0e45  39442430             cmp dword ptr [esp + 0x30], eax
// 007b0e49  7507                 jne 0x7b0e52
// 007b0e4b  b803000000           mov eax, 3
// 007b0e50  eb10                 jmp 0x7b0e62
// 007b0e52  39442424             cmp dword ptr [esp + 0x24], eax
// 007b0e56  740a                 je 0x7b0e62
// 007b0e58  33c0                 xor eax, eax
// 007b0e5a  39442428             cmp dword ptr [esp + 0x28], eax
// 007b0e5e  0f95c0               setne al
// 007b0e61  40                   inc eax
// 007b0e62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b0e66  83f901               cmp ecx, 1
// 007b0e69  7505                 jne 0x7b0e70
// 007b0e6b  83c004               add eax, 4
// 007b0e6e  eb08                 jmp 0x7b0e78
// 007b0e70  83f902               cmp ecx, 2
// 007b0e73  7503                 jne 0x7b0e78
// 007b0e75  83c008               add eax, 8
// 007b0e78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b0e7c  85c9                 test ecx, ecx
// 007b0e7e  7403                 je 0x7b0e83
// 007b0e80  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b0e83  6a00                 push 0
// 007b0e85  8d542414             lea edx, [esp + 0x14]
// 007b0e89  52                   push edx
// 007b0e8a  40                   inc eax
// 007b0e8b  50                   push eax
// 007b0e8c  6a03                 push 3
// 007b0e8e  51                   push ecx
// 007b0e8f  8bce                 mov ecx, esi
// 007b0e91  e8aae90600           call 0x81f840
// 007b0e96  8b442408             mov eax, dword ptr [esp + 8]
// 007b0e9a  5e                   pop esi
// 007b0e9b  c7000d000000         mov dword ptr [eax], 0xd
// 007b0ea1  c740040d000000       mov dword ptr [eax + 4], 0xd
// 007b0ea8  c22c00               ret 0x2c
// 007b0eab  837c243000           cmp dword ptr [esp + 0x30], 0
// 007b0eb0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b0eb4  7409                 je 0x7b0ebf
// 007b0eb6  83f802               cmp eax, 2
// 007b0eb9  7404                 je 0x7b0ebf
// 007b0ebb  33c9                 xor ecx, ecx
// 007b0ebd  eb05                 jmp 0x7b0ec4
// 007b0ebf  b900010000           mov ecx, 0x100
// 007b0ec4  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b0ec8  f7d8                 neg eax
// 007b0eca  1bc0                 sbb eax, eax
// 007b0ecc  2500040000           and eax, 0x400
// 007b0ed1  f7da                 neg edx
// 007b0ed3  1bd2                 sbb edx, edx
// 007b0ed5  81e200020000         and edx, 0x200
// 007b0edb  0bc2                 or eax, edx
// 007b0edd  0bc1                 or eax, ecx
// 007b0edf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b0ee3  8b5104               mov edx, dword ptr [ecx + 4]
// 007b0ee6  50                   push eax
// 007b0ee7  6a04                 push 4
// 007b0ee9  8d442418             lea eax, [esp + 0x18]
// 007b0eed  50                   push eax
// 007b0eee  52                   push edx
// 007b0eef  ff15ecbb9e00         call dword ptr [0x9ebbec]
// 007b0ef5  5e                   pop esi
// 007b0ef6  8b442404             mov eax, dword ptr [esp + 4]
// 007b0efa  c7000d000000         mov dword ptr [eax], 0xd
// 007b0f00  c740040d000000       mov dword ptr [eax + 4], 0xd
// 007b0f07  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
