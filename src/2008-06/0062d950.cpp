// from server: 100% by tester
// roc 2008-06 0062d950  unit: RBX::ForceField  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d950
//
// 0062d950  8b442404             mov eax, dword ptr [esp + 4]
// 0062d954  56                   push esi
// 0062d955  50                   push eax
// 0062d956  8bf1                 mov esi, ecx
// 0062d958  e803e0f2ff           call 0x55b960
// 0062d95d  c70604698400         mov dword ptr [esi], 0x846904
// 0062d963  c74610f4688400       mov dword ptr [esi + 0x10], 0x8468f4
// 0062d96a  c74614ec688400       mov dword ptr [esi + 0x14], 0x8468ec
// 0062d971  c74620e4688400       mov dword ptr [esi + 0x20], 0x8468e4
// 0062d978  c74624d4688400       mov dword ptr [esi + 0x24], 0x8468d4
// 0062d97f  c74644c4688400       mov dword ptr [esi + 0x44], 0x8468c4
// 0062d986  c74664b4688400       mov dword ptr [esi + 0x64], 0x8468b4
// 0062d98d  c78684000000a4688400 mov dword ptr [esi + 0x84], 0x8468a4
// 0062d997  c786a400000094688400 mov dword ptr [esi + 0xa4], 0x846894
// 0062d9a1  c786c400000084688400 mov dword ptr [esi + 0xc4], 0x846884
// 0062d9ab  8bc6                 mov eax, esi
// 0062d9ad  5e                   pop esi
// 0062d9ae  c20400               ret 4

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
