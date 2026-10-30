// roc 2009-06 00726490  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00726490
//
// 00726490  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00726495  0f84ce000000         je 0x726569
// 0072649b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0072649f  56                   push esi
// 007264a0  7479                 je 0x72651b
// 007264a2  8db138010000         lea esi, [ecx + 0x138]
// 007264a8  8bce                 mov ecx, esi
// 007264aa  e8f1a60600           call 0x790ba0
// 007264af  85c0                 test eax, eax
// 007264b1  7468                 je 0x72651b
// 007264b3  33c9                 xor ecx, ecx
// 007264b5  394c2430             cmp dword ptr [esp + 0x30], ecx
// 007264b9  7507                 jne 0x7264c2
// 007264bb  b903000000           mov ecx, 3
// 007264c0  eb10                 jmp 0x7264d2
// 007264c2  394c2424             cmp dword ptr [esp + 0x24], ecx
// 007264c6  740a                 je 0x7264d2
// 007264c8  33c9                 xor ecx, ecx
// 007264ca  394c2428             cmp dword ptr [esp + 0x28], ecx
// 007264ce  0f95c1               setne cl
// 007264d1  41                   inc ecx
// 007264d2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007264d6  83f801               cmp eax, 1
// 007264d9  7505                 jne 0x7264e0
// 007264db  83c104               add ecx, 4
// 007264de  eb08                 jmp 0x7264e8
// 007264e0  83f802               cmp eax, 2
// 007264e3  7503                 jne 0x7264e8
// 007264e5  83c108               add ecx, 8
// 007264e8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007264ec  85c0                 test eax, eax
// 007264ee  7403                 je 0x7264f3
// 007264f0  8b4004               mov eax, dword ptr [eax + 4]
// 007264f3  6a00                 push 0
// 007264f5  8d542414             lea edx, [esp + 0x14]
// 007264f9  52                   push edx
// 007264fa  41                   inc ecx
// 007264fb  51                   push ecx
// 007264fc  6a02                 push 2
// 007264fe  50                   push eax
// 007264ff  8bce                 mov ecx, esi
// 00726501  e81aa30600           call 0x790820
// 00726506  8b442408             mov eax, dword ptr [esp + 8]
// 0072650a  5e                   pop esi
// 0072650b  c7000d000000         mov dword ptr [eax], 0xd
// 00726511  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00726518  c22c00               ret 0x2c
// 0072651b  837c243000           cmp dword ptr [esp + 0x30], 0
// 00726520  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00726524  7409                 je 0x72652f
// 00726526  83f802               cmp eax, 2
// 00726529  7404                 je 0x72652f
// 0072652b  33c9                 xor ecx, ecx
// 0072652d  eb05                 jmp 0x726534
// 0072652f  b900010000           mov ecx, 0x100
// 00726534  8b542428             mov edx, dword ptr [esp + 0x28]
// 00726538  f7d8                 neg eax
// 0072653a  1bc0                 sbb eax, eax
// 0072653c  2500040000           and eax, 0x400
// 00726541  f7da                 neg edx
// 00726543  1bd2                 sbb edx, edx
// 00726545  81e200020000         and edx, 0x200
// 0072654b  0bc2                 or eax, edx
// 0072654d  0bc1                 or eax, ecx
// 0072654f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00726553  8b5104               mov edx, dword ptr [ecx + 4]
// 00726556  83c804               or eax, 4
// 00726559  50                   push eax
// 0072655a  6a04                 push 4
// 0072655c  8d442418             lea eax, [esp + 0x18]
// 00726560  50                   push eax
// 00726561  52                   push edx
// 00726562  ff15cced8900         call dword ptr [0x89edcc]
// 00726568  5e                   pop esi
// 00726569  8b442404             mov eax, dword ptr [esp + 4]
// 0072656d  c7000d000000         mov dword ptr [eax], 0xd
// 00726573  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0072657a  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
