// roc 2007-08 0047ffa0  unit: G3D::Win32Window  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ffa0
//
// 0047ffa0  6aff                 push -1
// 0047ffa2  68db707400           push 0x7470db
// 0047ffa7  64a100000000         mov eax, dword ptr fs:[0]
// 0047ffad  50                   push eax
// 0047ffae  51                   push ecx
// 0047ffaf  56                   push esi
// 0047ffb0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047ffb5  33c4                 xor eax, esp
// 0047ffb7  50                   push eax
// 0047ffb8  8d44240c             lea eax, [esp + 0xc]
// 0047ffbc  64a300000000         mov dword ptr fs:[0], eax
// 0047ffc2  8bf1                 mov esi, ecx
// 0047ffc4  83beb401000000       cmp dword ptr [esi + 0x1b4], 0
// 0047ffcb  7532                 jne 0x47ffff
// 0047ffcd  6a14                 push 0x14
// 0047ffcf  e822ff1a00           call 0x62fef6
// 0047ffd4  83c404               add esp, 4
// 0047ffd7  89442408             mov dword ptr [esp + 8], eax
// 0047ffdb  85c0                 test eax, eax
// 0047ffdd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0047ffe5  7410                 je 0x47fff7
// 0047ffe7  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 0047ffed  51                   push ecx
// 0047ffee  8bc8                 mov ecx, eax
// 0047fff0  e8ebfeffff           call 0x47fee0
// 0047fff5  eb02                 jmp 0x47fff9
// 0047fff7  33c0                 xor eax, eax
// 0047fff9  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0047ffff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00480003  64890d00000000       mov dword ptr fs:[0], ecx
// 0048000a  59                   pop ecx
// 0048000b  5e                   pop esi
// 0048000c  83c410               add esp, 0x10
// 0048000f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enableDirectInput@Win32Window@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
