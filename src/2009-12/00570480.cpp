// from server: 81% by atomic.potato
typedef struct _CRITICAL_SECTION
{
    unsigned char data[24];
} CRITICAL_SECTION;

extern "C" void __stdcall DeleteCriticalSection(CRITICAL_SECTION *);

struct CSHA1
{
    unsigned char pad[0x18];
    CRITICAL_SECTION criticalSection;
    void f();
};

void CSHA1::f()
{
    if (pad[0x18] != 0)
        DeleteCriticalSection((CRITICAL_SECTION *)this);
}
