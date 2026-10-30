// roc 2009-12 008231b0  unit: CXTPReportControl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008231b0
//
// 008231b0  57                   push edi
// 008231b1  8bf9                 mov edi, ecx
// 008231b3  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 008231ba  7509                 jne 0x8231c5
// 008231bc  e86f0cfdff           call 0x7f3e30
// 008231c1  5f                   pop edi
// 008231c2  c21000               ret 0x10
// 008231c5  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 008231cb  0fbf4c240c           movsx ecx, word ptr [esp + 0xc]
// 008231d0  56                   push esi
// 008231d1  83f8ff               cmp eax, -1
// 008231d4  7521                 jne 0x8231f7
// 008231d6  b889888888           mov eax, 0x88888889
// 008231db  f7e9                 imul ecx
// 008231dd  03d1                 add edx, ecx
// 008231df  c1fa06               sar edx, 6
// 008231e2  8bc2                 mov eax, edx
// 008231e4  c1e81f               shr eax, 0x1f
// 008231e7  03c2                 add eax, edx
// 008231e9  33c9                 xor ecx, ecx
// 008231eb  85c0                 test eax, eax
// 008231ed  0f9ec1               setle cl
// 008231f0  83c102               add ecx, 2
// 008231f3  8bf1                 mov esi, ecx
// 008231f5  eb1f                 jmp 0x823216
// 008231f7  0fafc8               imul ecx, eax
// 008231fa  b889888888           mov eax, 0x88888889
// 008231ff  f7e9                 imul ecx
// 00823201  03d1                 add edx, ecx
// 00823203  c1fa06               sar edx, 6
// 00823206  8bc2                 mov eax, edx
// 00823208  c1e81f               shr eax, 0x1f
// 0082320b  03c2                 add eax, edx
// 0082320d  33d2                 xor edx, edx
// 0082320f  85c0                 test eax, eax
// 00823211  0f9ec2               setle dl
// 00823214  8bf2                 mov esi, edx
// 00823216  85c0                 test eax, eax
// 00823218  7f02                 jg 0x82321c
// 0082321a  f7d8                 neg eax
// 0082321c  8bcf                 mov ecx, edi
// 0082321e  e8dd92ffff           call 0x81c500
// 00823223  85c0                 test eax, eax
// 00823225  7e1b                 jle 0x823242
// 00823227  53                   push ebx
// 00823228  8bd8                 mov ebx, eax
// 0082322a  8d9b00000000         lea ebx, [ebx]
// 00823230  6a00                 push 0
// 00823232  6a00                 push 0
// 00823234  56                   push esi
// 00823235  8bcf                 mov ecx, edi
// 00823237  e8d4a8ffff           call 0x81db10
// 0082323c  83eb01               sub ebx, 1
// 0082323f  75ef                 jne 0x823230
// 00823241  5b                   pop ebx
// 00823242  8bcf                 mov ecx, edi
// 00823244  e8a7fbffff           call 0x822df0
// 00823249  8b4720               mov eax, dword ptr [edi + 0x20]
// 0082324c  50                   push eax
// 0082324d  ff15a4ca9800         call dword ptr [0x98caa4]
// 00823253  8bcf                 mov ecx, edi
// 00823255  e8d60bfdff           call 0x7f3e30
// 0082325a  5e                   pop esi
// 0082325b  5f                   pop edi
// 0082325c  c21000               ret 0x10
// copied from an identical function in another client (function ?OnMouseWheel@CXTPReportControl@@IAEHIFVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp