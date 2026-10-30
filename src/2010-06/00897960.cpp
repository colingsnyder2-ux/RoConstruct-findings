// roc 2010-06 00897960  unit: CXTShadowHook  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897960
//
// 00897960  6aff                 push -1
// 00897962  68b3bd9b00           push 0x9bbdb3
// 00897967  64a100000000         mov eax, dword ptr fs:[0]
// 0089796d  50                   push eax
// 0089796e  51                   push ecx
// 0089796f  56                   push esi
// 00897970  57                   push edi
// 00897971  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00897976  33c4                 xor eax, esp
// 00897978  50                   push eax
// 00897979  8d442410             lea eax, [esp + 0x10]
// 0089797d  64a300000000         mov dword ptr fs:[0], eax
// 00897983  8bf1                 mov esi, ecx
// 00897985  8974240c             mov dword ptr [esp + 0xc], esi
// 00897989  837e2800             cmp dword ptr [esi + 0x28], 0
// 0089798d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00897995  7425                 je 0x8979bc
// 00897997  8d7e1c               lea edi, [esi + 0x1c]
// 0089799a  8d9b00000000         lea ebx, [ebx]
// 008979a0  8bcf                 mov ecx, edi
// 008979a2  e899feffff           call 0x897840
// 008979a7  85c0                 test eax, eax
// 008979a9  740b                 je 0x8979b6
// 008979ab  8b10                 mov edx, dword ptr [eax]
// 008979ad  8bc8                 mov ecx, eax
// 008979af  8b4204               mov eax, dword ptr [edx + 4]
// 008979b2  6a01                 push 1
// 008979b4  ffd0                 call eax
// 008979b6  837e2800             cmp dword ptr [esi + 0x28], 0
// 008979ba  75e4                 jne 0x8979a0
// 008979bc  8d4e1c               lea ecx, [esi + 0x1c]
// 008979bf  c644241800           mov byte ptr [esp + 0x18], 0
// 008979c4  e8f7feffff           call 0x8978c0
// 008979c9  8bce                 mov ecx, esi
// 008979cb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008979d3  e8e8feffff           call 0x8978c0
// 008979d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008979dc  64890d00000000       mov dword ptr fs:[0], ecx
// 008979e3  59                   pop ecx
// 008979e4  5f                   pop edi
// 008979e5  5e                   pop esi
// 008979e6  83c410               add esp, 0x10
// 008979e9  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp