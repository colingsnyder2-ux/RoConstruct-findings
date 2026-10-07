// roc 2007-08 0047f7a0  unit: G3D::Win32Window  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047f7a0
//
// 0047f7a0  6aff                 push -1
// 0047f7a2  686b5c7400           push 0x745c6b
// 0047f7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0047f7ad  50                   push eax
// 0047f7ae  51                   push ecx
// 0047f7af  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047f7b4  33c4                 xor eax, esp
// 0047f7b6  50                   push eax
// 0047f7b7  8d442408             lea eax, [esp + 8]
// 0047f7bb  64a300000000         mov dword ptr fs:[0], eax
// 0047f7c1  68f0010000           push 0x1f0
// 0047f7c6  e82b071b00           call 0x62fef6
// 0047f7cb  83c404               add esp, 4
// 0047f7ce  89442404             mov dword ptr [esp + 4], eax
// 0047f7d2  85c0                 test eax, eax
// 0047f7d4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047f7dc  7421                 je 0x47f7ff
// 0047f7de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047f7e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047f7e6  51                   push ecx
// 0047f7e7  52                   push edx
// 0047f7e8  8bc8                 mov ecx, eax
// 0047f7ea  e881feffff           call 0x47f670
// 0047f7ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047f7f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f7fa  59                   pop ecx
// 0047f7fb  83c410               add esp, 0x10
// 0047f7fe  c3                   ret 
// 0047f7ff  33c0                 xor eax, eax
// 0047f801  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047f805  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f80c  59                   pop ecx
// 0047f80d  83c410               add esp, 0x10
// 0047f810  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
