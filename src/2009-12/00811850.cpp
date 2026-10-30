// roc 2009-12 00811850  unit: CXTPToolBar::CControlButtonExpand  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811850
//
// 00811850  8b442404             mov eax, dword ptr [esp + 4]
// 00811854  83ec1c               sub esp, 0x1c
// 00811857  55                   push ebp
// 00811858  56                   push esi
// 00811859  8bf1                 mov esi, ecx
// 0081185b  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00811861  33ed                 xor ebp, ebp
// 00811863  898674010000         mov dword ptr [esi + 0x174], eax
// 00811869  3bc5                 cmp eax, ebp
// 0081186b  0f8485010000         je 0x8119f6
// 00811871  3bcd                 cmp ecx, ebp
// 00811873  7405                 je 0x81187a
// 00811875  e86225feff           call 0x7f3ddc
// 0081187a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00811880  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 00811886  e80558ffff           call 0x807090
// 0081188b  3bc5                 cmp eax, ebp
// 0081188d  7458                 je 0x8118e7
// 0081188f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00811892  33c9                 xor ecx, ecx
// 00811894  894c2410             mov dword ptr [esp + 0x10], ecx
// 00811898  894c2408             mov dword ptr [esp + 8], ecx
// 0081189c  894c240c             mov dword ptr [esp + 0xc], ecx
// 008118a0  894c2414             mov dword ptr [esp + 0x14], ecx
// 008118a4  894c2418             mov dword ptr [esp + 0x18], ecx
// 008118a8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008118ac  894c2420             mov dword ptr [esp + 0x20], ecx
// 008118b0  8d4c2408             lea ecx, [esp + 8]
// 008118b4  51                   push ecx
// 008118b5  55                   push ebp
// 008118b6  6861280000           push 0x2861
// 008118bb  52                   push edx
// 008118bc  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008118c4  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008118ca  85c0                 test eax, eax
// 008118cc  7419                 je 0x8118e7
// 008118ce  8b442408             mov eax, dword ptr [esp + 8]
// 008118d2  50                   push eax
// 008118d3  e8a8000300           call 0x841980
// 008118d8  50                   push eax
// 008118d9  e86023feff           call 0x7f3c3e
// 008118de  83c408               add esp, 8
// 008118e1  898678010000         mov dword ptr [esi + 0x178], eax
// 008118e7  39ae78010000         cmp dword ptr [esi + 0x178], ebp
// 008118ed  751a                 jne 0x811909
// 008118ef  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008118f5  e8d62bffff           call 0x8044d0
// 008118fa  50                   push eax
// 008118fb  e8c0050300           call 0x841ec0
// 00811900  83c404               add esp, 4
// 00811903  898678010000         mov dword ptr [esi + 0x178], eax
// 00811909  53                   push ebx
// 0081190a  57                   push edi
// 0081190b  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 00811911  8b17                 mov edx, dword ptr [edi]
// 00811913  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 00811919  8bcf                 mov ecx, edi
// 0081191b  ffd0                 call eax
// 0081191d  85c0                 test eax, eax
// 0081191f  7506                 jne 0x811927
// 00811921  89af38010000         mov dword ptr [edi + 0x138], ebp
// 00811927  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0081192d  e89e2bffff           call 0x8044d0
// 00811932  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00811938  8bd8                 mov ebx, eax
// 0081193a  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00811940  50                   push eax
// 00811941  3bdd                 cmp ebx, ebp
// 00811943  747a                 je 0x8119bf
// 00811945  8b13                 mov edx, dword ptr [ebx]
// 00811947  8b5270               mov edx, dword ptr [edx + 0x70]
// 0081194a  51                   push ecx
// 0081194b  8bcb                 mov ecx, ebx
// 0081194d  ffd2                 call edx
// 0081194f  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00811952  396838               cmp dword ptr [eax + 0x38], ebp
// 00811955  7505                 jne 0x81195c
// 00811957  396b60               cmp dword ptr [ebx + 0x60], ebp
// 0081195a  7468                 je 0x8119c4
// 0081195c  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00811962  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00811968  55                   push ebp
// 00811969  6aff                 push -1
// 0081196b  55                   push ebp
// 0081196c  68a2230000           push 0x23a2
// 00811971  6a02                 push 2
// 00811973  e8e8670300           call 0x848160
// 00811978  8bf8                 mov edi, eax
// 0081197a  6a08                 push 8
// 0081197c  8bcf                 mov ecx, edi
// 0081197e  e8dd46feff           call 0x7f6060
// 00811983  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00811989  8b2f                 mov ebp, dword ptr [edi]
// 0081198b  e8c038ffff           call 0x805250
// 00811990  33d2                 xor edx, edx
// 00811992  83f801               cmp eax, 1
// 00811995  8b4564               mov eax, dword ptr [ebp + 0x64]
// 00811998  0f9fc2               setg dl
// 0081199b  8bcf                 mov ecx, edi
// 0081199d  52                   push edx
// 0081199e  ffd0                 call eax
// 008119a0  8b17                 mov edx, dword ptr [edi]
// 008119a2  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008119a8  8b2b                 mov ebp, dword ptr [ebx]
// 008119aa  8bcf                 mov ecx, edi
// 008119ac  ffd0                 call eax
// 008119ae  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008119b4  8b5574               mov edx, dword ptr [ebp + 0x74]
// 008119b7  50                   push eax
// 008119b8  51                   push ecx
// 008119b9  8bcb                 mov ecx, ebx
// 008119bb  ffd2                 call edx
// 008119bd  eb05                 jmp 0x8119c4
// 008119bf  e8ec2a0000           call 0x8144b0
// 008119c4  8b16                 mov edx, dword ptr [esi]
// 008119c6  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008119c9  8bce                 mov ecx, esi
// 008119cb  ffd0                 call eax
// 008119cd  5f                   pop edi
// 008119ce  5b                   pop ebx
// 008119cf  83f802               cmp eax, 2
// 008119d2  7409                 je 0x8119dd
// 008119d4  83f803               cmp eax, 3
// 008119d7  7404                 je 0x8119dd
// 008119d9  33c0                 xor eax, eax
// 008119db  eb05                 jmp 0x8119e2
// 008119dd  b801000000           mov eax, 1
// 008119e2  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008119e8  8b11                 mov edx, dword ptr [ecx]
// 008119ea  50                   push eax
// 008119eb  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008119f1  56                   push esi
// 008119f2  ffd0                 call eax
// 008119f4  eb12                 jmp 0x811a08
// 008119f6  3bcd                 cmp ecx, ebp
// 008119f8  740e                 je 0x811a08
// 008119fa  8b11                 mov edx, dword ptr [ecx]
// 008119fc  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00811a02  55                   push ebp
// 00811a03  6a01                 push 1
// 00811a05  55                   push ebp
// 00811a06  ffd0                 call eax
// 00811a08  6a01                 push 1
// 00811a0a  8bce                 mov ecx, esi
// 00811a0c  e8af4cfeff           call 0x7f66c0
// 00811a11  5e                   pop esi
// 00811a12  b801000000           mov eax, 1
// 00811a17  5d                   pop ebp
// 00811a18  83c41c               add esp, 0x1c
// 00811a1b  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CControlButtonExpand@CXTPToolBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp