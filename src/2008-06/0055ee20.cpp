// from server: 86% by king_originala
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

struct Manager;
typedef char * (__thiscall *ManagerFunction)(Manager *);

struct Manager {
    ManagerFunction *table;
};

extern Manager manager;
extern const char * __cdecl lookupString(unsigned int, unsigned int);

struct StringStorage {
    char *data;
    StringStorage();
    ~StringStorage();
};

inline StringStorage::StringStorage()
{
    data = manager.table[3](&manager) + 16;
}

struct String : StringStorage {
    String(const char *);
    void assign(const char *, unsigned int);
    void assignResource(const char *, unsigned int);
};

String::String(const char *text)
{
    if (text && ((unsigned int)text & 0xffff0000U) == 0) {
        unsigned int id = (unsigned short)(unsigned int)text;
        const char *resource = lookupString(id, 0);
        if (resource)
            assignResource(resource, id);
        return;
    }

    unsigned int length = text ? strlen(text) : 0;
    assign(text, length);
}
