// roc 2009-12 0060aca0  unit: seg_00600000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060aca0
//
// 0060aca0  56                   push esi
// 0060aca1  8b742408             mov esi, dword ptr [esp + 8]
// 0060aca5  8b4614               mov eax, dword ptr [esi + 0x14]
// 0060aca8  83f865               cmp eax, 0x65
// 0060acab  7421                 je 0x60acce
// 0060acad  83f866               cmp eax, 0x66
// 0060acb0  741c                 je 0x60acce
// 0060acb2  83f867               cmp eax, 0x67
// 0060acb5  7444                 je 0x60acfb
// 0060acb7  8b06                 mov eax, dword ptr [esi]
// 0060acb9  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060acc0  8b0e                 mov ecx, dword ptr [esi]
// 0060acc2  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060acc5  895118               mov dword ptr [ecx + 0x18], edx
// 0060acc8  8b06                 mov eax, dword ptr [esi]
// 0060acca  8b08                 mov ecx, dword ptr [eax]
// 0060accc  eb27                 jmp 0x60acf5
// 0060acce  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 0060acd4  3b5620               cmp edx, dword ptr [esi + 0x20]
// 0060acd7  7313                 jae 0x60acec
// 0060acd9  8b06                 mov eax, dword ptr [esi]
// 0060acdb  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 0060ace2  8b0e                 mov ecx, dword ptr [esi]
// 0060ace4  8b11                 mov edx, dword ptr [ecx]
// 0060ace6  56                   push esi
// 0060ace7  ffd2                 call edx
// 0060ace9  83c404               add esp, 4
// 0060acec  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0060acf2  8b4808               mov ecx, dword ptr [eax + 8]
// 0060acf5  56                   push esi
// 0060acf6  ffd1                 call ecx
// 0060acf8  83c404               add esp, 4
// 0060acfb  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0060ad01  80780d00             cmp byte ptr [eax + 0xd], 0
// 0060ad05  0f8586000000         jne 0x60ad91
// 0060ad0b  53                   push ebx
// 0060ad0c  57                   push edi
// 0060ad0d  bb18000000           mov ebx, 0x18
// 0060ad12  8b10                 mov edx, dword ptr [eax]
// 0060ad14  56                   push esi
// 0060ad15  ffd2                 call edx
// 0060ad17  33ff                 xor edi, edi
// 0060ad19  83c404               add esp, 4
// 0060ad1c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 0060ad22  7650                 jbe 0x60ad74
// 0060ad24  837e0800             cmp dword ptr [esi + 8], 0
// 0060ad28  741d                 je 0x60ad47
// 0060ad2a  8b4608               mov eax, dword ptr [esi + 8]
// 0060ad2d  897804               mov dword ptr [eax + 4], edi
// 0060ad30  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060ad33  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 0060ad39  895108               mov dword ptr [ecx + 8], edx
// 0060ad3c  8b4608               mov eax, dword ptr [esi + 8]
// 0060ad3f  8b08                 mov ecx, dword ptr [eax]
// 0060ad41  56                   push esi
// 0060ad42  ffd1                 call ecx
// 0060ad44  83c404               add esp, 4
// 0060ad47  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0060ad4d  8b4204               mov eax, dword ptr [edx + 4]
// 0060ad50  6a00                 push 0
// 0060ad52  56                   push esi
// 0060ad53  ffd0                 call eax
// 0060ad55  83c408               add esp, 8
// 0060ad58  84c0                 test al, al
// 0060ad5a  750f                 jne 0x60ad6b
// 0060ad5c  8b0e                 mov ecx, dword ptr [esi]
// 0060ad5e  895914               mov dword ptr [ecx + 0x14], ebx
// 0060ad61  8b16                 mov edx, dword ptr [esi]
// 0060ad63  8b02                 mov eax, dword ptr [edx]
// 0060ad65  56                   push esi
// 0060ad66  ffd0                 call eax
// 0060ad68  83c404               add esp, 4
// 0060ad6b  47                   inc edi
// 0060ad6c  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 0060ad72  72b0                 jb 0x60ad24
// 0060ad74  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0060ad7a  8b5108               mov edx, dword ptr [ecx + 8]
// 0060ad7d  56                   push esi
// 0060ad7e  ffd2                 call edx
// 0060ad80  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0060ad86  83c404               add esp, 4
// 0060ad89  80780d00             cmp byte ptr [eax + 0xd], 0
// 0060ad8d  7483                 je 0x60ad12
// 0060ad8f  5f                   pop edi
// 0060ad90  5b                   pop ebx
// 0060ad91  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0060ad97  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0060ad9a  56                   push esi
// 0060ad9b  ffd1                 call ecx
// 0060ad9d  8b5618               mov edx, dword ptr [esi + 0x18]
// 0060ada0  8b4210               mov eax, dword ptr [edx + 0x10]
// 0060ada3  56                   push esi
// 0060ada4  ffd0                 call eax
// 0060ada6  56                   push esi
// 0060ada7  e84460ffff           call 0x600df0
// 0060adac  83c40c               add esp, 0xc
// 0060adaf  5e                   pop esi
// 0060adb0  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
