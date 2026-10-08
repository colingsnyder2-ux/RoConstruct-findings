// from server: 100% by auto
// roc 2009-06 00847820  unit: G3D::Sky  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847820
//
// 00847820  6aff                 push -1
// 00847822  68b8f08500           push 0x85f0b8
// 00847827  64a100000000         mov eax, dword ptr fs:[0]
// 0084782d  50                   push eax
// 0084782e  64892500000000       mov dword ptr fs:[0], esp
// 00847835  51                   push ecx
// 00847836  56                   push esi
// 00847837  8bf1                 mov esi, ecx
// 00847839  89742404             mov dword ptr [esp + 4], esi
// 0084783d  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 00847843  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084784b  85c0                 test eax, eax
// 0084784d  7435                 je 0x847884
// 0084784f  83c004               add eax, 4
// 00847852  50                   push eax
// 00847853  ff15a4e18900         call dword ptr [0x89e1a4]
// 00847859  85c0                 test eax, eax
// 0084785b  751d                 jne 0x84787a
// 0084785d  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00847863  e818d5bfff           call 0x444d80
// 00847868  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0084786e  85c9                 test ecx, ecx
// 00847870  7408                 je 0x84787a
// 00847872  8b01                 mov eax, dword ptr [ecx]
// 00847874  8b10                 mov edx, dword ptr [eax]
// 00847876  6a01                 push 1
// 00847878  ffd2                 call edx
// 0084787a  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 00847884  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00847888  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 0084788e  5e                   pop esi
// 0084788f  64890d00000000       mov dword ptr fs:[0], ecx
// 00847896  83c410               add esp, 0x10
// 00847899  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
