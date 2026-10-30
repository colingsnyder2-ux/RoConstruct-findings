// roc 2012-06 004377b0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004377b0
//
// 004377b0  6aff                 push -1
// 004377b2  6888d3a900           push 0xa9d388
// 004377b7  64a100000000         mov eax, dword ptr fs:[0]
// 004377bd  50                   push eax
// 004377be  64892500000000       mov dword ptr fs:[0], esp
// 004377c5  51                   push ecx
// 004377c6  56                   push esi
// 004377c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004377cb  57                   push edi
// 004377cc  8bf9                 mov edi, ecx
// 004377ce  8937                 mov dword ptr [edi], esi
// 004377d0  8b06                 mov eax, dword ptr [esi]
// 004377d2  8b4804               mov ecx, dword ptr [eax + 4]
// 004377d5  03ce                 add ecx, esi
// 004377d7  897c2408             mov dword ptr [esp + 8], edi
// 004377db  ff151427b200         call dword ptr [0xb22714]
// 004377e1  85c0                 test eax, eax
// 004377e3  7417                 je 0x4377fc
// 004377e5  8b07                 mov eax, dword ptr [edi]
// 004377e7  8b08                 mov ecx, dword ptr [eax]
// 004377e9  8b4904               mov ecx, dword ptr [ecx + 4]
// 004377ec  03c8                 add ecx, eax
// 004377ee  ff151427b200         call dword ptr [0xb22714]
// 004377f4  8bc8                 mov ecx, eax
// 004377f6  ff151027b200         call dword ptr [0xb22710]
// 004377fc  8b16                 mov edx, dword ptr [esi]
// 004377fe  8b4a04               mov ecx, dword ptr [edx + 4]
// 00437801  03ce                 add ecx, esi
// 00437803  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043780b  ff152427b200         call dword ptr [0xb22724]
// 00437811  84c0                 test al, al
// 00437813  7426                 je 0x43783b
// 00437815  8b06                 mov eax, dword ptr [esi]
// 00437817  8b4804               mov ecx, dword ptr [eax + 4]
// 0043781a  03ce                 add ecx, esi
// 0043781c  ff152027b200         call dword ptr [0xb22720]
// 00437822  85c0                 test eax, eax
// 00437824  7415                 je 0x43783b
// 00437826  8b0e                 mov ecx, dword ptr [esi]
// 00437828  8b4904               mov ecx, dword ptr [ecx + 4]
// 0043782b  03ce                 add ecx, esi
// 0043782d  ff152027b200         call dword ptr [0xb22720]
// 00437833  8bc8                 mov ecx, eax
// 00437835  ff151c27b200         call dword ptr [0xb2271c]
// 0043783b  8b16                 mov edx, dword ptr [esi]
// 0043783d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00437840  03ce                 add ecx, esi
// 00437842  ff152427b200         call dword ptr [0xb22724]
// 00437848  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043784c  884704               mov byte ptr [edi + 4], al
// 0043784f  8bc7                 mov eax, edi
// 00437851  5f                   pop edi
// 00437852  5e                   pop esi
// 00437853  64890d00000000       mov dword ptr fs:[0], ecx
// 0043785a  83c410               add esp, 0x10
// 0043785d  c20400               ret 4
// copied from an identical function in another client (function ??0Sentry@@QAE@AAUStream@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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