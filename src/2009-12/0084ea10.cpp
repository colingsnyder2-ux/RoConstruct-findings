// roc 2009-12 0084ea10  unit: CXTPPropertyGrid  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ea10
//
// 0084ea10  56                   push esi
// 0084ea11  8bf1                 mov esi, ecx
// 0084ea13  83be48010000ff       cmp dword ptr [esi + 0x148], -1
// 0084ea1a  57                   push edi
// 0084ea1b  743f                 je 0x84ea5c
// 0084ea1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084ea21  8b06                 mov eax, dword ptr [esi]
// 0084ea23  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084ea27  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 0084ea2d  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 0084ea33  51                   push ecx
// 0084ea34  52                   push edx
// 0084ea35  8bce                 mov ecx, esi
// 0084ea37  ffd0                 call eax
// 0084ea39  83e803               sub eax, 3
// 0084ea3c  3bf8                 cmp edi, eax
// 0084ea3e  751c                 jne 0x84ea5c
// 0084ea40  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084ea44  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084ea48  8b16                 mov edx, dword ptr [esi]
// 0084ea4a  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0084ea50  50                   push eax
// 0084ea51  51                   push ecx
// 0084ea52  57                   push edi
// 0084ea53  8bce                 mov ecx, esi
// 0084ea55  ffd2                 call edx
// 0084ea57  5f                   pop edi
// 0084ea58  5e                   pop esi
// 0084ea59  c20c00               ret 0xc
// 0084ea5c  8bce                 mov ecx, esi
// 0084ea5e  e8cd53faff           call 0x7f3e30
// 0084ea63  5f                   pop edi
// 0084ea64  5e                   pop esi
// 0084ea65  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPPropertyGrid@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp