// from server: 95% by king_originala
struct SharedHandle
{
    void* pointer;
    void* control;
    ~SharedHandle();
};

SharedHandle __cdecl getHandle();
void __cdecl report(void*, int, const char*, ...);
extern const char reportFormat[];

void __cdecl reportStatus(unsigned short status, const char* message)
{
    switch (status)
    {
    case 0:
        report(getHandle().pointer, 1, reportFormat, message);
        break;
    case 1:
        report(getHandle().pointer, 3, reportFormat, message);
        break;
    case 4:
        report(getHandle().pointer, 1, reportFormat, message);
        break;
    case 8:
        report(getHandle().pointer, 1, reportFormat, message);
        break;
    case 16:
        report(getHandle().pointer, 3, reportFormat, message);
        break;
    }
}
