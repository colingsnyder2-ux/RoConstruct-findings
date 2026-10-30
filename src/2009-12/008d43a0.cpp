// roc 2009-12 008d43a0  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d43a0
//
// 008d43a0  53                   push ebx
// 008d43a1  56                   push esi
// 008d43a2  8b742410             mov esi, dword ptr [esp + 0x10]
// 008d43a6  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 008d43a9  57                   push edi
// 008d43aa  8bf9                 mov edi, ecx
// 008d43ac  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d43af  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d43b5  8b11                 mov edx, dword ptr [ecx]
// 008d43b7  56                   push esi
// 008d43b8  83ec10               sub esp, 0x10
// 008d43bb  8bc4                 mov eax, esp
// 008d43bd  8918                 mov dword ptr [eax], ebx
// 008d43bf  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 008d43c2  895804               mov dword ptr [eax + 4], ebx
// 008d43c5  8b5e4c               mov ebx, dword ptr [esi + 0x4c]
// 008d43c8  895808               mov dword ptr [eax + 8], ebx
// 008d43cb  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 008d43ce  89580c               mov dword ptr [eax + 0xc], ebx
// 008d43d1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008d43d5  8b4214               mov eax, dword ptr [edx + 0x14]
// 008d43d8  53                   push ebx
// 008d43d9  ffd0                 call eax
// 008d43db  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d43de  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008d43e1  8b11                 mov edx, dword ptr [ecx]
// 008d43e3  6a01                 push 1
// 008d43e5  83ec10               sub esp, 0x10
// 008d43e8  8bc4                 mov eax, esp
// 008d43ea  8938                 mov dword ptr [eax], edi
// 008d43ec  8b7e48               mov edi, dword ptr [esi + 0x48]
// 008d43ef  897804               mov dword ptr [eax + 4], edi
// 008d43f2  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 008d43f5  897808               mov dword ptr [eax + 8], edi
// 008d43f8  8b7e50               mov edi, dword ptr [esi + 0x50]
// 008d43fb  56                   push esi
// 008d43fc  89780c               mov dword ptr [eax + 0xc], edi
// 008d43ff  8b4268               mov eax, dword ptr [edx + 0x68]
// 008d4402  53                   push ebx
// 008d4403  ffd0                 call eax
// 008d4405  5f                   pop edi
// 008d4406  5e                   pop esi
// 008d4407  5b                   pop ebx
// 008d4408  c20800               ret 8
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp