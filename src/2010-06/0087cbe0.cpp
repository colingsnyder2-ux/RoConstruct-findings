// roc 2010-06 0087cbe0  unit: CXTPPropertyGridInplaceEdit  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087cbe0
//
// 0087cbe0  83ec0c               sub esp, 0xc
// 0087cbe3  55                   push ebp
// 0087cbe4  56                   push esi
// 0087cbe5  57                   push edi
// 0087cbe6  8bf9                 mov edi, ecx
// 0087cbe8  8b4754               mov eax, dword ptr [edi + 0x54]
// 0087cbeb  3b4758               cmp eax, dword ptr [edi + 0x58]
// 0087cbee  7405                 je 0x87cbf5
// 0087cbf0  e8cbf9ffff           call 0x87c5c0
// 0087cbf5  8b7754               mov esi, dword ptr [edi + 0x54]
// 0087cbf8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087cbfc  8974240c             mov dword ptr [esp + 0xc], esi
// 0087cc00  8d5001               lea edx, [eax + 1]
// 0087cc03  8a08                 mov cl, byte ptr [eax]
// 0087cc05  40                   inc eax
// 0087cc06  84c9                 test cl, cl
// 0087cc08  75f9                 jne 0x87cc03
// 0087cc0a  2bc2                 sub eax, edx
// 0087cc0c  8d8f80000000         lea ecx, [edi + 0x80]
// 0087cc12  89442414             mov dword ptr [esp + 0x14], eax
// 0087cc16  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087cc1c  8be8                 mov ebp, eax
// 0087cc1e  3bf5                 cmp esi, ebp
// 0087cc20  0f8dbd000000         jge 0x87cce3
// 0087cc26  53                   push ebx
// 0087cc27  33db                 xor ebx, ebx
// 0087cc29  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0087cc2d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0087cc31  0f8e93000000         jle 0x87ccca
// 0087cc37  eb07                 jmp 0x87cc40
// 0087cc39  8da42400000000       lea esp, [esp]
// 0087cc40  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087cc44  8a040b               mov al, byte ptr [ebx + ecx]
// 0087cc47  88442410             mov byte ptr [esp + 0x10], al
// 0087cc4b  3a476c               cmp al, byte ptr [edi + 0x6c]
// 0087cc4e  7416                 je 0x87cc66
// 0087cc50  8b17                 mov edx, dword ptr [edi]
// 0087cc52  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0087cc58  56                   push esi
// 0087cc59  8d442414             lea eax, [esp + 0x14]
// 0087cc5d  50                   push eax
// 0087cc5e  8bcf                 mov ecx, edi
// 0087cc60  ffd2                 call edx
// 0087cc62  85c0                 test eax, eax
// 0087cc64  7451                 je 0x87ccb7
// 0087cc66  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087cc6a  50                   push eax
// 0087cc6b  56                   push esi
// 0087cc6c  8bcf                 mov ecx, edi
// 0087cc6e  e8cdf4ffff           call 0x87c140
// 0087cc73  46                   inc esi
// 0087cc74  3bf5                 cmp esi, ebp
// 0087cc76  7d2f                 jge 0x87cca7
// 0087cc78  8d9f84000000         lea ebx, [edi + 0x84]
// 0087cc7e  8bff                 mov edi, edi
// 0087cc80  85f6                 test esi, esi
// 0087cc82  7c1a                 jl 0x87cc9e
// 0087cc84  8bcb                 mov ecx, ebx
// 0087cc86  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087cc8c  3bf0                 cmp esi, eax
// 0087cc8e  7d0e                 jge 0x87cc9e
// 0087cc90  56                   push esi
// 0087cc91  8bcb                 mov ecx, ebx
// 0087cc93  ff1558c59e00         call dword ptr [0x9ec558]
// 0087cc99  3a476c               cmp al, byte ptr [edi + 0x6c]
// 0087cc9c  7405                 je 0x87cca3
// 0087cc9e  46                   inc esi
// 0087cc9f  3bf5                 cmp esi, ebp
// 0087cca1  7cdd                 jl 0x87cc80
// 0087cca3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0087cca7  8d8f80000000         lea ecx, [edi + 0x80]
// 0087ccad  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ccb3  3bf0                 cmp esi, eax
// 0087ccb5  7d0f                 jge 0x87ccc6
// 0087ccb7  43                   inc ebx
// 0087ccb8  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 0087ccbc  895c2414             mov dword ptr [esp + 0x14], ebx
// 0087ccc0  0f8c7affffff         jl 0x87cc40
// 0087ccc6  89742410             mov dword ptr [esp + 0x10], esi
// 0087ccca  6a01                 push 1
// 0087cccc  8d4c2414             lea ecx, [esp + 0x14]
// 0087ccd0  51                   push ecx
// 0087ccd1  8bcf                 mov ecx, edi
// 0087ccd3  e8c8f2ffff           call 0x87bfa0
// 0087ccd8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087ccdc  894758               mov dword ptr [edi + 0x58], eax
// 0087ccdf  894754               mov dword ptr [edi + 0x54], eax
// 0087cce2  5b                   pop ebx
// 0087cce3  5f                   pop edi
// 0087cce4  5e                   pop esi
// 0087cce5  5d                   pop ebp
// 0087cce6  83c40c               add esp, 0xc
// 0087cce9  c20400               ret 4
// copied from an identical function in another client (function ?MaskReplaceSel@?$CXTMaskEditT@VCEdit@@@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp