// from server: 46% by colin
// roc 2007-08 00464140  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00464140
//
// 00464140  51                   push ecx
// 00464141  80796800             cmp byte ptr [ecx + 0x68], 0
// 00464145  c7042400000000       mov dword ptr [esp], 0
// 0046414c  7417                 je 0x464165
// 0046414e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00464152  56                   push esi
// 00464153  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00464157  50                   push eax
// 00464158  56                   push esi
// 00464159  e892821300           call 0x59c3f0
// 0046415e  8bc6                 mov eax, esi
// 00464160  5e                   pop esi
// 00464161  59                   pop ecx
// 00464162  c20800               ret 8
// 00464165  8b442408             mov eax, dword ptr [esp + 8]
// 00464169  c70000000000         mov dword ptr [eax], 0
// 0046416f  59                   pop ecx
// 00464170  c20800               ret 8

struct DxUserInput {
    char pad[0x68];
    bool flag;
    int method(int, int);
};

extern "C" int __stdcall sub_59c3f0(int, int);

int DxUserInput::method(int a, int b)
{
    if (flag) {
        int r = sub_59c3f0(a, b);
        return r;
    }
    *(int*)a = 0;
    return 0;
}
