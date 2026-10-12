// from server: 97% by king_originala
struct TypeLibrary
{
    void** vtable;
};

typedef int (__stdcall *RegisterFunction)(TypeLibrary*, const wchar_t*, const wchar_t*);
typedef int (__stdcall *DocumentationFunction)(TypeLibrary*, int, wchar_t**, wchar_t**, unsigned long*, wchar_t**);
typedef unsigned long (__stdcall *ReleaseFunction)(TypeLibrary*);

extern "C" {
extern void* (__stdcall *GetModuleHandleW)(const wchar_t*);
extern void* (__stdcall *GetProcAddress)(void*, const char*);
extern unsigned int (__stdcall *SysStringLen)(const wchar_t*);
extern void (__stdcall *SysFreeString)(wchar_t*);
extern int (__cdecl *wcsncpy_s)(wchar_t*, unsigned int, const wchar_t*, unsigned int);
extern RegisterFunction RegisterTypeLib;
}

extern unsigned char perUserRegistration;
extern const wchar_t automationModule[];
extern const char userRegistrationName[];

extern int __stdcall loadLibrary(const wchar_t*, int, wchar_t**, TypeLibrary**);
extern void __cdecl checkResult(int);
extern int __stdcall directoryLength(const wchar_t*);

int __stdcall registerLibrary(const wchar_t* filename, int option)
{
    wchar_t* path = 0;
    TypeLibrary* library = 0;
    wchar_t directoryBuffer[260];

    int result = loadLibrary(filename, option, &path, &library);
    wchar_t* savedPath = path;
    void (__stdcall *freeString)(wchar_t*) = SysFreeString;

    if (result >= 0)
    {
        const wchar_t* directory = 0;
        path = 0;

        if (reinterpret_cast<DocumentationFunction>(library->vtable[9])(
                library, -1, 0, 0, 0, &path) >= 0 && path)
        {
            checkResult(wcsncpy_s(directoryBuffer, 260, path, SysStringLen(path)));
            directoryBuffer[259] = 0;
            directoryBuffer[directoryLength(directoryBuffer)] = 0;
            directory = directoryBuffer;
        }

        RegisterFunction registration = 0;
        if (perUserRegistration == 1)
        {
            void* module = GetModuleHandleW(automationModule);
            if (module)
                registration = reinterpret_cast<RegisterFunction>(
                    GetProcAddress(module, userRegistrationName));
        }

        if (!registration)
            registration = RegisterTypeLib;

        result = registration(library, savedPath, directory);
        freeString(path);
    }

    if (library)
        reinterpret_cast<ReleaseFunction>(library->vtable[2])(library);

    freeString(savedPath);
    return result;
}
