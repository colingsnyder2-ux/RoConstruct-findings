// roc 2008-06 00457af0  unit: CRobloxReportView  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457af0
//
// 00457af0  64a100000000         mov eax, dword ptr fs:[0]
// 00457af6  6aff                 push -1
// 00457af8  68fe257c00           push 0x7c25fe
// 00457afd  50                   push eax
// 00457afe  b801000000           mov eax, 1
// 00457b03  64892500000000       mov dword ptr fs:[0], esp
// 00457b0a  840560de9600         test byte ptr [0x96de60], al
// 00457b10  7530                 jne 0x457b42
// 00457b12  090560de9600         or dword ptr [0x96de60], eax
// 00457b18  68640c9500           push 0x950c64
// 00457b1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00457b25  e85632fbff           call 0x40ad80
// 00457b2a  50                   push eax
// 00457b2b  b9a0dd9600           mov ecx, 0x96dda0
// 00457b30  e8bb8d1100           call 0x5708f0
// 00457b35  6810af7f00           push 0x7faf10
// 00457b3a  e8709c2400           call 0x6a17af
// 00457b3f  83c404               add esp, 4
// 00457b42  8b0c24               mov ecx, dword ptr [esp]
// 00457b45  b8a0dd9600           mov eax, 0x96dda0
// 00457b4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00457b51  83c40c               add esp, 0xc
// 00457b54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
