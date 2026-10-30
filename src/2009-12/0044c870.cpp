// roc 2009-12 0044c870  unit: CRbxPlayDocTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044c870
//
// 0044c870  6aff                 push -1
// 0044c872  68d8ae9200           push 0x92aed8
// 0044c877  64a100000000         mov eax, dword ptr fs:[0]
// 0044c87d  50                   push eax
// 0044c87e  64892500000000       mov dword ptr fs:[0], esp
// 0044c885  51                   push ecx
// 0044c886  56                   push esi
// 0044c887  8bf1                 mov esi, ecx
// 0044c889  89742404             mov dword ptr [esp + 4], esi
// 0044c88d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044c895  ff1548b69800         call dword ptr [0x98b648]
// 0044c89b  84c0                 test al, al
// 0044c89d  7508                 jne 0x44c8a7
// 0044c89f  8b0e                 mov ecx, dword ptr [esi]
// 0044c8a1  ff154cb69800         call dword ptr [0x98b64c]
// 0044c8a7  8b06                 mov eax, dword ptr [esi]
// 0044c8a9  8b08                 mov ecx, dword ptr [eax]
// 0044c8ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044c8ae  03c8                 add ecx, eax
// 0044c8b0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044c8b8  ff1560b69800         call dword ptr [0x98b660]
// 0044c8be  85c0                 test eax, eax
// 0044c8c0  7417                 je 0x44c8d9
// 0044c8c2  8b06                 mov eax, dword ptr [esi]
// 0044c8c4  8b10                 mov edx, dword ptr [eax]
// 0044c8c6  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044c8c9  03c8                 add ecx, eax
// 0044c8cb  ff1560b69800         call dword ptr [0x98b660]
// 0044c8d1  8bc8                 mov ecx, eax
// 0044c8d3  ff155cb69800         call dword ptr [0x98b65c]
// 0044c8d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044c8dd  5e                   pop esi
// 0044c8de  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c8e5  83c410               add esp, 0x10
// 0044c8e8  c3                   ret 
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