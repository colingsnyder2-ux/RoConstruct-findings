// roc 2009-12 0054fea0  unit: RBX::Network::FilePacketLogger  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054fea0
//
// 0054fea0  56                   push esi
// 0054fea1  8bf1                 mov esi, ecx
// 0054fea3  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0054fea9  85c0                 test eax, eax
// 0054feab  7421                 je 0x54fece
// 0054fead  57                   push edi
// 0054feae  8b3d88b89800         mov edi, dword ptr [0x98b888]
// 0054feb4  50                   push eax
// 0054feb5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054feb9  50                   push eax
// 0054feba  ffd7                 call edi
// 0054febc  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 0054fec2  51                   push ecx
// 0054fec3  681cd89a00           push 0x9ad81c
// 0054fec8  ffd7                 call edi
// 0054feca  83c410               add esp, 0x10
// 0054fecd  5f                   pop edi
// 0054fece  5e                   pop esi
// 0054fecf  c20400               ret 4
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