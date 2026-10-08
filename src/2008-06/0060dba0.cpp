// roc 2008-06 0060dba0  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dba0
//
// 0060dba0  6aff                 push -1
// 0060dba2  68788c7d00           push 0x7d8c78
// 0060dba7  64a100000000         mov eax, dword ptr fs:[0]
// 0060dbad  50                   push eax
// 0060dbae  64892500000000       mov dword ptr fs:[0], esp
// 0060dbb5  83ec10               sub esp, 0x10
// 0060dbb8  53                   push ebx
// 0060dbb9  56                   push esi
// 0060dbba  57                   push edi
// 0060dbbb  8bf9                 mov edi, ecx
// 0060dbbd  8d44242c             lea eax, [esp + 0x2c]
// 0060dbc1  50                   push eax
// 0060dbc2  8d4c2430             lea ecx, [esp + 0x30]
// 0060dbc6  51                   push ecx
// 0060dbc7  8bcf                 mov ecx, edi
// 0060dbc9  897c2414             mov dword ptr [esp + 0x14], edi
// 0060dbcd  e8ced60300           call 0x64b2a0
// 0060dbd2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0060dbd6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0060dbda  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060dbe2  3bf3                 cmp esi, ebx
// 0060dbe4  7414                 je 0x60dbfa
// 0060dbe6  56                   push esi
// 0060dbe7  8d542414             lea edx, [esp + 0x14]
// 0060dbeb  52                   push edx
// 0060dbec  8bcf                 mov ecx, edi
// 0060dbee  e84db0fdff           call 0x5e8c40
// 0060dbf3  83c604               add esi, 4
// 0060dbf6  3bf3                 cmp esi, ebx
// 0060dbf8  75ec                 jne 0x60dbe6
// 0060dbfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060dbfe  8bc7                 mov eax, edi
// 0060dc00  5f                   pop edi
// 0060dc01  5e                   pop esi
// 0060dc02  5b                   pop ebx
// 0060dc03  64890d00000000       mov dword ptr fs:[0], ecx
// 0060dc0a  83c41c               add esp, 0x1c
// 0060dc0d  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
