// roc 2009-12 00874850  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00874850
//
// 00874850  83ec30               sub esp, 0x30
// 00874853  53                   push ebx
// 00874854  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00874858  55                   push ebp
// 00874859  56                   push esi
// 0087485a  57                   push edi
// 0087485b  8d442410             lea eax, [esp + 0x10]
// 0087485f  8bf9                 mov edi, ecx
// 00874861  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00874864  50                   push eax
// 00874865  51                   push ecx
// 00874866  ff1550cc9800         call dword ptr [0x98cc50]
// 0087486c  bd05000000           mov ebp, 5
// 00874871  8bcf                 mov ecx, edi
// 00874873  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 00874879  7527                 jne 0x8748a2
// 0087487b  68a015a000           push 0xa015a0
// 00874880  e87ba40000           call 0x87ed00
// 00874885  8bf0                 mov esi, eax
// 00874887  85f6                 test esi, esi
// 00874889  0f8404010000         je 0x874993
// 0087488f  6a01                 push 1
// 00874891  6a00                 push 0
// 00874893  8d542438             lea edx, [esp + 0x38]
// 00874897  bd04000000           mov ebp, 4
// 0087489c  52                   push edx
// 0087489d  e9a4000000           jmp 0x874946
// 008748a2  53                   push ebx
// 008748a3  e88897f8ff           call 0x7fe030
// 008748a8  85c0                 test eax, eax
// 008748aa  7417                 je 0x8748c3
// 008748ac  8b442444             mov eax, dword ptr [esp + 0x44]
// 008748b0  53                   push ebx
// 008748b1  50                   push eax
// 008748b2  8bcf                 mov ecx, edi
// 008748b4  e877ed0000           call 0x883630
// 008748b9  5f                   pop edi
// 008748ba  5e                   pop esi
// 008748bb  5d                   pop ebp
// 008748bc  5b                   pop ebx
// 008748bd  83c430               add esp, 0x30
// 008748c0  c20800               ret 8
// 008748c3  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008748c9  85c0                 test eax, eax
// 008748cb  745a                 je 0x874927
// 008748cd  83f801               cmp eax, 1
// 008748d0  7455                 je 0x874927
// 008748d2  83f802               cmp eax, 2
// 008748d5  741c                 je 0x8748f3
// 008748d7  83f803               cmp eax, 3
// 008748da  7417                 je 0x8748f3
// 008748dc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008748e0  53                   push ebx
// 008748e1  51                   push ecx
// 008748e2  8bcf                 mov ecx, edi
// 008748e4  e847ed0000           call 0x883630
// 008748e9  5f                   pop edi
// 008748ea  5e                   pop esi
// 008748eb  5d                   pop ebp
// 008748ec  5b                   pop ebx
// 008748ed  83c430               add esp, 0x30
// 008748f0  c20800               ret 8
// 008748f3  681816a000           push 0xa01618
// 008748f8  8bcf                 mov ecx, edi
// 008748fa  e801a40000           call 0x87ed00
// 008748ff  8bf0                 mov esi, eax
// 00874901  85f6                 test esi, esi
// 00874903  7517                 jne 0x87491c
// 00874905  8b542444             mov edx, dword ptr [esp + 0x44]
// 00874909  53                   push ebx
// 0087490a  52                   push edx
// 0087490b  8bcf                 mov ecx, edi
// 0087490d  e81eed0000           call 0x883630
// 00874912  5f                   pop edi
// 00874913  5e                   pop esi
// 00874914  5d                   pop ebp
// 00874915  5b                   pop ebx
// 00874916  83c430               add esp, 0x30
// 00874919  c20800               ret 8
// 0087491c  6a01                 push 1
// 0087491e  6a00                 push 0
// 00874920  8d442438             lea eax, [esp + 0x38]
// 00874924  50                   push eax
// 00874925  eb1f                 jmp 0x874946
// 00874927  680016a000           push 0xa01600
// 0087492c  8bcf                 mov ecx, edi
// 0087492e  e8cda30000           call 0x87ed00
// 00874933  8bf0                 mov esi, eax
// 00874935  85f6                 test esi, esi
// 00874937  0f846fffffff         je 0x8748ac
// 0087493d  6a01                 push 1
// 0087493f  6a00                 push 0
// 00874941  8d4c2438             lea ecx, [esp + 0x38]
// 00874945  51                   push ecx
// 00874946  8bce                 mov ecx, esi
// 00874948  8bfd                 mov edi, ebp
// 0087494a  8bdd                 mov ebx, ebp
// 0087494c  896c2438             mov dword ptr [esp + 0x38], ebp
// 00874950  e86bbf0600           call 0x8e08c0
// 00874955  83ec10               sub esp, 0x10
// 00874958  8bcc                 mov ecx, esp
// 0087495a  8939                 mov dword ptr [ecx], edi
// 0087495c  895904               mov dword ptr [ecx + 4], ebx
// 0087495f  896908               mov dword ptr [ecx + 8], ebp
// 00874962  83ec10               sub esp, 0x10
// 00874965  8bd5                 mov edx, ebp
// 00874967  89510c               mov dword ptr [ecx + 0xc], edx
// 0087496a  8b10                 mov edx, dword ptr [eax]
// 0087496c  8bcc                 mov ecx, esp
// 0087496e  8911                 mov dword ptr [ecx], edx
// 00874970  8b5004               mov edx, dword ptr [eax + 4]
// 00874973  895104               mov dword ptr [ecx + 4], edx
// 00874976  8b5008               mov edx, dword ptr [eax + 8]
// 00874979  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087497c  895108               mov dword ptr [ecx + 8], edx
// 0087497f  8b542464             mov edx, dword ptr [esp + 0x64]
// 00874983  89410c               mov dword ptr [ecx + 0xc], eax
// 00874986  8d4c2430             lea ecx, [esp + 0x30]
// 0087498a  51                   push ecx
// 0087498b  52                   push edx
// 0087498c  8bce                 mov ecx, esi
// 0087498e  e8fdb70600           call 0x8e0190
// 00874993  5f                   pop edi
// 00874994  5e                   pop esi
// 00874995  5d                   pop ebp
// 00874996  5b                   pop ebx
// 00874997  83c430               add esp, 0x30
// 0087499a  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
