// from server: 100% by colin
// roc 2007-08 005ec600  unit: RBX::BodyThrust  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec600
//
// 005ec600  c70164e77b00         mov dword ptr [ecx], 0x7be764
// 005ec606  c741045ce77b00       mov dword ptr [ecx + 4], 0x7be75c
// 005ec60d  c7411054e77b00       mov dword ptr [ecx + 0x10], 0x7be754
// 005ec614  c7411444e77b00       mov dword ptr [ecx + 0x14], 0x7be744
// 005ec61b  c7412c34e77b00       mov dword ptr [ecx + 0x2c], 0x7be734
// 005ec622  c7414424e77b00       mov dword ptr [ecx + 0x44], 0x7be724
// 005ec629  c7415c14e77b00       mov dword ptr [ecx + 0x5c], 0x7be714
// 005ec630  c7417404e77b00       mov dword ptr [ecx + 0x74], 0x7be704
// 005ec637  c7818c000000f4e67b00 mov dword ptr [ecx + 0x8c], 0x7be6f4
// 005ec641  c781e8000000dce67b00 mov dword ptr [ecx + 0xe8], 0x7be6dc
// 005ec64b  c781f0000000d0e67b00 mov dword ptr [ecx + 0xf0], 0x7be6d0
// 005ec655  e9f6efffff           jmp 0x5eb650

struct BodyThrust {
    void construct();
};

void BodyThrust::construct()
{
    *(int*)((char*)this + 0x00) = 0x7be764;
    *(int*)((char*)this + 0x04) = 0x7be75c;
    *(int*)((char*)this + 0x10) = 0x7be754;
    *(int*)((char*)this + 0x14) = 0x7be744;
    *(int*)((char*)this + 0x2c) = 0x7be734;
    *(int*)((char*)this + 0x44) = 0x7be724;
    *(int*)((char*)this + 0x5c) = 0x7be714;
    *(int*)((char*)this + 0x74) = 0x7be704;
    *(int*)((char*)this + 0x8c) = 0x7be6f4;
    *(int*)((char*)this + 0xe8) = 0x7be6dc;
    *(int*)((char*)this + 0xf0) = 0x7be6d0;
    extern void func_005eb650();
    func_005eb650();
}
