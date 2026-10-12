// from server: 92% by king_originala
struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
    String& operator=(const String&);

    const char* c_str() const {
        const char* result = storage.pointer;
        if (capacity < 16)
            result = storage.buffer;
        return result;
    }
};

String __cdecl describeTime(double);
String __cdecl formatText(const char*, ...);

struct Sample {
    char padding[0x48];
    volatile double time;
};

struct LaserTool {
    char padding[0x130];
    double time;
    String text;

    void update(const Sample&);
};

void LaserTool::update(const Sample& sample)
{
    time = sample.time;
    if (0.0 < sample.time) {
        String description = describeTime(sample.time);
        double interval = sample.time;
        text = formatText("%s (%.3gfps)", description.c_str(),
                          1.0 / interval);
    } else {
        text = describeTime(sample.time);
    }
}
