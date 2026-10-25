// from server: 100% by colin
// roc 2008-06 005d3aa0  unit: RBX::Skin  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3aa0
//
// 005d3aa0  56                   push esi
// 005d3aa1  8b742408             mov esi, dword ptr [esp + 8]
// 005d3aa5  57                   push edi
// 005d3aa6  8bf9                 mov edi, ecx
// 005d3aa8  8bce                 mov ecx, esi
// 005d3aaa  e8614f0000           call 0x5d8a10
// 005d3aaf  85c0                 test eax, eax
// 005d3ab1  740e                 je 0x5d3ac1
// 005d3ab3  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 005d3ab9  51                   push ecx
// 005d3aba  8bc8                 mov ecx, eax
// 005d3abc  e87fa4fcff           call 0x59df40
// 005d3ac1  8bce                 mov ecx, esi
// 005d3ac3  e848510000           call 0x5d8c10
// 005d3ac8  85c0                 test eax, eax
// 005d3aca  740e                 je 0x5d3ada
// 005d3acc  8b9734010000         mov edx, dword ptr [edi + 0x134]
// 005d3ad2  52                   push edx
// 005d3ad3  8bc8                 mov ecx, eax
// 005d3ad5  e866a4fcff           call 0x59df40
// 005d3ada  8bce                 mov ecx, esi
// 005d3adc  e82f520000           call 0x5d8d10
// 005d3ae1  85c0                 test eax, eax
// 005d3ae3  740e                 je 0x5d3af3
// 005d3ae5  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 005d3aeb  51                   push ecx
// 005d3aec  8bc8                 mov ecx, eax
// 005d3aee  e84da4fcff           call 0x59df40
// 005d3af3  8bce                 mov ecx, esi
// 005d3af5  e816500000           call 0x5d8b10
// 005d3afa  85c0                 test eax, eax
// 005d3afc  740e                 je 0x5d3b0c
// 005d3afe  8b9734010000         mov edx, dword ptr [edi + 0x134]
// 005d3b04  52                   push edx
// 005d3b05  8bc8                 mov ecx, eax
// 005d3b07  e834a4fcff           call 0x59df40
// 005d3b0c  8bce                 mov ecx, esi
// 005d3b0e  e8fd520000           call 0x5d8e10
// 005d3b13  85c0                 test eax, eax
// 005d3b15  740e                 je 0x5d3b25
// 005d3b17  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 005d3b1d  51                   push ecx
// 005d3b1e  8bc8                 mov ecx, eax
// 005d3b20  e81ba4fcff           call 0x59df40
// 005d3b25  8bce                 mov ecx, esi
// 005d3b27  e8e4530000           call 0x5d8f10
// 005d3b2c  85c0                 test eax, eax
// 005d3b2e  7413                 je 0x5d3b43
// 005d3b30  8b9734010000         mov edx, dword ptr [edi + 0x134]
// 005d3b36  5f                   pop edi
// 005d3b37  5e                   pop esi
// 005d3b38  89542404             mov dword ptr [esp + 4], edx
// 005d3b3c  8bc8                 mov ecx, eax
// 005d3b3e  e9fda3fcff           jmp 0x59df40
// 005d3b43  5f                   pop edi
// 005d3b44  5e                   pop esi
// 005d3b45  c20400               ret 4

struct Skin {
    char pad[0x134];
    int field_134;
    void sub_5D3AA0(int arg);
};

struct Arg {
    int sub_5D8A10();
    int sub_5D8B10();
    int sub_5D8C10();
    int sub_5D8D10();
    int sub_5D8E10();
    int sub_5D8F10();
};

struct Res {
    void sub_59DF40(int);
};

void Skin::sub_5D3AA0(int arg) {
    Arg* a = (Arg*)arg;
    Res* r;
    r = (Res*)a->sub_5D8A10();
    if (r) {
        r->sub_59DF40(field_134);
    }
    r = (Res*)a->sub_5D8C10();
    if (r) {
        r->sub_59DF40(field_134);
    }
    r = (Res*)a->sub_5D8D10();
    if (r) {
        r->sub_59DF40(field_134);
    }
    r = (Res*)a->sub_5D8B10();
    if (r) {
        r->sub_59DF40(field_134);
    }
    r = (Res*)a->sub_5D8E10();
    if (r) {
        r->sub_59DF40(field_134);
    }
    r = (Res*)a->sub_5D8F10();
    if (r) {
        r->sub_59DF40(field_134);
    }
}
