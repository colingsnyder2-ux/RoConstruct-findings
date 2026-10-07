// roc 2007-08 00500440  unit: G3D::Shader  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500440
//
// 00500440  6aff                 push -1
// 00500442  681eec7400           push 0x74ec1e
// 00500447  64a100000000         mov eax, dword ptr fs:[0]
// 0050044d  50                   push eax
// 0050044e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00500453  33c4                 xor eax, esp
// 00500455  50                   push eax
// 00500456  8d442404             lea eax, [esp + 4]
// 0050045a  64a300000000         mov dword ptr fs:[0], eax
// 00500460  e8cbf7ffff           call 0x4ffc30
// 00500465  b801000000           mov eax, 1
// 0050046a  840510098c00         test byte ptr [0x8c0910], al
// 00500470  752b                 jne 0x50049d
// 00500472  090510098c00         or dword ptr [0x8c0910], eax
// 00500478  6898008c00           push 0x8c0098
// 0050047d  b9f4088c00           mov ecx, 0x8c08f4
// 00500482  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050048a  ff1598e67700         call dword ptr [0x77e698]
// 00500490  68a0927700           push 0x7792a0
// 00500495  e889081300           call 0x630d23
// 0050049a  83c404               add esp, 4
// 0050049d  b8f4088c00           mov eax, 0x8c08f4
// 005004a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005004a6  64890d00000000       mov dword ptr fs:[0], ecx
// 005004ad  59                   pop ecx
// 005004ae  83c40c               add esp, 0xc
// 005004b1  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
