// from server: 100% by colin
// roc 2007-08 005b22f0  unit: RBX::VWeld::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b22f0
//
// 005b22f0  8b442404             mov eax, dword ptr [esp + 4]
// 005b22f4  56                   push esi
// 005b22f5  50                   push eax
// 005b22f6  8bf1                 mov esi, ecx
// 005b22f8  e823faffff           call 0x5b1d20
// 005b22fd  c7063c7a7b00         mov dword ptr [esi], 0x7b7a3c
// 005b2303  c74604347a7b00       mov dword ptr [esi + 4], 0x7b7a34
// 005b230a  c746102c7a7b00       mov dword ptr [esi + 0x10], 0x7b7a2c
// 005b2311  c746141c7a7b00       mov dword ptr [esi + 0x14], 0x7b7a1c
// 005b2318  c7462c0c7a7b00       mov dword ptr [esi + 0x2c], 0x7b7a0c
// 005b231f  c74644fc797b00       mov dword ptr [esi + 0x44], 0x7b79fc
// 005b2326  c7465cec797b00       mov dword ptr [esi + 0x5c], 0x7b79ec
// 005b232d  c74674dc797b00       mov dword ptr [esi + 0x74], 0x7b79dc
// 005b2334  c7868c000000cc797b00 mov dword ptr [esi + 0x8c], 0x7b79cc
// 005b233e  c786e8000000b4797b00 mov dword ptr [esi + 0xe8], 0x7b79b4
// 005b2348  8bc6                 mov eax, esi
// 005b234a  5e                   pop esi
// 005b234b  c20400               ret 4

struct VWeld {
    char pad[0x100];
    void construct(int);
    VWeld* init(int);
};

VWeld* VWeld::init(int arg) {
    construct(arg);
    *(int*)((char*)this + 0x00) = 0x7b7a3c;
    *(int*)((char*)this + 0x04) = 0x7b7a34;
    *(int*)((char*)this + 0x10) = 0x7b7a2c;
    *(int*)((char*)this + 0x14) = 0x7b7a1c;
    *(int*)((char*)this + 0x2c) = 0x7b7a0c;
    *(int*)((char*)this + 0x44) = 0x7b79fc;
    *(int*)((char*)this + 0x5c) = 0x7b79ec;
    *(int*)((char*)this + 0x74) = 0x7b79dc;
    *(int*)((char*)this + 0x8c) = 0x7b79cc;
    *(int*)((char*)this + 0xe8) = 0x7b79b4;
    return this;
}
