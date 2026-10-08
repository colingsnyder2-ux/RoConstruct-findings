// from server: 100% by auto
// roc 2012-06 006544d0  unit: seg_00650000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006544d0
//
// 006544d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006544d4  53                   push ebx
// 006544d5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006544d9  55                   push ebp
// 006544da  56                   push esi
// 006544db  8b742414             mov esi, dword ptr [esp + 0x14]
// 006544df  57                   push edi
// 006544e0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006544e4  8d2c07               lea ebp, [edi + eax]
// 006544e7  3b6e04               cmp ebp, dword ptr [esi + 4]
// 006544ea  770a                 ja 0x6544f6
// 006544ec  3b460c               cmp eax, dword ptr [esi + 0xc]
// 006544ef  7705                 ja 0x6544f6
// 006544f1  833e00               cmp dword ptr [esi], 0
// 006544f4  7513                 jne 0x654509
// 006544f6  8b03                 mov eax, dword ptr [ebx]
// 006544f8  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 006544ff  8b0b                 mov ecx, dword ptr [ebx]
// 00654501  8b11                 mov edx, dword ptr [ecx]
// 00654503  53                   push ebx
// 00654504  ffd2                 call edx
// 00654506  83c404               add esp, 4
// 00654509  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065450c  3bf8                 cmp edi, eax
// 0065450e  7209                 jb 0x654519
// 00654510  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00654513  03c8                 add ecx, eax
// 00654515  3be9                 cmp ebp, ecx
// 00654517  764f                 jbe 0x654568
// 00654519  807e2200             cmp byte ptr [esi + 0x22], 0
// 0065451d  7513                 jne 0x654532
// 0065451f  8b13                 mov edx, dword ptr [ebx]
// 00654521  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00654528  8b03                 mov eax, dword ptr [ebx]
// 0065452a  8b08                 mov ecx, dword ptr [eax]
// 0065452c  53                   push ebx
// 0065452d  ffd1                 call ecx
// 0065452f  83c404               add esp, 4
// 00654532  807e2100             cmp byte ptr [esi + 0x21], 0
// 00654536  740f                 je 0x654547
// 00654538  6a01                 push 1
// 0065453a  53                   push ebx
// 0065453b  e850feffff           call 0x654390
// 00654540  83c408               add esp, 8
// 00654543  c6462100             mov byte ptr [esi + 0x21], 0
// 00654547  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0065454a  7605                 jbe 0x654551
// 0065454c  897e18               mov dword ptr [esi + 0x18], edi
// 0065454f  eb0c                 jmp 0x65455d
// 00654551  8bc5                 mov eax, ebp
// 00654553  2b4610               sub eax, dword ptr [esi + 0x10]
// 00654556  7902                 jns 0x65455a
// 00654558  33c0                 xor eax, eax
// 0065455a  894618               mov dword ptr [esi + 0x18], eax
// 0065455d  6a00                 push 0
// 0065455f  53                   push ebx
// 00654560  e82bfeffff           call 0x654390
// 00654565  83c408               add esp, 8
// 00654568  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0065456b  3bfd                 cmp edi, ebp
// 0065456d  7357                 jae 0x6545c6
// 0065456f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00654573  731e                 jae 0x654593
// 00654575  807c242400           cmp byte ptr [esp + 0x24], 0
// 0065457a  7413                 je 0x65458f
// 0065457c  8b13                 mov edx, dword ptr [ebx]
// 0065457e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00654585  8b03                 mov eax, dword ptr [ebx]
// 00654587  8b08                 mov ecx, dword ptr [eax]
// 00654589  53                   push ebx
// 0065458a  ffd1                 call ecx
// 0065458c  83c404               add esp, 4
// 0065458f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00654593  8a442424             mov al, byte ptr [esp + 0x24]
// 00654597  84c0                 test al, al
// 00654599  7403                 je 0x65459e
// 0065459b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0065459e  807e2000             cmp byte ptr [esi + 0x20], 0
// 006545a2  743e                 je 0x6545e2
// 006545a4  8b4618               mov eax, dword ptr [esi + 0x18]
// 006545a7  8b5e08               mov ebx, dword ptr [esi + 8]
// 006545aa  2bf8                 sub edi, eax
// 006545ac  2be8                 sub ebp, eax
// 006545ae  3bfd                 cmp edi, ebp
// 006545b0  7314                 jae 0x6545c6
// 006545b2  8b16                 mov edx, dword ptr [esi]
// 006545b4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006545b7  53                   push ebx
// 006545b8  50                   push eax
// 006545b9  e892efffff           call 0x653550
// 006545be  47                   inc edi
// 006545bf  83c408               add esp, 8
// 006545c2  3bfd                 cmp edi, ebp
// 006545c4  72ec                 jb 0x6545b2
// 006545c6  807c242400           cmp byte ptr [esp + 0x24], 0
// 006545cb  7404                 je 0x6545d1
// 006545cd  c6462101             mov byte ptr [esi + 0x21], 1
// 006545d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006545d5  2b4618               sub eax, dword ptr [esi + 0x18]
// 006545d8  8b0e                 mov ecx, dword ptr [esi]
// 006545da  5f                   pop edi
// 006545db  5e                   pop esi
// 006545dc  5d                   pop ebp
// 006545dd  8d0481               lea eax, [ecx + eax*4]
// 006545e0  5b                   pop ebx
// 006545e1  c3                   ret 
// 006545e2  84c0                 test al, al
// 006545e4  75e7                 jne 0x6545cd
// 006545e6  8b0b                 mov ecx, dword ptr [ebx]
// 006545e8  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 006545ef  8b13                 mov edx, dword ptr [ebx]
// 006545f1  8b02                 mov eax, dword ptr [edx]
// 006545f3  53                   push ebx
// 006545f4  ffd0                 call eax
// 006545f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006545fa  2b4618               sub eax, dword ptr [esi + 0x18]
// 006545fd  8b0e                 mov ecx, dword ptr [esi]
// 006545ff  83c404               add esp, 4
// 00654602  5f                   pop edi
// 00654603  5e                   pop esi
// 00654604  5d                   pop ebp
// 00654605  8d0481               lea eax, [ecx + eax*4]
// 00654608  5b                   pop ebx
// 00654609  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
