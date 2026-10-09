// roc 2008-06 004909f0  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004909f0
//
// 004909f0  64a100000000         mov eax, dword ptr fs:[0]
// 004909f6  6aff                 push -1
// 004909f8  683e647c00           push 0x7c643e
// 004909fd  50                   push eax
// 004909fe  b801000000           mov eax, 1
// 00490a03  64892500000000       mov dword ptr fs:[0], esp
// 00490a0a  840500009700         test byte ptr [0x970000], al
// 00490a10  7530                 jne 0x490a42
// 00490a12  090500009700         or dword ptr [0x970000], eax
// 00490a18  68b0c18300           push 0x83c1b0
// 00490a1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00490a25  e856a3f7ff           call 0x40ad80
// 00490a2a  50                   push eax
// 00490a2b  b940ff9600           mov ecx, 0x96ff40
// 00490a30  e8bbfe0d00           call 0x5708f0
// 00490a35  68f0b27f00           push 0x7fb2f0
// 00490a3a  e8700d2100           call 0x6a17af
// 00490a3f  83c404               add esp, 4
// 00490a42  8b0c24               mov ecx, dword ptr [esp]
// 00490a45  b840ff9600           mov eax, 0x96ff40
// 00490a4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00490a51  83c40c               add esp, 0xc
// 00490a54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
