// from server: 76% by king_originala
typedef long HRESULT;

void* __cdecl operator new(unsigned int);
inline void* __cdecl operator new(unsigned int, void* address) { return address; }

struct Stream {
    char storage[0x88];
    Stream(int, int);
};

struct Service {
    virtual void unused() = 0;
    virtual void notify() = 0;
};

extern Service* service;
extern void* primaryTable[];
extern void* secondaryTable[];

struct AtlException {
    HRESULT result;
};

struct Object {
    void** primary;
    void** secondary;
    long references;
    Stream stream;

    static HRESULT __stdcall CreateInstance(Object** output);
};

HRESULT __stdcall Object::CreateInstance(Object** output)
{
    if (!output)
        return (HRESULT)0x80004003L;

    *output = 0;
    HRESULT result = (HRESULT)0x8007000EL;
    Object* object = 0;

    try {
        Object* allocated = (Object*)operator new(0x94);
        if (allocated) {
            allocated->references = 0;
            new (&allocated->stream) Stream(3, 1);
            allocated->primary = primaryTable;
            allocated->secondary = secondaryTable;
            service->notify();
            object = allocated;
        }

        if (object) {
            ++object->references;
            result = 0;
            --object->references;
        }
    }
    catch (const AtlException& exception) {
        result = exception.result;
    }
    catch (...) {
        result = (HRESULT)0x8007000EL;
    }

    *output = object;
    return result;
}
