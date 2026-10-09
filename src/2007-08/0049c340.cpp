// from server: 100% by colin
// roc 2007-08 0049c340  unit: RBX::Network::Server  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c340
//
// 0049c340  c7014cc67900         mov dword ptr [ecx], 0x79c64c
// 0049c346  c7410440c67900       mov dword ptr [ecx + 4], 0x79c640
// 0049c34d  c7411038c67900       mov dword ptr [ecx + 0x10], 0x79c638
// 0049c354  c7411428c67900       mov dword ptr [ecx + 0x14], 0x79c628
// 0049c35b  c7412c18c67900       mov dword ptr [ecx + 0x2c], 0x79c618
// 0049c362  c7414408c67900       mov dword ptr [ecx + 0x44], 0x79c608
// 0049c369  c7415cf8c57900       mov dword ptr [ecx + 0x5c], 0x79c5f8
// 0049c370  c74174e8c57900       mov dword ptr [ecx + 0x74], 0x79c5e8
// 0049c377  c7818c000000d8c57900 mov dword ptr [ecx + 0x8c], 0x79c5d8
// 0049c381  c781e8000000a8c57900 mov dword ptr [ecx + 0xe8], 0x79c5a8
// 0049c38b  c781ec0000009cc57900 mov dword ptr [ecx + 0xec], 0x79c59c
// 0049c395  e9e6e10000           jmp 0x4aa580

struct RBX_Network_Server {
    void construct();
};

extern "C" void __stdcall sub_4aa580();

void RBX_Network_Server::construct()
{
    *(int*)((char*)this + 0x00) = 0x79c64c;
    *(int*)((char*)this + 0x04) = 0x79c640;
    *(int*)((char*)this + 0x10) = 0x79c638;
    *(int*)((char*)this + 0x14) = 0x79c628;
    *(int*)((char*)this + 0x2c) = 0x79c618;
    *(int*)((char*)this + 0x44) = 0x79c608;
    *(int*)((char*)this + 0x5c) = 0x79c5f8;
    *(int*)((char*)this + 0x74) = 0x79c5e8;
    *(int*)((char*)this + 0x8c) = 0x79c5d8;
    *(int*)((char*)this + 0xe8) = 0x79c5a8;
    *(int*)((char*)this + 0xec) = 0x79c59c;
    sub_4aa580();
}
