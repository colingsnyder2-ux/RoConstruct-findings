// from server: 100% by king_originala
// roc 2008-06 0044a320  unit: CRbxPlayDocTemplate  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a320
//
// 0044a320  6aff                 push -1
// 0044a322  6808117c00           push 0x7c1108
// 0044a327  64a100000000         mov eax, dword ptr fs:[0]
// 0044a32d  50                   push eax
// 0044a32e  64892500000000       mov dword ptr fs:[0], esp
// 0044a335  51                   push ecx
// 0044a336  56                   push esi
// 0044a337  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044a33b  57                   push edi
// 0044a33c  8bf9                 mov edi, ecx
// 0044a33e  8937                 mov dword ptr [edi], esi
// 0044a340  8b06                 mov eax, dword ptr [esi]
// 0044a342  8b4804               mov ecx, dword ptr [eax + 4]
// 0044a345  03ce                 add ecx, esi
// 0044a347  897c2408             mov dword ptr [esp + 8], edi
// 0044a34b  ff15c4238000         call dword ptr [0x8023c4]
// 0044a351  85c0                 test eax, eax
// 0044a353  7417                 je 0x44a36c
// 0044a355  8b07                 mov eax, dword ptr [edi]
// 0044a357  8b08                 mov ecx, dword ptr [eax]
// 0044a359  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a35c  03c8                 add ecx, eax
// 0044a35e  ff15c4238000         call dword ptr [0x8023c4]
// 0044a364  8bc8                 mov ecx, eax
// 0044a366  ff15c8238000         call dword ptr [0x8023c8]
// 0044a36c  8b16                 mov edx, dword ptr [esi]
// 0044a36e  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044a371  03ce                 add ecx, esi
// 0044a373  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044a37b  ff15b4238000         call dword ptr [0x8023b4]
// 0044a381  84c0                 test al, al
// 0044a383  7426                 je 0x44a3ab
// 0044a385  8b06                 mov eax, dword ptr [esi]
// 0044a387  8b4804               mov ecx, dword ptr [eax + 4]
// 0044a38a  03ce                 add ecx, esi
// 0044a38c  ff15b8238000         call dword ptr [0x8023b8]
// 0044a392  85c0                 test eax, eax
// 0044a394  7415                 je 0x44a3ab
// 0044a396  8b0e                 mov ecx, dword ptr [esi]
// 0044a398  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a39b  03ce                 add ecx, esi
// 0044a39d  ff15b8238000         call dword ptr [0x8023b8]
// 0044a3a3  8bc8                 mov ecx, eax
// 0044a3a5  ff15bc238000         call dword ptr [0x8023bc]
// 0044a3ab  8b16                 mov edx, dword ptr [esi]
// 0044a3ad  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044a3b0  03ce                 add ecx, esi
// 0044a3b2  ff15b4238000         call dword ptr [0x8023b4]
// 0044a3b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044a3bc  884704               mov byte ptr [edi + 4], al
// 0044a3bf  8bc7                 mov eax, edi
// 0044a3c1  5f                   pop edi
// 0044a3c2  5e                   pop esi
// 0044a3c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a3ca  83c410               add esp, 0x10
// 0044a3cd  c20400               ret 4

struct Stream;
struct StreamBuffer;
struct BasicIOS;

extern StreamBuffer* (__thiscall* stream_rdbuf)(const BasicIOS*);
extern void (__thiscall* stream_lock)(StreamBuffer*);
extern bool (__thiscall* stream_good)(const BasicIOS*);
extern Stream* (__thiscall* stream_tie)(const BasicIOS*);
extern Stream& (__thiscall* stream_flush)(Stream*);

struct Stream
{
    int* table;
};

struct SentryBase
{
    Stream* stream;
    SentryBase(Stream& value);
    ~SentryBase();
};

struct Sentry : SentryBase
{
    bool ready;
    Sentry(Stream& value);
};

inline SentryBase::SentryBase(Stream& value)
{
    stream = &value;
    if (stream_rdbuf(reinterpret_cast<BasicIOS*>(
            reinterpret_cast<char*>(&value) + value.table[1])))
    {
        stream_lock(stream_rdbuf(reinterpret_cast<BasicIOS*>(
            reinterpret_cast<char*>(stream) + stream->table[1])));
    }
}

Sentry::Sentry(Stream& value) : SentryBase(value)
{
    if (stream_good(reinterpret_cast<BasicIOS*>(
            reinterpret_cast<char*>(&value) + value.table[1])) &&
        stream_tie(reinterpret_cast<BasicIOS*>(
            reinterpret_cast<char*>(&value) + value.table[1])))
    {
        stream_flush(stream_tie(reinterpret_cast<BasicIOS*>(
            reinterpret_cast<char*>(&value) + value.table[1])));
    }

    ready = stream_good(reinterpret_cast<BasicIOS*>(
        reinterpret_cast<char*>(&value) + value.table[1]));
}
