// roc 2009-12 008d42f0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d42f0
//
// 008d42f0  56                   push esi
// 008d42f1  8b742408             mov esi, dword ptr [esp + 8]
// 008d42f5  57                   push edi
// 008d42f6  8bf9                 mov edi, ecx
// 008d42f8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d42fb  8b4840               mov ecx, dword ptr [eax + 0x40]
// 008d42fe  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d4301  890e                 mov dword ptr [esi], ecx
// 008d4303  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d4306  895604               mov dword ptr [esi + 4], edx
// 008d4309  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d430c  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d4312  894e08               mov dword ptr [esi + 8], ecx
// 008d4315  89560c               mov dword ptr [esi + 0xc], edx
// 008d4318  8b10                 mov edx, dword ptr [eax]
// 008d431a  8bc8                 mov ecx, eax
// 008d431c  8b4228               mov eax, dword ptr [edx + 0x28]
// 008d431f  ffd0                 call eax
// 008d4321  85c0                 test eax, eax
// 008d4323  7427                 je 0x8d434c
// 008d4325  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d4328  83793800             cmp dword ptr [ecx + 0x38], 0
// 008d432c  751e                 jne 0x8d434c
// 008d432e  e8fdc5ffff           call 0x8d0930
// 008d4333  85c0                 test eax, eax
// 008d4335  740d                 je 0x8d4344
// 008d4337  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d433a  e8f1c5ffff           call 0x8d0930
// 008d433f  83f801               cmp eax, 1
// 008d4342  7504                 jne 0x8d4348
// 008d4344  83460c02             add dword ptr [esi + 0xc], 2
// 008d4348  83460802             add dword ptr [esi + 8], 2
// 008d434c  5f                   pop edi
// 008d434d  8bc6                 mov eax, esi
// 008d434f  5e                   pop esi
// 008d4350  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
