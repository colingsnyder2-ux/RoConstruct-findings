// roc 2009-12 0057b870  unit: RBX::VCylinderMesh::?$FactoryProduct::Creator  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057b870
//
// 0057b870  ff4968               dec dword ptr [ecx + 0x68]
// 0057b873  c20400               ret 4
// copied from an identical function in another client (function ?Release@Ogre_istreamDataStream@ns_ROCX000009@@QAEXH@Z)

namespace ns_ROCX000009 {
// from server: 100% by tester
struct Ogre_istreamDataStream {
    char pad[104];
    int field_68;
    void Release(int);
};

void Ogre_istreamDataStream::Release(int) {
    --field_68;
}
}
