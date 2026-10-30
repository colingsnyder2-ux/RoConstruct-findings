// roc 2009-06 00816290  unit: CXTPRibbonSystemPopupBar  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816290
//
// 00816290  6aff                 push -1
// 00816292  6842278800           push 0x882742
// 00816297  64a100000000         mov eax, dword ptr fs:[0]
// 0081629d  50                   push eax
// 0081629e  83ec44               sub esp, 0x44
// 008162a1  53                   push ebx
// 008162a2  55                   push ebp
// 008162a3  56                   push esi
// 008162a4  57                   push edi
// 008162a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008162aa  33c4                 xor eax, esp
// 008162ac  50                   push eax
// 008162ad  8d442458             lea eax, [esp + 0x58]
// 008162b1  64a300000000         mov dword ptr fs:[0], eax
// 008162b7  8bf1                 mov esi, ecx
// 008162b9  56                   push esi
// 008162ba  8d4c243c             lea ecx, [esp + 0x3c]
// 008162be  e80da2f5ff           call 0x7704d0
// 008162c3  8bce                 mov ecx, esi
// 008162c5  e88671f1ff           call 0x72d450
// 008162ca  8be8                 mov ebp, eax
// 008162cc  68a0ea9000           push 0x90eaa0
// 008162d1  8bcd                 mov ecx, ebp
// 008162d3  e8e8daf8ff           call 0x7a3dc0
// 008162d8  8bf8                 mov edi, eax
// 008162da  85ff                 test edi, edi
// 008162dc  0f84dd010000         je 0x8164bf
// 008162e2  6a01                 push 1
// 008162e4  6a00                 push 0
// 008162e6  8d442450             lea eax, [esp + 0x50]
// 008162ea  50                   push eax
// 008162eb  8bcf                 mov ecx, edi
// 008162ed  e8cefafeff           call 0x805dc0
// 008162f2  8b10                 mov edx, dword ptr [eax]
// 008162f4  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008162f8  6aff                 push -1
// 008162fa  8d8e00020000         lea ecx, [esi + 0x200]
// 00816300  51                   push ecx
// 00816301  83ec10               sub esp, 0x10
// 00816304  8bcc                 mov ecx, esp
// 00816306  8911                 mov dword ptr [ecx], edx
// 00816308  8b5004               mov edx, dword ptr [eax + 4]
// 0081630b  895104               mov dword ptr [ecx + 4], edx
// 0081630e  8b5008               mov edx, dword ptr [eax + 8]
// 00816311  8b400c               mov eax, dword ptr [eax + 0xc]
// 00816314  895108               mov dword ptr [ecx + 8], edx
// 00816317  89410c               mov dword ptr [ecx + 0xc], eax
// 0081631a  8d4c2450             lea ecx, [esp + 0x50]
// 0081631e  51                   push ecx
// 0081631f  53                   push ebx
// 00816320  8bcf                 mov ecx, edi
// 00816322  e8d9fffeff           call 0x806300
// 00816327  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0081632d  52                   push edx
// 0081632e  e83dfaffff           call 0x815d70
// 00816333  50                   push eax
// 00816334  e88d2cf0ff           call 0x718fc6
// 00816339  83c408               add esp, 8
// 0081633c  85c0                 test eax, eax
// 0081633e  0f847b010000         je 0x8164bf
// 00816344  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0081634a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00816350  50                   push eax
// 00816351  e8da13faff           call 0x7b7730
// 00816356  50                   push eax
// 00816357  e86a2cf0ff           call 0x718fc6
// 0081635c  8bf8                 mov edi, eax
// 0081635e  83c408               add esp, 8
// 00816361  85ff                 test edi, edi
// 00816363  0f8456010000         je 0x8164bf
// 00816369  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0081636f  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00816375  894c2418             mov dword ptr [esp + 0x18], ecx
// 00816379  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0081637f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00816383  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00816389  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081638d  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00816393  89542424             mov dword ptr [esp + 0x24], edx
// 00816397  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0081639d  8d4c2418             lea ecx, [esp + 0x18]
// 008163a1  51                   push ecx
// 008163a2  8bc8                 mov ecx, eax
// 008163a4  e8292cf0ff           call 0x718fd2
// 008163a9  8d542418             lea edx, [esp + 0x18]
// 008163ad  52                   push edx
// 008163ae  8bce                 mov ecx, esi
// 008163b0  e8ef35f0ff           call 0x7199a4
// 008163b5  8bcf                 mov ecx, edi
// 008163b7  e84419faff           call 0x7b7d00
// 008163bc  85c0                 test eax, eax
// 008163be  744e                 je 0x81640e
// 008163c0  8d442438             lea eax, [esp + 0x38]
// 008163c4  50                   push eax
// 008163c5  8d4c241c             lea ecx, [esp + 0x1c]
// 008163c9  51                   push ecx
// 008163ca  8d542450             lea edx, [esp + 0x50]
// 008163ce  52                   push edx
// 008163cf  ff15f0ee8900         call dword ptr [0x89eef0]
// 008163d5  85c0                 test eax, eax
// 008163d7  7435                 je 0x81640e
// 008163d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008163dd  8b5500               mov edx, dword ptr [ebp]
// 008163e0  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008163e6  83ec10               sub esp, 0x10
// 008163e9  8bc4                 mov eax, esp
// 008163eb  8908                 mov dword ptr [eax], ecx
// 008163ed  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008163f1  894804               mov dword ptr [eax + 4], ecx
// 008163f4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008163f8  894808               mov dword ptr [eax + 8], ecx
// 008163fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008163ff  89480c               mov dword ptr [eax + 0xc], ecx
// 00816402  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00816408  50                   push eax
// 00816409  53                   push ebx
// 0081640a  8bcd                 mov ecx, ebp
// 0081640c  ffd2                 call edx
// 0081640e  8bce                 mov ecx, esi
// 00816410  33ff                 xor edi, edi
// 00816412  e8f97cf1ff           call 0x72e110
// 00816417  85c0                 test eax, eax
// 00816419  0f8ea0000000         jle 0x8164bf
// 0081641f  90                   nop 
// 00816420  57                   push edi
// 00816421  8bce                 mov ecx, esi
// 00816423  e8f87cf1ff           call 0x72e120
// 00816428  85c0                 test eax, eax
// 0081642a  7409                 je 0x816435
// 0081642c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00816433  750e                 jne 0x816443
// 00816435  8bce                 mov ecx, esi
// 00816437  47                   inc edi
// 00816438  e8d37cf1ff           call 0x72e110
// 0081643d  3bf8                 cmp edi, eax
// 0081643f  7cdf                 jl 0x816420
// 00816441  eb7c                 jmp 0x8164bf
// 00816443  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 00816449  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0081644f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00816453  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00816459  51                   push ecx
// 0081645a  89542430             mov dword ptr [esp + 0x30], edx
// 0081645e  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 00816464  894c2434             mov dword ptr [esp + 0x34], ecx
// 00816468  8bcc                 mov ecx, esp
// 0081646a  8964246c             mov dword ptr [esp + 0x6c], esp
// 0081646e  6884ea9000           push 0x90ea84
// 00816473  8954243c             mov dword ptr [esp + 0x3c], edx
// 00816477  ff1508fd8900         call dword ptr [0x89fd08]
// 0081647d  51                   push ecx
// 0081647e  8bcc                 mov ecx, esp
// 00816480  8964241c             mov dword ptr [esp + 0x1c], esp
// 00816484  6820039000           push 0x900320
// 00816489  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00816491  ff1508fd8900         call dword ptr [0x89fd08]
// 00816497  8bcd                 mov ecx, ebp
// 00816499  c644246801           mov byte ptr [esp + 0x68], 1
// 0081649e  e80dd9f8ff           call 0x7a3db0
// 008164a3  8bc8                 mov ecx, eax
// 008164a5  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008164ad  e84e01ffff           call 0x806600
// 008164b2  50                   push eax
// 008164b3  8d44242c             lea eax, [esp + 0x2c]
// 008164b7  50                   push eax
// 008164b8  8bcb                 mov ecx, ebx
// 008164ba  e81133f0ff           call 0x7197d0
// 008164bf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008164c3  64890d00000000       mov dword ptr fs:[0], ecx
// 008164ca  59                   pop ecx
// 008164cb  5f                   pop edi
// 008164cc  5e                   pop esi
// 008164cd  5d                   pop ebp
// 008164ce  5b                   pop ebx
// 008164cf  83c450               add esp, 0x50
// 008164d2  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonSystemPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp