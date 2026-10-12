// from server: 75% by king_originala
// roc 2008-06 00433ab0  unit: CObjectBrowser  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433ab0
//
// 00433ab0  64a100000000         mov eax, dword ptr fs:[0]
// 00433ab6  6aff                 push -1
// 00433ab8  68b8fe7b00           push 0x7bfeb8
// 00433abd  50                   push eax
// 00433abe  64892500000000       mov dword ptr fs:[0], esp
// 00433ac5  83ec08               sub esp, 8
// 00433ac8  6a01                 push 1
// 00433aca  6a00                 push 0
// 00433acc  6a19                 push 0x19
// 00433ace  6a10                 push 0x10
// 00433ad0  6a10                 push 0x10
// 00433ad2  8bce                 mov ecx, esi
// 00433ad4  e869d32600           call 0x6a0e42
// 00433ad9  85c0                 test eax, eax
// 00433adb  750f                 jne 0x433aec
// 00433add  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433ae1  64890d00000000       mov dword ptr fs:[0], ecx
// 00433ae8  83c414               add esp, 0x14
// 00433aeb  c3                   ret 
// 00433aec  c744240400000000     mov dword ptr [esp + 4], 0
// 00433af4  c70424a0e88000       mov dword ptr [esp], 0x80e8a0
// 00433afb  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00433b00  50                   push eax
// 00433b01  6a02                 push 2
// 00433b03  50                   push eax
// 00433b04  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00433b0c  e81bd42600           call 0x6a0f2c
// 00433b11  50                   push eax
// 00433b12  ff15442d8000         call dword ptr [0x802d44]
// 00433b18  50                   push eax
// 00433b19  8d4c2404             lea ecx, [esp + 4]
// 00433b1d  e840d12600           call 0x6a0c62
// 00433b22  33c9                 xor ecx, ecx
// 00433b24  33c0                 xor eax, eax
// 00433b26  51                   push ecx
// 00433b27  50                   push eax
// 00433b28  8d442408             lea eax, [esp + 8]
// 00433b2c  50                   push eax
// 00433b2d  e89e832800           call 0x6bbed0
// 00433b32  8b542410             mov edx, dword ptr [esp + 0x10]
// 00433b36  8b4e04               mov ecx, dword ptr [esi + 4]
// 00433b39  83c40c               add esp, 0xc
// 00433b3c  50                   push eax
// 00433b3d  52                   push edx
// 00433b3e  51                   push ecx
// 00433b3f  e8e2cd2600           call 0x6a0926
// 00433b44  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00433b4a  8b08                 mov ecx, dword ptr [eax]
// 00433b4c  e87ff5fdff           call 0x4130d0
// 00433b51  8d0c24               lea ecx, [esp]
// 00433b54  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00433b5c  c70424a0e88000       mov dword ptr [esp], 0x80e8a0
// 00433b63  e838d6fdff           call 0x4111a0
// 00433b68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433b6c  b801000000           mov eax, 1
// 00433b71  64890d00000000       mov dword ptr fs:[0], ecx
// 00433b78  83c414               add esp, 0x14
// 00433b7b  c3                   ret 

typedef void* HANDLE;

extern "C" HANDLE __stdcall LoadBitmapA(HANDLE, const char*);
extern "C" HANDLE __stdcall FindResourceModule(const char*, const char*);

struct Bitmap
{
    HANDLE handle;

    Bitmap() : handle(0) {}
    virtual ~Bitmap() { release(); }

    int attach(HANDLE);
    void release();
};

extern "C" int __cdecl PrepareBitmap(Bitmap*, int, int);

struct ImageManager
{
    void install(HANDLE, HANDLE, int);
};

struct ModuleState
{
    unsigned char padding[0x94];
    ImageManager** manager;
};

extern "C" ModuleState* __cdecl GetModuleState();

struct S
{
    void* vtable;
    HANDLE handle;

    int create(int, int, unsigned int, int, int);
    int __cdecl f(unsigned short);
};

int __cdecl S::f(unsigned short resource)
{
    if (!create(16, 16, 0x19, 0, 1))
        return 0;

    Bitmap bitmap;
    bitmap.attach(LoadBitmapA(
        FindResourceModule((const char*)(unsigned int)resource,
                           (const char*)2),
        (const char*)(unsigned int)resource));

    int value = PrepareBitmap(&bitmap, 0, 0);
    (*GetModuleState()->manager)->install(handle, bitmap.handle, value);
    return 1;
}
