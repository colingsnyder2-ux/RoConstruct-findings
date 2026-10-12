// from server: 83% by king_originala
struct FileStatus {
    unsigned int device;
    unsigned short inode;
    unsigned short mode;
    short links;
    short uid;
    short gid;
    unsigned int specialDevice;
    long size;
    __int64 accessed;
    __int64 modified;
    __int64 created;
};

extern "C" {
    extern int (__cdecl *_stat64i32)(const char *, FileStatus *);
    extern int (__cdecl *_unlink)(const char *);
}

struct String {
    unsigned int reserved;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

bool __cdecl checkFile(const String &first, const String &second)
{
    FileStatus firstStatus;
    FileStatus secondStatus;

    const char *firstName;
    if (first.capacity >= 16)
        firstName = first.storage.pointer;
    else
        firstName = first.storage.buffer;

    int (__cdecl *statFunction)(const char *, FileStatus *) = _stat64i32;
    if (statFunction(firstName, &firstStatus) != 0)
        return false;

    const char *secondName;
    if (second.capacity >= 16)
        secondName = second.storage.pointer;
    else
        secondName = second.storage.buffer;

    statFunction(secondName, &secondStatus);

    bool result;
    if (firstStatus.modified >= secondStatus.modified)
        result = true;
    else {
        result = false;
        if (first.capacity >= 16)
            firstName = first.storage.pointer;
        else
            firstName = first.storage.buffer;
        _unlink(firstName);
    }
    return result;
}
