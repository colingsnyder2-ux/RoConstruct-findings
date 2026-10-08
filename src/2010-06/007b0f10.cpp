// roc 2010-06 007b0f10  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b0f10
//
// 007b0f10  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007b0f15  0f84ce000000         je 0x7b0fe9
// 007b0f1b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 007b0f1f  56                   push esi
// 007b0f20  7479                 je 0x7b0f9b
// 007b0f22  8db138010000         lea esi, [ecx + 0x138]
// 007b0f28  8bce                 mov ecx, esi
// 007b0f2a  e891ec0600           call 0x81fbc0
// 007b0f2f  85c0                 test eax, eax
// 007b0f31  7468                 je 0x7b0f9b
// 007b0f33  33c9                 xor ecx, ecx
// 007b0f35  394c2430             cmp dword ptr [esp + 0x30], ecx
// 007b0f39  7507                 jne 0x7b0f42
// 007b0f3b  b903000000           mov ecx, 3
// 007b0f40  eb10                 jmp 0x7b0f52
// 007b0f42  394c2424             cmp dword ptr [esp + 0x24], ecx
// 007b0f46  740a                 je 0x7b0f52
// 007b0f48  33c9                 xor ecx, ecx
// 007b0f4a  394c2428             cmp dword ptr [esp + 0x28], ecx
// 007b0f4e  0f95c1               setne cl
// 007b0f51  41                   inc ecx
// 007b0f52  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b0f56  83f801               cmp eax, 1
// 007b0f59  7505                 jne 0x7b0f60
// 007b0f5b  83c104               add ecx, 4
// 007b0f5e  eb08                 jmp 0x7b0f68
// 007b0f60  83f802               cmp eax, 2
// 007b0f63  7503                 jne 0x7b0f68
// 007b0f65  83c108               add ecx, 8
// 007b0f68  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b0f6c  85c0                 test eax, eax
// 007b0f6e  7403                 je 0x7b0f73
// 007b0f70  8b4004               mov eax, dword ptr [eax + 4]
// 007b0f73  6a00                 push 0
// 007b0f75  8d542414             lea edx, [esp + 0x14]
// 007b0f79  52                   push edx
// 007b0f7a  41                   inc ecx
// 007b0f7b  51                   push ecx
// 007b0f7c  6a02                 push 2
// 007b0f7e  50                   push eax
// 007b0f7f  8bce                 mov ecx, esi
// 007b0f81  e8bae80600           call 0x81f840
// 007b0f86  8b442408             mov eax, dword ptr [esp + 8]
// 007b0f8a  5e                   pop esi
// 007b0f8b  c7000d000000         mov dword ptr [eax], 0xd
// 007b0f91  c740040d000000       mov dword ptr [eax + 4], 0xd
// 007b0f98  c22c00               ret 0x2c
// 007b0f9b  837c243000           cmp dword ptr [esp + 0x30], 0
// 007b0fa0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b0fa4  7409                 je 0x7b0faf
// 007b0fa6  83f802               cmp eax, 2
// 007b0fa9  7404                 je 0x7b0faf
// 007b0fab  33c9                 xor ecx, ecx
// 007b0fad  eb05                 jmp 0x7b0fb4
// 007b0faf  b900010000           mov ecx, 0x100
// 007b0fb4  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b0fb8  f7d8                 neg eax
// 007b0fba  1bc0                 sbb eax, eax
// 007b0fbc  2500040000           and eax, 0x400
// 007b0fc1  f7da                 neg edx
// 007b0fc3  1bd2                 sbb edx, edx
// 007b0fc5  81e200020000         and edx, 0x200
// 007b0fcb  0bc2                 or eax, edx
// 007b0fcd  0bc1                 or eax, ecx
// 007b0fcf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b0fd3  8b5104               mov edx, dword ptr [ecx + 4]
// 007b0fd6  83c804               or eax, 4
// 007b0fd9  50                   push eax
// 007b0fda  6a04                 push 4
// 007b0fdc  8d442418             lea eax, [esp + 0x18]
// 007b0fe0  50                   push eax
// 007b0fe1  52                   push edx
// 007b0fe2  ff15ecbb9e00         call dword ptr [0x9ebbec]
// 007b0fe8  5e                   pop esi
// 007b0fe9  8b442404             mov eax, dword ptr [esp + 4]
// 007b0fed  c7000d000000         mov dword ptr [eax], 0xd
// 007b0ff3  c740040d000000       mov dword ptr [eax + 4], 0xd
// 007b0ffa  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
