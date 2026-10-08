// from server: 100% by colin
// roc 2007-08 004a4e40  unit: FilePacketLogger  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4e40
//
// 004a4e40  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 004a4e46  85c0                 test eax, eax
// 004a4e48  740f                 je 0x4a4e59
// 004a4e4a  50                   push eax
// 004a4e4b  8b442408             mov eax, dword ptr [esp + 8]
// 004a4e4f  50                   push eax
// 004a4e50  ff1508e97700         call dword ptr [0x77e908]
// 004a4e56  83c408               add esp, 8
// 004a4e59  c20400               ret 4

struct FilePacketLogger {
    void Log(const char* text);
    char pad[0x20c];
    void* file;
};

extern "C" int (__cdecl *fputs)(const char* text, void* file);

void FilePacketLogger::Log(const char* text)
{
    if (file)
        fputs(text, file);
}
