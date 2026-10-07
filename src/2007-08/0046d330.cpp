// roc 2007-08 0046d330  unit: RBX::LDraw2Lua::LuaWriter  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d330
//
// 0046d330  6aff                 push -1
// 0046d332  6857417400           push 0x744157
// 0046d337  64a100000000         mov eax, dword ptr fs:[0]
// 0046d33d  50                   push eax
// 0046d33e  51                   push ecx
// 0046d33f  53                   push ebx
// 0046d340  56                   push esi
// 0046d341  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d346  33c4                 xor eax, esp
// 0046d348  50                   push eax
// 0046d349  8d442410             lea eax, [esp + 0x10]
// 0046d34d  64a300000000         mov dword ptr fs:[0], eax
// 0046d353  8bf1                 mov esi, ecx
// 0046d355  8974240c             mov dword ptr [esp + 0xc], esi
// 0046d359  8d4e54               lea ecx, [esi + 0x54]
// 0046d35c  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046d364  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d36a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0046d36d  33db                 xor ebx, ebx
// 0046d36f  50                   push eax
// 0046d370  885c241c             mov byte ptr [esp + 0x1c], bl
// 0046d374  e897240900           call 0x4ff810
// 0046d379  83c404               add esp, 4
// 0046d37c  8d4e0c               lea ecx, [esi + 0xc]
// 0046d37f  895e28               mov dword ptr [esi + 0x28], ebx
// 0046d382  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0046d385  895e30               mov dword ptr [esi + 0x30], ebx
// 0046d388  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046d390  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d396  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d39a  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d3a1  59                   pop ecx
// 0046d3a2  5e                   pop esi
// 0046d3a3  5b                   pop ebx
// 0046d3a4  83c410               add esp, 0x10
// 0046d3a7  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
