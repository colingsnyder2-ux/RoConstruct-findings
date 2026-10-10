// roc 2008-06 006ff750  unit: CXTPPropExchangeXMLNode  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ff750
//
// 006ff750  83ec20               sub esp, 0x20
// 006ff753  56                   push esi
// 006ff754  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006ff758  33c0                 xor eax, eax
// 006ff75a  57                   push edi
// 006ff75b  8b3d10268000         mov edi, dword ptr [0x802610]
// 006ff761  89442418             mov dword ptr [esp + 0x18], eax
// 006ff765  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ff769  89442420             mov dword ptr [esp + 0x20], eax
// 006ff76d  89442424             mov dword ptr [esp + 0x24], eax
// 006ff771  8d442424             lea eax, [esp + 0x24]
// 006ff775  50                   push eax
// 006ff776  8d4c2426             lea ecx, [esp + 0x26]
// 006ff77a  51                   push ecx
// 006ff77b  8d542428             lea edx, [esp + 0x28]
// 006ff77f  52                   push edx
// 006ff780  8d442426             lea eax, [esp + 0x26]
// 006ff784  50                   push eax
// 006ff785  8d4c242e             lea ecx, [esp + 0x2e]
// 006ff789  51                   push ecx
// 006ff78a  8d54242c             lea edx, [esp + 0x2c]
// 006ff78e  52                   push edx
// 006ff78f  68acb08500           push 0x85b0ac
// 006ff794  56                   push esi
// 006ff795  ffd7                 call edi
// 006ff797  83c420               add esp, 0x20
// 006ff79a  83f803               cmp eax, 3
// 006ff79d  0f848d000000         je 0x6ff830
// 006ff7a3  83f805               cmp eax, 5
// 006ff7a6  0f8484000000         je 0x6ff830
// 006ff7ac  83f806               cmp eax, 6
// 006ff7af  747f                 je 0x6ff830
// 006ff7b1  33c0                 xor eax, eax
// 006ff7b3  89442418             mov dword ptr [esp + 0x18], eax
// 006ff7b7  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ff7bb  89442420             mov dword ptr [esp + 0x20], eax
// 006ff7bf  89442424             mov dword ptr [esp + 0x24], eax
// 006ff7c3  8d442424             lea eax, [esp + 0x24]
// 006ff7c7  50                   push eax
// 006ff7c8  8d4c2426             lea ecx, [esp + 0x26]
// 006ff7cc  51                   push ecx
// 006ff7cd  8d542428             lea edx, [esp + 0x28]
// 006ff7d1  52                   push edx
// 006ff7d2  68a0b08500           push 0x85b0a0
// 006ff7d7  56                   push esi
// 006ff7d8  ffd7                 call edi
// 006ff7da  83c414               add esp, 0x14
// 006ff7dd  83f802               cmp eax, 2
// 006ff7e0  7405                 je 0x6ff7e7
// 006ff7e2  83f803               cmp eax, 3
// 006ff7e5  7572                 jne 0x6ff859
// 006ff7e7  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 006ff7ec  0fb7542422           movzx edx, word ptr [esp + 0x22]
// 006ff7f1  8bc8                 mov ecx, eax
// 006ff7f3  c1e104               shl ecx, 4
// 006ff7f6  2bc8                 sub ecx, eax
// 006ff7f8  8d048a               lea eax, [edx + ecx*4]
// 006ff7fb  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 006ff800  8bc8                 mov ecx, eax
// 006ff802  c1e104               shl ecx, 4
// 006ff805  2bc8                 sub ecx, eax
// 006ff807  8d048a               lea eax, [edx + ecx*4]
// 006ff80a  89442408             mov dword ptr [esp + 8], eax
// 006ff80e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ff812  5f                   pop edi
// 006ff813  db442404             fild dword ptr [esp + 4]
// 006ff817  c7400800000000       mov dword ptr [eax + 8], 0
// 006ff81e  5e                   pop esi
// 006ff81f  dc3598b08500         fdiv qword ptr [0x85b098]
// 006ff825  dd18                 fstp qword ptr [eax]
// 006ff827  b801000000           mov eax, 1
// 006ff82c  83c420               add esp, 0x20
// 006ff82f  c3                   ret 
// 006ff830  d9ee                 fldz 
// 006ff832  8d4c240c             lea ecx, [esp + 0xc]
// 006ff836  51                   push ecx
// 006ff837  dd5c2410             fstp qword ptr [esp + 0x10]
// 006ff83b  8d54241c             lea edx, [esp + 0x1c]
// 006ff83f  52                   push edx
// 006ff840  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006ff848  e8f321d6ff           call 0x461a40
// 006ff84d  83c408               add esp, 8
// 006ff850  f7d8                 neg eax
// 006ff852  1bc0                 sbb eax, eax
// 006ff854  83c001               add eax, 1
// 006ff857  7408                 je 0x6ff861
// 006ff859  5f                   pop edi
// 006ff85a  33c0                 xor eax, eax
// 006ff85c  5e                   pop esi
// 006ff85d  83c420               add esp, 0x20
// 006ff860  c3                   ret 
// 006ff861  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006ff865  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ff869  8911                 mov dword ptr [ecx], edx
// 006ff86b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ff86f  895104               mov dword ptr [ecx + 4], edx
// 006ff872  5f                   pop edi
// 006ff873  894108               mov dword ptr [ecx + 8], eax
// 006ff876  b801000000           mov eax, 1
// 006ff87b  5e                   pop esi
// 006ff87c  83c420               add esp, 0x20
// 006ff87f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ParseDateTimeISO8601@@YAHAAVCOleDateTime@ATL@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
