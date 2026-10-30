// from server: 100% by auto
// roc 2011-06 005697e0  unit: seg_00560000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005697e0
//
// 005697e0  56                   push esi
// 005697e1  8b742408             mov esi, dword ptr [esp + 8]
// 005697e5  57                   push edi
// 005697e6  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 005697ec  807f0800             cmp byte ptr [edi + 8], 0
// 005697f0  7433                 je 0x569825
// 005697f2  c6470800             mov byte ptr [edi + 8], 0
// 005697f6  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 005697fc  8b08                 mov ecx, dword ptr [eax]
// 005697fe  6a00                 push 0
// 00569800  56                   push esi
// 00569801  ffd1                 call ecx
// 00569803  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 00569809  8b02                 mov eax, dword ptr [edx]
// 0056980b  6a02                 push 2
// 0056980d  56                   push esi
// 0056980e  ffd0                 call eax
// 00569810  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00569816  8b11                 mov edx, dword ptr [ecx]
// 00569818  6a02                 push 2
// 0056981a  56                   push esi
// 0056981b  ffd2                 call edx
// 0056981d  83c418               add esp, 0x18
// 00569820  e9cd000000           jmp 0x5698f2
// 00569825  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00569829  7445                 je 0x569870
// 0056982b  837e7400             cmp dword ptr [esi + 0x74], 0
// 0056982f  753f                 jne 0x569870
// 00569831  807e5000             cmp byte ptr [esi + 0x50], 0
// 00569835  7415                 je 0x56984c
// 00569837  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0056983b  740f                 je 0x56984c
// 0056983d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00569840  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00569846  c6470801             mov byte ptr [edi + 8], 1
// 0056984a  eb24                 jmp 0x569870
// 0056984c  807e5800             cmp byte ptr [esi + 0x58], 0
// 00569850  740b                 je 0x56985d
// 00569852  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00569855  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0056985b  eb13                 jmp 0x569870
// 0056985d  8b16                 mov edx, dword ptr [esi]
// 0056985f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00569866  8b06                 mov eax, dword ptr [esi]
// 00569868  8b08                 mov ecx, dword ptr [eax]
// 0056986a  56                   push esi
// 0056986b  ffd1                 call ecx
// 0056986d  83c404               add esp, 4
// 00569870  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00569876  8b02                 mov eax, dword ptr [edx]
// 00569878  56                   push esi
// 00569879  ffd0                 call eax
// 0056987b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00569881  8b5108               mov edx, dword ptr [ecx + 8]
// 00569884  56                   push esi
// 00569885  ffd2                 call edx
// 00569887  83c408               add esp, 8
// 0056988a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0056988e  7562                 jne 0x5698f2
// 00569890  807f1000             cmp byte ptr [edi + 0x10], 0
// 00569894  750e                 jne 0x5698a4
// 00569896  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0056989c  8b08                 mov ecx, dword ptr [eax]
// 0056989e  56                   push esi
// 0056989f  ffd1                 call ecx
// 005698a1  83c404               add esp, 4
// 005698a4  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 005698aa  8b02                 mov eax, dword ptr [edx]
// 005698ac  56                   push esi
// 005698ad  ffd0                 call eax
// 005698af  83c404               add esp, 4
// 005698b2  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005698b6  7413                 je 0x5698cb
// 005698b8  0fb65708             movzx edx, byte ptr [edi + 8]
// 005698bc  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005698c2  8b01                 mov eax, dword ptr [ecx]
// 005698c4  52                   push edx
// 005698c5  56                   push esi
// 005698c6  ffd0                 call eax
// 005698c8  83c408               add esp, 8
// 005698cb  0fb65708             movzx edx, byte ptr [edi + 8]
// 005698cf  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 005698d5  8b01                 mov eax, dword ptr [ecx]
// 005698d7  f7da                 neg edx
// 005698d9  1bd2                 sbb edx, edx
// 005698db  83e203               and edx, 3
// 005698de  52                   push edx
// 005698df  56                   push esi
// 005698e0  ffd0                 call eax
// 005698e2  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 005698e8  8b11                 mov edx, dword ptr [ecx]
// 005698ea  6a00                 push 0
// 005698ec  56                   push esi
// 005698ed  ffd2                 call edx
// 005698ef  83c410               add esp, 0x10
// 005698f2  8b4608               mov eax, dword ptr [esi + 8]
// 005698f5  85c0                 test eax, eax
// 005698f7  7439                 je 0x569932
// 005698f9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005698fc  33d2                 xor edx, edx
// 005698fe  89480c               mov dword ptr [eax + 0xc], ecx
// 00569901  385708               cmp byte ptr [edi + 8], dl
// 00569904  8b4608               mov eax, dword ptr [esi + 8]
// 00569907  0f95c2               setne dl
// 0056990a  42                   inc edx
// 0056990b  03570c               add edx, dword ptr [edi + 0xc]
// 0056990e  895010               mov dword ptr [eax + 0x10], edx
// 00569911  807e4000             cmp byte ptr [esi + 0x40], 0
// 00569915  741b                 je 0x569932
// 00569917  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0056991d  80791100             cmp byte ptr [ecx + 0x11], 0
// 00569921  750f                 jne 0x569932
// 00569923  8b4608               mov eax, dword ptr [esi + 8]
// 00569926  33d2                 xor edx, edx
// 00569928  38565a               cmp byte ptr [esi + 0x5a], dl
// 0056992b  0f95c2               setne dl
// 0056992e  42                   inc edx
// 0056992f  015010               add dword ptr [eax + 0x10], edx
// 00569932  5f                   pop edi
// 00569933  5e                   pop esi
// 00569934  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
