// roc 2007-08 005d35b0  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d35b0
//
// 005d35b0  64a100000000         mov eax, dword ptr fs:[0]
// 005d35b6  6aff                 push -1
// 005d35b8  68be9d7500           push 0x759dbe
// 005d35bd  50                   push eax
// 005d35be  b801000000           mov eax, 1
// 005d35c3  64892500000000       mov dword ptr fs:[0], esp
// 005d35ca  8405f0688c00         test byte ptr [0x8c68f0], al
// 005d35d0  7530                 jne 0x5d3602
// 005d35d2  0905f0688c00         or dword ptr [0x8c68f0], eax
// 005d35d8  68a03a7c00           push 0x7c3aa0
// 005d35dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d35e5  e8a650e4ff           call 0x418690
// 005d35ea  50                   push eax
// 005d35eb  b968688c00           mov ecx, 0x8c6868
// 005d35f0  e80bd6f9ff           call 0x570c00
// 005d35f5  6860bd7700           push 0x77bd60
// 005d35fa  e824d70500           call 0x630d23
// 005d35ff  83c404               add esp, 4
// 005d3602  8b0c24               mov ecx, dword ptr [esp]
// 005d3605  b868688c00           mov eax, 0x8c6868
// 005d360a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3611  83c40c               add esp, 0xc
// 005d3614  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
