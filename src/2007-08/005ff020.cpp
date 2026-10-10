// from server: 55% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    Verb(VerbContainer* container, const char* name);
};

struct RedoVerb : Verb {
    RedoVerb(VerbContainer* container, const char* name);
    bool isChecked() const;
};

extern "C" {
    void __stdcall std_string_ctor(void* self);
    void __stdcall std_string_dtor(void* self);
}

bool __stdcall sub_44D890(void* a, void* b);

RedoVerb::RedoVerb(VerbContainer* container, const char* name)
    : Verb(container, name)
{
    this->vtable = (void*)0x7c27e8;
}

bool RedoVerb::isChecked() const
{
    char buf[0x1c];
    std_string_ctor(buf);
    bool result = sub_44D890((char*)this->container + 0x160, buf);
    std_string_dtor(buf);
    return result;
}
