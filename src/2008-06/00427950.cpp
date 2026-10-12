// from server: 94% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern unsigned char loggingEnabled;

struct String
{
    unsigned char storage[28];

    ~String();
    const char* c_str() const;
};

struct CrashReporter
{
    unsigned char storage[200];

    CrashReporter(const char*, const char*);
};

struct ThreadLogManager
{
    virtual void reserved();
    virtual String getName();

    CrashReporter* reporter;
    unsigned int reservedData;
    String description;

    CrashReporter* getReporter();
};

CrashReporter* ThreadLogManager::getReporter()
{
    if (!loggingEnabled)
        return 0;

    if (!reporter)
        reporter = new CrashReporter(getName().c_str(), description.c_str());

    return reporter;
}
