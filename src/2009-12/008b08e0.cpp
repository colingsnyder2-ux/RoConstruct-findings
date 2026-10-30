// roc 2009-12 008b08e0  unit: CXTPDockingPane  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b08e0
//
// 008b08e0  57                   push edi
// 008b08e1  8bf9                 mov edi, ecx
// 008b08e3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008b08e6  c7075472a000         mov dword ptr [edi], 0xa07254
// 008b08ec  85c0                 test eax, eax
// 008b08ee  7444                 je 0x8b0934
// 008b08f0  56                   push esi
// 008b08f1  33f6                 xor esi, esi
// 008b08f3  397008               cmp dword ptr [eax + 8], esi
// 008b08f6  7e24                 jle 0x8b091c
// 008b08f8  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008b08fb  85f6                 test esi, esi
// 008b08fd  7c37                 jl 0x8b0936
// 008b08ff  3b7008               cmp esi, dword ptr [eax + 8]
// 008b0902  7d32                 jge 0x8b0936
// 008b0904  8b4004               mov eax, dword ptr [eax + 4]
// 008b0907  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008b090a  51                   push ecx
// 008b090b  e84a2ff4ff           call 0x7f385a
// 008b0910  8b572c               mov edx, dword ptr [edi + 0x2c]
// 008b0913  46                   inc esi
// 008b0914  83c404               add esp, 4
// 008b0917  3b7208               cmp esi, dword ptr [edx + 8]
// 008b091a  7cdc                 jl 0x8b08f8
// 008b091c  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008b091f  85c9                 test ecx, ecx
// 008b0921  7409                 je 0x8b092c
// 008b0923  8b01                 mov eax, dword ptr [ecx]
// 008b0925  8b5004               mov edx, dword ptr [eax + 4]
// 008b0928  6a01                 push 1
// 008b092a  ffd2                 call edx
// 008b092c  c7472c00000000       mov dword ptr [edi + 0x2c], 0
// 008b0933  5e                   pop esi
// 008b0934  5f                   pop edi
// 008b0935  c3                   ret 
// 008b0936  e8d131f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPDockingPaneBase@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp