// roc 2009-12 0084fc10  unit: CXTPPropertyGrid  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fc10
//
// 0084fc10  51                   push ecx
// 0084fc11  53                   push ebx
// 0084fc12  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0084fc16  57                   push edi
// 0084fc17  33ff                 xor edi, edi
// 0084fc19  397b28               cmp dword ptr [ebx + 0x28], edi
// 0084fc1c  894c2408             mov dword ptr [esp + 8], ecx
// 0084fc20  7e5a                 jle 0x84fc7c
// 0084fc22  55                   push ebp
// 0084fc23  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0084fc27  56                   push esi
// 0084fc28  57                   push edi
// 0084fc29  8bcb                 mov ecx, ebx
// 0084fc2b  e8f05f0100           call 0x865c20
// 0084fc30  8bf0                 mov esi, eax
// 0084fc32  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0084fc38  85c0                 test eax, eax
// 0084fc3a  7427                 je 0x84fc63
// 0084fc3c  8d4c2418             lea ecx, [esp + 0x18]
// 0084fc40  51                   push ecx
// 0084fc41  50                   push eax
// 0084fc42  8d4d20               lea ecx, [ebp + 0x20]
// 0084fc45  e826fdffff           call 0x84f970
// 0084fc4a  85c0                 test eax, eax
// 0084fc4c  7415                 je 0x84fc63
// 0084fc4e  837c241800           cmp dword ptr [esp + 0x18], 0
// 0084fc53  8bce                 mov ecx, esi
// 0084fc55  7407                 je 0x84fc5e
// 0084fc57  e884530100           call 0x864fe0
// 0084fc5c  eb05                 jmp 0x84fc63
// 0084fc5e  e81d530100           call 0x864f80
// 0084fc63  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 0084fc69  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084fc6d  55                   push ebp
// 0084fc6e  52                   push edx
// 0084fc6f  e89cffffff           call 0x84fc10
// 0084fc74  47                   inc edi
// 0084fc75  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 0084fc78  7cae                 jl 0x84fc28
// 0084fc7a  5e                   pop esi
// 0084fc7b  5d                   pop ebp
// 0084fc7c  5f                   pop edi
// 0084fc7d  5b                   pop ebx
// 0084fc7e  59                   pop ecx
// 0084fc7f  c20800               ret 8
// copied from an identical function in another client (function ?RestoreExpandingState@CXTPPropertyGrid@@AAEXPAVCXTPPropertyGridItems@@AAVCXTPPropertyGridUpdateContext@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp