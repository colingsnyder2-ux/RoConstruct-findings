// roc 2008-06 005867e0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005867e0
//
// 005867e0  64a100000000         mov eax, dword ptr fs:[0]
// 005867e6  6aff                 push -1
// 005867e8  685e137d00           push 0x7d135e
// 005867ed  50                   push eax
// 005867ee  b801000000           mov eax, 1
// 005867f3  64892500000000       mov dword ptr fs:[0], esp
// 005867fa  840520599700         test byte ptr [0x975920], al
// 00586800  7530                 jne 0x586832
// 00586802  090520599700         or dword ptr [0x975920], eax
// 00586808  68e8879400           push 0x9487e8
// 0058680d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00586815  e826fdffff           call 0x586540
// 0058681a  50                   push eax
// 0058681b  b960589700           mov ecx, 0x975860
// 00586820  e8cba0feff           call 0x5708f0
// 00586825  6810d97f00           push 0x7fd910
// 0058682a  e880af1100           call 0x6a17af
// 0058682f  83c404               add esp, 4
// 00586832  8b0c24               mov ecx, dword ptr [esp]
// 00586835  b860589700           mov eax, 0x975860
// 0058683a  64890d00000000       mov dword ptr fs:[0], ecx
// 00586841  83c40c               add esp, 0xc
// 00586844  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
