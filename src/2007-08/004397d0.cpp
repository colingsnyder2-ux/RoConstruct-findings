// from server: 79% by colin
struct ContentId {
    char pad[4];
    void* ptr;
};

struct SoundId {
    char pad[0xe4];
    void* field_e4;
};

struct Descriptor {
    void* field_0;
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor* owner;
    int value;
    unsigned int index;
};

struct Name {
    void* field_0;
};

extern "C" void* __stdcall func_77e6a8(void*);

void* __fastcall func_682a20(void* self, void* name);
void* __fastcall func_699040(void* self);
void* __fastcall func_69d6e0(void* self, int val);
void* __fastcall func_698420(void* self);

struct SoundId2 {
    void* ctor(const Name* name);
};

void* SoundId2::ctor(const Name* name)
{
    void* p = func_77e6a8((void*)((char*)name + 4));
    void* obj = func_682a20(this, p);
    void* r = func_699040(*(void**)((char*)obj + 0xe4));
    if (r == 0) {
        void* p2 = func_77e6a8((void*)((char*)name + 4));
        void* obj2 = func_682a20(this, p2);
        void* r2 = func_69d6e0(obj2, 0);
        func_698420(r2);
        return r2;
    }
    return r;
}
