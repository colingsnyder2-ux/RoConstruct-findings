// roc 2010-06 0048ce30  unit: G3D::Win32Window  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ce30
//
// 0048ce30  64a100000000         mov eax, dword ptr fs:[0]
// 0048ce36  6aff                 push -1
// 0048ce38  68095b9800           push 0x985b09
// 0048ce3d  50                   push eax
// 0048ce3e  64892500000000       mov dword ptr fs:[0], esp
// 0048ce45  83ec1c               sub esp, 0x1c
// 0048ce48  68031f0000           push 0x1f03
// 0048ce4d  ff15acaa9e00         call dword ptr [0x9eaaac]
// 0048ce53  68cc3da100           push 0xa13dcc
// 0048ce58  50                   push eax
// 0048ce59  ff1530a79e00         call dword ptr [0x9ea730]
// 0048ce5f  83c408               add esp, 8
// 0048ce62  85c0                 test eax, eax
// 0048ce64  741b                 je 0x48ce81
// 0048ce66  833d8c3ac00000       cmp dword ptr [0xc03a8c], 0
// 0048ce6d  7412                 je 0x48ce81
// 0048ce6f  833d943ac00000       cmp dword ptr [0xc03a94], 0
// 0048ce76  7409                 je 0x48ce81
// 0048ce78  833d883ac00000       cmp dword ptr [0xc03a88], 0
// 0048ce7f  7516                 jne 0x48ce97
// 0048ce81  c605b338c00000       mov byte ptr [0xc038b3], 0
// 0048ce88  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048ce8c  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ce93  83c428               add esp, 0x28
// 0048ce96  c3                   ret 
// 0048ce97  56                   push esi
// 0048ce98  e883feffff           call 0x48cd20
// 0048ce9d  68b43da100           push 0xa13db4
// 0048cea2  8d4c2408             lea ecx, [esp + 8]
// 0048cea6  8bf0                 mov esi, eax
// 0048cea8  ff1510a49e00         call dword ptr [0x9ea410]
// 0048ceae  8d442404             lea eax, [esp + 4]
// 0048ceb2  50                   push eax
// 0048ceb3  56                   push esi
// 0048ceb4  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0048cebc  e81fa60c00           call 0x5574e0
// 0048cec1  83c408               add esp, 8
// 0048cec4  8d4c2404             lea ecx, [esp + 4]
// 0048cec8  a2b338c000           mov byte ptr [0xc038b3], al
// 0048cecd  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0048ced5  ff1500a49e00         call dword ptr [0x9ea400]
// 0048cedb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048cedf  5e                   pop esi
// 0048cee0  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cee7  83c428               add esp, 0x28
// 0048ceea  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
