// roc 2010-06 00873d90  unit: CXTPDockingPaneContext  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00873d90
//
// 00873d90  8b442404             mov eax, dword ptr [esp + 4]
// 00873d94  83ec28               sub esp, 0x28
// 00873d97  53                   push ebx
// 00873d98  55                   push ebp
// 00873d99  56                   push esi
// 00873d9a  8bf1                 mov esi, ecx
// 00873d9c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00873da2  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 00873da8  2bc1                 sub eax, ecx
// 00873daa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00873dae  57                   push edi
// 00873daf  2bca                 sub ecx, edx
// 00873db1  51                   push ecx
// 00873db2  50                   push eax
// 00873db3  8dbe0c010000         lea edi, [esi + 0x10c]
// 00873db9  57                   push edi
// 00873dba  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00873dc0  8d9efc000000         lea ebx, [esi + 0xfc]
// 00873dc6  8d442418             lea eax, [esp + 0x18]
// 00873dca  53                   push ebx
// 00873dcb  50                   push eax
// 00873dcc  e8ffcaf7ff           call 0x7f08d0
// 00873dd1  8bc8                 mov ecx, eax
// 00873dd3  e858c6f7ff           call 0x7f0430
// 00873dd8  50                   push eax
// 00873dd9  57                   push edi
// 00873dda  8d4c2430             lea ecx, [esp + 0x30]
// 00873dde  51                   push ecx
// 00873ddf  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00873de5  85c0                 test eax, eax
// 00873de7  7416                 je 0x873dff
// 00873de9  8b17                 mov edx, dword ptr [edi]
// 00873deb  8b4704               mov eax, dword ptr [edi + 4]
// 00873dee  8b4f08               mov ecx, dword ptr [edi + 8]
// 00873df1  8913                 mov dword ptr [ebx], edx
// 00873df3  8b570c               mov edx, dword ptr [edi + 0xc]
// 00873df6  894304               mov dword ptr [ebx + 4], eax
// 00873df9  894b08               mov dword ptr [ebx + 8], ecx
// 00873dfc  89530c               mov dword ptr [ebx + 0xc], edx
// 00873dff  53                   push ebx
// 00873e00  e88bd4ffff           call 0x871290
// 00873e05  83c404               add esp, 4
// 00873e08  53                   push ebx
// 00873e09  ff1544bc9e00         call dword ptr [0x9ebc44]
// 00873e0f  85c0                 test eax, eax
// 00873e11  7519                 jne 0x873e2c
// 00873e13  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00873e19  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 00873e20  740a                 je 0x873e2c
// 00873e22  8b16                 mov edx, dword ptr [esi]
// 00873e24  8b4224               mov eax, dword ptr [edx + 0x24]
// 00873e27  53                   push ebx
// 00873e28  8bce                 mov ecx, esi
// 00873e2a  ffd0                 call eax
// 00873e2c  8d86b8000000         lea eax, [esi + 0xb8]
// 00873e32  33ed                 xor ebp, ebp
// 00873e34  50                   push eax
// 00873e35  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 00873e3b  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 00873e41  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 00873e47  6a11                 push 0x11
// 00873e49  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 00873e4f  ff157cbc9e00         call dword ptr [0x9ebc7c]
// 00873e55  6685c0               test ax, ax
// 00873e58  7c1b                 jl 0x873e75
// 00873e5a  39ae4c010000         cmp dword ptr [esi + 0x14c], ebp
// 00873e60  7413                 je 0x873e75
// 00873e62  8b442440             mov eax, dword ptr [esp + 0x40]
// 00873e66  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00873e6a  8b16                 mov edx, dword ptr [esi]
// 00873e6c  8b5220               mov edx, dword ptr [edx + 0x20]
// 00873e6f  50                   push eax
// 00873e70  51                   push ecx
// 00873e71  8bce                 mov ecx, esi
// 00873e73  ffd2                 call edx
// 00873e75  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00873e79  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00873e7d  8986ec000000         mov dword ptr [esi + 0xec], eax
// 00873e83  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 00873e89  39aeb0000000         cmp dword ptr [esi + 0xb0], ebp
// 00873e8f  0f843b020000         je 0x8740d0
// 00873e95  8bce                 mov ecx, esi
// 00873e97  e864fbffff           call 0x873a00
// 00873e9c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00873ea2  33db                 xor ebx, ebx
// 00873ea4  3bc5                 cmp eax, ebp
// 00873ea6  0f8424020000         je 0x8740d0
// 00873eac  eb06                 jmp 0x873eb4
// 00873eae  8bff                 mov edi, edi
// 00873eb0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00873eb4  8b5004               mov edx, dword ptr [eax + 4]
// 00873eb7  8b7808               mov edi, dword ptr [eax + 8]
// 00873eba  89542414             mov dword ptr [esp + 0x14], edx
// 00873ebe  896c2410             mov dword ptr [esp + 0x10], ebp
// 00873ec2  3bdd                 cmp ebx, ebp
// 00873ec4  0f85e0010000         jne 0x8740aa
// 00873eca  8b442440             mov eax, dword ptr [esp + 0x40]
// 00873ece  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00873ed2  50                   push eax
// 00873ed3  51                   push ecx
// 00873ed4  8bcf                 mov ecx, edi
// 00873ed6  e805cbffff           call 0x8709e0
// 00873edb  8be8                 mov ebp, eax
// 00873edd  85ed                 test ebp, ebp
// 00873edf  0f84c5010000         je 0x8740aa
// 00873ee5  f6475420             test byte ptr [edi + 0x54], 0x20
// 00873ee9  7438                 je 0x873f23
// 00873eeb  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00873ef1  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00873ef7  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00873efd  898630010000         mov dword ptr [esi + 0x130], eax
// 00873f03  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00873f09  89962c010000         mov dword ptr [esi + 0x12c], edx
// 00873f0f  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00873f15  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00873f1b  899638010000         mov dword ptr [esi + 0x138], edx
// 00873f21  eb3a                 jmp 0x873f5d
// 00873f23  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00873f29  e8a289f7ff           call 0x7ec8d0
// 00873f2e  8d4c2428             lea ecx, [esp + 0x28]
// 00873f32  51                   push ecx
// 00873f33  8bc8                 mov ecx, eax
// 00873f35  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00873f3b  e83009ffff           call 0x864870
// 00873f40  8b10                 mov edx, dword ptr [eax]
// 00873f42  899630010000         mov dword ptr [esi + 0x130], edx
// 00873f48  8b4804               mov ecx, dword ptr [eax + 4]
// 00873f4b  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00873f51  8b5008               mov edx, dword ptr [eax + 8]
// 00873f54  899638010000         mov dword ptr [esi + 0x138], edx
// 00873f5a  8b400c               mov eax, dword ptr [eax + 0xc]
// 00873f5d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00873f63  8d45ff               lea eax, [ebp - 1]
// 00873f66  83f80f               cmp eax, 0xf
// 00873f69  0f87a4000000         ja 0x874013
// 00873f6f  0fb688fc408700       movzx ecx, byte ptr [eax + 0x8740fc]
// 00873f76  ff248de4408700       jmp dword ptr [ecx*4 + 0x8740e4]
// 00873f7d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00873f83  038634010000         add eax, dword ptr [esi + 0x134]
// 00873f89  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 00873f93  99                   cdq 
// 00873f94  2bc2                 sub eax, edx
// 00873f96  d1f8                 sar eax, 1
// 00873f98  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00873f9e  eb73                 jmp 0x874013
// 00873fa0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00873fa6  038634010000         add eax, dword ptr [esi + 0x134]
// 00873fac  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 00873fb6  99                   cdq 
// 00873fb7  2bc2                 sub eax, edx
// 00873fb9  d1f8                 sar eax, 1
// 00873fbb  898634010000         mov dword ptr [esi + 0x134], eax
// 00873fc1  eb50                 jmp 0x874013
// 00873fc3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00873fc9  038630010000         add eax, dword ptr [esi + 0x130]
// 00873fcf  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 00873fd9  99                   cdq 
// 00873fda  2bc2                 sub eax, edx
// 00873fdc  d1f8                 sar eax, 1
// 00873fde  898638010000         mov dword ptr [esi + 0x138], eax
// 00873fe4  eb2d                 jmp 0x874013
// 00873fe6  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00873fec  038630010000         add eax, dword ptr [esi + 0x130]
// 00873ff2  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 00873ffc  99                   cdq 
// 00873ffd  2bc2                 sub eax, edx
// 00873fff  d1f8                 sar eax, 1
// 00874001  898630010000         mov dword ptr [esi + 0x130], eax
// 00874007  eb0a                 jmp 0x874013
// 00874009  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 00874013  83fd10               cmp ebp, 0x10
// 00874016  7421                 je 0x874039
// 00874018  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0087401e  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00874024  52                   push edx
// 00874025  50                   push eax
// 00874026  8bce                 mov ecx, esi
// 00874028  e823e8ffff           call 0x872850
// 0087402d  85c0                 test eax, eax
// 0087402f  7528                 jne 0x874059
// 00874031  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00874037  eb6c                 jmp 0x8740a5
// 00874039  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 0087403f  51                   push ecx
// 00874040  8bce                 mov ecx, esi
// 00874042  e8d9e8ffff           call 0x872920
// 00874047  85c0                 test eax, eax
// 00874049  7556                 jne 0x8740a1
// 0087404b  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00874051  898644010000         mov dword ptr [esi + 0x144], eax
// 00874057  eb4c                 jmp 0x8740a5
// 00874059  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 0087405f  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00874065  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 0087406b  52                   push edx
// 0087406c  50                   push eax
// 0087406d  51                   push ecx
// 0087406e  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00874074  8d542424             lea edx, [esp + 0x24]
// 00874078  52                   push edx
// 00874079  e8528ef7ff           call 0x7eced0
// 0087407e  8b08                 mov ecx, dword ptr [eax]
// 00874080  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00874086  8b5004               mov edx, dword ptr [eax + 4]
// 00874089  899634010000         mov dword ptr [esi + 0x134], edx
// 0087408f  8b4808               mov ecx, dword ptr [eax + 8]
// 00874092  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00874098  8b500c               mov edx, dword ptr [eax + 0xc]
// 0087409b  89963c010000         mov dword ptr [esi + 0x13c], edx
// 008740a1  896c2410             mov dword ptr [esp + 0x10], ebp
// 008740a5  bb01000000           mov ebx, 1
// 008740aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 008740ae  394758               cmp dword ptr [edi + 0x58], eax
// 008740b1  7411                 je 0x8740c4
// 008740b3  6a00                 push 0
// 008740b5  894758               mov dword ptr [edi + 0x58], eax
// 008740b8  8b4720               mov eax, dword ptr [edi + 0x20]
// 008740bb  6a00                 push 0
// 008740bd  50                   push eax
// 008740be  ff1578ba9e00         call dword ptr [0x9eba78]
// 008740c4  33ed                 xor ebp, ebp
// 008740c6  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008740ca  0f85e0fdffff         jne 0x873eb0
// 008740d0  8b16                 mov edx, dword ptr [esi]
// 008740d2  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008740d5  55                   push ebp
// 008740d6  8bce                 mov ecx, esi
// 008740d8  ffd0                 call eax
// 008740da  5f                   pop edi
// 008740db  5e                   pop esi
// 008740dc  5d                   pop ebp
// 008740dd  5b                   pop ebx
// 008740de  83c428               add esp, 0x28
// 008740e1  c20800               ret 8
// 008740e4  c3                   ret 
// 008740e5  3f                   aas 
// 008740e6  8700                 xchg dword ptr [eax], eax
// 008740e8  e63f                 out 0x3f, al
// 008740ea  8700                 xchg dword ptr [eax], eax
// 008740ec  7d3f                 jge 0x87412d
// 008740ee  8700                 xchg dword ptr [eax], eax
// 008740f0  a03f870009           mov al, byte ptr [0x900873f]
// 008740f5  40                   inc eax
// 008740f6  8700                 xchg dword ptr [eax], eax
// 008740f8  134087               adc eax, dword ptr [eax - 0x79]
// 008740fb  0000                 add byte ptr [eax], al
// 008740fd  010502050505         add dword ptr [0x5050502], eax
// 00874103  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp