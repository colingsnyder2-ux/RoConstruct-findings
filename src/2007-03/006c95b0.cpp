// roc 2007-03 006c95b0  unit: seg_006c0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c95b0
//
// 006c95b0  57                   push edi
// 006c95b1  8bf9                 mov edi, ecx
// 006c95b3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006c95b6  85c0                 test eax, eax
// 006c95b8  c70714687d00         mov dword ptr [edi], 0x7d6814
// 006c95be  7446                 je 0x6c9606
// 006c95c0  56                   push esi
// 006c95c1  33f6                 xor esi, esi
// 006c95c3  397008               cmp dword ptr [eax + 8], esi
// 006c95c6  7e26                 jle 0x6c95ee
// 006c95c8  85f6                 test esi, esi
// 006c95ca  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006c95cd  7c39                 jl 0x6c9608
// 006c95cf  3b7008               cmp esi, dword ptr [eax + 8]
// 006c95d2  7d34                 jge 0x6c9608
// 006c95d4  8b4004               mov eax, dword ptr [eax + 4]
// 006c95d7  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006c95da  51                   push ecx
// 006c95db  e8104bf5ff           call 0x61e0f0
// 006c95e0  8b572c               mov edx, dword ptr [edi + 0x2c]
// 006c95e3  83c601               add esi, 1
// 006c95e6  83c404               add esp, 4
// 006c95e9  3b7208               cmp esi, dword ptr [edx + 8]
// 006c95ec  7cda                 jl 0x6c95c8
// 006c95ee  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006c95f1  85c9                 test ecx, ecx
// 006c95f3  7409                 je 0x6c95fe
// 006c95f5  8b01                 mov eax, dword ptr [ecx]
// 006c95f7  8b5004               mov edx, dword ptr [eax + 4]
// 006c95fa  6a01                 push 1
// 006c95fc  ffd2                 call edx
// 006c95fe  c7472c00000000       mov dword ptr [edi + 0x2c], 0
// 006c9605  5e                   pop esi
// 006c9606  5f                   pop edi
// 006c9607  c3                   ret 
// 006c9608  e9a14df5ff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ??1CXTPDockingPaneBase@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
