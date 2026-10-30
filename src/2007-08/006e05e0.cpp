// from server: 100% by auto
// roc 2007-08 006e05e0  unit: CXTPDockingPane  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e05e0
//
// 006e05e0  57                   push edi
// 006e05e1  8bf9                 mov edi, ecx
// 006e05e3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006e05e6  85c0                 test eax, eax
// 006e05e8  c7070c9b7d00         mov dword ptr [edi], 0x7d9b0c
// 006e05ee  7446                 je 0x6e0636
// 006e05f0  56                   push esi
// 006e05f1  33f6                 xor esi, esi
// 006e05f3  397008               cmp dword ptr [eax + 8], esi
// 006e05f6  7e26                 jle 0x6e061e
// 006e05f8  85f6                 test esi, esi
// 006e05fa  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006e05fd  7c39                 jl 0x6e0638
// 006e05ff  3b7008               cmp esi, dword ptr [eax + 8]
// 006e0602  7d34                 jge 0x6e0638
// 006e0604  8b4004               mov eax, dword ptr [eax + 4]
// 006e0607  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006e060a  51                   push ecx
// 006e060b  e852f6f4ff           call 0x62fc62
// 006e0610  8b572c               mov edx, dword ptr [edi + 0x2c]
// 006e0613  83c601               add esi, 1
// 006e0616  83c404               add esp, 4
// 006e0619  3b7208               cmp esi, dword ptr [edx + 8]
// 006e061c  7cda                 jl 0x6e05f8
// 006e061e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006e0621  85c9                 test ecx, ecx
// 006e0623  7409                 je 0x6e062e
// 006e0625  8b01                 mov eax, dword ptr [ecx]
// 006e0627  8b5004               mov edx, dword ptr [eax + 4]
// 006e062a  6a01                 push 1
// 006e062c  ffd2                 call edx
// 006e062e  c7472c00000000       mov dword ptr [edi + 0x2c], 0
// 006e0635  5e                   pop esi
// 006e0636  5f                   pop edi
// 006e0637  c3                   ret 
// 006e0638  e9e3f8f4ff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ??1CXTPDockingPaneBase@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
