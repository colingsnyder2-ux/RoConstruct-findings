// from server: 61% by colin
struct Profiler;

struct Bucket {
    double getWallTime();
    double getSampleTime();
    double getNominalFramePeriod();
    double getActualFPS();
    double getNominalFPS();
    int frames;
    double sampleTimeElapsed;
};

struct Profiler {
    Bucket getWindow(double window);
};

struct String {
    char data[16];
    unsigned int size;
    unsigned int capacity;
    String();
    ~String();
    String& operator=(const char*);
    const char* c_str() const;
};

extern "C" int __cdecl sprintf(char*, const char*, ...);

struct ProfilingItem {
    char pad[0xe8];
    double val;
    String sValue;
    Profiler* p;
    void update();
};

void ProfilingItem::update() {
    double window = *(double*)0x796460;
    Bucket b = p->getWindow(window);
    if (b.sampleTimeElapsed > 0.0) {
        val = b.getWallTime() / b.sampleTimeElapsed;
        char buffer[256];
        if (b.frames > 0) {
            String t;
            t = "Replication: %s << %s-%d";
            sprintf(buffer, "%s, %.3gfps (%.3g%%)", t.c_str(), b.getActualFPS(), b.getNominalFPS());
            t.~String();
        } else {
            sprintf(buffer, "%.3g%%", 100.0 * val);
        }
        sValue = buffer;
    } else {
        val = 0.0;
        sValue = "?";
    }
}
