// roc 2007-03 00543750  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543750
//
// 00543750  64a100000000         mov eax, dword ptr fs:[0]
// 00543756  6aff                 push -1
// 00543758  68be257500           push 0x7525be
// 0054375d  50                   push eax
// 0054375e  b801000000           mov eax, 1
// 00543763  64892500000000       mov dword ptr fs:[0], esp
// 0054376a  840548bb8b00         test byte ptr [0x8bbb48], al
// 00543770  7530                 jne 0x5437a2
// 00543772  090548bb8b00         or dword ptr [0x8bbb48], eax
// 00543778  6858687a00           push 0x7a6858
// 0054377d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00543785  e8d663edff           call 0x419b60
// 0054378a  50                   push eax
// 0054378b  b9c0ba8b00           mov ecx, 0x8bbac0
// 00543790  e84bd60200           call 0x570de0
// 00543795  68e0987700           push 0x7798e0
// 0054379a  e814ba0d00           call 0x61f1b3
// 0054379f  83c404               add esp, 4
// 005437a2  8b0c24               mov ecx, dword ptr [esp]
// 005437a5  b8c0ba8b00           mov eax, 0x8bbac0
// 005437aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005437b1  83c40c               add esp, 0xc
// 005437b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
