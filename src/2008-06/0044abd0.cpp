// from server: 100% by king_originala
struct Object {
    virtual ~Object();
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

extern void __declspec(noreturn) fail();

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
        fail();
    }
    catch (Object* exception) {
        delete document;
        throw;
    }
}
