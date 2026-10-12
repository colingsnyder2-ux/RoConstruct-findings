// from server: 95% by king_originala
struct String;
struct CString;

extern String* (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern String* (__thiscall *string_append_string)(String*, const String&);
extern String* (__thiscall *string_append_text)(String*, const char*);
extern String* (__thiscall *string_erase)(String*, unsigned, unsigned);
extern const char* (__thiscall *string_data)(const String*);
extern const unsigned* string_npos;

extern int (__cdecl *text_length)(const char*);
extern int (__stdcall *path_append)(char*, const char*);
extern int (__thiscall *cstring_length)(const CString*);
extern char* (__thiscall *cstring_buffer)(CString*, int);
extern void (__thiscall *cstring_release)(CString*, int);
extern const char* (__thiscall *cstring_data)(const CString*);
extern void (__thiscall *cstring_destroy)(CString*);

struct String {
    char storage[28];

    String(const char*);
    ~String();
    String& operator+=(const String&);
    String& operator+=(const char*);
    String& erase(unsigned, unsigned);
    const char* c_str() const;
};

struct CString {
    char* storage;

    ~CString();
    int GetLength() const;
    char* GetBuffer(int);
    void ReleaseBuffer(int);
    operator const char*() const;
};

__forceinline String::String(const char* value) {
    string_construct(this, value);
}

__forceinline String::~String() {
    string_destroy(this);
}

__forceinline String& String::operator+=(const String& value) {
    return *string_append_string(this, value);
}

__forceinline String& String::operator+=(const char* value) {
    return *string_append_text(this, value);
}

__forceinline String& String::erase(unsigned position, unsigned count) {
    return *string_erase(this, position, count);
}

__forceinline const char* String::c_str() const {
    return string_data(this);
}

__forceinline CString::~CString() {
    cstring_destroy(this);
}

__forceinline int CString::GetLength() const {
    return cstring_length(this);
}

__forceinline char* CString::GetBuffer(int size) {
    return cstring_buffer(this, size);
}

__forceinline void CString::ReleaseBuffer(int length) {
    cstring_release(this, length);
}

__forceinline CString::operator const char*() const {
    return cstring_data(this);
}

struct MainLogManager {
    char padding[44];
    String suffix;

    CString getPath();
    String getLogFile();
};

String MainLogManager::getLogFile() {
    CString path = getPath();
    String name("log_");
    name += suffix;
    name.erase(12, *string_npos);
    name.erase(4, 3);
    name += ".txt";

    const char* filename = name.c_str();
    int length = text_length(filename);
    char* buffer = path.GetBuffer(path.GetLength() + length + 1);
    path_append(buffer, filename);
    path.ReleaseBuffer(-1);

    return String((const char*)path);
}
