// roc 2009-06 0071fb50  unit: CRobloxControlColorSelector  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071fb50
//
// 0071fb50  51                   push ecx
// 0071fb51  56                   push esi
// 0071fb52  8bf1                 mov esi, ecx
// 0071fb54  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0071fb5a  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0071fb61  7476                 je 0x71fbd9
// 0071fb63  8b16                 mov edx, dword ptr [esi]
// 0071fb65  8b5258               mov edx, dword ptr [edx + 0x58]
// 0071fb68  53                   push ebx
// 0071fb69  8d442408             lea eax, [esp + 8]
// 0071fb6d  50                   push eax
// 0071fb6e  ffd2                 call edx
// 0071fb70  8bc8                 mov ecx, eax
// 0071fb72  ff155cfb8900         call dword ptr [0x89fb5c]
// 0071fb78  8d4c2408             lea ecx, [esp + 8]
// 0071fb7c  8ad8                 mov bl, al
// 0071fb7e  ff1510fd8900         call dword ptr [0x89fd10]
// 0071fb84  84db                 test bl, bl
// 0071fb86  5b                   pop ebx
// 0071fb87  7405                 je 0x71fb8e
// 0071fb89  33c0                 xor eax, eax
// 0071fb8b  5e                   pop esi
// 0071fb8c  59                   pop ecx
// 0071fb8d  c3                   ret 
// 0071fb8e  8bce                 mov ecx, esi
// 0071fb90  e8dbfaffff           call 0x71f670
// 0071fb95  83f801               cmp eax, 1
// 0071fb98  743f                 je 0x71fbd9
// 0071fb9a  83f803               cmp eax, 3
// 0071fb9d  743a                 je 0x71fbd9
// 0071fb9f  83f804               cmp eax, 4
// 0071fba2  7435                 je 0x71fbd9
// 0071fba4  83f802               cmp eax, 2
// 0071fba7  74e0                 je 0x71fb89
// 0071fba9  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0071fbaf  48                   dec eax
// 0071fbb0  83f80a               cmp eax, 0xa
// 0071fbb3  77d4                 ja 0x71fb89
// 0071fbb5  0fb680f0fb7100       movzx eax, byte ptr [eax + 0x71fbf0]
// 0071fbbc  ff2485e4fb7100       jmp dword ptr [eax*4 + 0x71fbe4]
// 0071fbc3  8b16                 mov edx, dword ptr [esi]
// 0071fbc5  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0071fbcb  6a00                 push 0
// 0071fbcd  8bce                 mov ecx, esi
// 0071fbcf  ffd0                 call eax
// 0071fbd1  f7d8                 neg eax
// 0071fbd3  1bc0                 sbb eax, eax
// 0071fbd5  40                   inc eax
// 0071fbd6  5e                   pop esi
// 0071fbd7  59                   pop ecx
// 0071fbd8  c3                   ret 
// 0071fbd9  b801000000           mov eax, 1
// 0071fbde  5e                   pop esi
// 0071fbdf  59                   pop ecx
// 0071fbe0  c3                   ret 
// 0071fbe1  8d4900               lea ecx, [ecx]
// 0071fbe4  c3                   ret 
// 0071fbe5  fb                   sti 
// 0071fbe6  7100                 jno 0x71fbe8
// 0071fbe8  d9fb                 fsincos 
// 0071fbea  7100                 jno 0x71fbec
// 0071fbec  89fb                 mov ebx, edi
// 0071fbee  7100                 jno 0x71fbf0
// 0071fbf0  0001                 add byte ptr [ecx], al
// 0071fbf2  0000                 add byte ptr [eax], al
// 0071fbf4  0202                 add al, byte ptr [edx]
// 0071fbf6  0201                 add al, byte ptr [ecx]
// 0071fbf8  0102                 add dword ptr [edx], eax
// copied from an identical function in another client (function ?IsCaptionVisible@CXTPControl@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp