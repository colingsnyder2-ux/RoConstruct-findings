// from server: 84% by king_originala
// roc 2008-06 004aaea0  unit: FilePacketLogger  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aaea0
//
// 004aaea0  56                   push esi
// 004aaea1  8bf1                 mov esi, ecx
// 004aaea3  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 004aaea9  85c0                 test eax, eax
// 004aaeab  7421                 je 0x4aaece
// 004aaead  57                   push edi
// 004aaeae  8b3dc8278000         mov edi, dword ptr [0x8027c8]
// 004aaeb4  50                   push eax
// 004aaeb5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004aaeb9  50                   push eax
// 004aaeba  ffd7                 call edi
// 004aaebc  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 004aaec2  51                   push ecx
// 004aaec3  6844878100           push 0x818744
// 004aaec8  ffd7                 call edi
// 004aaeca  83c410               add esp, 0x10
// 004aaecd  5f                   pop edi
// 004aaece  5e                   pop esi
// 004aaecf  c20400               ret 4

extern "C" int (__cdecl *fputs)(const char *, void *);
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
