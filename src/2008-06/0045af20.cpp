// from server: 95% by king_originala
struct String {
    char data[28];
    String();
    ~String();
    String& operator=(const char*);
};

extern void (__thiscall *constructString)(String*);
extern String& (__thiscall *assignString)(String*, const char*);

extern "C" {
    extern long (__stdcall *SHGetSpecialFolderLocation)(void*, int, void**);
    extern int (__stdcall *SHGetPathFromIDListA)(const void*, char*);
}

inline String::String()
{
    constructString(this);
}

inline String& String::operator=(const char* text)
{
    return assignString(this, text);
}

String getFolderPath(int folder)
{
    String result;
    void* item;
    char path[260];

    if (SHGetSpecialFolderLocation(0, folder, &item) >= 0) {
        if (SHGetPathFromIDListA(item, path))
            result = path;
    }

    return result;
}
