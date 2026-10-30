// roc 2012-06 00437860  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00437860
//
// 00437860  6aff                 push -1
// 00437862  6888d3a900           push 0xa9d388
// 00437867  64a100000000         mov eax, dword ptr fs:[0]
// 0043786d  50                   push eax
// 0043786e  64892500000000       mov dword ptr fs:[0], esp
// 00437875  51                   push ecx
// 00437876  56                   push esi
// 00437877  8bf1                 mov esi, ecx
// 00437879  89742404             mov dword ptr [esp + 4], esi
// 0043787d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00437885  ff152c27b200         call dword ptr [0xb2272c]
// 0043788b  84c0                 test al, al
// 0043788d  7508                 jne 0x437897
// 0043788f  8b0e                 mov ecx, dword ptr [esi]
// 00437891  ff152827b200         call dword ptr [0xb22728]
// 00437897  8b06                 mov eax, dword ptr [esi]
// 00437899  8b08                 mov ecx, dword ptr [eax]
// 0043789b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0043789e  03c8                 add ecx, eax
// 004378a0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004378a8  ff151427b200         call dword ptr [0xb22714]
// 004378ae  85c0                 test eax, eax
// 004378b0  7417                 je 0x4378c9
// 004378b2  8b06                 mov eax, dword ptr [esi]
// 004378b4  8b10                 mov edx, dword ptr [eax]
// 004378b6  8b4a04               mov ecx, dword ptr [edx + 4]
// 004378b9  03c8                 add ecx, eax
// 004378bb  ff151427b200         call dword ptr [0xb22714]
// 004378c1  8bc8                 mov ecx, eax
// 004378c3  ff151827b200         call dword ptr [0xb22718]
// 004378c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004378cd  5e                   pop esi
// 004378ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004378d5  83c410               add esp, 0x10
// 004378d8  c3                   ret 
// copied from an identical function in another client (function ??1Sentry@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct StreamBuffer {};
struct BasicIOS {StreamBuffer* get_buffer()const;};
struct OutputStream : virtual BasicIOS {};

extern bool (__cdecl *uncaught_exception)();
extern void (__thiscall *output_suffix)(OutputStream *);
extern StreamBuffer *(__thiscall *get_buffer)(const BasicIOS *);
extern void (__thiscall *unlock_buffer)(StreamBuffer *);

inline StreamBuffer* BasicIOS::get_buffer()const {return ::get_buffer(this);}

struct SentryBase
{
    OutputStream *stream;
    ~SentryBase();
};

struct Sentry : SentryBase
{
    ~Sentry();
};

SentryBase::~SentryBase()
{
    if (stream->get_buffer())
        unlock_buffer(stream->get_buffer());
}

Sentry::~Sentry()
{
    if (!uncaught_exception())
        output_suffix(stream);
}