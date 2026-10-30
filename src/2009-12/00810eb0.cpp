// roc 2009-12 00810eb0  unit: CXTPImageManager  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810eb0
//
// 00810eb0  56                   push esi
// 00810eb1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00810eb5  85f6                 test esi, esi
// 00810eb7  7507                 jne 0x810ec0
// 00810eb9  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00810ebc  89742418             mov dword ptr [esp + 0x18], esi
// 00810ec0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00810ec4  85c0                 test eax, eax
// 00810ec6  750f                 jne 0x810ed7
// 00810ec8  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00810ecb  0fafc6               imul eax, esi
// 00810ece  33d2                 xor edx, edx
// 00810ed0  f77128               div dword ptr [ecx + 0x28]
// 00810ed3  8944241c             mov dword ptr [esp + 0x1c], eax
// 00810ed7  8b9154010000         mov edx, dword ptr [ecx + 0x154]
// 00810edd  85d2                 test edx, edx
// 00810edf  741d                 je 0x810efe
// 00810ee1  50                   push eax
// 00810ee2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00810ee6  56                   push esi
// 00810ee7  51                   push ecx
// 00810ee8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00810eec  50                   push eax
// 00810eed  8b442418             mov eax, dword ptr [esp + 0x18]
// 00810ef1  51                   push ecx
// 00810ef2  50                   push eax
// 00810ef3  8bca                 mov ecx, edx
// 00810ef5  e87694ffff           call 0x80a370
// 00810efa  5e                   pop esi
// 00810efb  c21800               ret 0x18
// 00810efe  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00810f01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00810f05  51                   push ecx
// 00810f06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00810f0a  50                   push eax
// 00810f0b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00810f0f  56                   push esi
// 00810f10  52                   push edx
// 00810f11  50                   push eax
// 00810f12  51                   push ecx
// 00810f13  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00810f17  e824feffff           call 0x810d40
// 00810f1c  5e                   pop esi
// 00810f1d  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPImageManagerIcon@@QAEXPAVCDC@@VCPoint@@AAVCXTPImageManagerIconHandle@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp