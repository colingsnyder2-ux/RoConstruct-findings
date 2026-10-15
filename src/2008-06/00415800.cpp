// from server: 91% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* (__stdcall* GlobalAlloc)(unsigned int, unsigned long);
extern "C" void* (__stdcall* GlobalLock)(void*);
extern "C" int (__stdcall* GlobalUnlock)(void*);
extern "C" int (__stdcall* OpenClipboard)(void*);
extern "C" int (__stdcall* EmptyClipboard)();
extern "C" int (__stdcall* CloseClipboard)();
extern "C" unsigned int (__stdcall* RegisterClipboardFormatA)(const char*);
extern "C" void* (__stdcall* SetClipboardData)(unsigned int, void*);
extern "C" char* __cdecl strcpy(char*, const char*);
#pragma intrinsic(strcpy)

struct Text
{
    unsigned char storage[20];
    unsigned int length;
    unsigned int capacity;
    ~Text();
    const char* c_str() const;
};

struct Stream
{
    unsigned char storage[128];
    Stream(int, int = 1);
    ~Stream();
    Text str() const;
};

extern void (__thiscall* constructStream)(Stream*, int, int);
extern void (__thiscall* destroyStream)(Stream*);
extern void (__thiscall* extractText)(const Stream*, Text*);
extern void (__thiscall* destroyText)(Text*);
extern const char* (__thiscall* textData)(const Text*);

inline Stream::Stream(int mode, int initialize)
{
    constructStream(this, mode, initialize);
}

inline Stream::~Stream()
{
    destroyStream(this);
}

inline Text Stream::str() const
{
    Text result;
    extractText(this, &result);
    return result;
}

inline Text::~Text()
{
    destroyText(this);
}

inline const char* Text::c_str() const
{
    return textData(this);
}

struct Resource
{
    unsigned char storage[36];
    ~Resource();
};

struct Serializer
{
    void* table;
    Resource resource;
    Serializer(Stream*);
    void write(void*);
};

struct Iterator
{
    void* data;
    unsigned int index;
};

struct Selection
{
    void* data;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int last;
    Iterator begin();
    Iterator end();
};

inline Iterator Selection::begin()
{
    unsigned int index = first;
    if (index > last)
        _invalid_parameter_noinfo();
    Iterator result = { data, index };
    return result;
}

inline Iterator Selection::end()
{
    unsigned int index = last;
    if (first > index)
        _invalid_parameter_noinfo();
    Iterator result = { data, index };
    return result;
}

struct Document
{
    unsigned char reserved[0x154];
    Selection* selection;
};

struct Owner
{
    Document* document();
};

struct Window
{
    unsigned char reserved[0x20];
    void* handle;
};

struct Application
{
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual Window* window();
};

struct Context
{
    void release();
};

extern Context* __cdecl getContext();
extern Application* __cdecl getApplication();
extern void __cdecl freeContext(void*);
extern void __cdecl copyItem();
extern void __cdecl copyRange(
    void**, Iterator, Iterator, void (__cdecl*)(), Context*);
extern void* serializerTable;
extern unsigned long clipboardInitialized;
extern unsigned int clipboardFormat;
extern const char clipboardFormatName[];

struct CopyVerb
{
    unsigned char reserved[0x20];
    Owner* owner;
    void execute(void*);
};

void CopyVerb::execute(void*)
{
    Context* context = getContext();
    Document* document = owner ? owner->document() : 0;
    Iterator last = document->selection->end();
    Iterator first = document->selection->begin();
    void* result;
    copyRange(&result, first, last, copyItem, context);

    Stream stream(2);
    Serializer serializer(&stream);
    serializer.table = &serializerTable;
    serializer.write(context);

    if (context)
    {
        context->release();
        freeContext(context);
    }

    Application* application = getApplication();
    Window* window = application ? application->window() : 0;
    if (OpenClipboard(window->handle))
    {
        EmptyClipboard();
        Text text = stream.str();
        void* memory = GlobalAlloc(2, text.length + 1);
        char* destination = static_cast<char*>(GlobalLock(memory));
        strcpy(destination, text.c_str());
        GlobalUnlock(memory);
        if (!(clipboardInitialized & 1))
        {
            clipboardInitialized |= 1;
            clipboardFormat = RegisterClipboardFormatA(clipboardFormatName);
        }
        SetClipboardData(clipboardFormat, memory);
        CloseClipboard();
    }
}
