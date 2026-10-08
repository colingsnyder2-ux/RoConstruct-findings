// roc 2009-12 005feb10  unit: G3D::_internal::DialogTemplate  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005feb10
//
// 005feb10  83ec18               sub esp, 0x18
// 005feb13  56                   push esi
// 005feb14  57                   push edi
// 005feb15  8bf1                 mov esi, ecx
// 005feb17  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005feb1a  81e703000080         and edi, 0x80000003
// 005feb20  c744240880000000     mov dword ptr [esp + 8], 0x80
// 005feb28  7905                 jns 0x5feb2f
// 005feb2a  4f                   dec edi
// 005feb2b  83cffc               or edi, 0xfffffffc
// 005feb2e  47                   inc edi
// 005feb2f  7409                 je 0x5feb3a
// 005feb31  57                   push edi
// 005feb32  e819fcffff           call 0x5fe750
// 005feb37  017e0c               add dword ptr [esi + 0xc], edi
// 005feb3a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 005feb3f  8b442428             mov eax, dword ptr [esp + 0x28]
// 005feb43  668b542434           mov dx, word ptr [esp + 0x34]
// 005feb48  66894c2414           mov word ptr [esp + 0x14], cx
// 005feb4d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 005feb52  8944240c             mov dword ptr [esp + 0xc], eax
// 005feb56  668b442438           mov ax, word ptr [esp + 0x38]
// 005feb5b  66894c241a           mov word ptr [esp + 0x1a], cx
// 005feb60  6a12                 push 0x12
// 005feb62  8d4c2410             lea ecx, [esp + 0x10]
// 005feb66  668954241a           mov word ptr [esp + 0x1a], dx
// 005feb6b  668b542444           mov dx, word ptr [esp + 0x44]
// 005feb70  668944241c           mov word ptr [esp + 0x1c], ax
// 005feb75  8b442430             mov eax, dword ptr [esp + 0x30]
// 005feb79  51                   push ecx
// 005feb7a  8bce                 mov ecx, esi
// 005feb7c  6689542424           mov word ptr [esp + 0x24], dx
// 005feb81  89442418             mov dword ptr [esp + 0x18], eax
// 005feb85  e806feffff           call 0x5fe990
// 005feb8a  6a02                 push 2
// 005feb8c  8d542444             lea edx, [esp + 0x44]
// 005feb90  52                   push edx
// 005feb91  8bce                 mov ecx, esi
// 005feb93  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 005feb9b  e8f0fdffff           call 0x5fe990
// 005feba0  6a02                 push 2
// 005feba2  8d44240c             lea eax, [esp + 0xc]
// 005feba6  50                   push eax
// 005feba7  8bce                 mov ecx, esi
// 005feba9  e8e2fdffff           call 0x5fe990
// 005febae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005febb2  51                   push ecx
// 005febb3  8bce                 mov ecx, esi
// 005febb5  e836feffff           call 0x5fe9f0
// 005febba  8b4604               mov eax, dword ptr [esi + 4]
// 005febbd  66ff4008             inc word ptr [eax + 8]
// 005febc1  6a02                 push 2
// 005febc3  8d542444             lea edx, [esp + 0x44]
// 005febc7  52                   push edx
// 005febc8  8bce                 mov ecx, esi
// 005febca  c744244800000000     mov dword ptr [esp + 0x48], 0
// 005febd2  e8b9fdffff           call 0x5fe990
// 005febd7  5f                   pop edi
// 005febd8  5e                   pop esi
// 005febd9  83c418               add esp, 0x18
// 005febdc  c22000               ret 0x20
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
