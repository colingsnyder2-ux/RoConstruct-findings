// roc 2007-03 00652060  unit: seg_00650000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00652060
//
// 00652060  8b442404             mov eax, dword ptr [esp + 4]
// 00652064  56                   push esi
// 00652065  57                   push edi
// 00652066  33ff                 xor edi, edi
// 00652068  85c0                 test eax, eax
// 0065206a  8bf1                 mov esi, ecx
// 0065206c  740f                 je 0x65207d
// 0065206e  6a01                 push 1
// 00652070  6a01                 push 1
// 00652072  50                   push eax
// 00652073  e888fcffff           call 0x651d00
// 00652078  5f                   pop edi
// 00652079  5e                   pop esi
// 0065207a  c20400               ret 4
// 0065207d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00652080  8b4020               mov eax, dword ptr [eax + 0x20]
// 00652083  6a00                 push 0
// 00652085  6a09                 push 9
// 00652087  680a110000           push 0x110a
// 0065208c  50                   push eax
// 0065208d  ff1550ee7700         call dword ptr [0x77ee50]
// 00652093  85c0                 test eax, eax
// 00652095  7411                 je 0x6520a8
// 00652097  6a01                 push 1
// 00652099  6a00                 push 0
// 0065209b  50                   push eax
// 0065209c  8bce                 mov ecx, esi
// 0065209e  e85dfcffff           call 0x651d00
// 006520a3  5f                   pop edi
// 006520a4  5e                   pop esi
// 006520a5  c20400               ret 4
// 006520a8  8bc7                 mov eax, edi
// 006520aa  5f                   pop edi
// 006520ab  5e                   pop esi
// 006520ac  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?FocusItem@CXTTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
