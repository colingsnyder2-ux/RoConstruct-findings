// roc 2010-06 004fe790  unit: RBX::Network::FilePacketLogger  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe790
//
// 004fe790  56                   push esi
// 004fe791  8bf1                 mov esi, ecx
// 004fe793  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 004fe799  85c0                 test eax, eax
// 004fe79b  7421                 je 0x4fe7be
// 004fe79d  57                   push edi
// 004fe79e  8b3d84a79e00         mov edi, dword ptr [0x9ea784]
// 004fe7a4  50                   push eax
// 004fe7a5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fe7a9  50                   push eax
// 004fe7aa  ffd7                 call edi
// 004fe7ac  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 004fe7b2  51                   push ecx
// 004fe7b3  681ce7a000           push 0xa0e71c
// 004fe7b8  ffd7                 call edi
// 004fe7ba  83c410               add esp, 0x10
// 004fe7bd  5f                   pop edi
// 004fe7be  5e                   pop esi
// 004fe7bf  c20400               ret 4
// copied from an identical function in another client (function ?write@FilePacketLogger@@QAEXPBD@Z)

// from server: 84% by king_originala
// Manually recovered: fputs must be __declspec(dllimport) so MSVC caches the IAT
// pointer in edi and reuses it across both calls (target uses `mov edi,[imp]; call edi`).
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

extern "C" __declspec(dllimport) int __cdecl fputs(const char *, void *);
extern const char lineEnding[];

struct FilePacketLogger {
    char padding[0x20c];
    void *file;
    void write(const char *text);
};

void FilePacketLogger::write(const char *text)
{
    if (file) {
        fputs(text, file);
        fputs(lineEnding, file);
    }
}