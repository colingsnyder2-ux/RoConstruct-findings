// from server: 42% by colin
typedef unsigned int DWORD;

struct String {
    char pad0[0x10];
    char* data;
    unsigned int size;
    unsigned int capacity;
    String();
    ~String();
    String& operator+=(char c);
};

extern "C" {
    int __stdcall isspace(int c);
    int __stdcall sscanf(const char* str, const char* format, ...);
}

struct Log {
    char pad0[0x34];
    char* buffer;
    int capacity;
    char pad3c[4];
    int position;
    int length;
    char pad48[0x18];

    int readChar();
    void ensureCapacity(int);
    void setPosition(int);
    int parse();
};

int Log::readChar() {
    int pos = position;
    if (pos + 1 > capacity) {
        ensureCapacity(pos + 1);
    }
    char c = buffer[position];
    position++;
    return c;
}

void Log::ensureCapacity(int) {}
void Log::setPosition(int) {}

int Log::parse() {
    String result;
    int c;
    do {
        c = readChar();
    } while (isspace(c));
    if (c != 0) {
        do {
            result += (char)c;
            c = readChar();
        } while (isspace(c) != 0);
    }
    result += 0;
    int val = 0;
    sscanf(result.data, "%d", &val);
    return val;
}
