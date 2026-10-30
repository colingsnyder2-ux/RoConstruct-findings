// roc 2009-12 00854ab0  unit: CXTPTabClientWnd::CWorkspace  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854ab0
//
// 00854ab0  56                   push esi
// 00854ab1  8bf1                 mov esi, ecx
// 00854ab3  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00854ab9  8b01                 mov eax, dword ptr [ecx]
// 00854abb  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00854ac1  57                   push edi
// 00854ac2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00854ac6  57                   push edi
// 00854ac7  ffd2                 call edx
// 00854ac9  83f8ff               cmp eax, -1
// 00854acc  7419                 je 0x854ae7
// 00854ace  8d88000000ff         lea ecx, [eax - 0x1000000]
// 00854ad4  83f907               cmp ecx, 7
// 00854ad7  7716                 ja 0x854aef
// 00854ad9  50                   push eax
// 00854ada  e801bd0700           call 0x8d07e0
// 00854adf  83c404               add esp, 4
// 00854ae2  5f                   pop edi
// 00854ae3  5e                   pop esi
// 00854ae4  c20400               ret 4
// 00854ae7  57                   push edi
// 00854ae8  8bce                 mov ecx, esi
// 00854aea  e811980700           call 0x8ce300
// 00854aef  5f                   pop edi
// 00854af0  5e                   pop esi
// 00854af1  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CWorkspace@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp