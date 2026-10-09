// roc 2008-06 0041bb70  unit: VDHTMLWindowService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041bb70
//
// 0041bb70  64a100000000         mov eax, dword ptr fs:[0]
// 0041bb76  6aff                 push -1
// 0041bb78  68cee07b00           push 0x7be0ce
// 0041bb7d  50                   push eax
// 0041bb7e  b801000000           mov eax, 1
// 0041bb83  64892500000000       mov dword ptr fs:[0], esp
// 0041bb8a  840588d09600         test byte ptr [0x96d088], al
// 0041bb90  7530                 jne 0x41bbc2
// 0041bb92  090588d09600         or dword ptr [0x96d088], eax
// 0041bb98  68f8c19200           push 0x92c1f8
// 0041bb9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041bba5  e8d6f1feff           call 0x40ad80
// 0041bbaa  50                   push eax
// 0041bbab  b9c8cf9600           mov ecx, 0x96cfc8
// 0041bbb0  e83b4d1500           call 0x5708f0
// 0041bbb5  6830a67f00           push 0x7fa630
// 0041bbba  e8f05b2800           call 0x6a17af
// 0041bbbf  83c404               add esp, 4
// 0041bbc2  8b0c24               mov ecx, dword ptr [esp]
// 0041bbc5  b8c8cf9600           mov eax, 0x96cfc8
// 0041bbca  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bbd1  83c40c               add esp, 0xc
// 0041bbd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
