// roc 2009-06 007263a0  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007263a0
//
// 007263a0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007263a5  0f84cb000000         je 0x726476
// 007263ab  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 007263af  56                   push esi
// 007263b0  7479                 je 0x72642b
// 007263b2  8db138010000         lea esi, [ecx + 0x138]
// 007263b8  8bce                 mov ecx, esi
// 007263ba  e8e1a70600           call 0x790ba0
// 007263bf  85c0                 test eax, eax
// 007263c1  7468                 je 0x72642b
// 007263c3  33c0                 xor eax, eax
// 007263c5  39442430             cmp dword ptr [esp + 0x30], eax
// 007263c9  7507                 jne 0x7263d2
// 007263cb  b803000000           mov eax, 3
// 007263d0  eb10                 jmp 0x7263e2
// 007263d2  39442424             cmp dword ptr [esp + 0x24], eax
// 007263d6  740a                 je 0x7263e2
// 007263d8  33c0                 xor eax, eax
// 007263da  39442428             cmp dword ptr [esp + 0x28], eax
// 007263de  0f95c0               setne al
// 007263e1  40                   inc eax
// 007263e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007263e6  83f901               cmp ecx, 1
// 007263e9  7505                 jne 0x7263f0
// 007263eb  83c004               add eax, 4
// 007263ee  eb08                 jmp 0x7263f8
// 007263f0  83f902               cmp ecx, 2
// 007263f3  7503                 jne 0x7263f8
// 007263f5  83c008               add eax, 8
// 007263f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007263fc  85c9                 test ecx, ecx
// 007263fe  7403                 je 0x726403
// 00726400  8b4904               mov ecx, dword ptr [ecx + 4]
// 00726403  6a00                 push 0
// 00726405  8d542414             lea edx, [esp + 0x14]
// 00726409  52                   push edx
// 0072640a  40                   inc eax
// 0072640b  50                   push eax
// 0072640c  6a03                 push 3
// 0072640e  51                   push ecx
// 0072640f  8bce                 mov ecx, esi
// 00726411  e80aa40600           call 0x790820
// 00726416  8b442408             mov eax, dword ptr [esp + 8]
// 0072641a  5e                   pop esi
// 0072641b  c7000d000000         mov dword ptr [eax], 0xd
// 00726421  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00726428  c22c00               ret 0x2c
// 0072642b  837c243000           cmp dword ptr [esp + 0x30], 0
// 00726430  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00726434  7409                 je 0x72643f
// 00726436  83f802               cmp eax, 2
// 00726439  7404                 je 0x72643f
// 0072643b  33c9                 xor ecx, ecx
// 0072643d  eb05                 jmp 0x726444
// 0072643f  b900010000           mov ecx, 0x100
// 00726444  8b542428             mov edx, dword ptr [esp + 0x28]
// 00726448  f7d8                 neg eax
// 0072644a  1bc0                 sbb eax, eax
// 0072644c  2500040000           and eax, 0x400
// 00726451  f7da                 neg edx
// 00726453  1bd2                 sbb edx, edx
// 00726455  81e200020000         and edx, 0x200
// 0072645b  0bc2                 or eax, edx
// 0072645d  0bc1                 or eax, ecx
// 0072645f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00726463  8b5104               mov edx, dword ptr [ecx + 4]
// 00726466  50                   push eax
// 00726467  6a04                 push 4
// 00726469  8d442418             lea eax, [esp + 0x18]
// 0072646d  50                   push eax
// 0072646e  52                   push edx
// 0072646f  ff15cced8900         call dword ptr [0x89edcc]
// 00726475  5e                   pop esi
// 00726476  8b442404             mov eax, dword ptr [esp + 4]
// 0072647a  c7000d000000         mov dword ptr [eax], 0xd
// 00726480  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00726487  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
