// roc 2011-06 00823910  unit: CXTPImageManagerIconSet  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00823910
//
// 00823910  83ec0c               sub esp, 0xc
// 00823913  53                   push ebx
// 00823914  56                   push esi
// 00823915  8bf1                 mov esi, ecx
// 00823917  8b4634               mov eax, dword ptr [esi + 0x34]
// 0082391a  f7d8                 neg eax
// 0082391c  1bc0                 sbb eax, eax
// 0082391e  57                   push edi
// 0082391f  8944240c             mov dword ptr [esp + 0xc], eax
// 00823923  743a                 je 0x82395f
// 00823925  8d5e28               lea ebx, [esi + 0x28]
// 00823928  eb06                 jmp 0x823930
// 0082392a  8d9b00000000         lea ebx, [ebx]
// 00823930  8d442410             lea eax, [esp + 0x10]
// 00823934  50                   push eax
// 00823935  8d4c2418             lea ecx, [esp + 0x18]
// 00823939  51                   push ecx
// 0082393a  8d542414             lea edx, [esp + 0x14]
// 0082393e  52                   push edx
// 0082393f  8bcb                 mov ecx, ebx
// 00823941  e89a9d0a00           call 0x8cd6e0
// 00823946  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082394a  8bcf                 mov ecx, edi
// 0082394c  e8afefffff           call 0x822900
// 00823951  8bcf                 mov ecx, edi
// 00823953  e8826cfeff           call 0x80a5da
// 00823958  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0082395d  75d1                 jne 0x823930
// 0082395f  8d4e28               lea ecx, [esi + 0x28]
// 00823962  e849590900           call 0x8b92b0
// 00823967  8b4664               mov eax, dword ptr [esi + 0x64]
// 0082396a  f7d8                 neg eax
// 0082396c  1bc0                 sbb eax, eax
// 0082396e  8944240c             mov dword ptr [esp + 0xc], eax
// 00823972  7438                 je 0x8239ac
// 00823974  8d5e58               lea ebx, [esi + 0x58]
// 00823977  8d442410             lea eax, [esp + 0x10]
// 0082397b  50                   push eax
// 0082397c  8d4c2418             lea ecx, [esp + 0x18]
// 00823980  51                   push ecx
// 00823981  8d542414             lea edx, [esp + 0x14]
// 00823985  52                   push edx
// 00823986  8bcb                 mov ecx, ebx
// 00823988  e8539d0a00           call 0x8cd6e0
// 0082398d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00823991  85ff                 test edi, edi
// 00823993  7410                 je 0x8239a5
// 00823995  8bcf                 mov ecx, edi
// 00823997  e864f1ffff           call 0x822b00
// 0082399c  57                   push edi
// 0082399d  e8b666feff           call 0x80a058
// 008239a2  83c404               add esp, 4
// 008239a5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008239aa  75cb                 jne 0x823977
// 008239ac  8d4e58               lea ecx, [esi + 0x58]
// 008239af  e8fc580900           call 0x8b92b0
// 008239b4  33ff                 xor edi, edi
// 008239b6  397e4c               cmp dword ptr [esi + 0x4c], edi
// 008239b9  7e2e                 jle 0x8239e9
// 008239bb  eb03                 jmp 0x8239c0
// 008239bd  8d4900               lea ecx, [ecx]
// 008239c0  85ff                 test edi, edi
// 008239c2  7c38                 jl 0x8239fc
// 008239c4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 008239c7  7d33                 jge 0x8239fc
// 008239c9  8b4648               mov eax, dword ptr [esi + 0x48]
// 008239cc  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008239cf  85db                 test ebx, ebx
// 008239d1  7410                 je 0x8239e3
// 008239d3  8bcb                 mov ecx, ebx
// 008239d5  e8d6e0ffff           call 0x821ab0
// 008239da  53                   push ebx
// 008239db  e87866feff           call 0x80a058
// 008239e0  83c404               add esp, 4
// 008239e3  47                   inc edi
// 008239e4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 008239e7  7cd7                 jl 0x8239c0
// 008239e9  6aff                 push -1
// 008239eb  6a00                 push 0
// 008239ed  8d4e44               lea ecx, [esi + 0x44]
// 008239f0  e84bb10100           call 0x83eb40
// 008239f5  5f                   pop edi
// 008239f6  5e                   pop esi
// 008239f7  5b                   pop ebx
// 008239f8  83c40c               add esp, 0xc
// 008239fb  c3                   ret 
// 008239fc  e80969feff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp