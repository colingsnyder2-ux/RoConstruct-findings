// roc 2009-12 008168b0  unit: MyXTPCommandBars  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008168b0
//
// 008168b0  6aff                 push -1
// 008168b2  6828a69500           push 0x95a628
// 008168b7  64a100000000         mov eax, dword ptr fs:[0]
// 008168bd  50                   push eax
// 008168be  83ec14               sub esp, 0x14
// 008168c1  53                   push ebx
// 008168c2  55                   push ebp
// 008168c3  56                   push esi
// 008168c4  57                   push edi
// 008168c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008168ca  33c4                 xor eax, esp
// 008168cc  50                   push eax
// 008168cd  8d442428             lea eax, [esp + 0x28]
// 008168d1  64a300000000         mov dword ptr fs:[0], eax
// 008168d7  8bd9                 mov ebx, ecx
// 008168d9  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008168dd  8bb580010000         mov esi, dword ptr [ebp + 0x180]
// 008168e3  85f6                 test esi, esi
// 008168e5  750d                 jne 0x8168f4
// 008168e7  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008168eb  57                   push edi
// 008168ec  55                   push ebp
// 008168ed  e82edcffff           call 0x814520
// 008168f2  eb7e                 jmp 0x816972
// 008168f4  6aff                 push -1
// 008168f6  55                   push ebp
// 008168f7  8bce                 mov ecx, esi
// 008168f9  e852ad0700           call 0x891650
// 008168fe  8bf8                 mov edi, eax
// 00816900  83ffff               cmp edi, -1
// 00816903  750f                 jne 0x816914
// 00816905  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00816909  57                   push edi
// 0081690a  55                   push ebp
// 0081690b  8bcb                 mov ecx, ebx
// 0081690d  e80edcffff           call 0x814520
// 00816912  eb5e                 jmp 0x816972
// 00816914  8d4c2414             lea ecx, [esp + 0x14]
// 00816918  e803deffff           call 0x814720
// 0081691d  8d442414             lea eax, [esp + 0x14]
// 00816921  50                   push eax
// 00816922  57                   push edi
// 00816923  8bce                 mov ecx, esi
// 00816925  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0081692d  e82ebd0700           call 0x892660
// 00816932  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00816936  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0081693a  33f6                 xor esi, esi
// 0081693c  85c0                 test eax, eax
// 0081693e  7e21                 jle 0x816961
// 00816940  85f6                 test esi, esi
// 00816942  7c6f                 jl 0x8169b3
// 00816944  3bf0                 cmp esi, eax
// 00816946  7d6b                 jge 0x8169b3
// 00816948  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081694c  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 0081694f  57                   push edi
// 00816950  52                   push edx
// 00816951  8bcb                 mov ecx, ebx
// 00816953  e8c8dbffff           call 0x814520
// 00816958  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081695c  46                   inc esi
// 0081695d  3bf0                 cmp esi, eax
// 0081695f  7cdf                 jl 0x816940
// 00816961  8d4c2414             lea ecx, [esp + 0x14]
// 00816965  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0081696d  e8ceddffff           call 0x814740
// 00816972  837b6000             cmp dword ptr [ebx + 0x60], 0
// 00816976  7425                 je 0x81699d
// 00816978  8bbffc000000         mov edi, dword ptr [edi + 0xfc]
// 0081697e  6a00                 push 0
// 00816980  6aff                 push -1
// 00816982  6a00                 push 0
// 00816984  68b9880000           push 0x88b9
// 00816989  6a01                 push 1
// 0081698b  8bcf                 mov ecx, edi
// 0081698d  e8ce170300           call 0x848160
// 00816992  8b10                 mov edx, dword ptr [eax]
// 00816994  8bc8                 mov ecx, eax
// 00816996  8b4264               mov eax, dword ptr [edx + 0x64]
// 00816999  6a01                 push 1
// 0081699b  ffd0                 call eax
// 0081699d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008169a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008169a8  59                   pop ecx
// 008169a9  5f                   pop edi
// 008169aa  5e                   pop esi
// 008169ab  5d                   pop ebp
// 008169ac  5b                   pop ebx
// 008169ad  83c420               add esp, 0x20
// 008169b0  c20800               ret 8
// 008169b3  e854d1fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetAddOrRemovePopup@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp