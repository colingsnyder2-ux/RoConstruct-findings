// roc 2007-03 0052e7f0  unit: seg_00520000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052e7f0
//
// 0052e7f0  64a100000000         mov eax, dword ptr fs:[0]
// 0052e7f6  6aff                 push -1
// 0052e7f8  682e137500           push 0x75132e
// 0052e7fd  50                   push eax
// 0052e7fe  b801000000           mov eax, 1
// 0052e803  64892500000000       mov dword ptr fs:[0], esp
// 0052e80a  8405e8b18b00         test byte ptr [0x8bb1e8], al
// 0052e810  7530                 jne 0x52e842
// 0052e812  0905e8b18b00         or dword ptr [0x8bb1e8], eax
// 0052e818  6880487a00           push 0x7a4880
// 0052e81d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052e825  e836b3eeff           call 0x419b60
// 0052e82a  50                   push eax
// 0052e82b  b960b18b00           mov ecx, 0x8bb160
// 0052e830  e8ab250400           call 0x570de0
// 0052e835  6880937700           push 0x779380
// 0052e83a  e874090f00           call 0x61f1b3
// 0052e83f  83c404               add esp, 4
// 0052e842  8b0c24               mov ecx, dword ptr [esp]
// 0052e845  b860b18b00           mov eax, 0x8bb160
// 0052e84a  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e851  83c40c               add esp, 0xc
// 0052e854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
