// from server: 100% by tester
// roc 2007-03 0046d2c0  unit: seg_00460000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d2c0
//
// 0046d2c0  6aff                 push -1
// 0046d2c2  68d7657400           push 0x7465d7
// 0046d2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0046d2cd  50                   push eax
// 0046d2ce  51                   push ecx
// 0046d2cf  53                   push ebx
// 0046d2d0  56                   push esi
// 0046d2d1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d2d6  33c4                 xor eax, esp
// 0046d2d8  50                   push eax
// 0046d2d9  8d442410             lea eax, [esp + 0x10]
// 0046d2dd  64a300000000         mov dword ptr fs:[0], eax
// 0046d2e3  8bf1                 mov esi, ecx
// 0046d2e5  8974240c             mov dword ptr [esp + 0xc], esi
// 0046d2e9  8d4e54               lea ecx, [esi + 0x54]
// 0046d2ec  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046d2f4  ff158ce77700         call dword ptr [0x77e78c]
// 0046d2fa  8b4628               mov eax, dword ptr [esi + 0x28]
// 0046d2fd  33db                 xor ebx, ebx
// 0046d2ff  50                   push eax
// 0046d300  885c241c             mov byte ptr [esp + 0x1c], bl
// 0046d304  e877600800           call 0x4f3380
// 0046d309  83c404               add esp, 4
// 0046d30c  8d4e0c               lea ecx, [esi + 0xc]
// 0046d30f  895e28               mov dword ptr [esi + 0x28], ebx
// 0046d312  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0046d315  895e30               mov dword ptr [esi + 0x30], ebx
// 0046d318  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046d320  ff158ce77700         call dword ptr [0x77e78c]
// 0046d326  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d32a  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d331  59                   pop ecx
// 0046d332  5e                   pop esi
// 0046d333  5b                   pop ebx
// 0046d334  83c410               add esp, 0x10
// 0046d337  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
