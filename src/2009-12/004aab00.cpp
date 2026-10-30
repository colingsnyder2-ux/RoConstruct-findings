// roc 2009-12 004aab00  unit: Ogre::RbxMeshPartAdapter  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004aab00
//
// 004aab00  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004aab03  39442404             cmp dword ptr [esp + 4], eax
// 004aab07  7503                 jne 0x4aab0c
// 004aab09  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004aab0c  c20400               ret 4
// copied from an identical function in another client (function ?get@TwoDManager@ns_ROCX000010@@QAEHH@Z)

namespace ns_ROCX000010 {
// from server: 100% by why2
struct TwoDManager {
    char pad[0x10];
    int field10;
    int field14;
    int get(int arg);
};

int TwoDManager::get(int arg) {
    int result = field10;
    if (arg == result) {
        result = field14;
    }
    return result;
}
}
