// from server: 100% by colin
// roc 2007-08 0049b570  unit: RBX::Network::Client  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049b570
//
// 0049b570  56                   push esi
// 0049b571  8bf1                 mov esi, ecx
// 0049b573  e8f8f7ffff           call 0x49ad70
// 0049b578  c70654c47900         mov dword ptr [esi], 0x79c454
// 0049b57e  c7460448c47900       mov dword ptr [esi + 4], 0x79c448
// 0049b585  c7461040c47900       mov dword ptr [esi + 0x10], 0x79c440
// 0049b58c  c7461430c47900       mov dword ptr [esi + 0x14], 0x79c430
// 0049b593  c7462c20c47900       mov dword ptr [esi + 0x2c], 0x79c420
// 0049b59a  c7464410c47900       mov dword ptr [esi + 0x44], 0x79c410
// 0049b5a1  c7465c00c47900       mov dword ptr [esi + 0x5c], 0x79c400
// 0049b5a8  c74674f0c37900       mov dword ptr [esi + 0x74], 0x79c3f0
// 0049b5af  c7868c000000e0c37900 mov dword ptr [esi + 0x8c], 0x79c3e0
// 0049b5b9  c786e8000000b0c37900 mov dword ptr [esi + 0xe8], 0x79c3b0
// 0049b5c3  c786ec000000a4c37900 mov dword ptr [esi + 0xec], 0x79c3a4
// 0049b5cd  8bc6                 mov eax, esi
// 0049b5cf  5e                   pop esi
// 0049b5d0  c3                   ret 

struct RBX_Network_Client
{
    RBX_Network_Client* construct();
};

extern void sub_0049AD70();

RBX_Network_Client* RBX_Network_Client::construct()
{
    sub_0049AD70();
    *(int*)((char*)this + 0x00) = 0x79c454;
    *(int*)((char*)this + 0x04) = 0x79c448;
    *(int*)((char*)this + 0x10) = 0x79c440;
    *(int*)((char*)this + 0x14) = 0x79c430;
    *(int*)((char*)this + 0x2c) = 0x79c420;
    *(int*)((char*)this + 0x44) = 0x79c410;
    *(int*)((char*)this + 0x5c) = 0x79c400;
    *(int*)((char*)this + 0x74) = 0x79c3f0;
    *(int*)((char*)this + 0x8c) = 0x79c3e0;
    *(int*)((char*)this + 0xe8) = 0x79c3b0;
    *(int*)((char*)this + 0xec) = 0x79c3a4;
    return this;
}
