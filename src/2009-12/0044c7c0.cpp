// roc 2009-12 0044c7c0  unit: CRbxPlayDocTemplate  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044c7c0
//
// 0044c7c0  6aff                 push -1
// 0044c7c2  68d8ae9200           push 0x92aed8
// 0044c7c7  64a100000000         mov eax, dword ptr fs:[0]
// 0044c7cd  50                   push eax
// 0044c7ce  64892500000000       mov dword ptr fs:[0], esp
// 0044c7d5  51                   push ecx
// 0044c7d6  56                   push esi
// 0044c7d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044c7db  57                   push edi
// 0044c7dc  8bf9                 mov edi, ecx
// 0044c7de  8937                 mov dword ptr [edi], esi
// 0044c7e0  8b06                 mov eax, dword ptr [esi]
// 0044c7e2  8b4804               mov ecx, dword ptr [eax + 4]
// 0044c7e5  03ce                 add ecx, esi
// 0044c7e7  897c2408             mov dword ptr [esp + 8], edi
// 0044c7eb  ff1560b69800         call dword ptr [0x98b660]
// 0044c7f1  85c0                 test eax, eax
// 0044c7f3  7417                 je 0x44c80c
// 0044c7f5  8b07                 mov eax, dword ptr [edi]
// 0044c7f7  8b08                 mov ecx, dword ptr [eax]
// 0044c7f9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044c7fc  03c8                 add ecx, eax
// 0044c7fe  ff1560b69800         call dword ptr [0x98b660]
// 0044c804  8bc8                 mov ecx, eax
// 0044c806  ff1564b69800         call dword ptr [0x98b664]
// 0044c80c  8b16                 mov edx, dword ptr [esi]
// 0044c80e  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044c811  03ce                 add ecx, esi
// 0044c813  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044c81b  ff1550b69800         call dword ptr [0x98b650]
// 0044c821  84c0                 test al, al
// 0044c823  7426                 je 0x44c84b
// 0044c825  8b06                 mov eax, dword ptr [esi]
// 0044c827  8b4804               mov ecx, dword ptr [eax + 4]
// 0044c82a  03ce                 add ecx, esi
// 0044c82c  ff1554b69800         call dword ptr [0x98b654]
// 0044c832  85c0                 test eax, eax
// 0044c834  7415                 je 0x44c84b
// 0044c836  8b0e                 mov ecx, dword ptr [esi]
// 0044c838  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044c83b  03ce                 add ecx, esi
// 0044c83d  ff1554b69800         call dword ptr [0x98b654]
// 0044c843  8bc8                 mov ecx, eax
// 0044c845  ff1558b69800         call dword ptr [0x98b658]
// 0044c84b  8b16                 mov edx, dword ptr [esi]
// 0044c84d  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044c850  03ce                 add ecx, esi
// 0044c852  ff1550b69800         call dword ptr [0x98b650]
// 0044c858  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044c85c  884704               mov byte ptr [edi + 4], al
// 0044c85f  8bc7                 mov eax, edi
// 0044c861  5f                   pop edi
// 0044c862  5e                   pop esi
// 0044c863  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c86a  83c410               add esp, 0x10
// 0044c86d  c20400               ret 4
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