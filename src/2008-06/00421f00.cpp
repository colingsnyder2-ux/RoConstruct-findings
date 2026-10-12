// from server: 91% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall queryState(unsigned long*);
extern "C" unsigned long __stdcall activateContext(void*);
extern "C" void __stdcall reportFailure();
extern "C" void __stdcall releaseContext(unsigned long);

struct CSettingsExplorer {
    char padding[0x64];
    void* procedure;

    void** getProcedure(void** result);
    int beginDrag(void* imageList, int image, int x, int y);
};

int CSettingsExplorer::beginDrag(void* imageList, int image, int x, int y)
{
    unsigned long state = 0;
    unsigned long context = activateContext(queryState(&state)->context);
    int result = 0;

    if (!context)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        typedef int (__stdcall *Procedure)(void*, int, int, int);
        Procedure function = reinterpret_cast<Procedure>(procedure);

        if (!function)
            reportFailure();

        result = function(imageList, image, x, y);
    }
    __finally {
        releaseContext(context);
    }

    return result;
}
