// roc 2007-03 00473070  unit: seg_00470000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473070
//
// 00473070  83ec0c               sub esp, 0xc
// 00473073  53                   push ebx
// 00473074  33db                 xor ebx, ebx
// 00473076  381d9c778b00         cmp byte ptr [0x8b779c], bl
// 0047307c  0f8592000000         jne 0x473114
// 00473082  53                   push ebx
// 00473083  ff1520f17700         call dword ptr [0x77f120]
// 00473089  8d442404             lea eax, [esp + 4]
// 0047308d  50                   push eax
// 0047308e  6800707900           push 0x797000
// 00473093  6a01                 push 1
// 00473095  53                   push ebx
// 00473096  68f06f7900           push 0x796ff0
// 0047309b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0047309f  895c2420             mov dword ptr [esp + 0x20], ebx
// 004730a3  ff1538f17700         call dword ptr [0x77f138]
// 004730a9  85c0                 test eax, eax
// 004730ab  7c5a                 jl 0x473107
// 004730ad  8b442404             mov eax, dword ptr [esp + 4]
// 004730b1  8b08                 mov ecx, dword ptr [eax]
// 004730b3  8b5148               mov edx, dword ptr [ecx + 0x48]
// 004730b6  53                   push ebx
// 004730b7  50                   push eax
// 004730b8  ffd2                 call edx
// 004730ba  6a04                 push 4
// 004730bc  8d44240c             lea eax, [esp + 0xc]
// 004730c0  53                   push ebx
// 004730c1  50                   push eax
// 004730c2  e829100800           call 0x4f40f0
// 004730c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 004730cb  83c40c               add esp, 0xc
// 004730ce  8d54240c             lea edx, [esp + 0xc]
// 004730d2  52                   push edx
// 004730d3  6898778b00           push 0x8b7798
// 004730d8  8d542410             lea edx, [esp + 0x10]
// 004730dc  c744241000400010     mov dword ptr [esp + 0x10], 0x10004000
// 004730e4  8b08                 mov ecx, dword ptr [eax]
// 004730e6  52                   push edx
// 004730e7  50                   push eax
// 004730e8  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 004730eb  ffd0                 call eax
// 004730ed  85c0                 test eax, eax
// 004730ef  7d0a                 jge 0x4730fb
// 004730f1  891d98778b00         mov dword ptr [0x8b7798], ebx
// 004730f7  895c240c             mov dword ptr [esp + 0xc], ebx
// 004730fb  8b442404             mov eax, dword ptr [esp + 4]
// 004730ff  8b08                 mov ecx, dword ptr [eax]
// 00473101  8b5108               mov edx, dword ptr [ecx + 8]
// 00473104  50                   push eax
// 00473105  ffd2                 call edx
// 00473107  ff151cf17700         call dword ptr [0x77f11c]
// 0047310d  c6059c778b0001       mov byte ptr [0x8b779c], 1
// 00473114  a198778b00           mov eax, dword ptr [0x8b7798]
// 00473119  33d2                 xor edx, edx
// 0047311b  5b                   pop ebx
// 0047311c  83c40c               add esp, 0xc
// 0047311f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\DXCaps.cpp (function ?videoMemorySize@DXCaps@G3D@@SA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/DXCaps.cpp
