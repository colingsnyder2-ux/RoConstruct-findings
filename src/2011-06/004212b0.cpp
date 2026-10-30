// roc 2011-06 004212b0  unit: RBX::DSVideoCaptureEngine  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004212b0
//
// 004212b0  6aff                 push -1
// 004212b2  6808ed9c00           push 0x9ced08
// 004212b7  64a100000000         mov eax, dword ptr fs:[0]
// 004212bd  50                   push eax
// 004212be  64892500000000       mov dword ptr fs:[0], esp
// 004212c5  51                   push ecx
// 004212c6  56                   push esi
// 004212c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004212cb  57                   push edi
// 004212cc  8bf9                 mov edi, ecx
// 004212ce  8937                 mov dword ptr [edi], esi
// 004212d0  8b06                 mov eax, dword ptr [esi]
// 004212d2  8b4804               mov ecx, dword ptr [eax + 4]
// 004212d5  03ce                 add ecx, esi
// 004212d7  897c2408             mov dword ptr [esp + 8], edi
// 004212db  ff152404a400         call dword ptr [0xa40424]
// 004212e1  85c0                 test eax, eax
// 004212e3  7417                 je 0x4212fc
// 004212e5  8b07                 mov eax, dword ptr [edi]
// 004212e7  8b08                 mov ecx, dword ptr [eax]
// 004212e9  8b4904               mov ecx, dword ptr [ecx + 4]
// 004212ec  03c8                 add ecx, eax
// 004212ee  ff152404a400         call dword ptr [0xa40424]
// 004212f4  8bc8                 mov ecx, eax
// 004212f6  ff152804a400         call dword ptr [0xa40428]
// 004212fc  8b16                 mov edx, dword ptr [esi]
// 004212fe  8b4a04               mov ecx, dword ptr [edx + 4]
// 00421301  03ce                 add ecx, esi
// 00421303  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042130b  ff151404a400         call dword ptr [0xa40414]
// 00421311  84c0                 test al, al
// 00421313  7426                 je 0x42133b
// 00421315  8b06                 mov eax, dword ptr [esi]
// 00421317  8b4804               mov ecx, dword ptr [eax + 4]
// 0042131a  03ce                 add ecx, esi
// 0042131c  ff151804a400         call dword ptr [0xa40418]
// 00421322  85c0                 test eax, eax
// 00421324  7415                 je 0x42133b
// 00421326  8b0e                 mov ecx, dword ptr [esi]
// 00421328  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042132b  03ce                 add ecx, esi
// 0042132d  ff151804a400         call dword ptr [0xa40418]
// 00421333  8bc8                 mov ecx, eax
// 00421335  ff151c04a400         call dword ptr [0xa4041c]
// 0042133b  8b16                 mov edx, dword ptr [esi]
// 0042133d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00421340  03ce                 add ecx, esi
// 00421342  ff151404a400         call dword ptr [0xa40414]
// 00421348  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042134c  884704               mov byte ptr [edi + 4], al
// 0042134f  8bc7                 mov eax, edi
// 00421351  5f                   pop edi
// 00421352  5e                   pop esi
// 00421353  64890d00000000       mov dword ptr fs:[0], ecx
// 0042135a  83c410               add esp, 0x10
// 0042135d  c20400               ret 4
// copied from an identical function in another client (function ??0Sentry@ns_ROCX000000@@QAE@AAUStream@1@@Z)

namespace ns_ROCX000000 {
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
}
