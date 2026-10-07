// roc 2009-06 0057c970  unit: G3D::Sphere  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c970
//
// 0057c970  56                   push esi
// 0057c971  8bf1                 mov esi, ecx
// 0057c973  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057c976  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c97a  8b4608               mov eax, dword ptr [esi + 8]
// 0057c97d  03d1                 add edx, ecx
// 0057c97f  3bd0                 cmp edx, eax
// 0057c981  7e2f                 jle 0x57c9b2
// 0057c983  8d0448               lea eax, [eax + ecx*2]
// 0057c986  57                   push edi
// 0057c987  50                   push eax
// 0057c988  894608               mov dword ptr [esi + 8], eax
// 0057c98b  ff1594e98900         call dword ptr [0x89e994]
// 0057c991  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057c994  8bf8                 mov edi, eax
// 0057c996  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057c999  50                   push eax
// 0057c99a  51                   push ecx
// 0057c99b  57                   push edi
// 0057c99c  e815d51900           call 0x719eb6
// 0057c9a1  8b5604               mov edx, dword ptr [esi + 4]
// 0057c9a4  52                   push edx
// 0057c9a5  ff15cce98900         call dword ptr [0x89e9cc]
// 0057c9ab  83c414               add esp, 0x14
// 0057c9ae  897e04               mov dword ptr [esi + 4], edi
// 0057c9b1  5f                   pop edi
// 0057c9b2  5e                   pop esi
// 0057c9b3  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
