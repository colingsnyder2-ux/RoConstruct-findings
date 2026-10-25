// from server: 100% by tester
// roc 2011-06 0095e900  unit: Ogre::RbxMeshPartAdapter  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e900
//
// 0095e900  8b4908               mov ecx, dword ptr [ecx + 8]
// 0095e903  8b442404             mov eax, dword ptr [esp + 4]
// 0095e907  8908                 mov dword ptr [eax], ecx
// 0095e909  c20400               ret 4

struct OgreRbxMeshPartAdapter {
    char pad[8];
    void* member;

    void* __thiscall func(void* out);
};

void* __thiscall OgreRbxMeshPartAdapter::func(void* out) {
    void* value = this->member;
    *static_cast<void**>(out) = value;
    return out;
}
