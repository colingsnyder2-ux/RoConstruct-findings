// roc 2009-06 00736850  unit: CXTPImageManagerIconSet  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00736850
//
// 00736850  83ec0c               sub esp, 0xc
// 00736853  53                   push ebx
// 00736854  56                   push esi
// 00736855  8bf1                 mov esi, ecx
// 00736857  8b4634               mov eax, dword ptr [esi + 0x34]
// 0073685a  f7d8                 neg eax
// 0073685c  1bc0                 sbb eax, eax
// 0073685e  57                   push edi
// 0073685f  8944240c             mov dword ptr [esp + 0xc], eax
// 00736863  743a                 je 0x73689f
// 00736865  8d5e28               lea ebx, [esi + 0x28]
// 00736868  eb06                 jmp 0x736870
// 0073686a  8d9b00000000         lea ebx, [ebx]
// 00736870  8d442410             lea eax, [esp + 0x10]
// 00736874  50                   push eax
// 00736875  8d4c2418             lea ecx, [esp + 0x18]
// 00736879  51                   push ecx
// 0073687a  8d542414             lea edx, [esp + 0x14]
// 0073687e  52                   push edx
// 0073687f  8bcb                 mov ecx, ebx
// 00736881  e8eac70500           call 0x793070
// 00736886  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073688a  8bcf                 mov ecx, edi
// 0073688c  e83feeffff           call 0x7356d0
// 00736891  8bcf                 mov ecx, edi
// 00736893  e81027feff           call 0x718fa8
// 00736898  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0073689d  75d1                 jne 0x736870
// 0073689f  8d4e28               lea ecx, [esi + 0x28]
// 007368a2  e8d9bdffff           call 0x732680
// 007368a7  8b4664               mov eax, dword ptr [esi + 0x64]
// 007368aa  f7d8                 neg eax
// 007368ac  1bc0                 sbb eax, eax
// 007368ae  8944240c             mov dword ptr [esp + 0xc], eax
// 007368b2  7438                 je 0x7368ec
// 007368b4  8d5e58               lea ebx, [esi + 0x58]
// 007368b7  8d442410             lea eax, [esp + 0x10]
// 007368bb  50                   push eax
// 007368bc  8d4c2418             lea ecx, [esp + 0x18]
// 007368c0  51                   push ecx
// 007368c1  8d542414             lea edx, [esp + 0x14]
// 007368c5  52                   push edx
// 007368c6  8bcb                 mov ecx, ebx
// 007368c8  e8a3c70500           call 0x793070
// 007368cd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007368d1  85ff                 test edi, edi
// 007368d3  7410                 je 0x7368e5
// 007368d5  8bcf                 mov ecx, edi
// 007368d7  e8a4f0ffff           call 0x735980
// 007368dc  57                   push edi
// 007368dd  e85021feff           call 0x718a32
// 007368e2  83c404               add esp, 4
// 007368e5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007368ea  75cb                 jne 0x7368b7
// 007368ec  8d4e58               lea ecx, [esi + 0x58]
// 007368ef  e88cbdffff           call 0x732680
// 007368f4  33ff                 xor edi, edi
// 007368f6  397e4c               cmp dword ptr [esi + 0x4c], edi
// 007368f9  7e2e                 jle 0x736929
// 007368fb  eb03                 jmp 0x736900
// 007368fd  8d4900               lea ecx, [ecx]
// 00736900  85ff                 test edi, edi
// 00736902  7c38                 jl 0x73693c
// 00736904  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00736907  7d33                 jge 0x73693c
// 00736909  8b4648               mov eax, dword ptr [esi + 0x48]
// 0073690c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0073690f  85db                 test ebx, ebx
// 00736911  7410                 je 0x736923
// 00736913  8bcb                 mov ecx, ebx
// 00736915  e846dfffff           call 0x734860
// 0073691a  53                   push ebx
// 0073691b  e81221feff           call 0x718a32
// 00736920  83c404               add esp, 4
// 00736923  47                   inc edi
// 00736924  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 00736927  7cd7                 jl 0x736900
// 00736929  6aff                 push -1
// 0073692b  6a00                 push 0
// 0073692d  8d4e44               lea ecx, [esi + 0x44]
// 00736930  e8dbbb0100           call 0x752510
// 00736935  5f                   pop edi
// 00736936  5e                   pop esi
// 00736937  5b                   pop ebx
// 00736938  83c40c               add esp, 0xc
// 0073693b  c3                   ret 
// 0073693c  e8a323feff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp