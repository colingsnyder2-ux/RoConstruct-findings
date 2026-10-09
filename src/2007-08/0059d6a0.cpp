// from server: 100% by colin
// roc 2007-08 0059d6a0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d6a0
//
// 0059d6a0  c7016c207b00         mov dword ptr [ecx], 0x7b206c
// 0059d6a6  c7410460207b00       mov dword ptr [ecx + 4], 0x7b2060
// 0059d6ad  c7411058207b00       mov dword ptr [ecx + 0x10], 0x7b2058
// 0059d6b4  c7411448207b00       mov dword ptr [ecx + 0x14], 0x7b2048
// 0059d6bb  c7412c38207b00       mov dword ptr [ecx + 0x2c], 0x7b2038
// 0059d6c2  c7414428207b00       mov dword ptr [ecx + 0x44], 0x7b2028
// 0059d6c9  c7415c18207b00       mov dword ptr [ecx + 0x5c], 0x7b2018
// 0059d6d0  c7417408207b00       mov dword ptr [ecx + 0x74], 0x7b2008
// 0059d6d7  c7818c000000f81f7b00 mov dword ptr [ecx + 0x8c], 0x7b1ff8
// 0059d6e1  c781e8000000f01f7b00 mov dword ptr [ecx + 0xe8], 0x7b1ff0
// 0059d6eb  e910ffffff           jmp 0x59d600

struct RBX_VLegacyHopperService_FactoryProduct
{
    void construct();
};

extern "C" void __cdecl func_0059d600();

void RBX_VLegacyHopperService_FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b206c;
    *(int*)((char*)this + 0x04) = 0x7b2060;
    *(int*)((char*)this + 0x10) = 0x7b2058;
    *(int*)((char*)this + 0x14) = 0x7b2048;
    *(int*)((char*)this + 0x2c) = 0x7b2038;
    *(int*)((char*)this + 0x44) = 0x7b2028;
    *(int*)((char*)this + 0x5c) = 0x7b2018;
    *(int*)((char*)this + 0x74) = 0x7b2008;
    *(int*)((char*)this + 0x8c) = 0x7b1ff8;
    *(int*)((char*)this + 0xe8) = 0x7b1ff0;
    func_0059d600();
}
