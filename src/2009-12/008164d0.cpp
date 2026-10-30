// roc 2009-12 008164d0  unit: CXTPCommandBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008164d0
//
// 008164d0  51                   push ecx
// 008164d1  53                   push ebx
// 008164d2  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 008164d8  83eb01               sub ebx, 1
// 008164db  55                   push ebp
// 008164dc  56                   push esi
// 008164dd  57                   push edi
// 008164de  894c2410             mov dword ptr [esp + 0x10], ecx
// 008164e2  784c                 js 0x816530
// 008164e4  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008164e8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008164ec  eb06                 jmp 0x8164f4
// 008164ee  8bff                 mov edi, edi
// 008164f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008164f4  53                   push ebx
// 008164f5  e8e6e7ffff           call 0x814ce0
// 008164fa  8bf0                 mov esi, eax
// 008164fc  85ff                 test edi, edi
// 008164fe  7410                 je 0x816510
// 00816500  8b06                 mov eax, dword ptr [esi]
// 00816502  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00816508  8bce                 mov ecx, esi
// 0081650a  ffd2                 call edx
// 0081650c  85c0                 test eax, eax
// 0081650e  741b                 je 0x81652b
// 00816510  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00816514  8b542418             mov edx, dword ptr [esp + 0x18]
// 00816518  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081651e  55                   push ebp
// 0081651f  57                   push edi
// 00816520  50                   push eax
// 00816521  52                   push edx
// 00816522  e819ee0200           call 0x845340
// 00816527  85c0                 test eax, eax
// 00816529  7507                 jne 0x816532
// 0081652b  83eb01               sub ebx, 1
// 0081652e  79c0                 jns 0x8164f0
// 00816530  33c0                 xor eax, eax
// 00816532  5f                   pop edi
// 00816533  5e                   pop esi
// 00816534  5d                   pop ebp
// 00816535  5b                   pop ebx
// 00816536  59                   pop ecx
// 00816537  c21000               ret 0x10
// copied from an identical function in another client (function ?FindControl@CXTPCommandBars@@QBEPAVCXTPControl@@W4XTPControlType@@IHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp