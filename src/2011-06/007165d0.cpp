// from server: 48% by atomic.potato
// roc 2011-06 007165d0  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007165d0
//
// 007165d0  837c240400           cmp dword ptr [esp + 4], 0
// 007165d5  56                   push esi
// 007165d6  8bf1                 mov esi, ecx
// 007165d8  7414                 je 0x7165ee
// 007165da  c78694000000c001ab00 mov dword ptr [esi + 0x94], 0xab01c0
// 007165e4  c786c4000000680daa00 mov dword ptr [esi + 0xc4], 0xaa0d68
// 007165ee  6a00                 push 0
// 007165f0  e83bf9ffff           call 0x715f30
// 007165f5  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 007165fb  c7062cfeaa00         mov dword ptr [esi], 0xaafe2c
// 00716601  c7460424feaa00       mov dword ptr [esi + 4], 0xaafe24
// 00716608  c7461818feaa00       mov dword ptr [esi + 0x18], 0xaafe18
// 0071660f  c7461c0cfeaa00       mov dword ptr [esi + 0x1c], 0xaafe0c
// 00716616  c7869000000004feaa00 mov dword ptr [esi + 0x90], 0xaafe04
// 00716620  c786a0000000f0fdaa00 mov dword ptr [esi + 0xa0], 0xaafdf0
// 0071662a  c786ac000000c8fdaa00 mov dword ptr [esi + 0xac], 0xaafdc8
// 00716634  c786c0000000a0fdaa00 mov dword ptr [esi + 0xc0], 0xaafda0
// 0071663e  8b4804               mov ecx, dword ptr [eax + 4]
// 00716641  c784319400000098fdaa00 mov dword ptr [ecx + esi + 0x94], 0xaafd98
// 0071664c  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00716652  8b4204               mov eax, dword ptr [edx + 4]
// 00716655  8d8800feffff         lea ecx, [eax - 0x200]
// 0071665b  898c3090000000       mov dword ptr [eax + esi + 0x90], ecx
// 00716662  8bc6                 mov eax, esi
// 00716664  5e                   pop esi
// 00716665  c20400               ret 4

struct VVehicleSeat {
    char pad0[0x90];
    void* field90;
    void* field94;
    char pad98[0x2c];
    void* fieldc4;
    void sub_715f30(int);
};

void VVehicleSeat::sub_715f30(int) {}

VVehicleSeat* __stdcall VVehicleSeat_ctor(VVehicleSeat* self, int flag) {
    if (flag != 0) {
        *(void**)((char*)self + 0x94) = (void*)0xab01c0;
        *(void**)((char*)self + 0xc4) = (void*)0xaa0d68;
    }
    self->sub_715f30(0);
    void* p94 = *(void**)((char*)self + 0x94);
    *(void**)self = (void*)0xaafe2c;
    *(void**)((char*)self + 4) = (void*)0xaafe24;
    *(void**)((char*)self + 0x18) = (void*)0xaafe18;
    *(void**)((char*)self + 0x1c) = (void*)0xaafe0c;
    *(void**)((char*)self + 0x90) = (void*)0xaafe04;
    *(void**)((char*)self + 0xa0) = (void*)0xaafdf0;
    *(void**)((char*)self + 0xac) = (void*)0xaafdc8;
    *(void**)((char*)self + 0xc0) = (void*)0xaafda0;
    void* ecx = *(void**)((char*)p94 + 4);
    *(void**)((char*)ecx + (int)self + 0x94) = (void*)0xaafd98;
    void* edx = *(void**)((char*)self + 0x94);
    void* eax = *(void**)((char*)edx + 4);
    void* ecx2 = (void*)((char*)eax - 0x200);
    *(void**)((char*)eax + (int)self + 0x90) = ecx2;
    return self;
}
