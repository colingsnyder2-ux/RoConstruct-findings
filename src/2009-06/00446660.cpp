// roc 2009-06 00446660  unit: CBrowserDocManager  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00446660
//
// 00446660  6aff                 push -1
// 00446662  6888078500           push 0x850788
// 00446667  64a100000000         mov eax, dword ptr fs:[0]
// 0044666d  50                   push eax
// 0044666e  64892500000000       mov dword ptr fs:[0], esp
// 00446675  51                   push ecx
// 00446676  56                   push esi
// 00446677  8bf1                 mov esi, ecx
// 00446679  89742404             mov dword ptr [esp + 4], esi
// 0044667d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00446685  ff1508e48900         call dword ptr [0x89e408]
// 0044668b  84c0                 test al, al
// 0044668d  7508                 jne 0x446697
// 0044668f  8b0e                 mov ecx, dword ptr [esi]
// 00446691  ff150ce48900         call dword ptr [0x89e40c]
// 00446697  8b06                 mov eax, dword ptr [esi]
// 00446699  8b08                 mov ecx, dword ptr [eax]
// 0044669b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044669e  03c8                 add ecx, eax
// 004466a0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004466a8  ff1520e48900         call dword ptr [0x89e420]
// 004466ae  85c0                 test eax, eax
// 004466b0  7417                 je 0x4466c9
// 004466b2  8b06                 mov eax, dword ptr [esi]
// 004466b4  8b10                 mov edx, dword ptr [eax]
// 004466b6  8b4a04               mov ecx, dword ptr [edx + 4]
// 004466b9  03c8                 add ecx, eax
// 004466bb  ff1520e48900         call dword ptr [0x89e420]
// 004466c1  8bc8                 mov ecx, eax
// 004466c3  ff151ce48900         call dword ptr [0x89e41c]
// 004466c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004466cd  5e                   pop esi
// 004466ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004466d5  83c410               add esp, 0x10
// 004466d8  c3                   ret 
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