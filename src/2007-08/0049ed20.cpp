// from server: 100% by colin
// roc 2007-08 0049ed20  unit: RBX::Network::Server  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049ed20
//
// 0049ed20  56                   push esi
// 0049ed21  8bf1                 mov esi, ecx
// 0049ed23  e8f8f7ffff           call 0x49e520
// 0049ed28  c70674cb7900         mov dword ptr [esi], 0x79cb74
// 0049ed2e  c7460468cb7900       mov dword ptr [esi + 4], 0x79cb68
// 0049ed35  c7461060cb7900       mov dword ptr [esi + 0x10], 0x79cb60
// 0049ed3c  c7461450cb7900       mov dword ptr [esi + 0x14], 0x79cb50
// 0049ed43  c7462c40cb7900       mov dword ptr [esi + 0x2c], 0x79cb40
// 0049ed4a  c7464430cb7900       mov dword ptr [esi + 0x44], 0x79cb30
// 0049ed51  c7465c20cb7900       mov dword ptr [esi + 0x5c], 0x79cb20
// 0049ed58  c7467410cb7900       mov dword ptr [esi + 0x74], 0x79cb10
// 0049ed5f  c7868c00000000cb7900 mov dword ptr [esi + 0x8c], 0x79cb00
// 0049ed69  c786e8000000d0ca7900 mov dword ptr [esi + 0xe8], 0x79cad0
// 0049ed73  c786ec000000c4ca7900 mov dword ptr [esi + 0xec], 0x79cac4
// 0049ed7d  8bc6                 mov eax, esi
// 0049ed7f  5e                   pop esi
// 0049ed80  c3                   ret 

struct Server {
    char pad[0x8c];
    int field_8c;
    char pad2[0x58];
    int field_e8;
    int field_ec;
    void init();
    Server();
};

extern "C" void __fastcall sub_49e520(Server* self);

Server::Server()
{
    sub_49e520(this);
    *(int*)((char*)this + 0x00) = 0x79cb74;
    *(int*)((char*)this + 0x04) = 0x79cb68;
    *(int*)((char*)this + 0x10) = 0x79cb60;
    *(int*)((char*)this + 0x14) = 0x79cb50;
    *(int*)((char*)this + 0x2c) = 0x79cb40;
    *(int*)((char*)this + 0x44) = 0x79cb30;
    *(int*)((char*)this + 0x5c) = 0x79cb20;
    *(int*)((char*)this + 0x74) = 0x79cb10;
    *(int*)((char*)this + 0x8c) = 0x79cb00;
    *(int*)((char*)this + 0xe8) = 0x79cad0;
    *(int*)((char*)this + 0xec) = 0x79cac4;
}
