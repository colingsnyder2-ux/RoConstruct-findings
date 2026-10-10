// from server: 33% by colin
struct CXTPCommandBar {
    bool LoadFromFile(const char* filename);
};

extern "C" {
    void* __stdcall CreateFileA(const char*, unsigned long, unsigned long, void*, unsigned long, unsigned long, void*);
    int __stdcall ReadFile(void*, void*, unsigned long, unsigned long*, void*);
    unsigned long __stdcall SetFilePointer(void*, long, long*, unsigned long);
    int __stdcall CloseHandle(void*);
    void* __stdcall CreateCompatibleDC(void*);
    void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned long);
    void __stdcall DeleteObject(void*);
    void __cdecl free(void*);
    void* __cdecl malloc(unsigned int);
    void* __stdcall GetDC(void*);
    int __stdcall ReleaseDC(void*, void*);
    void* __stdcall GetActiveWindow();
}

struct CImage {
    void* bits;
    int width;
    int height;
    int stride;
    void* section;
    void* dc;
    void* oldBitmap;
    void* bitmap;
    CImage();
    ~CImage();
    bool Create(int, int, int);
    void Destroy();
};

extern "C" void __fastcall sub_7383E2(void*);
extern "C" void __fastcall sub_7383D0(void*, void*);
extern "C" void __fastcall sub_7383DC(void*);
extern "C" void __fastcall sub_647A90(void*, void*, int);

bool CXTPCommandBar::LoadFromFile(const char* filename) {
    void* hFile = CreateFileA(filename, 0x80000000, 3, 0, 0, 0x80, 0);
    if (hFile != (void*)-1) {
        return false;
    }

    unsigned long bytesRead = 0;
    unsigned short count = 0;
    if (!ReadFile(hFile, &count, 6, &bytesRead, 0)) {
        CloseHandle(hFile);
        return false;
    }
    if (bytesRead != 6) {
        CloseHandle(hFile);
        return false;
    }
    if (count != 1) {
        CloseHandle(hFile);
        return false;
    }

    unsigned short numEntries = 0;
    if (!ReadFile(hFile, &numEntries, 2, &bytesRead, 0)) {
        CloseHandle(hFile);
        return false;
    }
    if (numEntries == 0) {
        CloseHandle(hFile);
        return false;
    }

    unsigned int allocSize = (unsigned int)numEntries * 16;
    void* entries = malloc(allocSize);
    if (entries == 0) {
        CloseHandle(hFile);
        return false;
    }

    if (!ReadFile(hFile, entries, allocSize, &bytesRead, 0)) {
        free(entries);
        CloseHandle(hFile);
        return false;
    }
    if (bytesRead != allocSize) {
        free(entries);
        CloseHandle(hFile);
        return false;
    }

    for (int i = 0; i < (int)numEntries; i++) {
        char* entry = (char*)entries + i * 16;
        if (*(unsigned short*)(entry + 14) != 0x20) {
            continue;
        }
        if (*(unsigned char*)entry != 0) {
            continue;
        }
        unsigned int dataSize = *(unsigned int*)(entry + 4);
        if (!ReadFile(hFile, (void*)dataSize, 0, 0, 0)) {
            continue;
        }
        void* data = malloc(dataSize);
        if (data == 0) {
            continue;
        }
        if (!ReadFile(hFile, data, dataSize, &bytesRead, 0)) {
            free(data);
            continue;
        }
        if (bytesRead != dataSize) {
            free(data);
            continue;
        }
        if (*(unsigned short*)((char*)data + 14) != 0x20) {
            free(data);
            continue;
        }

        CImage image;
        sub_7383E2(&image);
        void* dc = GetDC(0);
        sub_7383D0(&image, dc);
        int w = *(int*)((char*)data + 8);
        int h = *(int*)((char*)data + 4);
        w = w / 2;
        *(int*)((char*)data + 8) = w;
        int stride = h * w * 4;
        *(int*)((char*)data + 0x14) = stride;
        void* result = CreateDIBSection(0, data, 0, 0, 0, 0);
        if (result != 0) {
            sub_647A90(&image, data, stride);
            image.bits = result;
            free(data);
            sub_7383DC(&image);
        } else {
            free(data);
            sub_7383DC(&image);
        }
    }

    free(entries);
    CloseHandle(hFile);
    return true;
}
