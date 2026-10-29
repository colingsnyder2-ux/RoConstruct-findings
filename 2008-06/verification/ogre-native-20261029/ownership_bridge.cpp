#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <stdio.h>
int destroyed = 0;
class TestValue : public Ogre::AnimableValue {
public:
    TestValue() : AnimableValue(REAL) {}
    ~TestValue() { ++destroyed; }
    void setCurrentStateAsBaseValue() { setAsBaseValue(1.0f); }
};
extern "C" int native_ownership_smoke() {
    Ogre::SharedPtr<Ogre::AnimableValue>* value = new Ogre::SharedPtr<Ogre::AnimableValue>(new TestValue);
    if (value->useCount() != 1) return 1;
    {
        Ogre::SharedPtr<Ogre::AnimableValue> copy(*value);
        if (copy.getPointer() != value->getPointer() || value->useCount() != 2) return 2;
        copy->setCurrentStateAsBaseValue();
    }
    if (!value->unique() || destroyed != 0) return 3;
    delete value;
    if (destroyed != 1) return 4;
    puts("Ogre library ownership: copied references, one final destruction");
    return 0;
}
