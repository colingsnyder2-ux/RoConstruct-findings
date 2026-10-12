// from server: 94% by king_originala
typedef void (__thiscall *ReadFunction)(void *, char *, unsigned int, int);

extern void * __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void *);

extern ReadFunction objectTable[];
extern char logName[];

extern void __stdcall writeLog(int, const char *, int, int, const char *, int);

struct Base
{
    ReadFunction *table;
    unsigned int reserved;

    Base();
};

struct Object : Base
{
    unsigned int status;

    Object();
};

__forceinline Object::Object()
{
    table = objectTable;
    status = 0;
}

void func_0046ad70(int first, int second)
{
    char buffer[1024];
    Object *object = new Object;
    ReadFunction read = object->table[6];
    object->status = 0x80004001U;
    read(object, buffer, 1024, 0);
    writeLog(second, buffer, 0, 0, logName, first);
    throw object;
}
