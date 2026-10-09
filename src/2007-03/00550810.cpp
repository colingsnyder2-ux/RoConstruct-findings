// roc 2007-03 00550810  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550810
//
// 00550810  64a100000000         mov eax, dword ptr fs:[0]
// 00550816  6aff                 push -1
// 00550818  685e387500           push 0x75385e
// 0055081d  50                   push eax
// 0055081e  b801000000           mov eax, 1
// 00550823  64892500000000       mov dword ptr fs:[0], esp
// 0055082a  840568bf8b00         test byte ptr [0x8bbf68], al
// 00550830  7530                 jne 0x550862
// 00550832  090568bf8b00         or dword ptr [0x8bbf68], eax
// 00550838  68a87e7a00           push 0x7a7ea8
// 0055083d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00550845  e81693ecff           call 0x419b60
// 0055084a  50                   push eax
// 0055084b  b9e0be8b00           mov ecx, 0x8bbee0
// 00550850  e88b050200           call 0x570de0
// 00550855  68f0997700           push 0x7799f0
// 0055085a  e854e90c00           call 0x61f1b3
// 0055085f  83c404               add esp, 4
// 00550862  8b0c24               mov ecx, dword ptr [esp]
// 00550865  b8e0be8b00           mov eax, 0x8bbee0
// 0055086a  64890d00000000       mov dword ptr fs:[0], ecx
// 00550871  83c40c               add esp, 0xc
// 00550874  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
