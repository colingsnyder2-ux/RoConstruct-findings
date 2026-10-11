// roc 2007-08 00580160  unit: RBX::Workspace  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580160
//
// 00580160  6aff                 push -1
// 00580162  68785b7500           push 0x755b78
// 00580167  64a100000000         mov eax, dword ptr fs:[0]
// 0058016d  50                   push eax
// 0058016e  64892500000000       mov dword ptr fs:[0], esp
// 00580175  51                   push ecx
// 00580176  56                   push esi
// 00580177  57                   push edi
// 00580178  8bf9                 mov edi, ecx
// 0058017a  897c2408             mov dword ptr [esp + 8], edi
// 0058017e  c707a8bf7a00         mov dword ptr [edi], 0x7abfa8
// 00580184  8d7724               lea esi, [edi + 0x24]
// 00580187  6a01                 push 1
// 00580189  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00580191  e88afeffff           call 0x580020
// 00580196  68acbf7a00           push 0x7abfac
// 0058019b  56                   push esi
// 0058019c  e8ffb1eeff           call 0x46b3a0
// 005801a1  83c40c               add esp, 0xc
// 005801a4  8bce                 mov ecx, esi
// 005801a6  c644241400           mov byte ptr [esp + 0x14], 0
// 005801ab  ff1528e67700         call dword ptr [0x77e628]
// 005801b1  8d4f08               lea ecx, [edi + 8]
// 005801b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005801bc  ff15ace67700         call dword ptr [0x77e6ac]
// 005801c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005801c6  5f                   pop edi
// 005801c7  5e                   pop esi
// 005801c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005801cf  83c410               add esp, 0x10
// 005801d2  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ??1Log@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
