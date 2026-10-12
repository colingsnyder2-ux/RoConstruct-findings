// from server: 79% by king_originala
// roc 2008-06 0044a3d0  unit: CRbxPlayDocTemplate  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a3d0
//
// 0044a3d0  6aff                 push -1
// 0044a3d2  6808117c00           push 0x7c1108
// 0044a3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0044a3dd  50                   push eax
// 0044a3de  64892500000000       mov dword ptr fs:[0], esp
// 0044a3e5  51                   push ecx
// 0044a3e6  56                   push esi
// 0044a3e7  8bf1                 mov esi, ecx
// 0044a3e9  89742404             mov dword ptr [esp + 4], esi
// 0044a3ed  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044a3f5  ff15ac238000         call dword ptr [0x8023ac]
// 0044a3fb  84c0                 test al, al
// 0044a3fd  7508                 jne 0x44a407
// 0044a3ff  8b0e                 mov ecx, dword ptr [esi]
// 0044a401  ff15b0238000         call dword ptr [0x8023b0]
// 0044a407  8b06                 mov eax, dword ptr [esi]
// 0044a409  8b08                 mov ecx, dword ptr [eax]
// 0044a40b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a40e  03c8                 add ecx, eax
// 0044a410  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044a418  ff15c4238000         call dword ptr [0x8023c4]
// 0044a41e  85c0                 test eax, eax
// 0044a420  7417                 je 0x44a439
// 0044a422  8b06                 mov eax, dword ptr [esi]
// 0044a424  8b10                 mov edx, dword ptr [eax]
// 0044a426  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044a429  03c8                 add ecx, eax
// 0044a42b  ff15c4238000         call dword ptr [0x8023c4]
// 0044a431  8bc8                 mov ecx, eax
// 0044a433  ff15c0238000         call dword ptr [0x8023c0]
// 0044a439  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a43d  5e                   pop esi
// 0044a43e  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a445  83c410               add esp, 0x10
// 0044a448  c3                   ret 

struct StreamBuffer {};
struct BasicIOS {};
struct OutputStream : virtual BasicIOS {};

extern bool (__cdecl *uncaught_exception)();
extern void (__thiscall *output_suffix)(OutputStream *);
extern StreamBuffer *(__thiscall *get_buffer)(const BasicIOS *);
extern void (__thiscall *unlock_buffer)(StreamBuffer *);

struct SentryBase
{
    OutputStream *stream;
    ~SentryBase();
};

struct Sentry : SentryBase
{
    ~Sentry();
};

__forceinline SentryBase::~SentryBase()
{
    if (get_buffer(static_cast<BasicIOS *>(stream)))
        unlock_buffer(get_buffer(static_cast<BasicIOS *>(stream)));
}

Sentry::~Sentry()
{
    if (!uncaught_exception())
        output_suffix(stream);
}
