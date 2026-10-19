// from server: 90% by colin
// from server: 60% by king_originala
// roc 2008-06 00413230  unit: CRbxChildFrame  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413230
//
// 00413230  6aff                 push -1
// 00413232  6824d87b00           push 0x7bd824
// 00413237  64a100000000         mov eax, dword ptr fs:[0]
// 0041323d  50                   push eax
// 0041323e  64892500000000       mov dword ptr fs:[0], esp
// 00413245  83ec54               sub esp, 0x54
// 00413248  53                   push ebx
// 00413249  56                   push esi
// 0041324a  8bf1                 mov esi, ecx
// 0041324c  8974240c             mov dword ptr [esp + 0xc], esi
// 00413250  e8f3db2800           call 0x6a0e48
// 00413255  8d442408             lea eax, [esp + 8]
// 00413259  50                   push eax
// 0041325a  33db                 xor ebx, ebx
// 0041325c  6885000000           push 0x85
// 00413261  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00413265  c70664e88000         mov dword ptr [esi], 0x80e864
// 0041326b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0041326f  e8ac922a00           call 0x6bc520
// 00413274  83c408               add esp, 8
// 00413277  895c2414             mov dword ptr [esp + 0x14], ebx
// 0041327b  c7442410a0e88000     mov dword ptr [esp + 0x10], 0x80e8a0
// 00413283  50                   push eax
// 00413284  8d4c2414             lea ecx, [esp + 0x14]
// 00413288  c644246801           mov byte ptr [esp + 0x68], 1
// 0041328d  e8d0d92800           call 0x6a0c62
// 00413292  53                   push ebx
// 00413293  8bce                 mov ecx, esi
// 00413295  53                   push ebx
// 00413296  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0041329a  0f8496000000         je 0x413336
// 004132a0  6a20                 push 0x20
// 004132a2  6a10                 push 0x10
// 004132a4  6a10                 push 0x10
// 004132a6  e897db2800           call 0x6a0e42
// 004132ab  85c0                 test eax, eax
// 004132ad  7531                 jne 0x4132e0
// 004132af  68d4e88000           push 0x80e8d4
// 004132b4  8d4c241c             lea ecx, [esp + 0x1c]
// 004132b8  ff1558248000         call dword ptr [0x802458]
// 004132be  8d4c2418             lea ecx, [esp + 0x18]
// 004132c2  51                   push ecx
// 004132c3  8d4c2438             lea ecx, [esp + 0x38]
// 004132c7  c644246802           mov byte ptr [esp + 0x68], 2
// 004132cc  e87f6affff           call 0x409d50
// 004132d1  68c81b8d00           push 0x8d1bc8
// 004132d6  8d542438             lea edx, [esp + 0x38]
// 004132da  52                   push edx
// 004132db  e8ace22800           call 0x6a158c
// 004132e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004132e4  8b4604               mov eax, dword ptr [esi + 4]
// 004132e7  51                   push ecx
// 004132e8  51                   push ecx
// 004132e9  50                   push eax
// 004132ea  e837d62800           call 0x6a0926
// 004132ef  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 004132f5  8b08                 mov ecx, dword ptr [eax]
// 004132f7  e8c4fcffff           call 0x412fc0
// 004132fc  83f8ff               cmp eax, -1
// 004132ff  0f85ca000000         jne 0x4133cf
// 00413305  68b4e88000           push 0x80e8b4
// 0041330a  8d4c241c             lea ecx, [esp + 0x1c]
// 0041330e  ff1558248000         call dword ptr [0x802458]
// 00413314  8d4c2418             lea ecx, [esp + 0x18]
// 00413318  51                   push ecx
// 00413319  8d4c2438             lea ecx, [esp + 0x38]
// 0041331d  c644246803           mov byte ptr [esp + 0x68], 3
// 00413322  e8296affff           call 0x409d50
// 00413327  68c81b8d00           push 0x8d1bc8
// 0041332c  8d542438             lea edx, [esp + 0x38]
// 00413330  52                   push edx
// 00413331  e856e22800           call 0x6a158c
// 00413336  68ff000000           push 0xff
// 0041333b  6a10                 push 0x10
// 0041333d  6a10                 push 0x10
// 0041333f  e8feda2800           call 0x6a0e42
// 00413344  85c0                 test eax, eax
// 00413346  7531                 jne 0x413379
// 00413348  68d4e88000           push 0x80e8d4
// 0041334d  8d4c241c             lea ecx, [esp + 0x1c]
// 00413351  ff1558248000         call dword ptr [0x802458]
// 00413357  8d442418             lea eax, [esp + 0x18]
// 0041335b  50                   push eax
// 0041335c  8d4c2438             lea ecx, [esp + 0x38]
// 00413360  c644246804           mov byte ptr [esp + 0x68], 4
// 00413365  e8e669ffff           call 0x409d50
// 0041336a  68c81b8d00           push 0x8d1bc8
// 0041336f  8d4c2438             lea ecx, [esp + 0x38]
// 00413373  51                   push ecx
// 00413374  e813e22800           call 0x6a158c
// 00413379  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041337d  8b4604               mov eax, dword ptr [esi + 4]
// 00413380  68ff00ff00           push 0xff00ff
// 00413385  52                   push edx
// 00413386  50                   push eax
// 00413387  e89ad52800           call 0x6a0926
// 0041338c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00413392  8b08                 mov ecx, dword ptr [eax]
// 00413394  e837fdffff           call 0x4130d0
// 00413399  83f8ff               cmp eax, -1
// 0041339c  7531                 jne 0x4133cf
// 0041339e  68b4e88000           push 0x80e8b4
// 004133a3  8d4c241c             lea ecx, [esp + 0x1c]
// 004133a7  ff1558248000         call dword ptr [0x802458]
// 004133ad  8d4c2418             lea ecx, [esp + 0x18]
// 004133b1  51                   push ecx
// 004133b2  8d4c2438             lea ecx, [esp + 0x38]
// 004133b6  c644246805           mov byte ptr [esp + 0x68], 5
// 004133bb  e89069ffff           call 0x409d50
// 004133c0  68c81b8d00           push 0x8d1bc8
// 004133c5  8d542438             lea edx, [esp + 0x38]
// 004133c9  52                   push edx
// 004133ca  e8bde12800           call 0x6a158c
// 004133cf  8d4c2410             lea ecx, [esp + 0x10]
// 004133d3  885c2464             mov byte ptr [esp + 0x64], bl
// 004133d7  c7442410a0e88000     mov dword ptr [esp + 0x10], 0x80e8a0
// 004133df  e8bcddffff           call 0x4111a0
// 004133e4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004133e8  8bc6                 mov eax, esi
// 004133ea  5e                   pop esi
// 004133eb  5b                   pop ebx
// 004133ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004133f3  83c460               add esp, 0x60
// 004133f6  c3                   ret 



#include <string>
typedef std::string String;
struct Exception {
    unsigned char data[40];
    Exception(const String&);
};

extern "C" __declspec(noreturn) void __stdcall ThrowException(void*, void*);
extern "C" void* __cdecl LoadImages(unsigned int, int*);

struct GdiObject {
    void* handle;
    GdiObject();
    virtual ~GdiObject();
};

inline GdiObject::GdiObject() : handle(0) {}
inline GdiObject::~GdiObject() {}

struct Bitmap : GdiObject {
    Bitmap();
    virtual ~Bitmap();
    int Attach(void*);
    int DeleteObject();
};

inline Bitmap::Bitmap() {}
inline Bitmap::~Bitmap() { DeleteObject(); }

struct ImageManager {
    int AddAlpha();
    int AddMasked();
};

struct ManagerHolder {
    ImageManager* manager;
};

struct ImageListData {
    unsigned char padding[148];
    ManagerHolder* holder;
};

extern "C" ImageListData* __stdcall AddImage(void*, void*, unsigned long);

struct ImageList {
    void* handle;
    ImageList();
    virtual ~ImageList();
    int Create(int, int, unsigned int, int, int);
};

struct S : ImageList {
    S();
    virtual ~S();
};

S::S()
{
    int alpha = 0;
    void* image = LoadImages(133, &alpha);
    Bitmap bitmap;
    bitmap.Attach(image);

    if (alpha) {
        if (!Create(16, 16, 32, 0, 0)) {
            String message("Unable to create CClassImages");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }

        if (AddImage(handle, bitmap.handle,
                     (unsigned long)bitmap.handle)->holder->manager->AddAlpha() == -1) {
            String message("Unable to add IDB_CLASSIMAGES");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }
    } else {
        if (!Create(16, 16, 255, 0, 0)) {
            String message("Unable to create CClassImages");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }

        if (AddImage(handle, bitmap.handle, 0x00ff00ff)->holder->manager->AddMasked() == -1) {
            String message("Unable to add IDB_CLASSIMAGES");
            Exception error(message);
            ThrowException(&error, (void*)0x008d1bc8);
        }
    }
}
