// roc 2009-06 0049db50  unit: G3D::VARArea  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049db50
//
// 0049db50  6aff                 push -1
// 0049db52  68446f8500           push 0x856f44
// 0049db57  64a100000000         mov eax, dword ptr fs:[0]
// 0049db5d  50                   push eax
// 0049db5e  64892500000000       mov dword ptr fs:[0], esp
// 0049db65  83ec08               sub esp, 8
// 0049db68  53                   push ebx
// 0049db69  33db                 xor ebx, ebx
// 0049db6b  56                   push esi
// 0049db6c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049db70  895c2408             mov dword ptr [esp + 8], ebx
// 0049db74  e877feffff           call 0x49d9f0
// 0049db79  6a38                 push 0x38
// 0049db7b  e8b8ae2700           call 0x718a38
// 0049db80  83c404               add esp, 4
// 0049db83  8944240c             mov dword ptr [esp + 0xc], eax
// 0049db87  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0049db8f  3bc3                 cmp eax, ebx
// 0049db91  7413                 je 0x49dba6
// 0049db93  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049db97  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049db9b  51                   push ecx
// 0049db9c  52                   push edx
// 0049db9d  8bc8                 mov ecx, eax
// 0049db9f  e82cf7ffff           call 0x49d2d0
// 0049dba4  eb02                 jmp 0x49dba8
// 0049dba6  33c0                 xor eax, eax
// 0049dba8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049dbac  50                   push eax
// 0049dbad  8bce                 mov ecx, esi
// 0049dbaf  885c241c             mov byte ptr [esp + 0x1c], bl
// 0049dbb3  891e                 mov dword ptr [esi], ebx
// 0049dbb5  e8a61c0000           call 0x49f860
// 0049dbba  56                   push esi
// 0049dbbb  b970c8a300           mov ecx, 0xa3c870
// 0049dbc0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049dbc4  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0049dbcc  e8fffcffff           call 0x49d8d0
// 0049dbd1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049dbd5  8bc6                 mov eax, esi
// 0049dbd7  5e                   pop esi
// 0049dbd8  5b                   pop ebx
// 0049dbd9  64890d00000000       mov dword ptr fs:[0], ecx
// 0049dbe0  83c414               add esp, 0x14
// 0049dbe3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
