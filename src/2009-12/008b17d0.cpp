// roc 2009-12 008b17d0  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b17d0
//
// 008b17d0  83ec10               sub esp, 0x10
// 008b17d3  55                   push ebp
// 008b17d4  56                   push esi
// 008b17d5  8bf1                 mov esi, ecx
// 008b17d7  33ed                 xor ebp, ebp
// 008b17d9  396e10               cmp dword ptr [esi + 0x10], ebp
// 008b17dc  740a                 je 0x8b17e8
// 008b17de  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b17e1  8b01                 mov eax, dword ptr [ecx]
// 008b17e3  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b17e6  ffd2                 call edx
// 008b17e8  396ecc               cmp dword ptr [esi - 0x34], ebp
// 008b17eb  754d                 jne 0x8b183a
// 008b17ed  8b06                 mov eax, dword ptr [esi]
// 008b17ef  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b17f2  53                   push ebx
// 008b17f3  8b5eac               mov ebx, dword ptr [esi - 0x54]
// 008b17f6  57                   push edi
// 008b17f7  55                   push ebp
// 008b17f8  8d7eac               lea edi, [esi - 0x54]
// 008b17fb  55                   push ebp
// 008b17fc  8bce                 mov ecx, esi
// 008b17fe  896c2418             mov dword ptr [esp + 0x18], ebp
// 008b1802  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008b1806  896c2420             mov dword ptr [esp + 0x20], ebp
// 008b180a  896c2424             mov dword ptr [esp + 0x24], ebp
// 008b180e  ffd2                 call edx
// 008b1810  8b535c               mov edx, dword ptr [ebx + 0x5c]
// 008b1813  50                   push eax
// 008b1814  8d44241c             lea eax, [esp + 0x1c]
// 008b1818  50                   push eax
// 008b1819  6800000056           push 0x56000000
// 008b181e  6856fd9900           push 0x99fd56
// 008b1823  6898809f00           push 0x9f8098
// 008b1828  8bcf                 mov ecx, edi
// 008b182a  ffd2                 call edx
// 008b182c  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 008b1832  57                   push edi
// 008b1833  e8c82ef4ff           call 0x7f4700
// 008b1838  5f                   pop edi
// 008b1839  5b                   pop ebx
// 008b183a  5e                   pop esi
// 008b183b  5d                   pop ebp
// 008b183c  83c410               add esp, 0x10
// 008b183f  c3                   ret 
// copied from an identical function in another client (function ?CreateContainer@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp