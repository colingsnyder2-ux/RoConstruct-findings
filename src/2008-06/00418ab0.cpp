// from server: 94% by king_originala
typedef unsigned long DWORD;
typedef unsigned short ATOM;

struct WindowClass
{
    DWORD size;
    DWORD style;
    void* procedure;
    int classExtra;
    int windowExtra;
    void* instance;
    void* icon;
    void* cursor;
    void* background;
    const char* menuName;
    const char* className;
    void* smallIcon;
};

struct ClassInfo
{
    WindowClass wc;
    const char* originalName;
    void* originalProcedure;
    const char* cursorName;
    int systemCursor;
    ATOM atom;
    char generatedName[37];
};

struct Module
{
    DWORD unused;
    void* instance;
    void* resourceInstance;
};

struct LockOwner
{
    DWORD unused;
    DWORD lock;
};

struct Lock
{
    DWORD* object;
    bool locked;
    int acquire();
    ~Lock() throw();
};

typedef int (__stdcall *ClassQuery)(void*, const char*, WindowClass*);

extern "C" ClassQuery GetClassInfoExA;
extern "C" void* (__stdcall * const LoadCursorA)(void*, const char*);

extern int __cdecl sub_00413760(char*, unsigned int, const char*, ...);
extern ATOM __cdecl sub_00418580(void*, ClassInfo*);

ATOM __cdecl func_00418ab0(
    Module* module,
    LockOwner* owner,
    ClassInfo* info,
    void* registration,
    void** originalProcedure)
{
    if (!module || !owner || !info || !registration)
        return 0;

    if (!info->atom)
    {
        Lock guard = { &owner->lock, false };
        if (guard.acquire() < 0)
            return 0;

        if (!info->atom)
        {
            ClassQuery query = GetClassInfoExA;

            if (info->originalName)
            {
                const char* savedName = info->wc.className;
                void* savedProcedure = info->wc.procedure;
                WindowClass original;
                original.size = sizeof(WindowClass);

                if (!query(0, info->originalName, &original) &&
                    !query(module->instance, info->originalName, &original))
                    return 0;

                info->wc = original;
                info->originalProcedure = info->wc.procedure;
                info->wc.className = savedName;
                info->wc.procedure = savedProcedure;
            }
            else
            {
                info->wc.cursor = LoadCursorA(
                    info->systemCursor ? 0 : module->resourceInstance,
                    info->cursorName);
            }

            info->wc.instance = module->instance;
            info->wc.style &= 0xffffbfffUL;

            if (!info->wc.className)
            {
                sub_00413760(info->generatedName, 37,
                             reinterpret_cast<const char*>(info));
                info->wc.className = info->generatedName;
            }

            WindowClass existing = info->wc;
            info->atom = static_cast<ATOM>(
                query(info->wc.instance, info->wc.className, &existing));

            if (!info->atom)
                info->atom = sub_00418580(registration, info);
        }
    }

    if (info->originalName)
        *originalProcedure = info->originalProcedure;

    return info->atom;
}
