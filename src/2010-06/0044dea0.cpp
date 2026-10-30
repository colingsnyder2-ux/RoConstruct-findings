// roc 2010-06 0044dea0  unit: CRbxPlayDocTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044dea0
//
// 0044dea0  6aff                 push -1
// 0044dea2  6868199800           push 0x981968
// 0044dea7  64a100000000         mov eax, dword ptr fs:[0]
// 0044dead  50                   push eax
// 0044deae  64892500000000       mov dword ptr fs:[0], esp
// 0044deb5  51                   push ecx
// 0044deb6  56                   push esi
// 0044deb7  8bf1                 mov esi, ecx
// 0044deb9  89742404             mov dword ptr [esp + 4], esi
// 0044debd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044dec5  ff15c0a49e00         call dword ptr [0x9ea4c0]
// 0044decb  84c0                 test al, al
// 0044decd  7508                 jne 0x44ded7
// 0044decf  8b0e                 mov ecx, dword ptr [esi]
// 0044ded1  ff15bca49e00         call dword ptr [0x9ea4bc]
// 0044ded7  8b06                 mov eax, dword ptr [esi]
// 0044ded9  8b08                 mov ecx, dword ptr [eax]
// 0044dedb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044dede  03c8                 add ecx, eax
// 0044dee0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044dee8  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044deee  85c0                 test eax, eax
// 0044def0  7417                 je 0x44df09
// 0044def2  8b06                 mov eax, dword ptr [esi]
// 0044def4  8b10                 mov edx, dword ptr [eax]
// 0044def6  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044def9  03c8                 add ecx, eax
// 0044defb  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044df01  8bc8                 mov ecx, eax
// 0044df03  ff15aca49e00         call dword ptr [0x9ea4ac]
// 0044df09  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044df0d  5e                   pop esi
// 0044df0e  64890d00000000       mov dword ptr fs:[0], ecx
// 0044df15  83c410               add esp, 0x10
// 0044df18  c3                   ret 
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