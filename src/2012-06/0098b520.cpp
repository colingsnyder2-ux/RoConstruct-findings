// roc 2012-06 0098b520  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098b520
//
// 0098b520  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0098b525  0f84cb000000         je 0x98b5f6
// 0098b52b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0098b52f  56                   push esi
// 0098b530  7479                 je 0x98b5ab
// 0098b532  8db138010000         lea esi, [ecx + 0x138]
// 0098b538  8bce                 mov ecx, esi
// 0098b53a  e831a30600           call 0x9f5870
// 0098b53f  85c0                 test eax, eax
// 0098b541  7468                 je 0x98b5ab
// 0098b543  33c0                 xor eax, eax
// 0098b545  39442430             cmp dword ptr [esp + 0x30], eax
// 0098b549  7507                 jne 0x98b552
// 0098b54b  b803000000           mov eax, 3
// 0098b550  eb10                 jmp 0x98b562
// 0098b552  39442424             cmp dword ptr [esp + 0x24], eax
// 0098b556  740a                 je 0x98b562
// 0098b558  33c0                 xor eax, eax
// 0098b55a  39442428             cmp dword ptr [esp + 0x28], eax
// 0098b55e  0f95c0               setne al
// 0098b561  40                   inc eax
// 0098b562  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098b566  83f901               cmp ecx, 1
// 0098b569  7505                 jne 0x98b570
// 0098b56b  83c004               add eax, 4
// 0098b56e  eb08                 jmp 0x98b578
// 0098b570  83f902               cmp ecx, 2
// 0098b573  7503                 jne 0x98b578
// 0098b575  83c008               add eax, 8
// 0098b578  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0098b57c  85c9                 test ecx, ecx
// 0098b57e  7403                 je 0x98b583
// 0098b580  8b4904               mov ecx, dword ptr [ecx + 4]
// 0098b583  6a00                 push 0
// 0098b585  8d542414             lea edx, [esp + 0x14]
// 0098b589  52                   push edx
// 0098b58a  40                   inc eax
// 0098b58b  50                   push eax
// 0098b58c  6a03                 push 3
// 0098b58e  51                   push ecx
// 0098b58f  8bce                 mov ecx, esi
// 0098b591  e80aa00600           call 0x9f55a0
// 0098b596  8b442408             mov eax, dword ptr [esp + 8]
// 0098b59a  5e                   pop esi
// 0098b59b  c7000d000000         mov dword ptr [eax], 0xd
// 0098b5a1  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0098b5a8  c22c00               ret 0x2c
// 0098b5ab  837c243000           cmp dword ptr [esp + 0x30], 0
// 0098b5b0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098b5b4  7409                 je 0x98b5bf
// 0098b5b6  83f802               cmp eax, 2
// 0098b5b9  7404                 je 0x98b5bf
// 0098b5bb  33c9                 xor ecx, ecx
// 0098b5bd  eb05                 jmp 0x98b5c4
// 0098b5bf  b900010000           mov ecx, 0x100
// 0098b5c4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098b5c8  f7d8                 neg eax
// 0098b5ca  1bc0                 sbb eax, eax
// 0098b5cc  2500040000           and eax, 0x400
// 0098b5d1  f7da                 neg edx
// 0098b5d3  1bd2                 sbb edx, edx
// 0098b5d5  81e200020000         and edx, 0x200
// 0098b5db  0bc2                 or eax, edx
// 0098b5dd  0bc1                 or eax, ecx
// 0098b5df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0098b5e3  8b5104               mov edx, dword ptr [ecx + 4]
// 0098b5e6  50                   push eax
// 0098b5e7  6a04                 push 4
// 0098b5e9  8d442418             lea eax, [esp + 0x18]
// 0098b5ed  50                   push eax
// 0098b5ee  52                   push edx
// 0098b5ef  ff15383bb200         call dword ptr [0xb23b38]
// 0098b5f5  5e                   pop esi
// 0098b5f6  8b442404             mov eax, dword ptr [esp + 4]
// 0098b5fa  c7000d000000         mov dword ptr [eax], 0xd
// 0098b600  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0098b607  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
