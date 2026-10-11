// from server: 28% by Intel
typedef unsigned long DWORD;

extern "C" void __stdcall ReallocFn(DWORD* pValue, int count, DWORD* curPtr);

namespace Ogre {
    struct RbxEntity {
        char padding0[0xe8];
        DWORD* base;
        DWORD* current;
        DWORD* end;
        void Append(DWORD value);
    };
}

void Ogre::RbxEntity::Append(DWORD value)
{
    if (base == 0 || current >= end) {
        ReallocFn(&value, 1, current);
    } else {
        *current = value;
        ++current;
    }
}
