// from server: 100% by auto
// roc 2008-06 00774060  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00774060
//
// 00774060  53                   push ebx
// 00774061  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00774065  56                   push esi
// 00774066  57                   push edi
// 00774067  8bf1                 mov esi, ecx
// 00774069  85db                 test ebx, ebx
// 0077406b  0f8cc4000000         jl 0x774135
// 00774071  8d7e70               lea edi, [esi + 0x70]
// 00774074  8bcf                 mov ecx, edi
// 00774076  ff15e02f8000         call dword ptr [0x802fe0]
// 0077407c  3bd8                 cmp ebx, eax
// 0077407e  0f8db1000000         jge 0x774135
// 00774084  53                   push ebx
// 00774085  8bcf                 mov ecx, edi
// 00774087  ff15383e8000         call dword ptr [0x803e38]
// 0077408d  0fbec0               movsx eax, al
// 00774090  83c0dd               add eax, -0x23
// 00774093  83f841               cmp eax, 0x41
// 00774096  0f8799000000         ja 0x774135
// 0077409c  0fb680ec427700       movzx eax, byte ptr [eax + 0x7742ec]
// 007740a3  ff2485b4427700       jmp dword ptr [eax*4 + 0x7742b4]
// 007740aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007740ae  0fbe11               movsx edx, byte ptr [ecx]
// 007740b1  52                   push edx
// 007740b2  ff1524268000         call dword ptr [0x802624]
// 007740b8  83c404               add esp, 4
// 007740bb  5f                   pop edi
// 007740bc  5e                   pop esi
// 007740bd  5b                   pop ebx
// 007740be  c20800               ret 8
// 007740c1  8b742410             mov esi, dword ptr [esp + 0x10]
// 007740c5  0fbe06               movsx eax, byte ptr [esi]
// 007740c8  50                   push eax
// 007740c9  ff1524268000         call dword ptr [0x802624]
// 007740cf  83c404               add esp, 4
// 007740d2  85c0                 test eax, eax
// 007740d4  0f85ad010000         jne 0x774287
// 007740da  0fbe0e               movsx ecx, byte ptr [esi]
// 007740dd  51                   push ecx
// 007740de  ff1520268000         call dword ptr [0x802620]
// 007740e4  83c404               add esp, 4
// 007740e7  85c0                 test eax, eax
// 007740e9  0f8598010000         jne 0x774287
// 007740ef  5f                   pop edi
// 007740f0  5e                   pop esi
// 007740f1  5b                   pop ebx
// 007740f2  c20800               ret 8
// 007740f5  8b742410             mov esi, dword ptr [esp + 0x10]
// 007740f9  0fbe16               movsx edx, byte ptr [esi]
// 007740fc  52                   push edx
// 007740fd  ff1524268000         call dword ptr [0x802624]
// 00774103  83c404               add esp, 4
// 00774106  85c0                 test eax, eax
// 00774108  0f8579010000         jne 0x774287
// 0077410e  0fbe06               movsx eax, byte ptr [esi]
// 00774111  50                   push eax
// 00774112  ff1520268000         call dword ptr [0x802620]
// 00774118  83c404               add esp, 4
// 0077411b  85c0                 test eax, eax
// 0077411d  0f8564010000         jne 0x774287
// 00774123  8a06                 mov al, byte ptr [esi]
// 00774125  3c2d                 cmp al, 0x2d
// 00774127  0f845a010000         je 0x774287
// 0077412d  3c2b                 cmp al, 0x2b
// 0077412f  0f8452010000         je 0x774287
// 00774135  5f                   pop edi
// 00774136  5e                   pop esi
// 00774137  33c0                 xor eax, eax
// 00774139  5b                   pop ebx
// 0077413a  c20800               ret 8
// 0077413d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00774141  0fbe0e               movsx ecx, byte ptr [esi]
// 00774144  51                   push ecx
// 00774145  ff1524268000         call dword ptr [0x802624]
// 0077414b  83c404               add esp, 4
// 0077414e  85c0                 test eax, eax
// 00774150  0f8531010000         jne 0x774287
// 00774156  0fbe16               movsx edx, byte ptr [esi]
// 00774159  52                   push edx
// 0077415a  ff1520268000         call dword ptr [0x802620]
// 00774160  83c404               add esp, 4
// 00774163  85c0                 test eax, eax
// 00774165  0f851c010000         jne 0x774287
// 0077416b  8a06                 mov al, byte ptr [esi]
// 0077416d  3c2d                 cmp al, 0x2d
// 0077416f  0f8412010000         je 0x774287
// 00774175  3c2b                 cmp al, 0x2b
// 00774177  0f840a010000         je 0x774287
// 0077417d  3c2e                 cmp al, 0x2e
// 0077417f  0f8402010000         je 0x774287
// 00774185  3c2c                 cmp al, 0x2c
// 00774187  eba6                 jmp 0x77412f
// 00774189  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077418d  0fb611               movzx edx, byte ptr [ecx]
// 00774190  8b06                 mov eax, dword ptr [esi]
// 00774192  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00774198  52                   push edx
// 00774199  8bce                 mov ecx, esi
// 0077419b  ffd0                 call eax
// 0077419d  5f                   pop edi
// 0077419e  5e                   pop esi
// 0077419f  5b                   pop ebx
// 007741a0  c20800               ret 8
// 007741a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007741a7  0fb607               movzx eax, byte ptr [edi]
// 007741aa  8b16                 mov edx, dword ptr [esi]
// 007741ac  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007741b2  50                   push eax
// 007741b3  8bce                 mov ecx, esi
// 007741b5  ffd2                 call edx
// 007741b7  85c0                 test eax, eax
// 007741b9  0f85c8000000         jne 0x774287
// 007741bf  0fbe07               movsx eax, byte ptr [edi]
// 007741c2  50                   push eax
// 007741c3  e916ffffff           jmp 0x7740de
// 007741c8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007741cc  0fbe0f               movsx ecx, byte ptr [edi]
// 007741cf  51                   push ecx
// 007741d0  ff151c268000         call dword ptr [0x80261c]
// 007741d6  83c404               add esp, 4
// 007741d9  85c0                 test eax, eax
// 007741db  0f85a6000000         jne 0x774287
// 007741e1  0fb607               movzx eax, byte ptr [edi]
// 007741e4  8b16                 mov edx, dword ptr [esi]
// 007741e6  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007741ec  50                   push eax
// 007741ed  8bce                 mov ecx, esi
// 007741ef  ffd2                 call edx
// 007741f1  e9f1feffff           jmp 0x7740e7
// 007741f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007741fa  0fbe07               movsx eax, byte ptr [edi]
// 007741fd  50                   push eax
// 007741fe  ff151c268000         call dword ptr [0x80261c]
// 00774204  83c404               add esp, 4
// 00774207  85c0                 test eax, eax
// 00774209  757c                 jne 0x774287
// 0077420b  eb9a                 jmp 0x7741a7
// 0077420d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00774211  0fb608               movzx ecx, byte ptr [eax]
// 00774214  8b16                 mov edx, dword ptr [esi]
// 00774216  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0077421c  51                   push ecx
// 0077421d  8bce                 mov ecx, esi
// 0077421f  ffd2                 call edx
// 00774221  5f                   pop edi
// 00774222  5e                   pop esi
// 00774223  5b                   pop ebx
// 00774224  c20800               ret 8
// 00774227  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077422b  0fbe08               movsx ecx, byte ptr [eax]
// 0077422e  51                   push ecx
// 0077422f  ff15d0268000         call dword ptr [0x8026d0]
// 00774235  83c404               add esp, 4
// 00774238  5f                   pop edi
// 00774239  5e                   pop esi
// 0077423a  5b                   pop ebx
// 0077423b  c20800               ret 8
// 0077423e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00774242  0fbe16               movsx edx, byte ptr [esi]
// 00774245  52                   push edx
// 00774246  ff15d0268000         call dword ptr [0x8026d0]
// 0077424c  83c404               add esp, 4
// 0077424f  85c0                 test eax, eax
// 00774251  7534                 jne 0x774287
// 00774253  0fbe06               movsx eax, byte ptr [esi]
// 00774256  50                   push eax
// 00774257  e982feffff           jmp 0x7740de
// 0077425c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00774260  0fb607               movzx eax, byte ptr [edi]
// 00774263  8b16                 mov edx, dword ptr [esi]
// 00774265  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0077426b  50                   push eax
// 0077426c  8bce                 mov ecx, esi
// 0077426e  ffd2                 call edx
// 00774270  85c0                 test eax, eax
// 00774272  0f84bdfeffff         je 0x774135
// 00774278  6a01                 push 1
// 0077427a  0fb607               movzx eax, byte ptr [edi]
// 0077427d  50                   push eax
// 0077427e  8bce                 mov ecx, esi
// 00774280  e8ebf6ffff           call 0x773970
// 00774285  8807                 mov byte ptr [edi], al
// 00774287  5f                   pop edi
// 00774288  5e                   pop esi
// 00774289  b801000000           mov eax, 1
// 0077428e  5b                   pop ebx
// 0077428f  c20800               ret 8
// 00774292  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00774296  0fb607               movzx eax, byte ptr [edi]
// 00774299  8b16                 mov edx, dword ptr [esi]
// 0077429b  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 007742a1  50                   push eax
// 007742a2  8bce                 mov ecx, esi
// 007742a4  ffd2                 call edx
// 007742a6  85c0                 test eax, eax
// 007742a8  0f8487feffff         je 0x774135
// 007742ae  6a00                 push 0
// 007742b0  ebc8                 jmp 0x77427a
// 007742b2  8bff                 mov edi, edi
// 007742b4  f5                   cmc 
// 007742b5  40                   inc eax
// 007742b6  7700                 ja 0x7742b8
// 007742b8  0d427700aa           or eax, 0xaa007742
// 007742bd  40                   inc eax
// 007742be  7700                 ja 0x7742c0
// 007742c0  c1407700             rol dword ptr [eax + 0x77], 0
// 007742c4  92                   xchg edx, eax
// 007742c5  42                   inc edx
// 007742c6  7700                 ja 0x7742c8
// 007742c8  5c                   pop esp
// 007742c9  42                   inc edx
// 007742ca  7700                 ja 0x7742cc
// 007742cc  a3417700c8           mov dword ptr [0xc8007741], eax
// 007742d1  41                   inc ecx
// 007742d2  7700                 ja 0x7742d4
// 007742d4  27                   daa 
// 007742d5  42                   inc edx
// 007742d6  7700                 ja 0x7742d8
// 007742d8  894177               mov dword ptr [ecx + 0x77], eax
// 007742db  003e                 add byte ptr [esi], bh
// 007742dd  42                   inc edx
// 007742de  7700                 ja 0x7742e0
// 007742e0  f6417700             test byte ptr [ecx + 0x77], 0
// 007742e4  3d41770035           cmp eax, 0x35007741
// 007742e9  41                   inc ecx
// 007742ea  7700                 ja 0x7742ec
// 007742ec  000d0d010d0d         add byte ptr [0xd0d010d], cl
// 007742f2  0d0d0d0d0d           or eax, 0xd0d0d0d
// 007742f7  0d0d020d0d           or eax, 0xd0d020d
// 007742fc  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00774301  0d030d0d04           or eax, 0x40d0d03
// 00774306  0d05060d07           or eax, 0x70d0605
// 0077430b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00774310  0d080d0d0d           or eax, 0xd0d0d08
// 00774315  090d0d0d0d0d         or dword ptr [0xd0d0d0d], ecx
// 0077431b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 00774320  0d0a0d0d0d           or eax, 0xd0d0d0a
// 00774325  0d0d0d0d0d           or eax, 0xd0d0d0d
// library xtp-11.2.2-lib-strlen/Source\Controls\XTMaskEdit.cpp (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp
