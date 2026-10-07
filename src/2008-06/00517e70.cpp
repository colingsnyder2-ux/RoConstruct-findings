// roc 2008-06 00517e70  unit: G3D::TextInput::WrongSymbol  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00517e70
//
// 00517e70  56                   push esi
// 00517e71  8bf1                 mov esi, ecx
// 00517e73  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00517e76  40                   inc eax
// 00517e77  57                   push edi
// 00517e78  394614               cmp dword ptr [esi + 0x14], eax
// 00517e7b  7707                 ja 0x517e84
// 00517e7d  6a01                 push 1
// 00517e7f  e84cfbffff           call 0x5179d0
// 00517e84  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00517e87  85ff                 test edi, edi
// 00517e89  7503                 jne 0x517e8e
// 00517e8b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00517e8e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00517e91  4f                   dec edi
// 00517e92  833cb900             cmp dword ptr [ecx + edi*4], 0
// 00517e96  7510                 jne 0x517ea8
// 00517e98  6a2c                 push 0x2c
// 00517e9a  e8818a1800           call 0x6a0920
// 00517e9f  8b5610               mov edx, dword ptr [esi + 0x10]
// 00517ea2  83c404               add esp, 4
// 00517ea5  8904ba               mov dword ptr [edx + edi*4], eax
// 00517ea8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00517eac  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00517eaf  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 00517eb2  50                   push eax
// 00517eb3  52                   push edx
// 00517eb4  e8d7ebffff           call 0x516a90
// 00517eb9  ff461c               inc dword ptr [esi + 0x1c]
// 00517ebc  83c408               add esp, 8
// 00517ebf  897e18               mov dword ptr [esi + 0x18], edi
// 00517ec2  5f                   pop edi
// 00517ec3  5e                   pop esi
// 00517ec4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
