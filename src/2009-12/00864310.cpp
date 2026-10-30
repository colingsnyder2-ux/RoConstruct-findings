// roc 2009-12 00864310  unit: CXTPToolTipContextToolTip  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864310
//
// 00864310  6aff                 push -1
// 00864312  681ced9500           push 0x95ed1c
// 00864317  64a100000000         mov eax, dword ptr fs:[0]
// 0086431d  50                   push eax
// 0086431e  51                   push ecx
// 0086431f  56                   push esi
// 00864320  57                   push edi
// 00864321  a10052b600           mov eax, dword ptr [0xb65200]
// 00864326  33c4                 xor eax, esp
// 00864328  50                   push eax
// 00864329  8d442410             lea eax, [esp + 0x10]
// 0086432d  64a300000000         mov dword ptr fs:[0], eax
// 00864333  8bf1                 mov esi, ecx
// 00864335  8974240c             mov dword ptr [esp + 0xc], esi
// 00864339  c70624e99f00         mov dword ptr [esi], 0x9fe924
// 0086433f  33ff                 xor edi, edi
// 00864341  b898019b00           mov eax, 0x9b0198
// 00864346  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 0086434c  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00864352  897c2418             mov dword ptr [esp + 0x18], edi
// 00864356  89bee8000000         mov dword ptr [esi + 0xe8], edi
// 0086435c  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00864362  89bef0000000         mov dword ptr [esi + 0xf0], edi
// 00864368  8986ec000000         mov dword ptr [esi + 0xec], eax
// 0086436e  89bef8000000         mov dword ptr [esi + 0xf8], edi
// 00864374  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 0086437a  89be00010000         mov dword ptr [esi + 0x100], edi
// 00864380  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00864386  89be08010000         mov dword ptr [esi + 0x108], edi
// 0086438c  898604010000         mov dword ptr [esi + 0x104], eax
// 00864392  89be10010000         mov dword ptr [esi + 0x110], edi
// 00864398  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0086439e  89be18010000         mov dword ptr [esi + 0x118], edi
// 008643a4  898614010000         mov dword ptr [esi + 0x114], eax
// 008643aa  89be20010000         mov dword ptr [esi + 0x120], edi
// 008643b0  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008643b6  89be28010000         mov dword ptr [esi + 0x128], edi
// 008643bc  898624010000         mov dword ptr [esi + 0x124], eax
// 008643c2  c644241809           mov byte ptr [esp + 0x18], 9
// 008643c7  c78650010000ffffffff mov dword ptr [esi + 0x150], 0xffffffff
// 008643d1  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008643d7  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 008643dd  89beac000000         mov dword ptr [esi + 0xac], edi
// 008643e3  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 008643e9  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008643ef  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 008643f5  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 008643fb  89be40010000         mov dword ptr [esi + 0x140], edi
// 00864401  89be44010000         mov dword ptr [esi + 0x144], edi
// 00864407  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 00864411  e80a73fdff           call 0x83b720
// 00864416  8bc8                 mov ecx, eax
// 00864418  e83373fdff           call 0x83b750
// 0086441d  0fb6c0               movzx eax, al
// 00864420  89862c010000         mov dword ptr [esi + 0x12c], eax
// 00864426  e8f572fdff           call 0x83b720
// 0086442b  8bc8                 mov ecx, eax
// 0086442d  e86e7bfdff           call 0x83bfa0
// 00864432  0fb6c8               movzx ecx, al
// 00864435  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0086443b  e8e072fdff           call 0x83b720
// 00864440  8bc8                 mov ecx, eax
// 00864442  e8797bfdff           call 0x83bfc0
// 00864447  0fb6d0               movzx edx, al
// 0086444a  899634010000         mov dword ptr [esi + 0x134], edx
// 00864450  e8cb72fdff           call 0x83b720
// 00864455  8bc8                 mov ecx, eax
// 00864457  e8847bfdff           call 0x83bfe0
// 0086445c  0fb6c0               movzx eax, al
// 0086445f  898638010000         mov dword ptr [esi + 0x138], eax
// 00864465  e8b672fdff           call 0x83b720
// 0086446a  8bc8                 mov ecx, eax
// 0086446c  e88f7bfdff           call 0x83c000
// 00864471  0fb6c8               movzx ecx, al
// 00864474  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0086447a  8bce                 mov ecx, esi
// 0086447c  e83ff6ffff           call 0x863ac0
// 00864481  8bce                 mov ecx, esi
// 00864483  e808f3ffff           call 0x863790
// 00864488  8bce                 mov ecx, esi
// 0086448a  e8d1f5ffff           call 0x863a60
// 0086448f  8bce                 mov ecx, esi
// 00864491  e84af6ffff           call 0x863ae0
// 00864496  57                   push edi
// 00864497  57                   push edi
// 00864498  8bce                 mov ecx, esi
// 0086449a  e8e1f9ffff           call 0x863e80
// 0086449f  8bc6                 mov eax, esi
// 008644a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008644a5  64890d00000000       mov dword ptr fs:[0], ecx
// 008644ac  59                   pop ecx
// 008644ad  5f                   pop edi
// 008644ae  5e                   pop esi
// 008644af  83c410               add esp, 0x10
// 008644b2  c3                   ret 
// copied from an identical function in another client (function ??0CXTAuxData@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp