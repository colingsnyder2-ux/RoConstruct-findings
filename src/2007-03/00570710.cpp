// roc 2007-03 00570710  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570710
//
// 00570710  64a100000000         mov eax, dword ptr fs:[0]
// 00570716  6aff                 push -1
// 00570718  68ee607500           push 0x7560ee
// 0057071d  50                   push eax
// 0057071e  b801000000           mov eax, 1
// 00570723  64892500000000       mov dword ptr fs:[0], esp
// 0057072a  840520c88b00         test byte ptr [0x8bc820], al
// 00570730  7525                 jne 0x570757
// 00570732  090520c88b00         or dword ptr [0x8bc820], eax
// 00570738  b918c88b00           mov ecx, 0x8bc818
// 0057073d  c744240800000000     mov dword ptr [esp + 8], 0
// 00570745  e8e6621b00           call 0x726a30
// 0057074a  68309d7700           push 0x779d30
// 0057074f  e85fea0a00           call 0x61f1b3
// 00570754  83c404               add esp, 4
// 00570757  8b0c24               mov ecx, dword ptr [esp]
// 0057075a  b818c88b00           mov eax, 0x8bc818
// 0057075f  64890d00000000       mov dword ptr fs:[0], ecx
// 00570766  83c40c               add esp, 0xc
// 00570769  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
