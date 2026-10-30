// from server: 100% by auto
// roc 2012-06 00404020  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404020
//
// 00404020  8b442404             mov eax, dword ptr [esp + 4]
// 00404024  83f850               cmp eax, 0x50
// 00404027  7713                 ja 0x40403c
// 00404029  0fb68854404000       movzx ecx, byte ptr [eax + 0x404054]
// 00404030  ff248d44404000       jmp dword ptr [ecx*4 + 0x404044]
// 00404037  e98ae35700           jmp 0x9823c6
// 0040403c  e97fe35700           jmp 0x9823c0
// 00404041  c3                   ret 
// 00404042  8bff                 mov edi, edi
// 00404044  41                   inc ecx
// 00404045  40                   inc eax
// 00404046  40                   inc eax
// 00404047  0037                 add byte ptr [edi], dh
// 00404049  40                   inc eax
// 0040404a  40                   inc eax
// 0040404b  003c40               add byte ptr [eax + eax*2], bh
// 0040404e  40                   inc eax
// 0040404f  003c40               add byte ptr [eax + eax*2], bh
// 00404052  40                   inc eax
// 00404053  0000                 add byte ptr [eax], al
// 00404055  0303                 add eax, dword ptr [ebx]
// 00404057  0303                 add eax, dword ptr [ebx]
// 00404059  0303                 add eax, dword ptr [ebx]
// 0040405b  0303                 add eax, dword ptr [ebx]
// 0040405d  0303                 add eax, dword ptr [ebx]
// 0040405f  0301                 add eax, dword ptr [ecx]
// 00404061  0303                 add eax, dword ptr [ebx]
// 00404063  0303                 add eax, dword ptr [ebx]
// 00404065  0303                 add eax, dword ptr [ebx]
// 00404067  0303                 add eax, dword ptr [ebx]
// 00404069  0302                 add eax, dword ptr [edx]
// 0040406b  0303                 add eax, dword ptr [ebx]
// 0040406d  0303                 add eax, dword ptr [ebx]
// 0040406f  0303                 add eax, dword ptr [ebx]
// 00404071  0303                 add eax, dword ptr [ebx]
// 00404073  0303                 add eax, dword ptr [ebx]
// 00404075  0302                 add eax, dword ptr [edx]
// 00404077  0303                 add eax, dword ptr [ebx]
// 00404079  0303                 add eax, dword ptr [ebx]
// 0040407b  0303                 add eax, dword ptr [ebx]
// 0040407d  0303                 add eax, dword ptr [ebx]
// 0040407f  0303                 add eax, dword ptr [ebx]
// 00404081  0303                 add eax, dword ptr [ebx]
// 00404083  0303                 add eax, dword ptr [ebx]
// 00404085  0303                 add eax, dword ptr [ebx]
// 00404087  0303                 add eax, dword ptr [ebx]
// 00404089  0303                 add eax, dword ptr [ebx]
// 0040408b  0303                 add eax, dword ptr [ebx]
// 0040408d  0303                 add eax, dword ptr [ebx]
// 0040408f  0303                 add eax, dword ptr [ebx]
// 00404091  0303                 add eax, dword ptr [ebx]
// 00404093  0303                 add eax, dword ptr [ebx]
// 00404095  0303                 add eax, dword ptr [ebx]
// 00404097  0303                 add eax, dword ptr [ebx]
// 00404099  0303                 add eax, dword ptr [ebx]
// 0040409b  0303                 add eax, dword ptr [ebx]
// 0040409d  0303                 add eax, dword ptr [ebx]
// 0040409f  0303                 add eax, dword ptr [ebx]
// 004040a1  0303                 add eax, dword ptr [ebx]
// 004040a3  0300                 add eax, dword ptr [eax]
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?AfxCrtErrorCheck@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
