// from server: 100% by colin
// roc 2007-08 005b0860  unit: RBX::VRotateP::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0860
//
// 005b0860  c7012c677b00         mov dword ptr [ecx], 0x7b672c
// 005b0866  c7410424677b00       mov dword ptr [ecx + 4], 0x7b6724
// 005b086d  c741101c677b00       mov dword ptr [ecx + 0x10], 0x7b671c
// 005b0874  c741140c677b00       mov dword ptr [ecx + 0x14], 0x7b670c
// 005b087b  c7412cfc667b00       mov dword ptr [ecx + 0x2c], 0x7b66fc
// 005b0882  c74144ec667b00       mov dword ptr [ecx + 0x44], 0x7b66ec
// 005b0889  c7415cdc667b00       mov dword ptr [ecx + 0x5c], 0x7b66dc
// 005b0890  c74174cc667b00       mov dword ptr [ecx + 0x74], 0x7b66cc
// 005b0897  c7818c000000bc667b00 mov dword ptr [ecx + 0x8c], 0x7b66bc
// 005b08a1  c781e8000000a4667b00 mov dword ptr [ecx + 0xe8], 0x7b66a4
// 005b08ab  e940fbffff           jmp 0x5b03f0

struct S_func_005b0860 {
    char pad0[0x10];
    int m_10;
    int m_14;
    char pad1[0x14];
    int m_2c;
    char pad2[0x14];
    int m_44;
    char pad3[0x14];
    int m_5c;
    char pad4[0x14];
    int m_74;
    char pad5[0x14];
    int m_8c;
    char pad6[0x58];
    int m_e8;
    void f();
};

extern "C" void __stdcall sub_5b03f0();

void S_func_005b0860::f()
{
    *(int*)((char*)this + 0) = 0x7b672c;
    *(int*)((char*)this + 4) = 0x7b6724;
    m_10 = 0x7b671c;
    m_14 = 0x7b670c;
    m_2c = 0x7b66fc;
    m_44 = 0x7b66ec;
    m_5c = 0x7b66dc;
    m_74 = 0x7b66cc;
    m_8c = 0x7b66bc;
    m_e8 = 0x7b66a4;
    sub_5b03f0();
}
