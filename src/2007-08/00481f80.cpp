// from server: 100% by tester
// roc 2007-03 00480430  unit: seg_00480000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480430
//
// 00480430  6aff                 push -1
// 00480432  68747f7400           push 0x747f74
// 00480437  64a100000000         mov eax, dword ptr fs:[0]
// 0048043d  50                   push eax
// 0048043e  51                   push ecx
// 0048043f  56                   push esi
// 00480440  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00480445  33c4                 xor eax, esp
// 00480447  50                   push eax
// 00480448  8d44240c             lea eax, [esp + 0xc]
// 0048044c  64a300000000         mov dword ptr fs:[0], eax
// 00480452  8bf1                 mov esi, ecx
// 00480454  89742408             mov dword ptr [esp + 8], esi
// 00480458  c70694977900         mov dword ptr [esi], 0x799794
// 0048045e  a1dc7f8b00           mov eax, dword ptr [0x8b7fdc]
// 00480463  85c0                 test eax, eax
// 00480465  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0048046d  744e                 je 0x4804bd
// 0048046f  833d78828b0000       cmp dword ptr [0x8b8278], 0
// 00480476  743d                 je 0x4804b5
// 00480478  8d460c               lea eax, [esi + 0xc]
// 0048047b  50                   push eax
// 0048047c  b978828b00           mov ecx, 0x8b8278
// 00480481  e87ab5ffff           call 0x47ba00
// 00480486  a17c828b00           mov eax, dword ptr [0x8b827c]
// 0048048b  83f814               cmp eax, 0x14
// 0048048e  7e2d                 jle 0x4804bd
// 00480490  8b0d78828b00         mov ecx, dword ptr [0x8b8278]
// 00480496  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 0048049a  52                   push edx
// 0048049b  83c0fb               add eax, -5
// 0048049e  50                   push eax
// 0048049f  ff15dc7f8b00         call dword ptr [0x8b7fdc]
// 004804a5  6a01                 push 1
// 004804a7  6a14                 push 0x14
// 004804a9  b978828b00           mov ecx, 0x8b8278
// 004804ae  e8edb0ffff           call 0x47b5a0
// 004804b3  eb08                 jmp 0x4804bd
// 004804b5  8d4e0c               lea ecx, [esi + 0xc]
// 004804b8  51                   push ecx
// 004804b9  6a01                 push 1
// 004804bb  ffd0                 call eax
// 004804bd  8d4e10               lea ecx, [esi + 0x10]
// 004804c0  c644241400           mov byte ptr [esp + 0x14], 0
// 004804c5  ff158ce77700         call dword ptr [0x77e78c]
// 004804cb  c706946d7900         mov dword ptr [esi], 0x796d94
// 004804d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004804d5  64890d00000000       mov dword ptr fs:[0], ecx
// 004804dc  59                   pop ecx
// 004804dd  5e                   pop esi
// 004804de  83c410               add esp, 0x10
// 004804e1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
