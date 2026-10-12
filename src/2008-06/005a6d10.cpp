// from server: 78% by king_originala
struct SystemTime {
    unsigned short year;
    unsigned short month;
    unsigned short dayOfWeek;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned short milliseconds;
};

extern "C" void __stdcall GetLocalTime(SystemTime*);
extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Stream {
    Stream& flush();
};

extern Stream& __cdecl write(Stream&, const char*);

void __cdecl formatTime(Stream& stream, bool includeDate)
{
    SystemTime time;
    char buffer[256];

    GetLocalTime(&time);

    if (includeDate) {
        sprintf(buffer, "%02u.%02u.%u ",
                (unsigned int)time.day,
                (unsigned int)time.month,
                (unsigned int)time.year);
        write(stream, buffer);
    }

    sprintf(buffer, "%02u:%02u:%02u.%03u ",
            (unsigned int)time.hour,
            (unsigned int)time.minute,
            (unsigned int)time.second,
            (unsigned int)time.milliseconds);
    write(stream, buffer);
    stream.flush();
}
