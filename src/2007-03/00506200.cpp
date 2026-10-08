// roc 2007-03 00506200  unit: seg_00500000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506200
//
// 00506200  83ec18               sub esp, 0x18
// 00506203  56                   push esi
// 00506204  57                   push edi
// 00506205  8bf1                 mov esi, ecx
// 00506207  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0050620a  81e703000080         and edi, 0x80000003
// 00506210  c744240880000000     mov dword ptr [esp + 8], 0x80
// 00506218  7905                 jns 0x50621f
// 0050621a  4f                   dec edi
// 0050621b  83cffc               or edi, 0xfffffffc
// 0050621e  47                   inc edi
// 0050621f  7409                 je 0x50622a
// 00506221  57                   push edi
// 00506222  e809fcffff           call 0x505e30
// 00506227  017e0c               add dword ptr [esi + 0xc], edi
// 0050622a  668b4c2430           mov cx, word ptr [esp + 0x30]
// 0050622f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506233  668b542434           mov dx, word ptr [esp + 0x34]
// 00506238  66894c2414           mov word ptr [esp + 0x14], cx
// 0050623d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00506242  8944240c             mov dword ptr [esp + 0xc], eax
// 00506246  668b442438           mov ax, word ptr [esp + 0x38]
// 0050624b  66894c241a           mov word ptr [esp + 0x1a], cx
// 00506250  6a12                 push 0x12
// 00506252  8d4c2410             lea ecx, [esp + 0x10]
// 00506256  668954241a           mov word ptr [esp + 0x1a], dx
// 0050625b  668b542444           mov dx, word ptr [esp + 0x44]
// 00506260  668944241c           mov word ptr [esp + 0x1c], ax
// 00506265  8b442430             mov eax, dword ptr [esp + 0x30]
// 00506269  51                   push ecx
// 0050626a  8bce                 mov ecx, esi
// 0050626c  6689542424           mov word ptr [esp + 0x24], dx
// 00506271  89442418             mov dword ptr [esp + 0x18], eax
// 00506275  e8f6fdffff           call 0x506070
// 0050627a  6a02                 push 2
// 0050627c  8d542444             lea edx, [esp + 0x44]
// 00506280  52                   push edx
// 00506281  8bce                 mov ecx, esi
// 00506283  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0050628b  e8e0fdffff           call 0x506070
// 00506290  6a02                 push 2
// 00506292  8d44240c             lea eax, [esp + 0xc]
// 00506296  50                   push eax
// 00506297  8bce                 mov ecx, esi
// 00506299  e8d2fdffff           call 0x506070
// 0050629e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005062a2  51                   push ecx
// 005062a3  8bce                 mov ecx, esi
// 005062a5  e826feffff           call 0x5060d0
// 005062aa  8b4604               mov eax, dword ptr [esi + 4]
// 005062ad  6683400801           add word ptr [eax + 8], 1
// 005062b2  6a02                 push 2
// 005062b4  8d542444             lea edx, [esp + 0x44]
// 005062b8  52                   push edx
// 005062b9  8bce                 mov ecx, esi
// 005062bb  c744244800000000     mov dword ptr [esp + 0x48], 0
// 005062c3  e8a8fdffff           call 0x506070
// 005062c8  5f                   pop edi
// 005062c9  5e                   pop esi
// 005062ca  83c418               add esp, 0x18
// 005062cd  c22000               ret 0x20
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?AddButton@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
