// roc 2009-06 004c9440  unit: boost::X::V?$function0::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c9440
//
// 004c9440  64a100000000         mov eax, dword ptr fs:[0]
// 004c9446  6aff                 push -1
// 004c9448  68dea28500           push 0x85a2de
// 004c944d  50                   push eax
// 004c944e  b801000000           mov eax, 1
// 004c9453  64892500000000       mov dword ptr fs:[0], esp
// 004c945a  840568dca300         test byte ptr [0xa3dc68], al
// 004c9460  7530                 jne 0x4c9492
// 004c9462  090568dca300         or dword ptr [0xa3dc68], eax
// 004c9468  6840f29e00           push 0x9ef240
// 004c946d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c9475  e87610f4ff           call 0x40a4f0
// 004c947a  50                   push eax
// 004c947b  b9a8dba300           mov ecx, 0xa3dba8
// 004c9480  e85b031300           call 0x5f97e0
// 004c9485  6800568900           push 0x895600
// 004c948a  e86c062500           call 0x719afb
// 004c948f  83c404               add esp, 4
// 004c9492  8b0c24               mov ecx, dword ptr [esp]
// 004c9495  b8a8dba300           mov eax, 0xa3dba8
// 004c949a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c94a1  83c40c               add esp, 0xc
// 004c94a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
