// from server: 67% by king_originala
typedef unsigned int uint;

extern "C" uint __cdecl strlen(const char*);
#pragma intrinsic(strlen)

struct String {
    void* allocator;
    union {
        char local[16];
        char* heap;
    };
    uint length;
    uint capacity;

    String(const char*);
    ~String();
    String substr(uint, uint) const;
    uint find(const String&) const;
};

struct Image {
    Image& load(const String&, const String&);
};

typedef String* (__thiscall *ConstructString)(String*, const char*);
typedef void (__thiscall *DestroyString)(String*);
typedef String (__cdecl *AppendString)(const String&, const char*);
typedef String (__thiscall *Substring)(const String*, uint, uint);
typedef uint (__thiscall *FindString)(const String*, const char*, uint, uint);
typedef Image& (__thiscall *LoadImage)(Image*, const String&, const String&);

extern ConstructString constructString;
extern DestroyString destroyString;
extern AppendString appendString;
extern Substring substring;
extern FindString findString;
extern LoadImage loadImage;
extern const uint* stringNpos;

extern int __cdecl classify(const String&);
extern String __cdecl resourcePath();

inline String::String(const char* text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

inline String String::substr(uint offset, uint count) const
{
    return substring(this, offset, count);
}

inline uint String::find(const String& text) const
{
    return findString(this, text.capacity < 16 ? text.local : text.heap,
                      0, text.length);
}

bool __cdecl loadTexture(const String& filename, Image& image)
{
    const char* extensions[13] = {
        (const char*)0x84d1e0,
        (const char*)0x874bd0,
        (const char*)0x874bcc,
        (const char*)0x867d60,
        (const char*)0x874bc8,
        (const char*)0x874bc0,
        (const char*)0x874bbc,
        (const char*)0x874bb8,
        (const char*)0x874bb4,
        (const char*)0x874bb0,
        (const char*)0x874bac,
        (const char*)0x874ba8,
        (const char*)0x867d64
    };

    int i = 0;
    do {
        const char* extension = extensions[i];
        uint length = strlen(extension);
        bool recognized =
            filename.substr(filename.length - length - 1, *stringNpos)
                .find(appendString(String((const char*)0x81ca8c), extension))
            != *stringNpos;

        if (recognized) {
            bool success = true;
            try {
                String group((const char*)0x8163c4);
                loadImage(&image, filename, group);
            }
            catch (...) {
                success = false;
            }
            return success;
        }

        ++i;
    } while (i < 13);

    if (classify(filename) == 9) {
        String path = resourcePath();
        const char* text = filename.capacity < 16
            ? filename.local : filename.heap;
        bool success = true;
        try {
            String resolved = appendString(path, text);
            String group((const char*)0x8163c4);
            loadImage(&image, resolved, group);
        }
        catch (...) {
            success = false;
        }
        return success;
    }

    return false;
}
