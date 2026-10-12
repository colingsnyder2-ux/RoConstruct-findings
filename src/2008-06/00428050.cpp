// from server: 97% by king_originala
struct String;
struct Path;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);
extern String &(__thiscall *string_append_string)(String *, const String &);
extern String &(__thiscall *string_append_text)(String *, const char *);
extern String &(__thiscall *string_erase)(String *, unsigned int, unsigned int);
extern const char *(__thiscall *string_c_str)(const String *);
extern const unsigned int *string_npos;

extern unsigned int (__cdecl *text_length)(const char *);
extern int (__stdcall *path_append)(char *, const char *);
extern int (__thiscall *path_length)(const Path *);
extern char *(__thiscall *path_get_buffer)(Path *, int);
extern void (__thiscall *path_release_buffer)(Path *, int);
extern const char *(__thiscall *path_text)(const Path *);
extern void (__thiscall *path_destroy)(Path *);

struct Path
{
    unsigned char data[4];
    ~Path();
};

struct String
{
    unsigned char data[28];
    String(const char *);
    ~String();
    Path getPath() const;
};

inline String::String(const char *text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

inline Path::~Path()
{
    path_destroy(this);
}

struct MainLogManager
{
    unsigned int first;
    String directory;
    unsigned char padding[16];
    String identifier;

    String func_00428050(const char *);
};

String MainLogManager::func_00428050(const char *name)
{
    Path path = directory.getPath();
    String filename("log_");
    string_append_string(&filename, identifier);
    string_erase(&filename, 12, *string_npos);
    string_erase(&filename, 4, 3);
    string_append_text(&filename, name);
    string_append_text(&filename, ".txt");

    const char *text = string_c_str(&filename);
    unsigned int length = text_length(text);
    int currentLength = path_length(&path);
    char *buffer = path_get_buffer(&path, length + currentLength + 1);
    path_append(buffer, text);
    path_release_buffer(&path, -1);

    return String(path_text(&path));
}
