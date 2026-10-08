// from server: 100% by colin
// roc 2007-08 004a5020  unit: RBX::Network::Server::ClientProxy  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5020
//
// 004a5020  56                   push esi
// 004a5021  8bf1                 mov esi, ecx
// 004a5023  8b961c1e0000         mov edx, dword ptr [esi + 0x1e1c]
// 004a5029  8b8e141e0000         mov ecx, dword ptr [esi + 0x1e14]
// 004a502f  8b01                 mov eax, dword ptr [ecx]
// 004a5031  8b4064               mov eax, dword ptr [eax + 0x64]
// 004a5034  6a00                 push 0
// 004a5036  6a01                 push 1
// 004a5038  52                   push edx
// 004a5039  8b96181e0000         mov edx, dword ptr [esi + 0x1e18]
// 004a503f  52                   push edx
// 004a5040  ffd0                 call eax
// 004a5042  6a00                 push 0
// 004a5044  8bce                 mov ecx, esi
// 004a5046  e8e5c50900           call 0x541630
// 004a504b  5e                   pop esi
// 004a504c  c3                   ret 

struct ClientProxy {
    char pad[0x1e14];
    void* field_1e14;
    int field_1e18;
    int field_1e1c;
    void sub_541630(int);
    void Method();
};

void ClientProxy::Method() {
    void** vtbl = *(void***)field_1e14;
    typedef void (__thiscall *Fn)(void*, int, int, int, int);
    Fn fn = (Fn)vtbl[0x64/4];
    fn(field_1e14, field_1e18, field_1e1c, 1, 0);
    sub_541630(0);
}
