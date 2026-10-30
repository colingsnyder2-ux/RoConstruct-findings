// roc 2009-12 008c9000  unit: VCEdit::?$CXTMaskEditT  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9000
//
// 008c9000  56                   push esi
// 008c9001  8bf1                 mov esi, ecx
// 008c9003  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c9007  741f                 je 0x8c9028
// 008c9009  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c900d  7419                 je 0x8c9028
// 008c900f  e85ed40500           call 0x926472
// 008c9014  a900080000           test eax, 0x800
// 008c9019  750d                 jne 0x8c9028
// 008c901b  8d4e70               lea ecx, [esi + 0x70]
// 008c901e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c9024  84c0                 test al, al
// 008c9026  740b                 je 0x8c9033
// 008c9028  8bce                 mov ecx, esi
// 008c902a  e801aef2ff           call 0x7f3e30
// 008c902f  5e                   pop esi
// 008c9030  c20c00               ret 0xc
// 008c9033  53                   push ebx
// 008c9034  57                   push edi
// 008c9035  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 008c903b  6a10                 push 0x10
// 008c903d  ffd7                 call edi
// 008c903f  33db                 xor ebx, ebx
// 008c9041  6685c0               test ax, ax
// 008c9044  6a11                 push 0x11
// 008c9046  0f9cc3               setl bl
// 008c9049  ffd7                 call edi
// 008c904b  33c9                 xor ecx, ecx
// 008c904d  6685c0               test ax, ax
// 008c9050  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c9054  0f9cc1               setl cl
// 008c9057  83c0f8               add eax, -8
// 008c905a  83f826               cmp eax, 0x26
// 008c905d  0f8787020000         ja 0x8c92ea
// 008c9063  0fb68014938c00       movzx eax, byte ptr [eax + 0x8c9314]
// 008c906a  ff2485f8928c00       jmp dword ptr [eax*4 + 0x8c92f8]
// 008c9071  8bce                 mov ecx, esi
// 008c9073  e8b8adf2ff           call 0x7f3e30
// 008c9078  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c907b  85c0                 test eax, eax
// 008c907d  7429                 je 0x8c90a8
// 008c907f  8d4e58               lea ecx, [esi + 0x58]
// 008c9082  51                   push ecx
// 008c9083  8d5654               lea edx, [esi + 0x54]
// 008c9086  52                   push edx
// 008c9087  68b0000000           push 0xb0
// 008c908c  50                   push eax
// 008c908d  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c9093  8d8680000000         lea eax, [esi + 0x80]
// 008c9099  50                   push eax
// 008c909a  8bce                 mov ecx, esi
// 008c909c  e8a7adf2ff           call 0x7f3e48
// 008c90a1  8bce                 mov ecx, esi
// 008c90a3  e8d8d9ffff           call 0x8c6a80
// 008c90a8  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c90ab  6a00                 push 0
// 008c90ad  8d542414             lea edx, [esp + 0x14]
// 008c90b1  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c90b5  52                   push edx
// 008c90b6  8bce                 mov ecx, esi
// 008c90b8  e843edffff           call 0x8c7e00
// 008c90bd  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c90c1  394654               cmp dword ptr [esi + 0x54], eax
// 008c90c4  0f8dff010000         jge 0x8c92c9
// 008c90ca  894654               mov dword ptr [esi + 0x54], eax
// 008c90cd  85db                 test ebx, ebx
// 008c90cf  0f85f4010000         jne 0x8c92c9
// 008c90d5  6a01                 push 1
// 008c90d7  8bce                 mov ecx, esi
// 008c90d9  894658               mov dword ptr [esi + 0x58], eax
// 008c90dc  e81fe7ffff           call 0x8c7800
// 008c90e1  5f                   pop edi
// 008c90e2  5b                   pop ebx
// 008c90e3  5e                   pop esi
// 008c90e4  c20c00               ret 0xc
// 008c90e7  8bce                 mov ecx, esi
// 008c90e9  e842adf2ff           call 0x7f3e30
// 008c90ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c90f1  85c0                 test eax, eax
// 008c90f3  7429                 je 0x8c911e
// 008c90f5  8d4e58               lea ecx, [esi + 0x58]
// 008c90f8  51                   push ecx
// 008c90f9  8d5654               lea edx, [esi + 0x54]
// 008c90fc  52                   push edx
// 008c90fd  68b0000000           push 0xb0
// 008c9102  50                   push eax
// 008c9103  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c9109  8d8680000000         lea eax, [esi + 0x80]
// 008c910f  50                   push eax
// 008c9110  8bce                 mov ecx, esi
// 008c9112  e831adf2ff           call 0x7f3e48
// 008c9117  8bce                 mov ecx, esi
// 008c9119  e862d9ffff           call 0x8c6a80
// 008c911e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c9121  6a01                 push 1
// 008c9123  8d542414             lea edx, [esp + 0x14]
// 008c9127  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c912b  52                   push edx
// 008c912c  8bce                 mov ecx, esi
// 008c912e  e8cdecffff           call 0x8c7e00
// 008c9133  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c9137  394658               cmp dword ptr [esi + 0x58], eax
// 008c913a  0f8e89010000         jle 0x8c92c9
// 008c9140  894658               mov dword ptr [esi + 0x58], eax
// 008c9143  85db                 test ebx, ebx
// 008c9145  0f857e010000         jne 0x8c92c9
// 008c914b  6a01                 push 1
// 008c914d  8bce                 mov ecx, esi
// 008c914f  894654               mov dword ptr [esi + 0x54], eax
// 008c9152  e8a9e6ffff           call 0x8c7800
// 008c9157  5f                   pop edi
// 008c9158  5b                   pop ebx
// 008c9159  5e                   pop esi
// 008c915a  c20c00               ret 0xc
// 008c915d  85c9                 test ecx, ecx
// 008c915f  740d                 je 0x8c916e
// 008c9161  8bce                 mov ecx, esi
// 008c9163  e868f0ffff           call 0x8c81d0
// 008c9168  5f                   pop edi
// 008c9169  5b                   pop ebx
// 008c916a  5e                   pop esi
// 008c916b  c20c00               ret 0xc
// 008c916e  85db                 test ebx, ebx
// 008c9170  740d                 je 0x8c917f
// 008c9172  8bce                 mov ecx, esi
// 008c9174  e847fcffff           call 0x8c8dc0
// 008c9179  5f                   pop edi
// 008c917a  5b                   pop ebx
// 008c917b  5e                   pop esi
// 008c917c  c20c00               ret 0xc
// 008c917f  33c0                 xor eax, eax
// 008c9181  394660               cmp dword ptr [esi + 0x60], eax
// 008c9184  5f                   pop edi
// 008c9185  0f94c0               sete al
// 008c9188  5b                   pop ebx
// 008c9189  894660               mov dword ptr [esi + 0x60], eax
// 008c918c  5e                   pop esi
// 008c918d  c20c00               ret 0xc
// 008c9190  6a01                 push 1
// 008c9192  8bce                 mov ecx, esi
// 008c9194  e8a7edffff           call 0x8c7f40
// 008c9199  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c919c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 008c919f  7509                 jne 0x8c91aa
// 008c91a1  40                   inc eax
// 008c91a2  894658               mov dword ptr [esi + 0x58], eax
// 008c91a5  e918010000           jmp 0x8c92c2
// 008c91aa  85db                 test ebx, ebx
// 008c91ac  0f8410010000         je 0x8c92c2
// 008c91b2  8bce                 mov ecx, esi
// 008c91b4  e817f0ffff           call 0x8c81d0
// 008c91b9  e904010000           jmp 0x8c92c2
// 008c91be  6a01                 push 1
// 008c91c0  8bce                 mov ecx, esi
// 008c91c2  e879edffff           call 0x8c7f40
// 008c91c7  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c91ca  51                   push ecx
// 008c91cb  8bce                 mov ecx, esi
// 008c91cd  e87ed8ffff           call 0x8c6a50
// 008c91d2  85c0                 test eax, eax
// 008c91d4  0f84fe000000         je 0x8c92d8
// 008c91da  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c91dd  52                   push edx
// 008c91de  8bce                 mov ecx, esi
// 008c91e0  e8dbe5ffff           call 0x8c77c0
// 008c91e5  85c0                 test eax, eax
// 008c91e7  0f84eb000000         je 0x8c92d8
// 008c91ed  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c91f0  8b06                 mov eax, dword ptr [esi]
// 008c91f2  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 008c91f8  51                   push ecx
// 008c91f9  8d542414             lea edx, [esp + 0x14]
// 008c91fd  52                   push edx
// 008c91fe  8bce                 mov ecx, esi
// 008c9200  c644241820           mov byte ptr [esp + 0x18], 0x20
// 008c9205  ffd0                 call eax
// 008c9207  85c0                 test eax, eax
// 008c9209  7507                 jne 0x8c9212
// 008c920b  8a4e6c               mov cl, byte ptr [esi + 0x6c]
// 008c920e  884c2410             mov byte ptr [esp + 0x10], cl
// 008c9212  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c9216  52                   push edx
// 008c9217  8bce                 mov ecx, esi
// 008c9219  e8f2f2ffff           call 0x8c8510
// 008c921e  6a01                 push 1
// 008c9220  8bce                 mov ecx, esi
// 008c9222  e8d9e5ffff           call 0x8c7800
// 008c9227  5f                   pop edi
// 008c9228  5b                   pop ebx
// 008c9229  5e                   pop esi
// 008c922a  c20c00               ret 0xc
// 008c922d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c9230  85c0                 test eax, eax
// 008c9232  7429                 je 0x8c925d
// 008c9234  8d4e58               lea ecx, [esi + 0x58]
// 008c9237  51                   push ecx
// 008c9238  8d5654               lea edx, [esi + 0x54]
// 008c923b  52                   push edx
// 008c923c  68b0000000           push 0xb0
// 008c9241  50                   push eax
// 008c9242  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c9248  8d8680000000         lea eax, [esi + 0x80]
// 008c924e  50                   push eax
// 008c924f  8bce                 mov ecx, esi
// 008c9251  e8f2abf2ff           call 0x7f3e48
// 008c9256  8bce                 mov ecx, esi
// 008c9258  e823d8ffff           call 0x8c6a80
// 008c925d  837e5400             cmp dword ptr [esi + 0x54], 0
// 008c9261  8d7e54               lea edi, [esi + 0x54]
// 008c9264  7e72                 jle 0x8c92d8
// 008c9266  8b1f                 mov ebx, dword ptr [edi]
// 008c9268  8d8e84000000         lea ecx, [esi + 0x84]
// 008c926e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c9274  3bd8                 cmp ebx, eax
// 008c9276  7f60                 jg 0x8c92d8
// 008c9278  3b5e58               cmp ebx, dword ptr [esi + 0x58]
// 008c927b  7545                 jne 0x8c92c2
// 008c927d  6a00                 push 0
// 008c927f  4b                   dec ebx
// 008c9280  57                   push edi
// 008c9281  8bce                 mov ecx, esi
// 008c9283  891f                 mov dword ptr [edi], ebx
// 008c9285  e876ebffff           call 0x8c7e00
// 008c928a  837e6000             cmp dword ptr [esi + 0x60], 0
// 008c928e  7432                 je 0x8c92c2
// 008c9290  8b0f                 mov ecx, dword ptr [edi]
// 008c9292  51                   push ecx
// 008c9293  8bce                 mov ecx, esi
// 008c9295  e8b6d7ffff           call 0x8c6a50
// 008c929a  85c0                 test eax, eax
// 008c929c  7424                 je 0x8c92c2
// 008c929e  8b17                 mov edx, dword ptr [edi]
// 008c92a0  52                   push edx
// 008c92a1  8d4e74               lea ecx, [esi + 0x74]
// 008c92a4  ff1510d59800         call dword ptr [0x98d510]
// 008c92aa  8b0f                 mov ecx, dword ptr [edi]
// 008c92ac  0fb6c0               movzx eax, al
// 008c92af  50                   push eax
// 008c92b0  51                   push ecx
// 008c92b1  8d8e80000000         lea ecx, [esi + 0x80]
// 008c92b7  ff1540dc9800         call dword ptr [0x98dc40]
// 008c92bd  8b17                 mov edx, dword ptr [edi]
// 008c92bf  895658               mov dword ptr [esi + 0x58], edx
// 008c92c2  8bce                 mov ecx, esi
// 008c92c4  e857f1ffff           call 0x8c8420
// 008c92c9  6a01                 push 1
// 008c92cb  8bce                 mov ecx, esi
// 008c92cd  e82ee5ffff           call 0x8c7800
// 008c92d2  5f                   pop edi
// 008c92d3  5b                   pop ebx
// 008c92d4  5e                   pop esi
// 008c92d5  c20c00               ret 0xc
// 008c92d8  8b06                 mov eax, dword ptr [esi]
// 008c92da  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008c92e0  8bce                 mov ecx, esi
// 008c92e2  ffd2                 call edx
// 008c92e4  5f                   pop edi
// 008c92e5  5b                   pop ebx
// 008c92e6  5e                   pop esi
// 008c92e7  c20c00               ret 0xc
// 008c92ea  8bce                 mov ecx, esi
// 008c92ec  e83fabf2ff           call 0x7f3e30
// 008c92f1  5f                   pop edi
// 008c92f2  5b                   pop ebx
// 008c92f3  5e                   pop esi
// 008c92f4  c20c00               ret 0xc
// 008c92f7  90                   nop 
// 008c92f8  2d928c00be           sub eax, 0xbe008c92
// 008c92fd  91                   xchg ecx, eax
// 008c92fe  8c00                 mov word ptr [eax], es
// 008c9300  e790                 out 0x90, eax
// 008c9302  8c00                 mov word ptr [eax], es
// 008c9304  7190                 jno 0x8c9296
// 008c9306  8c00                 mov word ptr [eax], es
// 008c9308  5d                   pop ebp
// 008c9309  91                   xchg ecx, eax
// 008c930a  8c00                 mov word ptr [eax], es
// 008c930c  90                   nop 
// 008c930d  91                   xchg ecx, eax
// 008c930e  8c00                 mov word ptr [eax], es
// 008c9310  ea928c00000606       ljmp 0x606:0x8c92
// 008c9317  06                   push es
// 008c9318  06                   push es
// 008c9319  06                   push es
// 008c931a  06                   push es
// 008c931b  06                   push es
// 008c931c  06                   push es
// 008c931d  06                   push es
// 008c931e  06                   push es
// 008c931f  06                   push es
// 008c9320  06                   push es
// 008c9321  06                   push es
// 008c9322  06                   push es
// 008c9323  06                   push es
// 008c9324  06                   push es
// 008c9325  06                   push es
// 008c9326  06                   push es
// 008c9327  06                   push es
// 008c9328  06                   push es
// 008c9329  06                   push es
// 008c932a  06                   push es
// 008c932b  06                   push es
// 008c932c  0106                 add dword ptr [esi], eax
// 008c932e  06                   push es
// 008c932f  0203                 add al, byte ptr [ebx]
// 008c9331  0303                 add eax, dword ptr [ebx]
// 008c9333  0202                 add al, byte ptr [edx]
// 008c9335  06                   push es
// 008c9336  06                   push es
// 008c9337  06                   push es
// 008c9338  06                   push es
// 008c9339  0405                 add al, 5
// copied from an identical function in another client (function ?OnKeyDown@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp