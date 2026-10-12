// from server: 67% by king_originala
struct String {
    void* data;
    String(void*);
    String(const String&);
    ~String();
    void* manager() const;
    int length() const;
    const char* text() const;
};

extern void* (__thiscall *get_manager)(const String*);
extern void (__thiscall *construct_string)(String*, void*);
extern int (__thiscall *get_length)(const String*);
extern const char* (__thiscall *get_text)(const String*);
extern int (__cdecl *string_length)(const char*);
extern void (__cdecl *concatenate)(String*, const char*, int,
                                  const char*, int);

inline String::String(void* p)
{
    construct_string(this, p);
}

inline void* String::manager() const
{
    return get_manager(this);
}

inline int String::length() const
{
    return get_length(this);
}

inline const char* String::text() const
{
    return get_text(this);
}

String __cdecl operator+(const char* left, const String& right)
{
    String result(right.manager());
    concatenate(&result, left, string_length(left),
                right.text(), right.length());
    return result;
}
