// roc 2007-03 00571550  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571550
//
// 00571550  64a100000000         mov eax, dword ptr fs:[0]
// 00571556  6aff                 push -1
// 00571558  68ae627500           push 0x7562ae
// 0057155d  50                   push eax
// 0057155e  b801000000           mov eax, 1
// 00571563  64892500000000       mov dword ptr fs:[0], esp
// 0057156a  8405b0c88b00         test byte ptr [0x8bc8b0], al
// 00571570  7530                 jne 0x5715a2
// 00571572  0905b0c88b00         or dword ptr [0x8bc8b0], eax
// 00571578  68288b7b00           push 0x7b8b28
// 0057157d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00571585  e8d685eaff           call 0x419b60
// 0057158a  50                   push eax
// 0057158b  b928c88b00           mov ecx, 0x8bc828
// 00571590  e84bf8ffff           call 0x570de0
// 00571595  68009e7700           push 0x779e00
// 0057159a  e814dc0a00           call 0x61f1b3
// 0057159f  83c404               add esp, 4
// 005715a2  8b0c24               mov ecx, dword ptr [esp]
// 005715a5  b828c88b00           mov eax, 0x8bc828
// 005715aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005715b1  83c40c               add esp, 0xc
// 005715b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
