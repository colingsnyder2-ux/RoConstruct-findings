// roc 2007-08 005004c0  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005004c0
//
// 005004c0  6aff                 push -1
// 005004c2  684eec7400           push 0x74ec4e
// 005004c7  64a100000000         mov eax, dword ptr fs:[0]
// 005004cd  50                   push eax
// 005004ce  a188518b00           mov eax, dword ptr [0x8b5188]
// 005004d3  33c4                 xor eax, esp
// 005004d5  50                   push eax
// 005004d6  8d442404             lea eax, [esp + 4]
// 005004da  64a300000000         mov dword ptr fs:[0], eax
// 005004e0  e84bf7ffff           call 0x4ffc30
// 005004e5  b801000000           mov eax, 1
// 005004ea  840530098c00         test byte ptr [0x8c0930], al
// 005004f0  752b                 jne 0x50051d
// 005004f2  090530098c00         or dword ptr [0x8c0930], eax
// 005004f8  6898048c00           push 0x8c0498
// 005004fd  b914098c00           mov ecx, 0x8c0914
// 00500502  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050050a  ff1598e67700         call dword ptr [0x77e698]
// 00500510  68b0927700           push 0x7792b0
// 00500515  e809081300           call 0x630d23
// 0050051a  83c404               add esp, 4
// 0050051d  b814098c00           mov eax, 0x8c0914
// 00500522  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00500526  64890d00000000       mov dword ptr fs:[0], ecx
// 0050052d  59                   pop ecx
// 0050052e  83c40c               add esp, 0xc
// 00500531  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
