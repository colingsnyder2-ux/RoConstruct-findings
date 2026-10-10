// from server: 43% by colin
struct CIDEDocManager {
    void OpenWiki();
};

extern "C" void* __stdcall sub_6303D0();
extern "C" void* __stdcall sub_77DDAC(void*);
extern "C" void* __stdcall sub_77DD94(void*, const char*, const char*);
extern "C" void* __stdcall sub_77DD98(void*, int, int);
extern "C" void* __stdcall sub_77DDBC(void*);
extern "C" int __stdcall sub_77EBBC(void*, const char*, const char*, const char*);
extern "C" int __stdcall ShellExecuteA(void*, const char*, const char*, const char*, const char*, int);

void CIDEDocManager::OpenWiki() {
    char buf[16];
    sub_77DDAC(buf);
    sub_77DD94(buf, "http://wiki.roblox.com", "N Php");
    void* p = sub_6303D0();
    void* obj = 0;
    if (p != 0) {
        obj = (*(void* (__stdcall**)(void*))(*(int*)p + 0x7c))(p);
    }
    void* s = sub_77DD98(buf, 0, 10);
    sub_77EBBC(*(void**)((char*)obj + 0x20), "open", "rundll32.exe", "url.dll,FileProtocolHandler %s");
    sub_77DDBC(buf);
}
