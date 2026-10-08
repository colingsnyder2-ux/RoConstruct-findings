// roc 2007-03 005062d0  unit: seg_00500000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005062d0
//
// 005062d0  83ec18               sub esp, 0x18
// 005062d3  56                   push esi
// 005062d4  57                   push edi
// 005062d5  8bf1                 mov esi, ecx
// 005062d7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005062da  81e703000080         and edi, 0x80000003
// 005062e0  c744240881000000     mov dword ptr [esp + 8], 0x81
// 005062e8  7905                 jns 0x5062ef
// 005062ea  4f                   dec edi
// 005062eb  83cffc               or edi, 0xfffffffc
// 005062ee  47                   inc edi
// 005062ef  7409                 je 0x5062fa
// 005062f1  57                   push edi
// 005062f2  e839fbffff           call 0x505e30
// 005062f7  017e0c               add dword ptr [esi + 0xc], edi
// 005062fa  668b4c2430           mov cx, word ptr [esp + 0x30]
// 005062ff  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506303  668b542434           mov dx, word ptr [esp + 0x34]
// 00506308  66894c2414           mov word ptr [esp + 0x14], cx
// 0050630d  668b4c243c           mov cx, word ptr [esp + 0x3c]
// 00506312  8944240c             mov dword ptr [esp + 0xc], eax
// 00506316  668b442438           mov ax, word ptr [esp + 0x38]
// 0050631b  66894c241a           mov word ptr [esp + 0x1a], cx
// 00506320  6a12                 push 0x12
// 00506322  8d4c2410             lea ecx, [esp + 0x10]
// 00506326  668954241a           mov word ptr [esp + 0x1a], dx
// 0050632b  668b542444           mov dx, word ptr [esp + 0x44]
// 00506330  668944241c           mov word ptr [esp + 0x1c], ax
// 00506335  8b442430             mov eax, dword ptr [esp + 0x30]
// 00506339  51                   push ecx
// 0050633a  8bce                 mov ecx, esi
// 0050633c  6689542424           mov word ptr [esp + 0x24], dx
// 00506341  89442418             mov dword ptr [esp + 0x18], eax
// 00506345  e826fdffff           call 0x506070
// 0050634a  6a02                 push 2
// 0050634c  8d542444             lea edx, [esp + 0x44]
// 00506350  52                   push edx
// 00506351  8bce                 mov ecx, esi
// 00506353  c7442448ffff0000     mov dword ptr [esp + 0x48], 0xffff
// 0050635b  e810fdffff           call 0x506070
// 00506360  6a02                 push 2
// 00506362  8d44240c             lea eax, [esp + 0xc]
// 00506366  50                   push eax
// 00506367  8bce                 mov ecx, esi
// 00506369  e802fdffff           call 0x506070
// 0050636e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00506372  51                   push ecx
// 00506373  8bce                 mov ecx, esi
// 00506375  e856fdffff           call 0x5060d0
// 0050637a  8b4604               mov eax, dword ptr [esi + 4]
// 0050637d  6683400801           add word ptr [eax + 8], 1
// 00506382  6a02                 push 2
// 00506384  8d542444             lea edx, [esp + 0x44]
// 00506388  52                   push edx
// 00506389  8bce                 mov ecx, esi
// 0050638b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00506393  e8d8fcffff           call 0x506070
// 00506398  5f                   pop edi
// 00506399  5e                   pop esi
// 0050639a  83c418               add esp, 0x18
// 0050639d  c22000               ret 0x20
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?AddEditBox@DialogTemplate@_internal@G3D@@QAEXPBDKKHHHHG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
