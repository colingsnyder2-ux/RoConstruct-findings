// from server: 100% by colin
// roc 2007-08 005b08e0  unit: RBX::VRotateV::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b08e0
//
// 005b08e0  c701fc677b00         mov dword ptr [ecx], 0x7b67fc
// 005b08e6  c74104f4677b00       mov dword ptr [ecx + 4], 0x7b67f4
// 005b08ed  c74110ec677b00       mov dword ptr [ecx + 0x10], 0x7b67ec
// 005b08f4  c74114dc677b00       mov dword ptr [ecx + 0x14], 0x7b67dc
// 005b08fb  c7412ccc677b00       mov dword ptr [ecx + 0x2c], 0x7b67cc
// 005b0902  c74144bc677b00       mov dword ptr [ecx + 0x44], 0x7b67bc
// 005b0909  c7415cac677b00       mov dword ptr [ecx + 0x5c], 0x7b67ac
// 005b0910  c741749c677b00       mov dword ptr [ecx + 0x74], 0x7b679c
// 005b0917  c7818c0000008c677b00 mov dword ptr [ecx + 0x8c], 0x7b678c
// 005b0921  c781e800000074677b00 mov dword ptr [ecx + 0xe8], 0x7b6774
// 005b092b  e9c0faffff           jmp 0x5b03f0

struct RBX_VRotateV {
    void construct();
};

extern "C" void __fastcall sub_5B03F0();

void RBX_VRotateV::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b67fc;
    *(int*)((char*)this + 0x04) = 0x7b67f4;
    *(int*)((char*)this + 0x10) = 0x7b67ec;
    *(int*)((char*)this + 0x14) = 0x7b67dc;
    *(int*)((char*)this + 0x2c) = 0x7b67cc;
    *(int*)((char*)this + 0x44) = 0x7b67bc;
    *(int*)((char*)this + 0x5c) = 0x7b67ac;
    *(int*)((char*)this + 0x74) = 0x7b679c;
    *(int*)((char*)this + 0x8c) = 0x7b678c;
    *(int*)((char*)this + 0xe8) = 0x7b6774;
    sub_5B03F0();
}
