// roc 2007-08 00532bc0  unit: RBX::Selection  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532bc0
//
// 00532bc0  64a100000000         mov eax, dword ptr fs:[0]
// 00532bc6  6aff                 push -1
// 00532bc8  68ee087500           push 0x7508ee
// 00532bcd  50                   push eax
// 00532bce  b801000000           mov eax, 1
// 00532bd3  64892500000000       mov dword ptr fs:[0], esp
// 00532bda  840500118c00         test byte ptr [0x8c1100], al
// 00532be0  7530                 jne 0x532c12
// 00532be2  090500118c00         or dword ptr [0x8c1100], eax
// 00532be8  6860527a00           push 0x7a5260
// 00532bed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00532bf5  e8965aeeff           call 0x418690
// 00532bfa  50                   push eax
// 00532bfb  b978108c00           mov ecx, 0x8c1078
// 00532c00  e8fbdf0300           call 0x570c00
// 00532c05  6860947700           push 0x779460
// 00532c0a  e814e10f00           call 0x630d23
// 00532c0f  83c404               add esp, 4
// 00532c12  8b0c24               mov ecx, dword ptr [esp]
// 00532c15  b878108c00           mov eax, 0x8c1078
// 00532c1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00532c21  83c40c               add esp, 0xc
// 00532c24  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
