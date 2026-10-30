// roc 2009-12 00878280  unit: CXTPControlGallery  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878280
//
// 00878280  56                   push esi
// 00878281  8bf1                 mov esi, ecx
// 00878283  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 0087828a  7540                 jne 0x8782cc
// 0087828c  e85ff1ffff           call 0x8773f0
// 00878291  83f8ff               cmp eax, -1
// 00878294  7436                 je 0x8782cc
// 00878296  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087829d  752d                 jne 0x8782cc
// 0087829f  8b06                 mov eax, dword ptr [esi]
// 008782a1  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008782a4  ffd2                 call edx
// 008782a6  85c0                 test eax, eax
// 008782a8  7422                 je 0x8782cc
// 008782aa  6810100000           push 0x1010
// 008782af  8bce                 mov ecx, esi
// 008782b1  c7864402000001000000 mov dword ptr [esi + 0x244], 1
// 008782bb  e8d002f8ff           call 0x7f8590
// 008782c0  6813100000           push 0x1013
// 008782c5  8bce                 mov ecx, esi
// 008782c7  e8c402f8ff           call 0x7f8590
// 008782cc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008782d2  83b8c000000000       cmp dword ptr [eax + 0xc0], 0
// 008782d9  7408                 je 0x8782e3
// 008782db  8bce                 mov ecx, esi
// 008782dd  5e                   pop esi
// 008782de  e97d2bfcff           jmp 0x83ae60
// 008782e3  5e                   pop esi
// 008782e4  c3                   ret 
// copied from an identical function in another client (function ?OnMouseHover@CXTPControlGallery@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp