// from server: 92% by king_originala
extern double __cdecl sampleTime();

struct Profiler
{
    char reserved0[8];
    double interval;
    unsigned int index;
    char reserved1[4];

    struct Entry
    {
        double elapsed;
        double count;
        double reserved;
    };

    Entry entries[2048];
    double lastTime;
    char reserved2[32];
    unsigned int lastCount;

    void update(unsigned int count);
};

void Profiler::update(unsigned int count)
{
    double now = sampleTime();
    double elapsed = now - lastTime;
    unsigned int newCount = count;
    count -= lastCount;

    if (elapsed >= interval)
    {
        index = (index + 1) & 0x7ff;
        entries[index].count = count;
        entries[index].elapsed = elapsed;
    }
    else
    {
        entries[index].count += count;
        entries[index].elapsed += elapsed;
    }

    lastCount = newCount;
    lastTime = now;
}
