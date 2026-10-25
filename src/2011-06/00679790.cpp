// from server: 100% by tester
// roc 2011-06 00679790  unit: RBX::SpecialShape  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679790
//
// 00679790  8b442404             mov eax, dword ptr [esp + 4]
// 00679794  8b048538afc500       mov eax, dword ptr [eax*4 + 0xc5af38]
// 0067979b  c3                   ret 

extern "C" int dword_DB980C[];

struct VExplosion {
    struct EventDesc {
        static int func(int index);
    };
};

int VExplosion::EventDesc::func(int index) {
    return dword_DB980C[index];
}
