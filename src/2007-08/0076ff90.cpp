// roc 2007-08 0076ff90  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ff90
//
// 0076ff90  b978fa8b00           mov ecx, 0x8bfa78
// 0076ff95  e8d6ddeaff           call 0x61dd70
// 0076ff9a  a37cfa8b00           mov dword ptr [0x8bfa7c], eax
// 0076ff9f  c6403501             mov byte ptr [eax + 0x35], 1
// 0076ffa3  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 0076ffa8  894004               mov dword ptr [eax + 4], eax
// 0076ffab  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 0076ffb0  8900                 mov dword ptr [eax], eax
// 0076ffb2  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 0076ffb7  894008               mov dword ptr [eax + 8], eax
// 0076ffba  68e08f7700           push 0x778fe0
// 0076ffbf  c70580fa8b0000000000 mov dword ptr [0x8bfa80], 0
// 0076ffc9  e8550decff           call 0x630d23
// 0076ffce  59                   pop ecx
// 0076ffcf  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??__Ecache@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
