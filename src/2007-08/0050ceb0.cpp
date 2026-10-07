// roc 2007-08 0050ceb0  unit: G3D::BinaryInput  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ceb0
//
// 0050ceb0  8b442404             mov eax, dword ptr [esp + 4]
// 0050ceb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050ceb8  8b542404             mov edx, dword ptr [esp + 4]
// 0050cebc  53                   push ebx
// 0050cebd  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0050cec3  56                   push esi
// 0050cec4  57                   push edi
// 0050cec5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0050cec9  50                   push eax
// 0050ceca  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050cece  51                   push ecx
// 0050cecf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0050ced3  52                   push edx
// 0050ced4  83ec0c               sub esp, 0xc
// 0050ced7  85ff                 test edi, edi
// 0050ced9  8bf4                 mov esi, esp
// 0050cedb  c70600000000         mov dword ptr [esi], 0
// 0050cee1  894604               mov dword ptr [esi + 4], eax
// 0050cee4  894e08               mov dword ptr [esi + 8], ecx
// 0050cee7  7502                 jne 0x50ceeb
// 0050cee9  ffd3                 call ebx
// 0050ceeb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0050ceef  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050cef3  893e                 mov dword ptr [esi], edi
// 0050cef5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0050cef9  83ec0c               sub esp, 0xc
// 0050cefc  85ff                 test edi, edi
// 0050cefe  8bf4                 mov esi, esp
// 0050cf00  c70600000000         mov dword ptr [esi], 0
// 0050cf06  895604               mov dword ptr [esi + 4], edx
// 0050cf09  894608               mov dword ptr [esi + 8], eax
// 0050cf0c  7502                 jne 0x50cf10
// 0050cf0e  ffd3                 call ebx
// 0050cf10  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0050cf14  8b542440             mov edx, dword ptr [esp + 0x40]
// 0050cf18  893e                 mov dword ptr [esi], edi
// 0050cf1a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0050cf1e  83ec0c               sub esp, 0xc
// 0050cf21  85ff                 test edi, edi
// 0050cf23  8bf4                 mov esi, esp
// 0050cf25  c70600000000         mov dword ptr [esi], 0
// 0050cf2b  894e04               mov dword ptr [esi + 4], ecx
// 0050cf2e  895608               mov dword ptr [esi + 8], edx
// 0050cf31  7502                 jne 0x50cf35
// 0050cf33  ffd3                 call ebx
// 0050cf35  893e                 mov dword ptr [esi], edi
// 0050cf37  8b742440             mov esi, dword ptr [esp + 0x40]
// 0050cf3b  56                   push esi
// 0050cf3c  e8affdffff           call 0x50ccf0
// 0050cf41  83c434               add esp, 0x34
// 0050cf44  5f                   pop edi
// 0050cf45  8bc6                 mov eax, esi
// 0050cf47  5e                   pop esi
// 0050cf48  5b                   pop ebx
// 0050cf49  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$copy@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
