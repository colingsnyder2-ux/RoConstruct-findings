// roc 2007-08 0050efa0  unit: G3D::TextInput::WrongSymbol  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050efa0
//
// 0050efa0  6aff                 push -1
// 0050efa2  6812007500           push 0x750012
// 0050efa7  64a100000000         mov eax, dword ptr fs:[0]
// 0050efad  50                   push eax
// 0050efae  83ec30               sub esp, 0x30
// 0050efb1  56                   push esi
// 0050efb2  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050efb7  33c4                 xor eax, esp
// 0050efb9  50                   push eax
// 0050efba  8d442438             lea eax, [esp + 0x38]
// 0050efbe  64a300000000         mov dword ptr fs:[0], eax
// 0050efc4  8d44240c             lea eax, [esp + 0xc]
// 0050efc8  50                   push eax
// 0050efc9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050efd1  e86affffff           call 0x50ef40
// 0050efd6  8b742448             mov esi, dword ptr [esp + 0x48]
// 0050efda  50                   push eax
// 0050efdb  8bce                 mov ecx, esi
// 0050efdd  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0050efe5  ff159ce67700         call dword ptr [0x77e69c]
// 0050efeb  8d4c240c             lea ecx, [esp + 0xc]
// 0050efef  c744240801000000     mov dword ptr [esp + 8], 1
// 0050eff7  c644244000           mov byte ptr [esp + 0x40], 0
// 0050effc  ff15ace67700         call dword ptr [0x77e6ac]
// 0050f002  8bc6                 mov eax, esi
// 0050f004  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0050f008  64890d00000000       mov dword ptr fs:[0], ecx
// 0050f00f  59                   pop ecx
// 0050f010  5e                   pop esi
// 0050f011  83c43c               add esp, 0x3c
// 0050f014  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
