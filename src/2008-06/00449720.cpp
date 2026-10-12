// from server: 99% by king_originala
struct Document;
struct Frame;

typedef void (__thiscall *AssignText)(void*, const char*);
extern AssignText assignText;

extern "C" int __stdcall reportError(unsigned int, unsigned int, unsigned int);

struct Application {
    void beginWait();
};

struct Thread {
    Application* unused;
    Application* application;
};

Thread* __cdecl getThread();

struct WaitCursor {
    ~WaitCursor();
};

struct Document {
    void** table;
    char padding[0x48];
    int autoDelete;
    int embedded;
};

struct Frame {
    void** table;
};

struct Template {
    void** table;
    char padding[0x88];
    int untitledCount;
    int unused;
    void* title;

    Document* open(const char* path, int visible);
};

Document* Template::open(const char* path, int visible)
{
    void* text = &title;
    assignText(text, (const char*)0x80b716);

    Document* document =
        ((Document* (__thiscall *)(Template*))table[0x74 / 4])(this);

    if (!document) {
        assignText(text, "CDocTemplate::CreateNewDocument returned NULL");
        reportError(0xf104, 0, (unsigned int)-1);
        return 0;
    }

    int saved = document->autoDelete;
    document->autoDelete = 0;

    Frame* frame =
        ((Frame* (__thiscall *)(Template*, Document*, Frame*))
            table[0x78 / 4])(this, document, 0);

    document->autoDelete = saved;

    if (!frame) {
        assignText(text, "CreateNewFrame returned NULL");
        reportError(0xf104, 0, (unsigned int)-1);
        ((void (__thiscall *)(Document*, unsigned int))
            document->table[1])(document, 1);
        return 0;
    }

    if (!path) {
        ((void (__thiscall *)(Template*, Document*))
            table[0x8c / 4])(this, document);

        if (!visible)
            document->embedded = 1;

        if (!((int (__thiscall *)(Document*))
                document->table[0x78 / 4])(document)) {
            assignText(text, "CDocument::OnNewDocument returned FALSE");
            ((void (__thiscall *)(Frame*))frame->table[0x68 / 4])(frame);
            return 0;
        }

        ++untitledCount;
    } else {
        getThread()->application->beginWait();
        WaitCursor wait;

        if (!((int (__thiscall *)(Document*, const char*))
                document->table[0x7c / 4])(document, path)) {
            assignText(text, "CDocument::OnNewDocument returned FALSE (v2)");
            ((void (__thiscall *)(Frame*))frame->table[0x68 / 4])(frame);
            return 0;
        }

        ((void (__thiscall *)(Document*, const char*, int))
            document->table[0x5c / 4])(document, path, 1);
    }

    ((void (__thiscall *)(Template*, Frame*, Document*, int))
        table[0x7c / 4])(this, frame, document, visible);

    return document;
}
