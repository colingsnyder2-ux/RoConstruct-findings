// from server: 80% by colin
struct String
{
    char* data;

    String() throw();
    ~String() throw();
    void __cdecl Format(const char* format, ...);
    operator const char*() const throw();
    String& operator=(const char* text);
};

extern "C" __declspec(dllimport) int __stdcall VerQueryValueA(
    const void* block,
    const char* subBlock,
    void** value,
    unsigned int* length);

struct DxUserInput
{
    unsigned short language;
    unsigned short codePage;
    void* block;

    String query(const String& name);
};

String DxUserInput::query(const String& name)
{
    String result;
    String path;

    path.Format("\\StringFileInfo\\%04x%04x\\%s",
                language, codePage, name.data);

    void* value = 0;
    unsigned int length = 0;

    if (VerQueryValueA(block, path, &value, &length))
        result = static_cast<const char*>(value);

    return result;
}
