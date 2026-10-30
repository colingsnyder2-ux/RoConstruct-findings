// roc 2009-12 008cf7d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf7d0
//
// 008cf7d0  56                   push esi
// 008cf7d1  8bf1                 mov esi, ecx
// 008cf7d3  57                   push edi
// 008cf7d4  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 008cf7d7  83ff01               cmp edi, 1
// 008cf7da  7d07                 jge 0x8cf7e3
// 008cf7dc  5f                   pop edi
// 008cf7dd  33c0                 xor eax, eax
// 008cf7df  5e                   pop esi
// 008cf7e0  c20800               ret 8
// 008cf7e3  53                   push ebx
// 008cf7e4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008cf7e8  83fb25               cmp ebx, 0x25
// 008cf7eb  751b                 jne 0x8cf808
// 008cf7ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 008cf7f1  6aec                 push -0x14
// 008cf7f3  50                   push eax
// 008cf7f4  ff15d8c99800         call dword ptr [0x98c9d8]
// 008cf7fa  a900004000           test eax, 0x400000
// 008cf7ff  7425                 je 0x8cf826
// 008cf801  bb27000000           mov ebx, 0x27
// 008cf806  eb1e                 jmp 0x8cf826
// 008cf808  83fb27               cmp ebx, 0x27
// 008cf80b  7519                 jne 0x8cf826
// 008cf80d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cf811  6aec                 push -0x14
// 008cf813  51                   push ecx
// 008cf814  ff15d8c99800         call dword ptr [0x98c9d8]
// 008cf81a  a900004000           test eax, 0x400000
// 008cf81f  7405                 je 0x8cf826
// 008cf821  bb25000000           mov ebx, 0x25
// 008cf826  8d43dd               lea eax, [ebx - 0x23]
// 008cf829  83f805               cmp eax, 5
// 008cf82c  0f8719010000         ja 0x8cf94b
// 008cf832  ff248554f98c00       jmp dword ptr [eax*4 + 0x8cf954]
// 008cf839  8b3e                 mov edi, dword ptr [esi]
// 008cf83b  6a01                 push 1
// 008cf83d  6aff                 push -1
// 008cf83f  8bce                 mov ecx, esi
// 008cf841  e83affffff           call 0x8cf780
// 008cf846  8b5724               mov edx, dword ptr [edi + 0x24]
// 008cf849  50                   push eax
// 008cf84a  8bce                 mov ecx, esi
// 008cf84c  ffd2                 call edx
// 008cf84e  5b                   pop ebx
// 008cf84f  5f                   pop edi
// 008cf850  b801000000           mov eax, 1
// 008cf855  5e                   pop esi
// 008cf856  c20800               ret 8
// 008cf859  8b1e                 mov ebx, dword ptr [esi]
// 008cf85b  6aff                 push -1
// 008cf85d  57                   push edi
// 008cf85e  8bce                 mov ecx, esi
// 008cf860  e81bffffff           call 0x8cf780
// 008cf865  50                   push eax
// 008cf866  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008cf869  8bce                 mov ecx, esi
// 008cf86b  ffd0                 call eax
// 008cf86d  5b                   pop ebx
// 008cf86e  5f                   pop edi
// 008cf86f  b801000000           mov eax, 1
// 008cf874  5e                   pop esi
// 008cf875  c20800               ret 8
// 008cf878  8bce                 mov ecx, esi
// 008cf87a  e8c150f8ff           call 0x854940
// 008cf87f  85c0                 test eax, eax
// 008cf881  0f84b9000000         je 0x8cf940
// 008cf887  8b4604               mov eax, dword ptr [esi + 4]
// 008cf88a  85c0                 test eax, eax
// 008cf88c  0f84ae000000         je 0x8cf940
// 008cf892  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008cf895  85c0                 test eax, eax
// 008cf897  0f8ea3000000         jle 0x8cf940
// 008cf89d  8b3e                 mov edi, dword ptr [esi]
// 008cf89f  6aff                 push -1
// 008cf8a1  50                   push eax
// 008cf8a2  8bce                 mov ecx, esi
// 008cf8a4  e8d7feffff           call 0x8cf780
// 008cf8a9  8b5724               mov edx, dword ptr [edi + 0x24]
// 008cf8ac  50                   push eax
// 008cf8ad  8bce                 mov ecx, esi
// 008cf8af  ffd2                 call edx
// 008cf8b1  5b                   pop ebx
// 008cf8b2  5f                   pop edi
// 008cf8b3  b801000000           mov eax, 1
// 008cf8b8  5e                   pop esi
// 008cf8b9  c20800               ret 8
// 008cf8bc  8bce                 mov ecx, esi
// 008cf8be  e87d50f8ff           call 0x854940
// 008cf8c3  85c0                 test eax, eax
// 008cf8c5  7579                 jne 0x8cf940
// 008cf8c7  8b4604               mov eax, dword ptr [esi + 4]
// 008cf8ca  85c0                 test eax, eax
// 008cf8cc  7472                 je 0x8cf940
// 008cf8ce  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008cf8d1  85c0                 test eax, eax
// 008cf8d3  7e6b                 jle 0x8cf940
// 008cf8d5  6aff                 push -1
// 008cf8d7  eb55                 jmp 0x8cf92e
// 008cf8d9  8bce                 mov ecx, esi
// 008cf8db  e86050f8ff           call 0x854940
// 008cf8e0  85c0                 test eax, eax
// 008cf8e2  7423                 je 0x8cf907
// 008cf8e4  8b4604               mov eax, dword ptr [esi + 4]
// 008cf8e7  85c0                 test eax, eax
// 008cf8e9  741c                 je 0x8cf907
// 008cf8eb  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008cf8ee  4f                   dec edi
// 008cf8ef  3bc7                 cmp eax, edi
// 008cf8f1  7d14                 jge 0x8cf907
// 008cf8f3  8b3e                 mov edi, dword ptr [esi]
// 008cf8f5  6a01                 push 1
// 008cf8f7  50                   push eax
// 008cf8f8  8bce                 mov ecx, esi
// 008cf8fa  e881feffff           call 0x8cf780
// 008cf8ff  8b5724               mov edx, dword ptr [edi + 0x24]
// 008cf902  50                   push eax
// 008cf903  8bce                 mov ecx, esi
// 008cf905  ffd2                 call edx
// 008cf907  5b                   pop ebx
// 008cf908  5f                   pop edi
// 008cf909  b801000000           mov eax, 1
// 008cf90e  5e                   pop esi
// 008cf90f  c20800               ret 8
// 008cf912  8bce                 mov ecx, esi
// 008cf914  e82750f8ff           call 0x854940
// 008cf919  85c0                 test eax, eax
// 008cf91b  7523                 jne 0x8cf940
// 008cf91d  8b4604               mov eax, dword ptr [esi + 4]
// 008cf920  85c0                 test eax, eax
// 008cf922  741c                 je 0x8cf940
// 008cf924  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008cf927  4f                   dec edi
// 008cf928  3bc7                 cmp eax, edi
// 008cf92a  7d14                 jge 0x8cf940
// 008cf92c  6a01                 push 1
// 008cf92e  8b3e                 mov edi, dword ptr [esi]
// 008cf930  50                   push eax
// 008cf931  8bce                 mov ecx, esi
// 008cf933  e848feffff           call 0x8cf780
// 008cf938  50                   push eax
// 008cf939  8b4724               mov eax, dword ptr [edi + 0x24]
// 008cf93c  8bce                 mov ecx, esi
// 008cf93e  ffd0                 call eax
// 008cf940  5b                   pop ebx
// 008cf941  5f                   pop edi
// 008cf942  b801000000           mov eax, 1
// 008cf947  5e                   pop esi
// 008cf948  c20800               ret 8
// 008cf94b  5b                   pop ebx
// 008cf94c  5f                   pop edi
// 008cf94d  33c0                 xor eax, eax
// 008cf94f  5e                   pop esi
// 008cf950  c20800               ret 8
// 008cf953  90                   nop 
// 008cf954  59                   pop ecx
// 008cf955  f8                   clc 
// 008cf956  8c00                 mov word ptr [eax], es
// 008cf958  39f8                 cmp eax, edi
// 008cf95a  8c00                 mov word ptr [eax], es
// 008cf95c  78f8                 js 0x8cf956
// 008cf95e  8c00                 mov word ptr [eax], es
// 008cf960  bcf88c00d9           mov esp, 0xd9008cf8
// 008cf965  f8                   clc 
// 008cf966  8c00                 mov word ptr [eax], es
// 008cf968  12f9                 adc bh, cl
// 008cf96a  8c00                 mov word ptr [eax], es
// copied from an identical function in another client (function ?PerformKeyDown@CXTPTabManager@@UAEHPAUHWND__@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp