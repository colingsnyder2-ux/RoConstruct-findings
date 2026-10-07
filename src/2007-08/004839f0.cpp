// roc 2007-08 004839f0  unit: G3D::Shader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004839f0
//
// 004839f0  53                   push ebx
// 004839f1  55                   push ebp
// 004839f2  8bd9                 mov ebx, ecx
// 004839f4  33ed                 xor ebp, ebp
// 004839f6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004839f9  7e39                 jle 0x483a34
// 004839fb  56                   push esi
// 004839fc  57                   push edi
// 004839fd  8d4900               lea ecx, [ecx]
// 00483a00  8b4308               mov eax, dword ptr [ebx + 8]
// 00483a03  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00483a06  85f6                 test esi, esi
// 00483a08  7420                 je 0x483a2a
// 00483a0a  8d9b00000000         lea ebx, [ebx]
// 00483a10  8b7e68               mov edi, dword ptr [esi + 0x68]
// 00483a13  8d4e04               lea ecx, [esi + 4]
// 00483a16  e835f2ffff           call 0x482c50
// 00483a1b  56                   push esi
// 00483a1c  e8cfbd0700           call 0x4ff7f0
// 00483a21  83c404               add esp, 4
// 00483a24  85ff                 test edi, edi
// 00483a26  8bf7                 mov esi, edi
// 00483a28  75e6                 jne 0x483a10
// 00483a2a  83c501               add ebp, 1
// 00483a2d  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00483a30  7cce                 jl 0x483a00
// 00483a32  5f                   pop edi
// 00483a33  5e                   pop esi
// 00483a34  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00483a37  51                   push ecx
// 00483a38  e8d3bd0700           call 0x4ff810
// 00483a3d  83c404               add esp, 4
// 00483a40  33c0                 xor eax, eax
// 00483a42  5d                   pop ebp
// 00483a43  894308               mov dword ptr [ebx + 8], eax
// 00483a46  89430c               mov dword ptr [ebx + 0xc], eax
// 00483a49  894304               mov dword ptr [ebx + 4], eax
// 00483a4c  5b                   pop ebx
// 00483a4d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
