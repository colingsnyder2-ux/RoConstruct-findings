// roc 2009-06 0066f620  unit: RBX::KernelJoint  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f620
//
// 0066f620  d9ee                 fldz 
// 0066f622  c3                   ret 
// copied from an identical function in another client (function ?f@Ogre_RbxMeshPartAdapter@ns_ROCX00009d@@QAEMXZ)

namespace ns_ROCX00009d {
struct Ogre_RbxMeshPartAdapter {
    char pad[868];
    float m_x;
    float f();
};

float Ogre_RbxMeshPartAdapter::f() {
    return 0.0f;
}
}
