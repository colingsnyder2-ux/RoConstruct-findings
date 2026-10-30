// roc 2010-06 0044ddf0  unit: CRbxPlayDocTemplate  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ddf0
//
// 0044ddf0  6aff                 push -1
// 0044ddf2  6868199800           push 0x981968
// 0044ddf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044ddfd  50                   push eax
// 0044ddfe  64892500000000       mov dword ptr fs:[0], esp
// 0044de05  51                   push ecx
// 0044de06  56                   push esi
// 0044de07  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044de0b  57                   push edi
// 0044de0c  8bf9                 mov edi, ecx
// 0044de0e  8937                 mov dword ptr [edi], esi
// 0044de10  8b06                 mov eax, dword ptr [esi]
// 0044de12  8b4804               mov ecx, dword ptr [eax + 4]
// 0044de15  03ce                 add ecx, esi
// 0044de17  897c2408             mov dword ptr [esp + 8], edi
// 0044de1b  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044de21  85c0                 test eax, eax
// 0044de23  7417                 je 0x44de3c
// 0044de25  8b07                 mov eax, dword ptr [edi]
// 0044de27  8b08                 mov ecx, dword ptr [eax]
// 0044de29  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044de2c  03c8                 add ecx, eax
// 0044de2e  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044de34  8bc8                 mov ecx, eax
// 0044de36  ff15a4a49e00         call dword ptr [0x9ea4a4]
// 0044de3c  8b16                 mov edx, dword ptr [esi]
// 0044de3e  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044de41  03ce                 add ecx, esi
// 0044de43  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044de4b  ff15b8a49e00         call dword ptr [0x9ea4b8]
// 0044de51  84c0                 test al, al
// 0044de53  7426                 je 0x44de7b
// 0044de55  8b06                 mov eax, dword ptr [esi]
// 0044de57  8b4804               mov ecx, dword ptr [eax + 4]
// 0044de5a  03ce                 add ecx, esi
// 0044de5c  ff15b4a49e00         call dword ptr [0x9ea4b4]
// 0044de62  85c0                 test eax, eax
// 0044de64  7415                 je 0x44de7b
// 0044de66  8b0e                 mov ecx, dword ptr [esi]
// 0044de68  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044de6b  03ce                 add ecx, esi
// 0044de6d  ff15b4a49e00         call dword ptr [0x9ea4b4]
// 0044de73  8bc8                 mov ecx, eax
// 0044de75  ff15b0a49e00         call dword ptr [0x9ea4b0]
// 0044de7b  8b16                 mov edx, dword ptr [esi]
// 0044de7d  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044de80  03ce                 add ecx, esi
// 0044de82  ff15b8a49e00         call dword ptr [0x9ea4b8]
// 0044de88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044de8c  884704               mov byte ptr [edi + 4], al
// 0044de8f  8bc7                 mov eax, edi
// 0044de91  5f                   pop edi
// 0044de92  5e                   pop esi
// 0044de93  64890d00000000       mov dword ptr fs:[0], ecx
// 0044de9a  83c410               add esp, 0x10
// 0044de9d  c20400               ret 4
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