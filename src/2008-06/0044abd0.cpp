struct Object {
    virtual ~Object();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void close();
};
extern Object* activeObject;
typedef Object* (__thiscall *OpenFunction)(void*, const char*, int);
struct DocumentTable {
    void* reserved[34];
    OpenFunction open;
};
struct DocumentSource {
    DocumentTable* table;
};
extern void attemptOpen();
extern void __cdecl operator delete(void*);
extern "C" int __stdcall message(unsigned int, unsigned int, unsigned int);
struct CException {
};
struct Manager {
    char reserved[36];
    DocumentSource* source;
    void run();
};
void Manager::run()
{
    Object* old = activeObject;
    activeObject = 0;
    if (old)
        delete old;
    Object* document = source->table->open(source, 0, 1);
    try {
        attemptOpen();
        return;
    }
    catch (CException* e) {
        delete e;
        message(0xf104, 0, ~0U);
        if (document)
            document->close();
    }
}
