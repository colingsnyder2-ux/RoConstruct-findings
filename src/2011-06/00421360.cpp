// roc 2011-06 00421360  unit: RBX::DSVideoCaptureEngine  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00421360
//
// 00421360  6aff                 push -1
// 00421362  6808ed9c00           push 0x9ced08
// 00421367  64a100000000         mov eax, dword ptr fs:[0]
// 0042136d  50                   push eax
// 0042136e  64892500000000       mov dword ptr fs:[0], esp
// 00421375  51                   push ecx
// 00421376  56                   push esi
// 00421377  8bf1                 mov esi, ecx
// 00421379  89742404             mov dword ptr [esp + 4], esi
// 0042137d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00421385  ff150c04a400         call dword ptr [0xa4040c]
// 0042138b  84c0                 test al, al
// 0042138d  7508                 jne 0x421397
// 0042138f  8b0e                 mov ecx, dword ptr [esi]
// 00421391  ff151004a400         call dword ptr [0xa40410]
// 00421397  8b06                 mov eax, dword ptr [esi]
// 00421399  8b08                 mov ecx, dword ptr [eax]
// 0042139b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042139e  03c8                 add ecx, eax
// 004213a0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004213a8  ff152404a400         call dword ptr [0xa40424]
// 004213ae  85c0                 test eax, eax
// 004213b0  7417                 je 0x4213c9
// 004213b2  8b06                 mov eax, dword ptr [esi]
// 004213b4  8b10                 mov edx, dword ptr [eax]
// 004213b6  8b4a04               mov ecx, dword ptr [edx + 4]
// 004213b9  03c8                 add ecx, eax
// 004213bb  ff152404a400         call dword ptr [0xa40424]
// 004213c1  8bc8                 mov ecx, eax
// 004213c3  ff152004a400         call dword ptr [0xa40420]
// 004213c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004213cd  5e                   pop esi
// 004213ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004213d5  83c410               add esp, 0x10
// 004213d8  c3                   ret 
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