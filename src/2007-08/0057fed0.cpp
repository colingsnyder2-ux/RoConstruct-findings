// from server: 51% by tester
struct Workspace {
    void formatSize(unsigned int bytes, char* out);
};

extern "C" int __cdecl sprintf(char* buffer, const char* format, ...);
extern "C" void* __stdcall string_ctor(void* self, const char* str);

void Workspace::formatSize(unsigned int bytes, char* out) {
    char buffer[68];
    buffer[0] = 0;
    if (bytes < 1000) {
        sprintf(buffer, "%dKB", bytes);
    } else if (bytes < 1000000) {
        sprintf(buffer, "%dMB", bytes / 1000);
    } else if (bytes < 1000000000) {
        sprintf(buffer, "%dGB", bytes / 1000000);
    } else {
        sprintf(buffer, "%.3gms", (double)bytes / 1000000000.0);
    }
    string_ctor(out, buffer);
}
