// from server: 78% by colin
// from server: 75% by king_originala
// roc 2008-06 005eaef0  unit: RBX::World  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eaef0
//
// 005eaef0  6aff                 push -1
// 005eaef2  68ad6c7d00           push 0x7d6cad
// 005eaef7  64a100000000         mov eax, dword ptr fs:[0]
// 005eaefd  50                   push eax
// 005eaefe  64892500000000       mov dword ptr fs:[0], esp
// 005eaf05  83ec5c               sub esp, 0x5c
// 005eaf08  53                   push ebx
// 005eaf09  33db                 xor ebx, ebx
// 005eaf0b  55                   push ebp
// 005eaf0c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 005eaf10  895c2408             mov dword ptr [esp + 8], ebx
// 005eaf14  c744240c5c978100     mov dword ptr [esp + 0xc], 0x81975c
// 005eaf1c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005eaf20  895c2418             mov dword ptr [esp + 0x18], ebx
// 005eaf24  895c2414             mov dword ptr [esp + 0x14], ebx
// 005eaf28  895c2410             mov dword ptr [esp + 0x10], ebx
// 005eaf2c  6a08                 push 8
// 005eaf2e  56                   push esi
// 005eaf2f  8d4c2414             lea ecx, [esp + 0x14]
// 005eaf33  c744247401000000     mov dword ptr [esp + 0x74], 1
// 005eaf3b  e85055f2ff           call 0x510490
// 005eaf40  8b442414             mov eax, dword ptr [esp + 0x14]
// 005eaf44  3b4708               cmp eax, dword ptr [edi + 8]
// 005eaf47  7431                 je 0x5eaf7a
// 005eaf49  689cf98300           push 0x83f99c
// 005eaf4e  8d4c2424             lea ecx, [esp + 0x24]
// 005eaf52  ff1558248000         call dword ptr [0x802458]
// 005eaf58  8d4c2420             lea ecx, [esp + 0x20]
// 005eaf5c  51                   push ecx
// 005eaf5d  8d4c2440             lea ecx, [esp + 0x40]
// 005eaf61  c644247002           mov byte ptr [esp + 0x70], 2
// 005eaf66  e8e5ede1ff           call 0x409d50
// 005eaf6b  68c81b8d00           push 0x8d1bc8
// 005eaf70  8d542440             lea edx, [esp + 0x40]
// 005eaf74  52                   push edx
// 005eaf75  e812660b00           call 0x6a158c
// 005eaf7a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005eaf7e  3b470c               cmp eax, dword ptr [edi + 0xc]
// 005eaf81  7431                 je 0x5eafb4
// 005eaf83  6874f98300           push 0x83f974
// 005eaf88  8d4c2424             lea ecx, [esp + 0x24]
// 005eaf8c  ff1558248000         call dword ptr [0x802458]
// 005eaf92  8d4c2420             lea ecx, [esp + 0x20]
// 005eaf96  51                   push ecx
// 005eaf97  8d4c2440             lea ecx, [esp + 0x40]
// 005eaf9b  c644247003           mov byte ptr [esp + 0x70], 3
// 005eafa0  e8abede1ff           call 0x409d50
// 005eafa5  68c81b8d00           push 0x8d1bc8
// 005eafaa  8d542440             lea edx, [esp + 0x40]
// 005eafae  52                   push edx
// 005eafaf  e8d8650b00           call 0x6a158c
// 005eafb4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005eafb8  3b4710               cmp eax, dword ptr [edi + 0x10]
// 005eafbb  7431                 je 0x5eafee
// 005eafbd  6840f98300           push 0x83f940
// 005eafc2  8d4c2424             lea ecx, [esp + 0x24]
// 005eafc6  ff1558248000         call dword ptr [0x802458]
// 005eafcc  8d4c2420             lea ecx, [esp + 0x20]
// 005eafd0  51                   push ecx
// 005eafd1  8d4c2440             lea ecx, [esp + 0x40]
// 005eafd5  c644247004           mov byte ptr [esp + 0x70], 4
// 005eafda  e871ede1ff           call 0x409d50
// 005eafdf  68c81b8d00           push 0x8d1bc8
// 005eafe4  8d542440             lea edx, [esp + 0x40]
// 005eafe8  52                   push edx
// 005eafe9  e89e650b00           call 0x6a158c
// 005eafee  56                   push esi
// 005eafef  8bcd                 mov ecx, ebp
// 005eaff1  ff155c248000         call dword ptr [0x80245c]
// 005eaff7  8d4c240c             lea ecx, [esp + 0xc]
// 005eaffb  c744240801000000     mov dword ptr [esp + 8], 1
// 005eb003  885c246c             mov byte ptr [esp + 0x6c], bl
// 005eb007  e82432f2ff           call 0x50e230
// 005eb00c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005eb010  8bc5                 mov eax, ebp
// 005eb012  5d                   pop ebp
// 005eb013  5b                   pop ebx
// 005eb014  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb01b  83c468               add esp, 0x68
// 005eb01e  c3                   ret 

struct __declspec(dllimport) String {
    char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

extern void (__thiscall *stringFromText)(String *, const char *);
extern void (__thiscall *stringCopy)(String *, const String &);

struct Error {
    char storage[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Image {
    void *pixels;
    int width;
    int height;
    int channels;

    Image();
    virtual ~Image();
    void load(const String &, int);
};

inline Image::Image()
{
    channels = 0;
    height = 0;
    width = 0;
    pixels = 0;
}

String makeImageString(const String &name, const Image &reference)
{
    Image image;
    image.load(name, 8);

    if (image.width != reference.width)
        throw Error(String("skybox images have different widths"));

    if (image.height != reference.height)
        throw Error(String("skybox images have different heights"));

    if (image.channels != reference.channels)
        throw Error(String("skybox images have different numbers of channels"));

    return String(name);
}
