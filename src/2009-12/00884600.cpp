// roc 2009-12 00884600  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884600
//
// 00884600  837c242800           cmp dword ptr [esp + 0x28], 0
// 00884605  53                   push ebx
// 00884606  55                   push ebp
// 00884607  56                   push esi
// 00884608  57                   push edi
// 00884609  8bf1                 mov esi, ecx
// 0088460b  7454                 je 0x884661
// 0088460d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00884611  6a00                 push 0
// 00884613  6a00                 push 0
// 00884615  8d86fc040000         lea eax, [esi + 0x4fc]
// 0088461b  50                   push eax
// 0088461c  8d4c2424             lea ecx, [esp + 0x24]
// 00884620  51                   push ecx
// 00884621  57                   push edi
// 00884622  e8798cfcff           call 0x84d2a0
// 00884627  8bc8                 mov ecx, eax
// 00884629  e8928ffcff           call 0x84d5c0
// 0088462e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00884632  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00884636  6a2b                 push 0x2b
// 00884638  6a2b                 push 0x2b
// 0088463a  83ec10               sub esp, 0x10
// 0088463d  8bc4                 mov eax, esp
// 0088463f  8910                 mov dword ptr [eax], edx
// 00884641  8b542438             mov edx, dword ptr [esp + 0x38]
// 00884645  894804               mov dword ptr [eax + 4], ecx
// 00884648  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088464c  895008               mov dword ptr [eax + 8], edx
// 0088464f  89480c               mov dword ptr [eax + 0xc], ecx
// 00884652  57                   push edi
// 00884653  8bce                 mov ecx, esi
// 00884655  e8e691f7ff           call 0x7fd840
// 0088465a  5f                   pop edi
// 0088465b  5e                   pop esi
// 0088465c  5d                   pop ebp
// 0088465d  5b                   pop ebx
// 0088465e  c23000               ret 0x30
// 00884661  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00884668  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088466c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00884670  0f84be010000         je 0x884834
// 00884676  83f902               cmp ecx, 2
// 00884679  0f84b5010000         je 0x884834
// 0088467f  83f802               cmp eax, 2
// 00884682  7425                 je 0x8846a9
// 00884684  85c0                 test eax, eax
// 00884686  7413                 je 0x88469b
// 00884688  83f803               cmp eax, 3
// 0088468b  741c                 je 0x8846a9
// 0088468d  83f801               cmp eax, 1
// 00884690  7409                 je 0x88469b
// 00884692  83f804               cmp eax, 4
// 00884695  0f8599010000         jne 0x884834
// 0088469b  83f803               cmp eax, 3
// 0088469e  7409                 je 0x8846a9
// 008846a0  83f805               cmp eax, 5
// 008846a3  7404                 je 0x8846a9
// 008846a5  33ff                 xor edi, edi
// 008846a7  eb05                 jmp 0x8846ae
// 008846a9  bf01000000           mov edi, 1
// 008846ae  837c243000           cmp dword ptr [esp + 0x30], 0
// 008846b3  7575                 jne 0x88472a
// 008846b5  8b542428             mov edx, dword ptr [esp + 0x28]
// 008846b9  52                   push edx
// 008846ba  e87113f7ff           call 0x7f5a30
// 008846bf  83c404               add esp, 4
// 008846c2  85c0                 test eax, eax
// 008846c4  741c                 je 0x8846e2
// 008846c6  837c243400           cmp dword ptr [esp + 0x34], 0
// 008846cb  8d8670050000         lea eax, [esi + 0x570]
// 008846d1  0f8513010000         jne 0x8847ea
// 008846d7  8d8690050000         lea eax, [esi + 0x590]
// 008846dd  e908010000           jmp 0x8847ea
// 008846e2  837c243400           cmp dword ptr [esp + 0x34], 0
// 008846e7  0f848b010000         je 0x884878
// 008846ed  8b542418             mov edx, dword ptr [esp + 0x18]
// 008846f1  8d8e50050000         lea ecx, [esi + 0x550]
// 008846f7  51                   push ecx
// 008846f8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008846fc  57                   push edi
// 008846fd  6a3a                 push 0x3a
// 008846ff  83ec10               sub esp, 0x10
// 00884702  8bc4                 mov eax, esp
// 00884704  8910                 mov dword ptr [eax], edx
// 00884706  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088470a  894804               mov dword ptr [eax + 4], ecx
// 0088470d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00884711  895008               mov dword ptr [eax + 8], edx
// 00884714  8b542430             mov edx, dword ptr [esp + 0x30]
// 00884718  89480c               mov dword ptr [eax + 0xc], ecx
// 0088471b  52                   push edx
// 0088471c  8bce                 mov ecx, esi
// 0088471e  e86dfeffff           call 0x884590
// 00884723  5f                   pop edi
// 00884724  5e                   pop esi
// 00884725  5d                   pop ebp
// 00884726  5b                   pop ebx
// 00884727  c23000               ret 0x30
// 0088472a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088472e  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00884732  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00884736  83f802               cmp eax, 2
// 00884739  7547                 jne 0x884782
// 0088473b  85ed                 test ebp, ebp
// 0088473d  0f8588000000         jne 0x8847cb
// 00884743  85db                 test ebx, ebx
// 00884745  0f8584000000         jne 0x8847cf
// 0088474b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088474f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00884753  6a33                 push 0x33
// 00884755  6a32                 push 0x32
// 00884757  83ec10               sub esp, 0x10
// 0088475a  8bc4                 mov eax, esp
// 0088475c  8908                 mov dword ptr [eax], ecx
// 0088475e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00884762  895004               mov dword ptr [eax + 4], edx
// 00884765  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00884769  894808               mov dword ptr [eax + 8], ecx
// 0088476c  89500c               mov dword ptr [eax + 0xc], edx
// 0088476f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00884773  50                   push eax
// 00884774  8bce                 mov ecx, esi
// 00884776  e8e59ff7ff           call 0x7fe760
// 0088477b  5f                   pop edi
// 0088477c  5e                   pop esi
// 0088477d  5d                   pop ebp
// 0088477e  5b                   pop ebx
// 0088477f  c23000               ret 0x30
// 00884782  85c0                 test eax, eax
// 00884784  7449                 je 0x8847cf
// 00884786  85ed                 test ebp, ebp
// 00884788  7541                 jne 0x8847cb
// 0088478a  85db                 test ebx, ebx
// 0088478c  7541                 jne 0x8847cf
// 0088478e  8d8e50050000         lea ecx, [esi + 0x550]
// 00884794  51                   push ecx
// 00884795  57                   push edi
// 00884796  6a25                 push 0x25
// 00884798  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088479c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008847a0  83ec10               sub esp, 0x10
// 008847a3  8bc4                 mov eax, esp
// 008847a5  8910                 mov dword ptr [eax], edx
// 008847a7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008847ab  894804               mov dword ptr [eax + 4], ecx
// 008847ae  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008847b2  895008               mov dword ptr [eax + 8], edx
// 008847b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 008847b9  89480c               mov dword ptr [eax + 0xc], ecx
// 008847bc  52                   push edx
// 008847bd  8bce                 mov ecx, esi
// 008847bf  e8ccfdffff           call 0x884590
// 008847c4  5f                   pop edi
// 008847c5  5e                   pop esi
// 008847c6  5d                   pop ebp
// 008847c7  5b                   pop ebx
// 008847c8  c23000               ret 0x30
// 008847cb  85db                 test ebx, ebx
// 008847cd  7415                 je 0x8847e4
// 008847cf  53                   push ebx
// 008847d0  e85b12f7ff           call 0x7f5a30
// 008847d5  83c404               add esp, 4
// 008847d8  85c0                 test eax, eax
// 008847da  7508                 jne 0x8847e4
// 008847dc  85ed                 test ebp, ebp
// 008847de  7441                 je 0x884821
// 008847e0  85db                 test ebx, ebx
// 008847e2  7441                 je 0x884825
// 008847e4  8d8670050000         lea eax, [esi + 0x570]
// 008847ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008847ee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008847f2  50                   push eax
// 008847f3  57                   push edi
// 008847f4  6a32                 push 0x32
// 008847f6  83ec10               sub esp, 0x10
// 008847f9  8bc4                 mov eax, esp
// 008847fb  8908                 mov dword ptr [eax], ecx
// 008847fd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00884801  895004               mov dword ptr [eax + 4], edx
// 00884804  8b542440             mov edx, dword ptr [esp + 0x40]
// 00884808  894808               mov dword ptr [eax + 8], ecx
// 0088480b  89500c               mov dword ptr [eax + 0xc], edx
// 0088480e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00884812  50                   push eax
// 00884813  8bce                 mov ecx, esi
// 00884815  e876fdffff           call 0x884590
// 0088481a  5f                   pop edi
// 0088481b  5e                   pop esi
// 0088481c  5d                   pop ebp
// 0088481d  5b                   pop ebx
// 0088481e  c23000               ret 0x30
// 00884821  85db                 test ebx, ebx
// 00884823  7453                 je 0x884878
// 00884825  8d8e90050000         lea ecx, [esi + 0x590]
// 0088482b  51                   push ecx
// 0088482c  57                   push edi
// 0088482d  6a20                 push 0x20
// 0088482f  e964ffffff           jmp 0x884798
// 00884834  8b542430             mov edx, dword ptr [esp + 0x30]
// 00884838  50                   push eax
// 00884839  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088483d  51                   push ecx
// 0088483e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00884842  6a00                 push 0
// 00884844  51                   push ecx
// 00884845  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00884849  52                   push edx
// 0088484a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088484e  50                   push eax
// 0088484f  51                   push ecx
// 00884850  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00884854  83ec10               sub esp, 0x10
// 00884857  8bc4                 mov eax, esp
// 00884859  8910                 mov dword ptr [eax], edx
// 0088485b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088485f  894804               mov dword ptr [eax + 4], ecx
// 00884862  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00884866  895008               mov dword ptr [eax + 8], edx
// 00884869  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088486d  89480c               mov dword ptr [eax + 0xc], ecx
// 00884870  52                   push edx
// 00884871  8bce                 mov ecx, esi
// 00884873  e848380000           call 0x8880c0
// 00884878  5f                   pop edi
// 00884879  5e                   pop esi
// 0088487a  5d                   pop ebp
// 0088487b  5b                   pop ebx
// 0088487c  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
