// from server: 100% by king_originala
// roc 2008-06 004ab7f0  unit: FilePacketLogger  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab7f0
//
// 004ab7f0  56                   push esi
// 004ab7f1  8bf1                 mov esi, ecx
// 004ab7f3  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 004ab7f9  c7060c458200         mov dword ptr [esi], 0x82450c
// 004ab7ff  85c0                 test eax, eax
// 004ab801  740a                 je 0x4ab80d
// 004ab803  50                   push eax
// 004ab804  ff15d4278000         call dword ptr [0x8027d4]
// 004ab80a  83c404               add esp, 4
// 004ab80d  8bce                 mov ecx, esi
// 004ab80f  e82cf20000           call 0x4baa40
// 004ab814  f644240801           test byte ptr [esp + 8], 1
// 004ab819  7409                 je 0x4ab824
// 004ab81b  56                   push esi
// 004ab81c  e8594e1f00           call 0x6a067a
// 004ab821  83c404               add esp, 4
// 004ab824  8bc6                 mov eax, esi
// 004ab826  5e                   pop esi
// 004ab827  c20400               ret 4

extern "C" int (__cdecl *fclose_import)(void *);
void __cdecl operator delete(void *);

struct B_func_004baa40 {
    virtual ~B_func_004baa40();
};

struct S_func_004baa40 : B_func_004baa40 {
    ~S_func_004baa40();
};

struct FilePacketLogger : S_func_004baa40 {
    char padding[0x208];
    void *file;
    FilePacketLogger *destroy(unsigned int flags);
};

FilePacketLogger *FilePacketLogger::destroy(unsigned int flags)
{
    void *stream = file;
    *reinterpret_cast<unsigned int *>(this) = 0x82450c;
    if (stream)
        fclose_import(stream);
    S_func_004baa40::~S_func_004baa40();
    if (flags & 1)
        operator delete(this);
    return this;
}
