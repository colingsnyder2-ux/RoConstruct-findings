// from server: 89% by atomic.potato
struct Ogre_TexturePtr {
    void __thiscall destroy();
};

struct Ogre_VRbxFont_SharedPtr {
    char pad0[4];
    Ogre_TexturePtr* ptr;
    void* ptr2;
    void __thiscall release();
};

extern "C" void __cdecl sub_718A32(void*);
extern "C" void __stdcall sub_8A07D0(void*);

void Ogre_VRbxFont_SharedPtr::release()
{
    Ogre_TexturePtr* p = this->ptr;
    if (p)
    {
        sub_8A07D0((char*)p + 0x20c);
        sub_718A32(p);
    }
    sub_718A32(this->ptr2);
}
