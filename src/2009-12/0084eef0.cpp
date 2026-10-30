// roc 2009-12 0084eef0  unit: CXTPPropertyGrid  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084eef0
//
// 0084eef0  56                   push esi
// 0084eef1  8bf1                 mov esi, ecx
// 0084eef3  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0084eef7  7463                 je 0x84ef5c
// 0084eef9  57                   push edi
// 0084eefa  e881ebffff           call 0x84da80
// 0084eeff  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0084ef05  33c9                 xor ecx, ecx
// 0084ef07  3988dc000000         cmp dword ptr [eax + 0xdc], ecx
// 0084ef0d  0f94c1               sete cl
// 0084ef10  83c904               or ecx, 4
// 0084ef13  8bc1                 mov eax, ecx
// 0084ef15  0fb7d0               movzx edx, ax
// 0084ef18  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0084ef1e  52                   push edx
// 0084ef1f  681d250000           push 0x251d
// 0084ef24  6811040000           push 0x411
// 0084ef29  50                   push eax
// 0084ef2a  ffd7                 call edi
// 0084ef2c  8bce                 mov ecx, esi
// 0084ef2e  e84debffff           call 0x84da80
// 0084ef33  33c9                 xor ecx, ecx
// 0084ef35  83b8dc00000001       cmp dword ptr [eax + 0xdc], 1
// 0084ef3c  0f94c1               sete cl
// 0084ef3f  83c904               or ecx, 4
// 0084ef42  8bc1                 mov eax, ecx
// 0084ef44  0fb7d0               movzx edx, ax
// 0084ef47  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0084ef4d  52                   push edx
// 0084ef4e  681e250000           push 0x251e
// 0084ef53  6811040000           push 0x411
// 0084ef58  50                   push eax
// 0084ef59  ffd7                 call edi
// 0084ef5b  5f                   pop edi
// 0084ef5c  5e                   pop esi
// 0084ef5d  c3                   ret 
// copied from an identical function in another client (function ?RefreshToolBarButtons@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp