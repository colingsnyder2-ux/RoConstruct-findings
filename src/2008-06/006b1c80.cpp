// roc 2008-06 006b1c80  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b1c80
//
// 006b1c80  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006b1c85  0f84cb000000         je 0x6b1d56
// 006b1c8b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 006b1c8f  56                   push esi
// 006b1c90  7479                 je 0x6b1d0b
// 006b1c92  8db138010000         lea esi, [ecx + 0x138]
// 006b1c98  8bce                 mov ecx, esi
// 006b1c9a  e891670600           call 0x718430
// 006b1c9f  85c0                 test eax, eax
// 006b1ca1  7468                 je 0x6b1d0b
// 006b1ca3  33c0                 xor eax, eax
// 006b1ca5  39442430             cmp dword ptr [esp + 0x30], eax
// 006b1ca9  7507                 jne 0x6b1cb2
// 006b1cab  b803000000           mov eax, 3
// 006b1cb0  eb10                 jmp 0x6b1cc2
// 006b1cb2  39442424             cmp dword ptr [esp + 0x24], eax
// 006b1cb6  740a                 je 0x6b1cc2
// 006b1cb8  33c0                 xor eax, eax
// 006b1cba  39442428             cmp dword ptr [esp + 0x28], eax
// 006b1cbe  0f95c0               setne al
// 006b1cc1  40                   inc eax
// 006b1cc2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b1cc6  83f901               cmp ecx, 1
// 006b1cc9  7505                 jne 0x6b1cd0
// 006b1ccb  83c004               add eax, 4
// 006b1cce  eb08                 jmp 0x6b1cd8
// 006b1cd0  83f902               cmp ecx, 2
// 006b1cd3  7503                 jne 0x6b1cd8
// 006b1cd5  83c008               add eax, 8
// 006b1cd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b1cdc  85c9                 test ecx, ecx
// 006b1cde  7403                 je 0x6b1ce3
// 006b1ce0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006b1ce3  6a00                 push 0
// 006b1ce5  8d542414             lea edx, [esp + 0x14]
// 006b1ce9  52                   push edx
// 006b1cea  40                   inc eax
// 006b1ceb  50                   push eax
// 006b1cec  6a03                 push 3
// 006b1cee  51                   push ecx
// 006b1cef  8bce                 mov ecx, esi
// 006b1cf1  e8ba630600           call 0x7180b0
// 006b1cf6  8b442408             mov eax, dword ptr [esp + 8]
// 006b1cfa  5e                   pop esi
// 006b1cfb  c7000d000000         mov dword ptr [eax], 0xd
// 006b1d01  c740040d000000       mov dword ptr [eax + 4], 0xd
// 006b1d08  c22c00               ret 0x2c
// 006b1d0b  837c243000           cmp dword ptr [esp + 0x30], 0
// 006b1d10  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006b1d14  7409                 je 0x6b1d1f
// 006b1d16  83f802               cmp eax, 2
// 006b1d19  7404                 je 0x6b1d1f
// 006b1d1b  33c9                 xor ecx, ecx
// 006b1d1d  eb05                 jmp 0x6b1d24
// 006b1d1f  b900010000           mov ecx, 0x100
// 006b1d24  8b542428             mov edx, dword ptr [esp + 0x28]
// 006b1d28  f7d8                 neg eax
// 006b1d2a  1bc0                 sbb eax, eax
// 006b1d2c  2500040000           and eax, 0x400
// 006b1d31  f7da                 neg edx
// 006b1d33  1bd2                 sbb edx, edx
// 006b1d35  81e200020000         and edx, 0x200
// 006b1d3b  0bc2                 or eax, edx
// 006b1d3d  0bc1                 or eax, ecx
// 006b1d3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b1d43  8b5104               mov edx, dword ptr [ecx + 4]
// 006b1d46  50                   push eax
// 006b1d47  6a04                 push 4
// 006b1d49  8d442418             lea eax, [esp + 0x18]
// 006b1d4d  50                   push eax
// 006b1d4e  52                   push edx
// 006b1d4f  ff15402d8000         call dword ptr [0x802d40]
// 006b1d55  5e                   pop esi
// 006b1d56  8b442404             mov eax, dword ptr [esp + 4]
// 006b1d5a  c7000d000000         mov dword ptr [eax], 0xd
// 006b1d60  c740040d000000       mov dword ptr [eax + 4], 0xd
// 006b1d67  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
