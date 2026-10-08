// roc 2009-12 008e1800  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1800
//
// 008e1800  6aff                 push -1
// 008e1802  68de5c9600           push 0x965cde
// 008e1807  64a100000000         mov eax, dword ptr fs:[0]
// 008e180d  50                   push eax
// 008e180e  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1813  33c4                 xor eax, esp
// 008e1815  50                   push eax
// 008e1816  8d442404             lea eax, [esp + 4]
// 008e181a  64a300000000         mov dword ptr fs:[0], eax
// 008e1820  b801000000           mov eax, 1
// 008e1825  840570bfb900         test byte ptr [0xb9bf70], al
// 008e182b  7525                 jne 0x8e1852
// 008e182d  090570bfb900         or dword ptr [0xb9bf70], eax
// 008e1833  b928bfb900           mov ecx, 0xb9bf28
// 008e1838  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008e1840  e89bf7ffff           call 0x8e0fe0
// 008e1845  6890a79800           push 0x98a790
// 008e184a  e8da30f1ff           call 0x7f4929
// 008e184f  83c404               add esp, 4
// 008e1852  b828bfb900           mov eax, 0xb9bf28
// 008e1857  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e185b  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1862  59                   pop ecx
// 008e1863  83c40c               add esp, 0xc
// 008e1866  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
