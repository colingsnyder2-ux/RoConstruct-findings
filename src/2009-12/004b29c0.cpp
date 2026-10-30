// roc 2009-12 004b29c0  unit: Ogre::RbxTextureCompositorSceneManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b29c0
//
// 004b29c0  8b8970010000         mov ecx, dword ptr [ecx + 0x170]
// 004b29c6  8b442404             mov eax, dword ptr [esp + 4]
// 004b29ca  8908                 mov dword ptr [eax], ecx
// 004b29cc  c20400               ret 4
// copied from an identical function in another client (function ?get_19c@seg_004c0000@@QAEHPAH@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD
struct seg_004c0000 {
    int get_19c(int *out);
};

int seg_004c0000::get_19c(int *out) {
    *out = *(int *)((char *)this + 0x170);
    return (int)out;
}