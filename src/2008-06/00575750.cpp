// from server: 100% by colin
// roc 2008-06 00575750  unit: RBX::DataModel  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575750
//
// 00575750  56                   push esi
// 00575751  57                   push edi
// 00575752  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00575756  57                   push edi
// 00575757  8bf1                 mov esi, ecx
// 00575759  e842d5ffff           call 0x572ca0
// 0057575e  8b4710               mov eax, dword ptr [edi + 0x10]
// 00575761  8b5004               mov edx, dword ptr [eax + 4]
// 00575764  8d4f10               lea ecx, [edi + 0x10]
// 00575767  ffd2                 call edx
// 00575769  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0057576c  6a0d                 push 0xd
// 0057576e  83c004               add eax, 4
// 00575771  682cea8000           push 0x80ea2c
// 00575776  51                   push ecx
// 00575777  6a00                 push 0
// 00575779  8bc8                 mov ecx, eax
// 0057577b  ff15f4248000         call dword ptr [0x8024f4]
// 00575781  85c0                 test eax, eax
// 00575783  7539                 jne 0x5757be
// 00575785  83ec1c               sub esp, 0x1c
// 00575788  8bcc                 mov ecx, esp
// 0057578a  89642428             mov dword ptr [esp + 0x28], esp
// 0057578e  6800918100           push 0x819100
// 00575793  ff1558248000         call dword ptr [0x802458]
// 00575799  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 0057579f  e8dcdb0000           call 0x583380
// 005757a4  85c0                 test eax, eax
// 005757a6  740b                 je 0x5757b3
// 005757a8  8b10                 mov edx, dword ptr [eax]
// 005757aa  8bc8                 mov ecx, eax
// 005757ac  8b4210               mov eax, dword ptr [edx + 0x10]
// 005757af  6a00                 push 0
// 005757b1  ffd0                 call eax
// 005757b3  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 005757b9  e852ae0200           call 0x5a0610
// 005757be  5f                   pop edi
// 005757bf  5e                   pop esi
// 005757c0  c20400               ret 4

struct Item;
struct String;

extern void* (__thiscall* string_construct)(String*, const char*);
extern int (__thiscall* string_compare)(
    const String*, unsigned int, unsigned int, const char*, unsigned int);

struct String {
    char storage[20];
    unsigned int length;
    unsigned int capacity;

    __declspec(dllimport) String(const char*);
    String(const String&);
    ~String();
    int compare(unsigned int, unsigned int, const char*, unsigned int) const;
};

inline int String::compare(unsigned int pos, unsigned int count,
                           const char* text, unsigned int size) const {
    return string_compare(this, pos, count, text, size);
}

struct Name {
    char padding[4];
    String text;
};

struct NameSource {
    virtual void slot0();
    virtual Name* getName();
};

struct Item {
    char padding[0x10];
    NameSource source;
};

struct Verb {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void invoke(int);
};

struct Lookup {
    char storage[0x3c];
    Verb* find(String);
};

struct Controller {
    void f();
};

struct S {
    char padding[0x1c8];
    Lookup lookup;
    Controller* controller;

    void baseCall(Item*);
    void f(Item*);
};

void S::f(Item* item) {
    baseCall(item);
    String* text = &item->source.getName()->text;
    if (text->compare(0, text->length, "NetworkClient", 13) == 0) {
        Verb* verb = lookup.find(String("LockPlayMode"));
        if (verb)
            verb->invoke(0);
        controller->f();
    }
}
