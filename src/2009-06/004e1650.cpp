// roc 2009-06 004e1650  unit: FilePacketLogger  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1650
//
// 004e1650  56                   push esi
// 004e1651  8bf1                 mov esi, ecx
// 004e1653  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 004e1659  85c0                 test eax, eax
// 004e165b  7421                 je 0x4e167e
// 004e165d  57                   push edi
// 004e165e  8b3d8ce88900         mov edi, dword ptr [0x89e88c]
// 004e1664  50                   push eax
// 004e1665  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e1669  50                   push eax
// 004e166a  ffd7                 call edi
// 004e166c  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 004e1672  51                   push ecx
// 004e1673  683c938b00           push 0x8b933c
// 004e1678  ffd7                 call edi
// 004e167a  83c410               add esp, 0x10
// 004e167d  5f                   pop edi
// 004e167e  5e                   pop esi
// 004e167f  c20400               ret 4
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