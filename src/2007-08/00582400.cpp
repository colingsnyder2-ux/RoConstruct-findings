// roc 2007-08 00582400  unit: RBX::VHat::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00582400
//
// 00582400  64a100000000         mov eax, dword ptr fs:[0]
// 00582406  6aff                 push -1
// 00582408  680e5d7500           push 0x755d0e
// 0058240d  50                   push eax
// 0058240e  b801000000           mov eax, 1
// 00582413  64892500000000       mov dword ptr fs:[0], esp
// 0058241a  8405b8328c00         test byte ptr [0x8c32b8], al
// 00582420  7530                 jne 0x582452
// 00582422  0905b8328c00         or dword ptr [0x8c32b8], eax
// 00582428  6830c07a00           push 0x7ac030
// 0058242d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00582435  e856ffffff           call 0x582390
// 0058243a  50                   push eax
// 0058243b  b930328c00           mov ecx, 0x8c3230
// 00582440  e8bbe7feff           call 0x570c00
// 00582445  6810a67700           push 0x77a610
// 0058244a  e8d4e80a00           call 0x630d23
// 0058244f  83c404               add esp, 4
// 00582452  8b0c24               mov ecx, dword ptr [esp]
// 00582455  b830328c00           mov eax, 0x8c3230
// 0058245a  64890d00000000       mov dword ptr fs:[0], ecx
// 00582461  83c40c               add esp, 0xc
// 00582464  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
