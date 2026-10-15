// roc 2008-06 0064f830  unit: RBX::ImageKeyButton  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f830
//
// 0064f830  8b442404             mov eax, dword ptr [esp + 4]
// 0064f834  83f806               cmp eax, 6
// 0064f837  772a                 ja 0x64f863
// 0064f839  ff2485a0f86400       jmp dword ptr [eax*4 + 0x64f8a0]
// 0064f840  e9bb0cfbff           jmp 0x600500
// 0064f845  e966feffff           jmp 0x64f6b0
// 0064f84a  e9a1feffff           jmp 0x64f6f0
// 0064f84f  e9dcfeffff           jmp 0x64f730
// 0064f854  e917ffffff           jmp 0x64f770
// 0064f859  e952ffffff           jmp 0x64f7b0
// 0064f85e  e98dffffff           jmp 0x64f7f0
// 0064f863  b801000000           mov eax, 1
// 0064f868  840524d99700         test byte ptr [0x97d924], al
// 0064f86e  752a                 jne 0x64f89a
// 0064f870  d905d8ba8400         fld dword ptr [0x84bad8]
// 0064f876  090524d99700         or dword ptr [0x97d924], eax
// 0064f87c  d91d18d99700         fstp dword ptr [0x97d918]
// 0064f882  d905d4ba8400         fld dword ptr [0x84bad4]
// 0064f888  d91d1cd99700         fstp dword ptr [0x97d91c]
// 0064f88e  d905d0ba8400         fld dword ptr [0x84bad0]
// 0064f894  d91d20d99700         fstp dword ptr [0x97d920]
// 0064f89a  b818d99700           mov eax, 0x97d918
// 0064f89f  c3                   ret 
// 0064f8a0  40                   inc eax
// 0064f8a1  f8                   clc 
// 0064f8a2  640045f8             add byte ptr fs:[ebp - 8], al
// 0064f8a6  64004af8             add byte ptr fs:[edx - 8], cl
// 0064f8aa  64004ff8             add byte ptr fs:[edi - 8], cl
// 0064f8ae  640054f864           add byte ptr fs:[eax + edi*8 + 0x64], dl
// 0064f8b3  0059f8               add byte ptr [ecx - 8], bl
// 0064f8b6  64005ef8             add byte ptr fs:[esi - 8], bl
// library rbxgs/roc_scorehud_compile_board_59229c00dc6d423a.cpp (function ?colorFromIndex8@Color@RBX@@SAABVColor3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_scorehud_compile_board_59229c00dc6d423a.cpp
