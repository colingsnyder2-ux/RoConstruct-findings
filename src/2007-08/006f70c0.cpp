// from server: 85% by colin
// roc 2007-08 006f70c0  unit: PAVCXTPPropertyGridInplaceControl::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f70c0
//
// 006f70c0  56                   push esi
// 006f70c1  8bf1                 mov esi, ecx
// 006f70c3  e8c8f8ffff           call 0x6f6990
// 006f70c8  8d8e8c000000         lea ecx, [esi + 0x8c]
// 006f70ce  c706a4c37d00         mov dword ptr [esi], 0x7dc3a4
// 006f70d4  ff15acdd7700         call dword ptr [0x77ddac]
// 006f70da  33c0                 xor eax, eax
// 006f70dc  898694000000         mov dword ptr [esi + 0x94], eax
// 006f70e2  c78690000000e0647800 mov dword ptr [esi + 0x90], 0x7864e0
// 006f70ec  89869c000000         mov dword ptr [esi + 0x9c], eax
// 006f70f2  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 006f70f8  898698000000         mov dword ptr [esi + 0x98], eax
// 006f70fe  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 006f7104  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006f710a  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 006f7110  8986ac000000         mov dword ptr [esi + 0xac], eax
// 006f7116  8bc6                 mov eax, esi
// 006f7118  5e                   pop esi
// 006f7119  c3                   ret 

struct CArrayBase {
    void construct();
};

struct CArrayDerived : CArrayBase {
    char pad[0x8c - sizeof(CArrayBase)];
    void* field_8c;
    void* field_90;
    void* field_94;
    void* field_98;
    void* field_9c;
    void* field_a0;
    void* field_a4;
    void* field_a8;
    void* field_ac;
    void* field_b0;

    CArrayDerived* construct();
};

extern "C" void __stdcall sub_77ddac();

CArrayDerived* CArrayDerived::construct()
{
    CArrayBase::construct();
    this->field_90 = (void*)0x7864e0;
    sub_77ddac();
    this->field_94 = 0;
    this->field_9c = 0;
    this->field_a0 = 0;
    this->field_98 = 0;
    this->field_a4 = 0;
    this->field_a8 = 0;
    this->field_b0 = 0;
    this->field_ac = 0;
    return this;
}
