// roc 2011-06 00813320  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00813320
//
// 00813320  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00813325  0f84ce000000         je 0x8133f9
// 0081332b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0081332f  56                   push esi
// 00813330  7479                 je 0x8133ab
// 00813332  8db138010000         lea esi, [ecx + 0x138]
// 00813338  8bce                 mov ecx, esi
// 0081333a  e8919f0600           call 0x87d2d0
// 0081333f  85c0                 test eax, eax
// 00813341  7468                 je 0x8133ab
// 00813343  33c9                 xor ecx, ecx
// 00813345  394c2430             cmp dword ptr [esp + 0x30], ecx
// 00813349  7507                 jne 0x813352
// 0081334b  b903000000           mov ecx, 3
// 00813350  eb10                 jmp 0x813362
// 00813352  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00813356  740a                 je 0x813362
// 00813358  33c9                 xor ecx, ecx
// 0081335a  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0081335e  0f95c1               setne cl
// 00813361  41                   inc ecx
// 00813362  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00813366  83f801               cmp eax, 1
// 00813369  7505                 jne 0x813370
// 0081336b  83c104               add ecx, 4
// 0081336e  eb08                 jmp 0x813378
// 00813370  83f802               cmp eax, 2
// 00813373  7503                 jne 0x813378
// 00813375  83c108               add ecx, 8
// 00813378  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081337c  85c0                 test eax, eax
// 0081337e  7403                 je 0x813383
// 00813380  8b4004               mov eax, dword ptr [eax + 4]
// 00813383  6a00                 push 0
// 00813385  8d542414             lea edx, [esp + 0x14]
// 00813389  52                   push edx
// 0081338a  41                   inc ecx
// 0081338b  51                   push ecx
// 0081338c  6a02                 push 2
// 0081338e  50                   push eax
// 0081338f  8bce                 mov ecx, esi
// 00813391  e86a9c0600           call 0x87d000
// 00813396  8b442408             mov eax, dword ptr [esp + 8]
// 0081339a  5e                   pop esi
// 0081339b  c7000d000000         mov dword ptr [eax], 0xd
// 008133a1  c740040d000000       mov dword ptr [eax + 4], 0xd
// 008133a8  c22c00               ret 0x2c
// 008133ab  837c243000           cmp dword ptr [esp + 0x30], 0
// 008133b0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008133b4  7409                 je 0x8133bf
// 008133b6  83f802               cmp eax, 2
// 008133b9  7404                 je 0x8133bf
// 008133bb  33c9                 xor ecx, ecx
// 008133bd  eb05                 jmp 0x8133c4
// 008133bf  b900010000           mov ecx, 0x100
// 008133c4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008133c8  f7d8                 neg eax
// 008133ca  1bc0                 sbb eax, eax
// 008133cc  2500040000           and eax, 0x400
// 008133d1  f7da                 neg edx
// 008133d3  1bd2                 sbb edx, edx
// 008133d5  81e200020000         and edx, 0x200
// 008133db  0bc2                 or eax, edx
// 008133dd  0bc1                 or eax, ecx
// 008133df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008133e3  8b5104               mov edx, dword ptr [ecx + 4]
// 008133e6  83c804               or eax, 4
// 008133e9  50                   push eax
// 008133ea  6a04                 push 4
// 008133ec  8d442418             lea eax, [esp + 0x18]
// 008133f0  50                   push eax
// 008133f1  52                   push edx
// 008133f2  ff15241ca400         call dword ptr [0xa41c24]
// 008133f8  5e                   pop esi
// 008133f9  8b442404             mov eax, dword ptr [esp + 4]
// 008133fd  c7000d000000         mov dword ptr [eax], 0xd
// 00813403  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0081340a  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
