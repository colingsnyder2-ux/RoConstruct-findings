// from server: 100% by colin
// roc 2010-06 008edde0  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?P::FileLoader  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008edde0
//
// 008edde0  d9ee                 fldz 
// 008edde2  c3                   ret 

struct Ogre_RbxMeshPartAdapter {
    char pad[868];
    float m_x;
    float f();
};

float Ogre_RbxMeshPartAdapter::f() {
    return 0.0f;
}
