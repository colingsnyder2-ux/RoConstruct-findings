// roc 2007-08 006721b0  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006721b0
//
// 006721b0  6aff                 push -1
// 006721b2  686e127600           push 0x76126e
// 006721b7  64a100000000         mov eax, dword ptr fs:[0]
// 006721bd  50                   push eax
// 006721be  a188518b00           mov eax, dword ptr [0x8b5188]
// 006721c3  33c4                 xor eax, esp
// 006721c5  50                   push eax
// 006721c6  8d442404             lea eax, [esp + 4]
// 006721ca  64a300000000         mov dword ptr fs:[0], eax
// 006721d0  b801000000           mov eax, 1
// 006721d5  84054c8d8c00         test byte ptr [0x8c8d4c], al
// 006721db  7525                 jne 0x672202
// 006721dd  09054c8d8c00         or dword ptr [0x8c8d4c], eax
// 006721e3  b9148d8c00           mov ecx, 0x8c8d14
// 006721e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006721f0  e8dbfdffff           call 0x671fd0
// 006721f5  6800cc7700           push 0x77cc00
// 006721fa  e824ebfbff           call 0x630d23
// 006721ff  83c404               add esp, 4
// 00672202  b8148d8c00           mov eax, 0x8c8d14
// 00672207  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067220b  64890d00000000       mov dword ptr fs:[0], ecx
// 00672212  59                   pop ecx
// 00672213  83c40c               add esp, 0xc
// 00672216  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
