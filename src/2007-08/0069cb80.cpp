// from server: 100% by auto
// roc 2007-08 0069cb80  unit: CXTPPropertyGridView  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cb80
//
// 0069cb80  8b442404             mov eax, dword ptr [esp + 4]
// 0069cb84  83ec10               sub esp, 0x10
// 0069cb87  53                   push ebx
// 0069cb88  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0069cb8c  55                   push ebp
// 0069cb8d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0069cb91  56                   push esi
// 0069cb92  57                   push edi
// 0069cb93  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0069cb97  c70700000000         mov dword ptr [edi], 0
// 0069cb9d  c70300000000         mov dword ptr [ebx], 0
// 0069cba3  8bf1                 mov esi, ecx
// 0069cba5  c7450000000000       mov dword ptr [ebp], 0
// 0069cbac  c70000000000         mov dword ptr [eax], 0
// 0069cbb2  8d46ac               lea eax, [esi - 0x54]
// 0069cbb5  85c0                 test eax, eax
// 0069cbb7  7455                 je 0x69cc0e
// 0069cbb9  83782000             cmp dword ptr [eax + 0x20], 0
// 0069cbbd  744f                 je 0x69cc0e
// 0069cbbf  8b56cc               mov edx, dword ptr [esi - 0x34]
// 0069cbc2  8d4c2410             lea ecx, [esp + 0x10]
// 0069cbc6  51                   push ecx
// 0069cbc7  52                   push edx
// 0069cbc8  ff15d4ed7700         call dword ptr [0x77edd4]
// 0069cbce  8d442434             lea eax, [esp + 0x34]
// 0069cbd2  50                   push eax
// 0069cbd3  8bce                 mov ecx, esi
// 0069cbd5  e8f647fdff           call 0x6713d0
// 0069cbda  85c0                 test eax, eax
// 0069cbdc  740f                 je 0x69cbed
// 0069cbde  5f                   pop edi
// 0069cbdf  5e                   pop esi
// 0069cbe0  5d                   pop ebp
// 0069cbe1  b857000780           mov eax, 0x80070057
// 0069cbe6  5b                   pop ebx
// 0069cbe7  83c410               add esp, 0x10
// 0069cbea  c22000               ret 0x20
// 0069cbed  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069cbf1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069cbf5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069cbf9  8901                 mov dword ptr [ecx], eax
// 0069cbfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069cbff  2bd0                 sub edx, eax
// 0069cc01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069cc05  894d00               mov dword ptr [ebp], ecx
// 0069cc08  2bc1                 sub eax, ecx
// 0069cc0a  8913                 mov dword ptr [ebx], edx
// 0069cc0c  8907                 mov dword ptr [edi], eax
// 0069cc0e  5f                   pop edi
// 0069cc0f  5e                   pop esi
// 0069cc10  5d                   pop ebp
// 0069cc11  33c0                 xor eax, eax
// 0069cc13  5b                   pop ebx
// 0069cc14  83c410               add esp, 0x10
// 0069cc17  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleLocation@CXTPPropertyGridView@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
