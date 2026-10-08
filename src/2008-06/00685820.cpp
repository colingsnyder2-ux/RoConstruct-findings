// from server: 54% by colin
// roc 2008-06 00685820  unit: Ogre::RbxSubEntity  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685820
//
// 00685820  d9442404             fld dword ptr [esp + 4]
// 00685824  d99938010000         fstp dword ptr [ecx + 0x138]
// 0068582a  c20400               ret 4

struct OgreRbxSubEntity {
    float value;
    bool external;
    bool unparsed;
    bool literal;
    bool hasBeenParsed;
    bool isCurrentlyReferenced;

    OgreRbxSubEntity(float val = 0.0f)
        : value(val), external(false), unparsed(false), literal(false),
          hasBeenParsed(false), isCurrentlyReferenced(false) {}

    int someMethod(float param);
};

extern "C" __declspec(dllimport) void someFunction(float);

int OgreRbxSubEntity::someMethod(float param) {
    this->value = param;
    someFunction(this->value);
    return 0;
}
