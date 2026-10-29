// roc 2010-06 00811850  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811850
//
// 00811850  83ec10               sub esp, 0x10
// 00811853  56                   push esi
// 00811854  8bf1                 mov esi, ecx
// 00811856  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0081185c  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0081185f  750d                 jne 0x81186e
// 00811861  83bef4000000ff       cmp dword ptr [esi + 0xf4], -1
// 00811868  0f8484010000         je 0x8119f2
// 0081186e  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00811874  53                   push ebx
// 00811875  55                   push ebp
// 00811876  57                   push edi
// 00811877  8bbef4000000         mov edi, dword ptr [esi + 0xf4]
// 0081187d  8d0c40               lea ecx, [eax + eax*2]
// 00811880  c786f4000000ffffffff mov dword ptr [esi + 0xf4], 0xffffffff
// 0081188a  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0081188e  40                   inc eax
// 0081188f  33db                 xor ebx, ebx
// 00811891  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 00811897  897c2410             mov dword ptr [esp + 0x10], edi
// 0081189b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081189f  898684000000         mov dword ptr [esi + 0x84], eax
// 008118a5  0f8eb6000000         jle 0x811961
// 008118ab  33c0                 xor eax, eax
// 008118ad  89442414             mov dword ptr [esp + 0x14], eax
// 008118b1  eb04                 jmp 0x8118b7
// 008118b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008118b7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008118bd  83f9ff               cmp ecx, -1
// 008118c0  7407                 je 0x8118c9
// 008118c2  3bcb                 cmp ecx, ebx
// 008118c4  7f03                 jg 0x8118c9
// 008118c6  83c010               add eax, 0x10
// 008118c9  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 008118cf  0500e90000           add eax, 0xe900
// 008118d4  03d0                 add edx, eax
// 008118d6  52                   push edx
// 008118d7  8bce                 mov ecx, esi
// 008118d9  e88c6ff9ff           call 0x7a886a
// 008118de  8be8                 mov ebp, eax
// 008118e0  896c2418             mov dword ptr [esp + 0x18], ebp
// 008118e4  85ed                 test ebp, ebp
// 008118e6  0f8403010000         je 0x8119ef
// 008118ec  6a08                 push 8
// 008118ee  8bcd                 mov ecx, ebp
// 008118f0  e89363f9ff           call 0x7a7c88
// 008118f5  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 008118fb  83ef02               sub edi, 2
// 008118fe  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00811902  7c32                 jl 0x811936
// 00811904  57                   push edi
// 00811905  53                   push ebx
// 00811906  8bce                 mov ecx, esi
// 00811908  e8bb6bf9ff           call 0x7a84c8
// 0081190d  8be8                 mov ebp, eax
// 0081190f  85ed                 test ebp, ebp
// 00811911  0f84d8000000         je 0x8119ef
// 00811917  8d4701               lea eax, [edi + 1]
// 0081191a  50                   push eax
// 0081191b  53                   push ebx
// 0081191c  8bce                 mov ecx, esi
// 0081191e  e8096bf9ff           call 0x7a842c
// 00811923  50                   push eax
// 00811924  8bcd                 mov ecx, ebp
// 00811926  e8e5bb1600           call 0x97d510
// 0081192b  4f                   dec edi
// 0081192c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00811930  7dd2                 jge 0x811904
// 00811932  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00811936  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081193a  51                   push ecx
// 0081193b  53                   push ebx
// 0081193c  8bce                 mov ecx, esi
// 0081193e  e8e96af9ff           call 0x7a842c
// 00811943  50                   push eax
// 00811944  8bcd                 mov ecx, ebp
// 00811946  e8c5bb1600           call 0x97d510
// 0081194b  8344241410           add dword ptr [esp + 0x14], 0x10
// 00811950  43                   inc ebx
// 00811951  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 00811957  0f8c56ffffff         jl 0x8118b3
// 0081195d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00811961  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00811967  83f8ff               cmp eax, -1
// 0081196a  7430                 je 0x81199c
// 0081196c  05900e0000           add eax, 0xe90
// 00811971  c1e004               shl eax, 4
// 00811974  038684000000         add eax, dword ptr [esi + 0x84]
// 0081197a  8bce                 mov ecx, esi
// 0081197c  50                   push eax
// 0081197d  e8e86ef9ff           call 0x7a886a
// 00811982  85c0                 test eax, eax
// 00811984  7416                 je 0x81199c
// 00811986  8b5658               mov edx, dword ptr [esi + 0x58]
// 00811989  81c2900e0000         add edx, 0xe90
// 0081198f  c1e204               shl edx, 4
// 00811992  03d7                 add edx, edi
// 00811994  52                   push edx
// 00811995  8bc8                 mov ecx, eax
// 00811997  e874bb1600           call 0x97d510
// 0081199c  8d4f01               lea ecx, [edi + 1]
// 0081199f  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 008119a5  7d24                 jge 0x8119cb
// 008119a7  8d1449               lea edx, [ecx + ecx*2]
// 008119aa  03d2                 add edx, edx
// 008119ac  03d2                 add edx, edx
// 008119ae  8bff                 mov edi, edi
// 008119b0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 008119b6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 008119ba  03c2                 add eax, edx
// 008119bc  41                   inc ecx
// 008119bd  895804               mov dword ptr [eax + 4], ebx
// 008119c0  83c20c               add edx, 0xc
// 008119c3  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 008119c9  7ce5                 jl 0x8119b0
// 008119cb  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 008119d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008119d5  8d0c7f               lea ecx, [edi + edi*2]
// 008119d8  5f                   pop edi
// 008119d9  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 008119dd  8b16                 mov edx, dword ptr [esi]
// 008119df  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008119e5  5d                   pop ebp
// 008119e6  5b                   pop ebx
// 008119e7  8bce                 mov ecx, esi
// 008119e9  5e                   pop esi
// 008119ea  83c410               add esp, 0x10
// 008119ed  ffe0                 jmp eax
// 008119ef  5f                   pop edi
// 008119f0  5d                   pop ebp
// 008119f1  5b                   pop ebx
// 008119f2  5e                   pop esi
// 008119f3  83c410               add esp, 0x10
// 008119f6  c3                   ret 
// copied from an identical function in another client (function ?ShowColumn@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1