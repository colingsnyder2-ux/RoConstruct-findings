// from server: 100% by atomic.potato
// roc 2007-08 00573a40  unit: RBX::PartInstance  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573a40
//
// 00573a40  837c240800           cmp dword ptr [esp + 8], 0
// 00573a45  56                   push esi
// 00573a46  8bf1                 mov esi, ecx
// 00573a48  741e                 je 0x573a68
// 00573a4a  c786ec0000000c907b00 mov dword ptr [esi + 0xec], 0x7b900c
// 00573a54  c78658010000d44c7a00 mov dword ptr [esi + 0x158], 0x7a4cd4
// 00573a5e  c7865c010000cc4c7a00 mov dword ptr [esi + 0x15c], 0x7a4ccc
// 00573a68  8b442408             mov eax, dword ptr [esp + 8]
// 00573a6c  6a00                 push 0
// 00573a6e  50                   push eax
// 00573a6f  e87c880400           call 0x5bc2f0
// 00573a74  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00573a7a  c70654a97a00         mov dword ptr [esi], 0x7aa954
// 00573a80  c7460448a97a00       mov dword ptr [esi + 4], 0x7aa948
// 00573a87  c7461040a97a00       mov dword ptr [esi + 0x10], 0x7aa940
// 00573a8e  c7461430a97a00       mov dword ptr [esi + 0x14], 0x7aa930
// 00573a95  c7462c20a97a00       mov dword ptr [esi + 0x2c], 0x7aa920
// 00573a9c  c7464410a97a00       mov dword ptr [esi + 0x44], 0x7aa910
// 00573aa3  c7465c00a97a00       mov dword ptr [esi + 0x5c], 0x7aa900
// 00573aaa  c74674f0a87a00       mov dword ptr [esi + 0x74], 0x7aa8f0
// 00573ab1  c7868c000000e0a87a00 mov dword ptr [esi + 0x8c], 0x7aa8e0
// 00573abb  c786e8000000d4a87a00 mov dword ptr [esi + 0xe8], 0x7aa8d4
// 00573ac5  8b5104               mov edx, dword ptr [ecx + 4]
// 00573ac8  c78432ec000000c8a87a00 mov dword ptr [edx + esi + 0xec], 0x7aa8c8
// 00573ad3  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00573ad9  8b4808               mov ecx, dword ptr [eax + 8]
// 00573adc  c78431ec000000c0a87a00 mov dword ptr [ecx + esi + 0xec], 0x7aa8c0
// 00573ae7  8bc6                 mov eax, esi
// 00573ae9  5e                   pop esi
// 00573aea  c20800               ret 8

struct PartInstance {
    char pad0[0xec];
    int field_ec;
    char pad1[0x158 - 0xec - 4];
    int field_158;
    int field_15c;
    char pad2[0x1d8 - 0x15c - 4];
    PartInstance* construct(int, int);
};

extern "C" int __stdcall sub_5bc2f0(int, int);

PartInstance* PartInstance::construct(int arg, int arg2) {
    if (arg2 != 0) {
        field_ec = 0x7b900c;
        field_158 = 0x7a4cd4;
        field_15c = 0x7a4ccc;
    }
    sub_5bc2f0(arg, 0);
    int* p = (int*)field_ec;
    *(int*)(this) = 0x7aa954;
    *(int*)((char*)this + 4) = 0x7aa948;
    *(int*)((char*)this + 0x10) = 0x7aa940;
    *(int*)((char*)this + 0x14) = 0x7aa930;
    *(int*)((char*)this + 0x2c) = 0x7aa920;
    *(int*)((char*)this + 0x44) = 0x7aa910;
    *(int*)((char*)this + 0x5c) = 0x7aa900;
    *(int*)((char*)this + 0x74) = 0x7aa8f0;
    *(int*)((char*)this + 0x8c) = 0x7aa8e0;
    *(int*)((char*)this + 0xe8) = 0x7aa8d4;
    int edx = *(int*)((char*)p + 4);
    *(int*)((char*)this + edx + 0xec) = 0x7aa8c8;
    int eax = field_ec;
    int ecx = *(int*)((char*)eax + 8);
    *(int*)((char*)this + ecx + 0xec) = 0x7aa8c0;
    return this;
}
