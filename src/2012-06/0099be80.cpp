// roc 2012-06 0099be80  unit: CXTPImageManagerIconSet  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099be80
//
// 0099be80  83ec0c               sub esp, 0xc
// 0099be83  53                   push ebx
// 0099be84  56                   push esi
// 0099be85  8bf1                 mov esi, ecx
// 0099be87  8b4634               mov eax, dword ptr [esi + 0x34]
// 0099be8a  f7d8                 neg eax
// 0099be8c  1bc0                 sbb eax, eax
// 0099be8e  57                   push edi
// 0099be8f  8944240c             mov dword ptr [esp + 0xc], eax
// 0099be93  743a                 je 0x99becf
// 0099be95  8d5e28               lea ebx, [esi + 0x28]
// 0099be98  eb06                 jmp 0x99bea0
// 0099be9a  8d9b00000000         lea ebx, [ebx]
// 0099bea0  8d442410             lea eax, [esp + 0x10]
// 0099bea4  50                   push eax
// 0099bea5  8d4c2418             lea ecx, [esp + 0x18]
// 0099bea9  51                   push ecx
// 0099beaa  8d542414             lea edx, [esp + 0x14]
// 0099beae  52                   push edx
// 0099beaf  8bcb                 mov ecx, ebx
// 0099beb1  e8aac2ffff           call 0x998160
// 0099beb6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0099beba  8bcf                 mov ecx, edi
// 0099bebc  e83fefffff           call 0x99ae00
// 0099bec1  8bcf                 mov ecx, edi
// 0099bec3  e8c267feff           call 0x98268a
// 0099bec8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0099becd  75d1                 jne 0x99bea0
// 0099becf  8d4e28               lea ecx, [esi + 0x28]
// 0099bed2  e8d997abff           call 0x4556b0
// 0099bed7  8b4664               mov eax, dword ptr [esi + 0x64]
// 0099beda  f7d8                 neg eax
// 0099bedc  1bc0                 sbb eax, eax
// 0099bede  8944240c             mov dword ptr [esp + 0xc], eax
// 0099bee2  7438                 je 0x99bf1c
// 0099bee4  8d5e58               lea ebx, [esi + 0x58]
// 0099bee7  8d442410             lea eax, [esp + 0x10]
// 0099beeb  50                   push eax
// 0099beec  8d4c2418             lea ecx, [esp + 0x18]
// 0099bef0  51                   push ecx
// 0099bef1  8d542414             lea edx, [esp + 0x14]
// 0099bef5  52                   push edx
// 0099bef6  8bcb                 mov ecx, ebx
// 0099bef8  e863c2ffff           call 0x998160
// 0099befd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0099bf01  85ff                 test edi, edi
// 0099bf03  7410                 je 0x99bf15
// 0099bf05  8bcf                 mov ecx, edi
// 0099bf07  e8f4f0ffff           call 0x99b000
// 0099bf0c  57                   push edi
// 0099bf0d  e80262feff           call 0x982114
// 0099bf12  83c404               add esp, 4
// 0099bf15  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0099bf1a  75cb                 jne 0x99bee7
// 0099bf1c  8d4e58               lea ecx, [esi + 0x58]
// 0099bf1f  e88c97abff           call 0x4556b0
// 0099bf24  33ff                 xor edi, edi
// 0099bf26  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0099bf29  7e2e                 jle 0x99bf59
// 0099bf2b  eb03                 jmp 0x99bf30
// 0099bf2d  8d4900               lea ecx, [ecx]
// 0099bf30  85ff                 test edi, edi
// 0099bf32  7c38                 jl 0x99bf6c
// 0099bf34  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0099bf37  7d33                 jge 0x99bf6c
// 0099bf39  8b4648               mov eax, dword ptr [esi + 0x48]
// 0099bf3c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0099bf3f  85db                 test ebx, ebx
// 0099bf41  7410                 je 0x99bf53
// 0099bf43  8bcb                 mov ecx, ebx
// 0099bf45  e866e0ffff           call 0x999fb0
// 0099bf4a  53                   push ebx
// 0099bf4b  e8c461feff           call 0x982114
// 0099bf50  83c404               add esp, 4
// 0099bf53  47                   inc edi
// 0099bf54  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0099bf57  7cd7                 jl 0x99bf30
// 0099bf59  6aff                 push -1
// 0099bf5b  6a00                 push 0
// 0099bf5d  8d4e44               lea ecx, [esi + 0x44]
// 0099bf60  e8fbc2ffff           call 0x998260
// 0099bf65  5f                   pop edi
// 0099bf66  5e                   pop esi
// 0099bf67  5b                   pop ebx
// 0099bf68  83c40c               add esp, 0xc
// 0099bf6b  c3                   ret 
// 0099bf6c  e84f64feff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp