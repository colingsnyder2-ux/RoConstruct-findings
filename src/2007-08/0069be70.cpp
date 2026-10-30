// from server: 100% by auto
// roc 2007-08 0069be70  unit: CXTPPropertyGridView  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069be70
//
// 0069be70  56                   push esi
// 0069be71  8bf1                 mov esi, ecx
// 0069be73  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069be76  85c0                 test eax, eax
// 0069be78  741a                 je 0x69be94
// 0069be7a  6a00                 push 0
// 0069be7c  6a00                 push 0
// 0069be7e  6888010000           push 0x188
// 0069be83  50                   push eax
// 0069be84  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0069be8a  50                   push eax
// 0069be8b  8bce                 mov ecx, esi
// 0069be8d  e88efdffff           call 0x69bc20
// 0069be92  5e                   pop esi
// 0069be93  c3                   ret 
// 0069be94  33c0                 xor eax, eax
// 0069be96  5e                   pop esi
// 0069be97  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetSelectedItem@CXTPPropertyGridView@@AAEPAVCXTPPropertyGridItem@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
