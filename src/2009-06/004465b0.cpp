// roc 2009-06 004465b0  unit: CBrowserDocManager  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004465b0
//
// 004465b0  6aff                 push -1
// 004465b2  6888078500           push 0x850788
// 004465b7  64a100000000         mov eax, dword ptr fs:[0]
// 004465bd  50                   push eax
// 004465be  64892500000000       mov dword ptr fs:[0], esp
// 004465c5  51                   push ecx
// 004465c6  56                   push esi
// 004465c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004465cb  57                   push edi
// 004465cc  8bf9                 mov edi, ecx
// 004465ce  8937                 mov dword ptr [edi], esi
// 004465d0  8b06                 mov eax, dword ptr [esi]
// 004465d2  8b4804               mov ecx, dword ptr [eax + 4]
// 004465d5  03ce                 add ecx, esi
// 004465d7  897c2408             mov dword ptr [esp + 8], edi
// 004465db  ff1520e48900         call dword ptr [0x89e420]
// 004465e1  85c0                 test eax, eax
// 004465e3  7417                 je 0x4465fc
// 004465e5  8b07                 mov eax, dword ptr [edi]
// 004465e7  8b08                 mov ecx, dword ptr [eax]
// 004465e9  8b4904               mov ecx, dword ptr [ecx + 4]
// 004465ec  03c8                 add ecx, eax
// 004465ee  ff1520e48900         call dword ptr [0x89e420]
// 004465f4  8bc8                 mov ecx, eax
// 004465f6  ff1524e48900         call dword ptr [0x89e424]
// 004465fc  8b16                 mov edx, dword ptr [esi]
// 004465fe  8b4a04               mov ecx, dword ptr [edx + 4]
// 00446601  03ce                 add ecx, esi
// 00446603  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044660b  ff1510e48900         call dword ptr [0x89e410]
// 00446611  84c0                 test al, al
// 00446613  7426                 je 0x44663b
// 00446615  8b06                 mov eax, dword ptr [esi]
// 00446617  8b4804               mov ecx, dword ptr [eax + 4]
// 0044661a  03ce                 add ecx, esi
// 0044661c  ff1514e48900         call dword ptr [0x89e414]
// 00446622  85c0                 test eax, eax
// 00446624  7415                 je 0x44663b
// 00446626  8b0e                 mov ecx, dword ptr [esi]
// 00446628  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044662b  03ce                 add ecx, esi
// 0044662d  ff1514e48900         call dword ptr [0x89e414]
// 00446633  8bc8                 mov ecx, eax
// 00446635  ff1518e48900         call dword ptr [0x89e418]
// 0044663b  8b16                 mov edx, dword ptr [esi]
// 0044663d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00446640  03ce                 add ecx, esi
// 00446642  ff1510e48900         call dword ptr [0x89e410]
// 00446648  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044664c  884704               mov byte ptr [edi + 4], al
// 0044664f  8bc7                 mov eax, edi
// 00446651  5f                   pop edi
// 00446652  5e                   pop esi
// 00446653  64890d00000000       mov dword ptr fs:[0], ecx
// 0044665a  83c410               add esp, 0x10
// 0044665d  c20400               ret 4
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