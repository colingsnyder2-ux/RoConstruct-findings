// roc 2009-12 0083dee0  unit: CXTPCustomizeSheet  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dee0
//
// 0083dee0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dee6  56                   push esi
// 0083dee7  57                   push edi
// 0083dee8  8b7858               mov edi, dword ptr [eax + 0x58]
// 0083deeb  57                   push edi
// 0083deec  e86fffffff           call 0x83de60
// 0083def1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0083def5  8b16                 mov edx, dword ptr [esi]
// 0083def7  6a01                 push 1
// 0083def9  8bce                 mov ecx, esi
// 0083defb  85c0                 test eax, eax
// 0083defd  7440                 je 0x83df3f
// 0083deff  8b02                 mov eax, dword ptr [edx]
// 0083df01  ffd0                 call eax
// 0083df03  8bcf                 mov ecx, edi
// 0083df05  e8867dfbff           call 0x7f5c90
// 0083df0a  85c0                 test eax, eax
// 0083df0c  741d                 je 0x83df2b
// 0083df0e  8bcf                 mov ecx, edi
// 0083df10  e87b7dfbff           call 0x7f5c90
// 0083df15  83f802               cmp eax, 2
// 0083df18  7411                 je 0x83df2b
// 0083df1a  8b16                 mov edx, dword ptr [esi]
// 0083df1c  33c0                 xor eax, eax
// 0083df1e  50                   push eax
// 0083df1f  8b4204               mov eax, dword ptr [edx + 4]
// 0083df22  8bce                 mov ecx, esi
// 0083df24  ffd0                 call eax
// 0083df26  5f                   pop edi
// 0083df27  5e                   pop esi
// 0083df28  c20400               ret 4
// 0083df2b  8b16                 mov edx, dword ptr [esi]
// 0083df2d  b801000000           mov eax, 1
// 0083df32  50                   push eax
// 0083df33  8b4204               mov eax, dword ptr [edx + 4]
// 0083df36  8bce                 mov ecx, esi
// 0083df38  ffd0                 call eax
// 0083df3a  5f                   pop edi
// 0083df3b  5e                   pop esi
// 0083df3c  c20400               ret 4
// 0083df3f  8b4204               mov eax, dword ptr [edx + 4]
// 0083df42  ffd0                 call eax
// 0083df44  8b16                 mov edx, dword ptr [esi]
// 0083df46  8b02                 mov eax, dword ptr [edx]
// 0083df48  6a00                 push 0
// 0083df4a  8bce                 mov ecx, esi
// 0083df4c  ffd0                 call eax
// 0083df4e  5f                   pop edi
// 0083df4f  5e                   pop esi
// 0083df50  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateCustomizeDefaultStyle@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp