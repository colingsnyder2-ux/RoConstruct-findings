// roc 2011-06 0086add0  unit: CPropGrid  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086add0
//
// 0086add0  56                   push esi
// 0086add1  57                   push edi
// 0086add2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086add6  8bf1                 mov esi, ecx
// 0086add8  85ff                 test edi, edi
// 0086adda  7414                 je 0x86adf0
// 0086addc  8d4670               lea eax, [esi + 0x70]
// 0086addf  85c0                 test eax, eax
// 0086ade1  7406                 je 0x86ade9
// 0086ade3  83782000             cmp dword ptr [eax + 0x20], 0
// 0086ade7  7507                 jne 0x86adf0
// 0086ade9  e8b2f7ffff           call 0x86a5a0
// 0086adee  eb1c                 jmp 0x86ae0c
// 0086adf0  8d4e70               lea ecx, [esi + 0x70]
// 0086adf3  85c9                 test ecx, ecx
// 0086adf5  7415                 je 0x86ae0c
// 0086adf7  83792000             cmp dword ptr [ecx + 0x20], 0
// 0086adfb  740f                 je 0x86ae0c
// 0086adfd  8bc7                 mov eax, edi
// 0086adff  f7d8                 neg eax
// 0086ae01  1bc0                 sbb eax, eax
// 0086ae03  83e005               and eax, 5
// 0086ae06  50                   push eax
// 0086ae07  e83af5f9ff           call 0x80a346
// 0086ae0c  8bce                 mov ecx, esi
// 0086ae0e  897e6c               mov dword ptr [esi + 0x6c], edi
// 0086ae11  e84af6ffff           call 0x86a460
// 0086ae16  8bce                 mov ecx, esi
// 0086ae18  e8e3f7ffff           call 0x86a600
// 0086ae1d  5f                   pop edi
// 0086ae1e  5e                   pop esi
// 0086ae1f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
