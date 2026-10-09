// from server: 58% by colin
// roc 2007-08 00544ed0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544ed0

extern "C" {
    __declspec(dllimport) void* __stdcall GetProcessHeap();
    __declspec(dllimport) void* __stdcall HeapAlloc(void*, unsigned long, unsigned long);
    __declspec(dllimport) int __stdcall CompareStringA(unsigned long, unsigned long, const char*, int, const char*, int);
    __declspec(dllimport) void __stdcall HeapFree(void*, unsigned long, void*);
}

struct String {
    char pad[0x1c];
    void substr(String* result, unsigned int pos, unsigned int len) const;
    ~String();
};

bool operator==(const String& lhs, const char* rhs);

struct GlobalSettingsItem {
    bool isHttpUrl(const String& url);
};

bool GlobalSettingsItem::isHttpUrl(const String& url)
{
    String prefix;
    url.substr(&prefix, 0, 4);
    bool result = (prefix == "http");
    prefix.~String();
    return result;
}
