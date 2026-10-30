// roc 2010-06 00883230  unit: CXTPTabManagerItem  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00883230
//
// 00883230  6aff                 push -1
// 00883232  680bae9b00           push 0x9bae0b
// 00883237  64a100000000         mov eax, dword ptr fs:[0]
// 0088323d  50                   push eax
// 0088323e  51                   push ecx
// 0088323f  56                   push esi
// 00883240  57                   push edi
// 00883241  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00883246  33c4                 xor eax, esp
// 00883248  50                   push eax
// 00883249  8d442410             lea eax, [esp + 0x10]
// 0088324d  64a300000000         mov dword ptr fs:[0], eax
// 00883253  8bf9                 mov edi, ecx
// 00883255  897c240c             mov dword ptr [esp + 0xc], edi
// 00883259  c70754eaa600         mov dword ptr [edi], 0xa6ea54
// 0088325f  33f6                 xor esi, esi
// 00883261  397774               cmp dword ptr [edi + 0x74], esi
// 00883264  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0088326c  7e26                 jle 0x883294
// 0088326e  8bff                 mov edi, edi
// 00883270  85f6                 test esi, esi
// 00883272  7c60                 jl 0x8832d4
// 00883274  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00883277  7d5b                 jge 0x8832d4
// 00883279  8b4770               mov eax, dword ptr [edi + 0x70]
// 0088327c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0088327f  8d04b0               lea eax, [eax + esi*4]
// 00883282  85c9                 test ecx, ecx
// 00883284  7408                 je 0x88328e
// 00883286  8b11                 mov edx, dword ptr [ecx]
// 00883288  8b02                 mov eax, dword ptr [edx]
// 0088328a  6a01                 push 1
// 0088328c  ffd0                 call eax
// 0088328e  46                   inc esi
// 0088328f  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00883292  7cdc                 jl 0x883270
// 00883294  8d4f6c               lea ecx, [edi + 0x6c]
// 00883297  c644241802           mov byte ptr [esp + 0x18], 2
// 0088329c  e83ffeffff           call 0x8830e0
// 008832a1  8d4f58               lea ecx, [edi + 0x58]
// 008832a4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008832aa  8d4f54               lea ecx, [edi + 0x54]
// 008832ad  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008832b3  8bcf                 mov ecx, edi
// 008832b5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008832bd  e86052f2ff           call 0x7a8522
// 008832c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008832c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008832cd  59                   pop ecx
// 008832ce  5f                   pop edi
// 008832cf  5e                   pop esi
// 008832d0  83c410               add esp, 0x10
// 008832d3  c3                   ret 
// 008832d4  e87349f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTPTabManagerItem@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp