// from server: 97% by king_originala
typedef long HRESULT;

struct Object;

struct ObjectTable {
    HRESULT (__stdcall *query)(Object *, const void *, void **);
    void *reserved[2];
    void *(__thiscall *destroy)(Object *, unsigned int);
};

struct Object {
    ObjectTable *table;
    unsigned char storage[36];
    Object(void *);
};

extern "C" HRESULT __stdcall CreateObject(void *, const void *, void **);

HRESULT __stdcall CreateObject(void *context, const void *iid, void **result)
{
    if (!result)
        return (HRESULT)0x80004003L;

    *result = 0;
    HRESULT status = (HRESULT)0x8007000EL;
    Object *object = 0;

    try {
        object = new Object(context);
    }
    catch (...) {
    }

    if (object) {
        status = object->table->query(object, iid, result);
        if (status != 0)
            object->table->destroy(object, 1);
    }

    return status;
}
