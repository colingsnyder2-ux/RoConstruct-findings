// from server: 57% by colin
// roc 2008-06 007ad310  unit: RBX::RenderNew::Material::Level  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad310

struct OgreString {
    void* rep;
    OgreString();
    OgreString(const OgreString&);
    ~OgreString();
};

struct OgreMaterialPtr {
    void* p;
    ~OgreMaterialPtr();
};

struct OgreLogManager {
    void logMessage(const OgreString&, int, bool);
};

struct OgreMaterialManager {
    void* getByName(const char*);
};

struct OgreSingleton {
    static OgreLogManager& getSingleton();
};

extern "C" {
    void* __stdcall InterlockedDecrement(void*);
    void* __stdcall sub_80245c();
    void* __stdcall sub_804e60();
    void* __stdcall sub_802368();
    void* __stdcall sub_804e74();
    void* __stdcall sub_804e78();
    void* __stdcall sub_802468();
    void* __stdcall sub_804e70();
}

extern void* __stdcall sub_45ad90(void*);

struct Level {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
    char pad_10[0x1c];
    void* field_2c;
    void* field_30;
    void destroy();
};

void Level::destroy()
{
    this->vtable = (void*)0x874ae4;
    if (this->field_30) {
        void* p = (char*)this->field_30 + 0x24;
        OgreString s1;
        sub_80245c();
        sub_804e60();
        void* m = *(void**)((char*)this->field_30 + 0x5c);
        void* vt = *(void**)m;
        ((void (__thiscall*)(void*, void*))*(void**)((char*)vt + 0x3c))(m, m);
        OgreString s2;
        sub_802368();
        void* mat = sub_804e74();
        sub_804e78();
        sub_802468();
        sub_802468();
    }
    sub_804e70();
    if (this->field_c) {
        void* p = (char*)this->field_c + 4;
        if (InterlockedDecrement(p) == 0) {
            sub_45ad90(this->field_c);
            if (this->field_c) {
                void* vt = *(void**)this->field_c;
                ((void (__thiscall*)(void*, int))*(void**)((char*)vt))(this->field_c, 1);
            }
        }
        this->field_c = 0;
    }
    if (this->field_8) {
        void* p = (char*)this->field_8 + 4;
        if (InterlockedDecrement(p) == 0) {
            sub_45ad90(this->field_8);
            if (this->field_8) {
                void* vt = *(void**)this->field_8;
                ((void (__thiscall*)(void*, int))*(void**)((char*)vt))(this->field_8, 1);
            }
        }
        this->field_8 = 0;
    }
    this->vtable = (void*)0x874a8c;
}
