// roc 2008-06 00557e80  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557e80
//
// 00557e80  83ec10               sub esp, 0x10
// 00557e83  53                   push ebx
// 00557e84  56                   push esi
// 00557e85  8bf1                 mov esi, ecx
// 00557e87  8b4614               mov eax, dword ptr [esi + 0x14]
// 00557e8a  2b4610               sub eax, dword ptr [esi + 0x10]
// 00557e8d  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00557e90  c1f802               sar eax, 2
// 00557e93  33c9                 xor ecx, ecx
// 00557e95  89542414             mov dword ptr [esp + 0x14], edx
// 00557e99  8d54240c             lea edx, [esp + 0xc]
// 00557e9d  57                   push edi
// 00557e9e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00557ea2  89442414             mov dword ptr [esp + 0x14], eax
// 00557ea6  89561c               mov dword ptr [esi + 0x1c], edx
// 00557ea9  85c0                 test eax, eax
// 00557eab  0f8680000000         jbe 0x557f31
// 00557eb1  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00557eb7  8b4614               mov eax, dword ptr [esi + 0x14]
// 00557eba  2b4610               sub eax, dword ptr [esi + 0x10]
// 00557ebd  8bf9                 mov edi, ecx
// 00557ebf  c1f802               sar eax, 2
// 00557ec2  3bc8                 cmp ecx, eax
// 00557ec4  7202                 jb 0x557ec8
// 00557ec6  ffd3                 call ebx
// 00557ec8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00557ecb  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 00557ece  8b542420             mov edx, dword ptr [esp + 0x20]
// 00557ed2  50                   push eax
// 00557ed3  83ec10               sub esp, 0x10
// 00557ed6  8bc4                 mov eax, esp
// 00557ed8  8910                 mov dword ptr [eax], edx
// 00557eda  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00557ede  894804               mov dword ptr [eax + 4], ecx
// 00557ee1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00557ee5  89642420             mov dword ptr [esp + 0x20], esp
// 00557ee9  85c9                 test ecx, ecx
// 00557eeb  740c                 je 0x557ef9
// 00557eed  83c104               add ecx, 4
// 00557ef0  ba01000000           mov edx, 1
// 00557ef5  f00fc111             lock xadd dword ptr [ecx], edx
// 00557ef9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00557efd  894808               mov dword ptr [eax + 8], ecx
// 00557f00  8b542440             mov edx, dword ptr [esp + 0x40]
// 00557f04  89500c               mov dword ptr [eax + 0xc], edx
// 00557f07  8b442440             mov eax, dword ptr [esp + 0x40]
// 00557f0b  85c0                 test eax, eax
// 00557f0d  740c                 je 0x557f1b
// 00557f0f  83c004               add eax, 4
// 00557f12  b901000000           mov ecx, 1
// 00557f17  f00fc108             lock xadd dword ptr [eax], ecx
// 00557f1b  8bce                 mov ecx, esi
// 00557f1d  e85ef8ffff           call 0x557780
// 00557f22  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00557f26  41                   inc ecx
// 00557f27  894c2410             mov dword ptr [esp + 0x10], ecx
// 00557f2b  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00557f2f  7286                 jb 0x557eb7
// 00557f31  8b542418             mov edx, dword ptr [esp + 0x18]
// 00557f35  8d4c2420             lea ecx, [esp + 0x20]
// 00557f39  89561c               mov dword ptr [esi + 0x1c], edx
// 00557f3c  e81fadecff           call 0x422c60
// 00557f41  5f                   pop edi
// 00557f42  5e                   pop esi
// 00557f43  5b                   pop ebx
// 00557f44  83c410               add esp, 0x10
// 00557f47  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
