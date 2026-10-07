// roc 2008-06 007102c0  unit: CXTPStatusBar  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007102c0
//
// 007102c0  56                   push esi
// 007102c1  8bf1                 mov esi, ecx
// 007102c3  e878f70000           call 0x71fa40
// 007102c8  8b10                 mov edx, dword ptr [eax]
// 007102ca  8bc8                 mov ecx, eax
// 007102cc  8b4218               mov eax, dword ptr [edx + 0x18]
// 007102cf  685f240000           push 0x245f
// 007102d4  ffd0                 call eax
// 007102d6  8986ac000000         mov dword ptr [esi + 0xac], eax
// 007102dc  85c0                 test eax, eax
// 007102de  7504                 jne 0x7102e4
// 007102e0  33c0                 xor eax, eax
// 007102e2  5e                   pop esi
// 007102e3  c3                   ret 
// 007102e4  e857f70000           call 0x71fa40
// 007102e9  8b10                 mov edx, dword ptr [eax]
// 007102eb  8bc8                 mov ecx, eax
// 007102ed  8b4218               mov eax, dword ptr [edx + 0x18]
// 007102f0  685c240000           push 0x245c
// 007102f5  ffd0                 call eax
// 007102f7  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 007102fd  85c0                 test eax, eax
// 007102ff  74df                 je 0x7102e0
// 00710301  e83af70000           call 0x71fa40
// 00710306  8b10                 mov edx, dword ptr [eax]
// 00710308  8bc8                 mov ecx, eax
// 0071030a  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071030d  685d240000           push 0x245d
// 00710312  ffd0                 call eax
// 00710314  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0071031a  85c0                 test eax, eax
// 0071031c  74c2                 je 0x7102e0
// 0071031e  57                   push edi
// 0071031f  e80206f9ff           call 0x6a0926
// 00710324  8b3dd02d8000         mov edi, dword ptr [0x802dd0]
// 0071032a  68897f0000           push 0x7f89
// 0071032f  6a00                 push 0
// 00710331  ffd7                 call edi
// 00710333  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00710339  85c0                 test eax, eax
// 0071033b  7519                 jne 0x710356
// 0071033d  e8fef60000           call 0x71fa40
// 00710342  8b10                 mov edx, dword ptr [eax]
// 00710344  8bc8                 mov ecx, eax
// 00710346  8b4218               mov eax, dword ptr [edx + 0x18]
// 00710349  68f5260000           push 0x26f5
// 0071034e  ffd0                 call eax
// 00710350  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00710356  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0071035d  743a                 je 0x710399
// 0071035f  e8dcf60000           call 0x71fa40
// 00710364  8b10                 mov edx, dword ptr [eax]
// 00710366  8bc8                 mov ecx, eax
// 00710368  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071036b  68f2260000           push 0x26f2
// 00710370  ffd0                 call eax
// 00710372  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00710378  85c0                 test eax, eax
// 0071037a  741d                 je 0x710399
// 0071037c  e8bff60000           call 0x71fa40
// 00710381  8b10                 mov edx, dword ptr [eax]
// 00710383  8bc8                 mov ecx, eax
// 00710385  8b4218               mov eax, dword ptr [edx + 0x18]
// 00710388  68f3260000           push 0x26f3
// 0071038d  ffd0                 call eax
// 0071038f  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00710395  85c0                 test eax, eax
// 00710397  7505                 jne 0x71039e
// 00710399  5f                   pop edi
// 0071039a  33c0                 xor eax, eax
// 0071039c  5e                   pop esi
// 0071039d  c3                   ret 
// 0071039e  e88305f9ff           call 0x6a0926
// 007103a3  68867f0000           push 0x7f86
// 007103a8  6a00                 push 0
// 007103aa  ffd7                 call edi
// 007103ac  33c9                 xor ecx, ecx
// 007103ae  85c0                 test eax, eax
// 007103b0  0f95c1               setne cl
// 007103b3  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 007103b9  5f                   pop edi
// 007103ba  5e                   pop esi
// 007103bb  8bc1                 mov eax, ecx
// 007103bd  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
