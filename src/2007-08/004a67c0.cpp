// from server: 81% by colin
// roc 2007-08 004a67c0  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a67c0
//
// 004a67c0  56                   push esi
// 004a67c1  57                   push edi
// 004a67c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a67c6  8b8764020000         mov eax, dword ptr [edi + 0x264]
// 004a67cc  8bf1                 mov esi, ecx
// 004a67ce  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a67d1  50                   push eax
// 004a67d2  e8d9b10e00           call 0x5919b0
// 004a67d7  57                   push edi
// 004a67d8  8bce                 mov ecx, esi
// 004a67da  e8a1852600           call 0x70ed80
// 004a67df  5f                   pop edi
// 004a67e0  5e                   pop esi
// 004a67e1  c20400               ret 4

struct VClient {
    char pad[0xc];
    int field_c;
    void sub_5919b0(int);
    void sub_70ed80(void*);
    void func(void*);
};

void VClient::func(void* arg) {
    int v = *(int*)((char*)arg + 0x264);
    sub_5919b0(v);
    sub_70ed80(arg);
}
