// from server: 78% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_newinstancewriterstdstring32ac812dfa988aaf.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <boost/shared_ptr.hpp>
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef std::string Text;

struct NamedText {
    unsigned prefix[2];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
    const char* c_str() const { return capacity < 16 ? buffer : pointer; }
};

struct NameInterface {
    virtual void unused();
    virtual NamedText* name();
};

struct Object {
    unsigned prefix[2];
    unsigned textPart[2];
    NameInterface namePart;
    unsigned callbackPart;
    unsigned unknown;
    unsigned identifier;
    void prepare();
};

struct TextPart {
    Text format(int);
};

typedef boost::shared_ptr<unsigned> Shared;

struct Lookup {
    int find(Object**);
};

struct IdentifierWriter {
    void write(void*, unsigned);
};

struct LabelProvider {
    const char* get(int);
};

struct Callback {
    const void* tag;
    void* object;
};

struct Owner {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual bool flag(Object*);
    void writeObject(void*, Object*);
    void finishObject(Object*, void*);
    void writeCallback(Callback*, int, void*);
};

struct Settings {
    char padding[0x131];
    bool logging;
};

extern Settings* __cdecl settings();
extern void __cdecl writeKind(void*, int);
extern Shared __cdecl acquire();
extern void __cdecl report(unsigned*, int, const char*, const char*, const char*, const char*);
extern void* __cdecl writeFlag(void*, bool);
extern const char message[];
extern const char callbackTag[];

struct Item {
    unsigned prefix;
    Owner* owner;
    Object* object;
    void write(void*);
};

void Item::write(void* stream)
{
    Object* key = object;
    if (!reinterpret_cast<Lookup*>(
            reinterpret_cast<char*>(owner) + 0x2c90)->find(&key))
        return;

    writeKind(stream, 2);
    owner->writeObject(stream, object);

    if (settings()->logging) {
        Object* instance = object;
        NameInterface* names = &instance->namePart;
        instance->prepare();

        report(acquire().get(), 1, message, names->name()->c_str(),
            reinterpret_cast<TextPart*>(reinterpret_cast<char*>(instance)+8)->format(4).c_str(),
            reinterpret_cast<LabelProvider*>(reinterpret_cast<char*>(owner)+0x2d54)->get(1));
    }

    reinterpret_cast<IdentifierWriter*>(
        reinterpret_cast<char*>(owner) + 0x2bb0)->write(
            stream, object->identifier);

    bool enabled = owner->flag(object);
    writeFlag(stream, enabled);
    owner->finishObject(object, stream);

    void* callbackObject = object
        ? reinterpret_cast<char*>(object) + 0x14
        : 0;

    Callback callback;
    callback.object = callbackObject;
    callback.tag = callbackTag;
    owner->writeCallback(&callback, 0, stream);
}
