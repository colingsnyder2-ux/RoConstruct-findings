// roc 2011-06 00848810  unit: CXTTreeBase  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848810
//
// 00848810  83ec20               sub esp, 0x20
// 00848813  57                   push edi
// 00848814  8bf9                 mov edi, ecx
// 00848816  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848819  e8101efcff           call 0x80a62e
// 0084881e  8bcf                 mov ecx, edi
// 00848820  e80beaffff           call 0x847230
// 00848825  84c0                 test al, al
// 00848827  0f849c000000         je 0x8488c9
// 0084882d  837f1000             cmp dword ptr [edi + 0x10], 0
// 00848831  0f8492000000         je 0x8488c9
// 00848837  8b4734               mov eax, dword ptr [edi + 0x34]
// 0084883a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084883d  56                   push esi
// 0084883e  6a00                 push 0
// 00848840  6a00                 push 0
// 00848842  680f110000           push 0x110f
// 00848847  50                   push eax
// 00848848  ff15c019a400         call dword ptr [0xa419c0]
// 0084884e  50                   push eax
// 0084884f  e8d41afcff           call 0x80a328
// 00848854  8bf0                 mov esi, eax
// 00848856  85f6                 test esi, esi
// 00848858  746e                 je 0x8488c8
// 0084885a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084885d  51                   push ecx
// 0084885e  ff15ec1ba400         call dword ptr [0xa41bec]
// 00848864  85c0                 test eax, eax
// 00848866  7460                 je 0x8488c8
// 00848868  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084886b  8d542418             lea edx, [esp + 0x18]
// 0084886f  52                   push edx
// 00848870  50                   push eax
// 00848871  ff155c1ca400         call dword ptr [0xa41c5c]
// 00848877  8b5710               mov edx, dword ptr [edi + 0x10]
// 0084887a  6a01                 push 1
// 0084887c  8d4c240c             lea ecx, [esp + 0xc]
// 00848880  51                   push ecx
// 00848881  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848884  52                   push edx
// 00848885  e86a21fcff           call 0x80a9f4
// 0084888a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084888e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00848892  2b542418             sub edx, dword ptr [esp + 0x18]
// 00848896  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084889a  83e903               sub ecx, 3
// 0084889d  03d1                 add edx, ecx
// 0084889f  894c2408             mov dword ptr [esp + 8], ecx
// 008488a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008488a7  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008488ab  48                   dec eax
// 008488ac  03c8                 add ecx, eax
// 008488ae  89542410             mov dword ptr [esp + 0x10], edx
// 008488b2  6a01                 push 1
// 008488b4  8d54240c             lea edx, [esp + 0xc]
// 008488b8  894c2418             mov dword ptr [esp + 0x18], ecx
// 008488bc  52                   push edx
// 008488bd  8bce                 mov ecx, esi
// 008488bf  89442414             mov dword ptr [esp + 0x14], eax
// 008488c3  e8482fc4ff           call 0x48b810
// 008488c8  5e                   pop esi
// 008488c9  5f                   pop edi
// 008488ca  83c420               add esp, 0x20
// 008488cd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTTreeBase@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp