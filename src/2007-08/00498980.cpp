// from server: 37% by colin
struct AbuseReport {};

struct AbuseReporterData {
    void* queue[4];
    void* mutex[4];
};

struct AbuseReporter {
    void* _data;
    void* requestProcessor;
    void method(AbuseReport* r, void* reportingPlayer, void* chatHistory);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall basic_string_copy_ctor(void*, const void*);
extern "C" void __stdcall basic_string_dtor(void*);

void AbuseReporter::method(AbuseReport* r, void* reportingPlayer, void* chatHistory)
{
    AbuseReporterData* oldData = 0;
    if (r == 0) {
        oldData = (AbuseReporterData*)this->requestProcessor;
        this->requestProcessor = 0;
    } else {
        AbuseReporterData* newData = (AbuseReporterData*)operator_new(0xc);
        if (newData != 0) {
            basic_string_copy_ctor(newData, r);
            newData = (AbuseReporterData*)0;
        }
        oldData = (AbuseReporterData*)this->requestProcessor;
        this->requestProcessor = newData;
    }
    if (oldData != 0) {
        basic_string_dtor(oldData);
        operator_delete(oldData);
    }
    basic_string_dtor(&chatHistory);
}
