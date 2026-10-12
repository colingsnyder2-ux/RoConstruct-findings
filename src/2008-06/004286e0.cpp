// from server: 88% by king_originala
struct String {
    char padding[20];
    unsigned int length;
    const char* c_str() const;
};

struct Message {
    void* data;
    Message();
    ~Message();
    const char* c_str() const;
};

extern const char formatWithDetail[];
extern const char formatWithoutDetail[];

void __cdecl formatMessage(Message*, const char*, ...);
void __cdecl writeLog(int, const char*);

bool __cdecl reportAssertion(const char* expression, const String* detail,
                            const char* file, int line)
{
    Message message;
    if (detail->length > 0)
        formatMessage(&message, formatWithDetail,
                      expression, detail->c_str(), file, line);
    else
        formatMessage(&message, formatWithoutDetail,
                      expression, file, line);

    writeLog(2, message.c_str());
    return false;
}
