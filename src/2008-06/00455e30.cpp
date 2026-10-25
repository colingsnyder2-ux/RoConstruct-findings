// from server: 100% by tester
// roc 2008-06 00455e30  unit: CRobloxReportPaneView  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455e30
//
// 00455e30  8b442404             mov eax, dword ptr [esp + 4]
// 00455e34  56                   push esi
// 00455e35  50                   push eax
// 00455e36  8bf1                 mov esi, ecx
// 00455e38  e8235b1000           call 0x55b960
// 00455e3d  c70624848100         mov dword ptr [esi], 0x818424
// 00455e43  c7461014848100       mov dword ptr [esi + 0x10], 0x818414
// 00455e4a  c746140c848100       mov dword ptr [esi + 0x14], 0x81840c
// 00455e51  c7462004848100       mov dword ptr [esi + 0x20], 0x818404
// 00455e58  c74624f4838100       mov dword ptr [esi + 0x24], 0x8183f4
// 00455e5f  c74644e4838100       mov dword ptr [esi + 0x44], 0x8183e4
// 00455e66  c74664d4838100       mov dword ptr [esi + 0x64], 0x8183d4
// 00455e6d  c78684000000c4838100 mov dword ptr [esi + 0x84], 0x8183c4
// 00455e77  c786a4000000b4838100 mov dword ptr [esi + 0xa4], 0x8183b4
// 00455e81  c786c4000000a4838100 mov dword ptr [esi + 0xc4], 0x8183a4
// 00455e8b  8bc6                 mov eax, esi
// 00455e8d  5e                   pop esi
// 00455e8e  c20400               ret 4

struct S {
    char pad0[0x10];
    char pad10[0x10];
    char pad20[0x10];
    char pad30[0x14];
    char pad44[0x20];
    char pad64[0x20];
    char pad84[0x20];
    char padA4[0x20];
    char padC4[4];
    S* ctor(int);
};

extern "C" void __stdcall sub_55B960(int);

S* S::ctor(int a) {
    sub_55B960(a);
    *(int*)((char*)this + 0x00) = 0x8310dc;
    *(int*)((char*)this + 0x10) = 0x8310cc;
    *(int*)((char*)this + 0x14) = 0x8310c4;
    *(int*)((char*)this + 0x20) = 0x8310bc;
    *(int*)((char*)this + 0x24) = 0x8310ac;
    *(int*)((char*)this + 0x44) = 0x83109c;
    *(int*)((char*)this + 0x64) = 0x83108c;
    *(int*)((char*)this + 0x84) = 0x83107c;
    *(int*)((char*)this + 0xa4) = 0x83106c;
    *(int*)((char*)this + 0xc4) = 0x83105c;
    return this;
}
