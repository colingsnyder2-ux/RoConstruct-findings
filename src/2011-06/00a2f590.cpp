// from server: 100% by auto
// roc 2011-06 00a2f590  unit: seg_00a20000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f590
//
// 00a2f590  56                   push esi
// 00a2f591  8b35c81ba400         mov esi, dword ptr [0xa41bc8]
// 00a2f597  6a1e                 push 0x1e
// 00a2f599  33c9                 xor ecx, ecx
// 00a2f59b  6a2b                 push 0x2b
// 00a2f59d  51                   push ecx
// 00a2f59e  51                   push ecx
// 00a2f59f  b819000000           mov eax, 0x19
// 00a2f5a4  68488fd100           push 0xd18f48
// 00a2f5a9  a3408fd100           mov dword ptr [0xd18f40], eax
// 00a2f5ae  890d448fd100         mov dword ptr [0xd18f44], ecx
// 00a2f5b4  ffd6                 call esi
// 00a2f5b6  6a4c                 push 0x4c
// 00a2f5b8  6a3c                 push 0x3c
// 00a2f5ba  6a21                 push 0x21
// 00a2f5bc  6a1e                 push 0x1e
// 00a2f5be  33c0                 xor eax, eax
// 00a2f5c0  b919000000           mov ecx, 0x19
// 00a2f5c5  68608fd100           push 0xd18f60
// 00a2f5ca  a3588fd100           mov dword ptr [0xd18f58], eax
// 00a2f5cf  890d5c8fd100         mov dword ptr [0xd18f5c], ecx
// 00a2f5d5  ffd6                 call esi
// 00a2f5d7  6a1e                 push 0x1e
// 00a2f5d9  6a56                 push 0x56
// 00a2f5db  6a00                 push 0
// 00a2f5dd  6a2b                 push 0x2b
// 00a2f5df  b819000000           mov eax, 0x19
// 00a2f5e4  b93f000000           mov ecx, 0x3f
// 00a2f5e9  68788fd100           push 0xd18f78
// 00a2f5ee  a3708fd100           mov dword ptr [0xd18f70], eax
// 00a2f5f3  890d748fd100         mov dword ptr [0xd18f74], ecx
// 00a2f5f9  ffd6                 call esi
// 00a2f5fb  6a4c                 push 0x4c
// 00a2f5fd  6a1e                 push 0x1e
// 00a2f5ff  6a21                 push 0x21
// 00a2f601  6a00                 push 0
// 00a2f603  b83f000000           mov eax, 0x3f
// 00a2f608  b919000000           mov ecx, 0x19
// 00a2f60d  68908fd100           push 0xd18f90
// 00a2f612  a3888fd100           mov dword ptr [0xd18f88], eax
// 00a2f617  890d8c8fd100         mov dword ptr [0xd18f8c], ecx
// 00a2f61d  ffd6                 call esi
// 00a2f61f  6a6a                 push 0x6a
// 00a2f621  6a2b                 push 0x2b
// 00a2f623  33c9                 xor ecx, ecx
// 00a2f625  6a4c                 push 0x4c
// 00a2f627  51                   push ecx
// 00a2f628  b819000000           mov eax, 0x19
// 00a2f62d  68a88fd100           push 0xd18fa8
// 00a2f632  a3a08fd100           mov dword ptr [0xd18fa0], eax
// 00a2f637  890da48fd100         mov dword ptr [0xd18fa4], ecx
// 00a2f63d  ffd6                 call esi
// 00a2f63f  6a4c                 push 0x4c
// 00a2f641  6a78                 push 0x78
// 00a2f643  6a21                 push 0x21
// 00a2f645  6a5a                 push 0x5a
// 00a2f647  33c0                 xor eax, eax
// 00a2f649  b919000000           mov ecx, 0x19
// 00a2f64e  68c08fd100           push 0xd18fc0
// 00a2f653  a3b88fd100           mov dword ptr [0xd18fb8], eax
// 00a2f658  890dbc8fd100         mov dword ptr [0xd18fbc], ecx
// 00a2f65e  ffd6                 call esi
// 00a2f660  6a6a                 push 0x6a
// 00a2f662  6a56                 push 0x56
// 00a2f664  6a4c                 push 0x4c
// 00a2f666  6a2b                 push 0x2b
// 00a2f668  b819000000           mov eax, 0x19
// 00a2f66d  b93f000000           mov ecx, 0x3f
// 00a2f672  68d88fd100           push 0xd18fd8
// 00a2f677  a3d08fd100           mov dword ptr [0xd18fd0], eax
// 00a2f67c  890dd48fd100         mov dword ptr [0xd18fd4], ecx
// 00a2f682  ffd6                 call esi
// 00a2f684  6a4c                 push 0x4c
// 00a2f686  6a5a                 push 0x5a
// 00a2f688  6a21                 push 0x21
// 00a2f68a  b83f000000           mov eax, 0x3f
// 00a2f68f  b919000000           mov ecx, 0x19
// 00a2f694  6a3c                 push 0x3c
// 00a2f696  a3e88fd100           mov dword ptr [0xd18fe8], eax
// 00a2f69b  890dec8fd100         mov dword ptr [0xd18fec], ecx
// 00a2f6a1  68f08fd100           push 0xd18ff0
// 00a2f6a6  ffd6                 call esi
// 00a2f6a8  6a21                 push 0x21
// 00a2f6aa  6a77                 push 0x77
// 00a2f6ac  6a00                 push 0
// 00a2f6ae  b81e000000           mov eax, 0x1e
// 00a2f6b3  6a56                 push 0x56
// 00a2f6b5  8bc8                 mov ecx, eax
// 00a2f6b7  680890d100           push 0xd19008
// 00a2f6bc  a30090d100           mov dword ptr [0xd19000], eax
// 00a2f6c1  890d0490d100         mov dword ptr [0xd19004], ecx
// 00a2f6c7  ffd6                 call esi
// 00a2f6c9  6a6d                 push 0x6d
// 00a2f6cb  6a77                 push 0x77
// 00a2f6cd  6a4c                 push 0x4c
// 00a2f6cf  b81e000000           mov eax, 0x1e
// 00a2f6d4  6a56                 push 0x56
// 00a2f6d6  8bc8                 mov ecx, eax
// 00a2f6d8  682090d100           push 0xd19020
// 00a2f6dd  a31890d100           mov dword ptr [0xd19018], eax
// 00a2f6e2  890d1c90d100         mov dword ptr [0xd1901c], ecx
// 00a2f6e8  ffd6                 call esi
// 00a2f6ea  6a2b                 push 0x2b
// 00a2f6ec  6a2b                 push 0x2b
// 00a2f6ee  6a00                 push 0
// 00a2f6f0  b819000000           mov eax, 0x19
// 00a2f6f5  6a00                 push 0
// 00a2f6f7  8bc8                 mov ecx, eax
// 00a2f6f9  683890d100           push 0xd19038
// 00a2f6fe  a33090d100           mov dword ptr [0xd19030], eax
// 00a2f703  890d3490d100         mov dword ptr [0xd19034], ecx
// 00a2f709  ffd6                 call esi
// 00a2f70b  5e                   pop esi
// 00a2f70c  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerWidbey@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
