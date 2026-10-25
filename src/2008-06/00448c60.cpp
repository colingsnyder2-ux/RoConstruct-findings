// from server: 100% by king_originala
// roc 2008-06 00448c60  unit: VCRenderSettings::?$EnumPropDescriptor  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448c60
//
// 00448c60  6aff                 push -1
// 00448c62  68d00f7c00           push 0x7c0fd0
// 00448c67  64a100000000         mov eax, dword ptr fs:[0]
// 00448c6d  50                   push eax
// 00448c6e  64892500000000       mov dword ptr fs:[0], esp
// 00448c75  83ec20               sub esp, 0x20
// 00448c78  53                   push ebx
// 00448c79  56                   push esi
// 00448c7a  8bf1                 mov esi, ecx
// 00448c7c  89742408             mov dword ptr [esp + 8], esi
// 00448c80  e89bf4ffff           call 0x448120
// 00448c85  d905c05b8100         fld dword ptr [0x815bc0]
// 00448c8b  d99e44010000         fstp dword ptr [esi + 0x144]
// 00448c91  33c0                 xor eax, eax
// 00448c93  d905c05b8100         fld dword ptr [0x815bc0]
// 00448c99  bb01000000           mov ebx, 1
// 00448c9e  d99e48010000         fstp dword ptr [esi + 0x148]
// 00448ca4  8d8e58010000         lea ecx, [esi + 0x158]
// 00448caa  d905c85b8100         fld dword ptr [0x815bc8]
// 00448cb0  89442430             mov dword ptr [esp + 0x30], eax
// 00448cb4  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 00448cba  c70664638100         mov dword ptr [esi], 0x816364
// 00448cc0  d905c85b8100         fld dword ptr [0x815bc8]
// 00448cc6  c7461054638100       mov dword ptr [esi + 0x10], 0x816354
// 00448ccd  d99e50010000         fstp dword ptr [esi + 0x150]
// 00448cd3  c746144c638100       mov dword ptr [esi + 0x14], 0x81634c
// 00448cda  c7462044638100       mov dword ptr [esi + 0x20], 0x816344
// 00448ce1  c7462434638100       mov dword ptr [esi + 0x24], 0x816334
// 00448ce8  c7464424638100       mov dword ptr [esi + 0x44], 0x816324
// 00448cef  c7466414638100       mov dword ptr [esi + 0x64], 0x816314
// 00448cf6  c7868400000004638100 mov dword ptr [esi + 0x84], 0x816304
// 00448d00  c786a4000000f4628100 mov dword ptr [esi + 0xa4], 0x8162f4
// 00448d0a  c786c4000000e4628100 mov dword ptr [esi + 0xc4], 0x8162e4
// 00448d14  899e30010000         mov dword ptr [esi + 0x130], ebx
// 00448d1a  898634010000         mov dword ptr [esi + 0x134], eax
// 00448d20  c7863801000002000000 mov dword ptr [esi + 0x138], 2
// 00448d2a  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00448d30  898640010000         mov dword ptr [esi + 0x140], eax
// 00448d36  889e54010000         mov byte ptr [esi + 0x154], bl
// 00448d3c  ff1560248000         call dword ptr [0x802460]
// 00448d42  885c2430             mov byte ptr [esp + 0x30], bl
// 00448d46  e825d70200           call 0x476470
// 00448d4b  3d0024f400           cmp eax, 0xf42400
// 00448d50  721a                 jb 0x448d6c
// 00448d52  b800040000           mov eax, 0x400
// 00448d57  b900030000           mov ecx, 0x300
// 00448d5c  66898674010000       mov word ptr [esi + 0x174], ax
// 00448d63  66898e76010000       mov word ptr [esi + 0x176], cx
// 00448d6a  eb18                 jmp 0x448d84
// 00448d6c  ba20030000           mov edx, 0x320
// 00448d71  b858020000           mov eax, 0x258
// 00448d76  66899674010000       mov word ptr [esi + 0x174], dx
// 00448d7d  66898676010000       mov word ptr [esi + 0x176], ax
// 00448d84  8b0d6c069300         mov ecx, dword ptr [0x93066c]
// 00448d8a  898e78010000         mov dword ptr [esi + 0x178], ecx
// 00448d90  68d4628100           push 0x8162d4
// 00448d95  8d4c2410             lea ecx, [esp + 0x10]
// 00448d99  ff1558248000         call dword ptr [0x802458]
// 00448d9f  8d54240c             lea edx, [esp + 0xc]
// 00448da3  52                   push edx
// 00448da4  8bce                 mov ecx, esi
// 00448da6  c644243402           mov byte ptr [esp + 0x34], 2
// 00448dab  e8e0211100           call 0x55af90
// 00448db0  8d4c240c             lea ecx, [esp + 0xc]
// 00448db4  885c2430             mov byte ptr [esp + 0x30], bl
// 00448db8  ff1568248000         call dword ptr [0x802468]
// 00448dbe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448dc2  8bc6                 mov eax, esi
// 00448dc4  891df82d9400         mov dword ptr [0x942df8], ebx
// 00448dca  5e                   pop esi
// 00448dcb  5b                   pop ebx
// 00448dcc  64890d00000000       mov dword ptr fs:[0], ecx
// 00448dd3  83c42c               add esp, 0x2c
// 00448dd6  c3                   ret 

typedef unsigned long DWORD;

struct String;
extern void (__thiscall *string_default)(String *);
extern void (__thiscall *string_text)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);
extern unsigned long __cdecl availableMemory();

struct String {
    char storage[28];
    String();
    String(const char *);
    ~String();
};

inline String::String() { string_default(this); }
inline String::String(const char *s) { string_text(this, s); }
inline String::~String() { string_destroy(this); }

struct Base {
    char storage[0x130];
    Base();
    ~Base();
};

struct S : Base {
    DWORD mode;
    DWORD value134;
    DWORD quality;
    DWORD value13c;
    DWORD value140;
    float value144;
    float value148;
    float value14c;
    float value150;
    bool enabled;
    char padding[3];
    String text;
    unsigned short width;
    unsigned short height;
    DWORD value178;

    S();
    void setName(const String &);
};

S::S()
    : Base(),
      mode((
          value144 = *reinterpret_cast<const float *>(0x815bc0),
          value148 = *reinterpret_cast<const float *>(0x815bc0),
          value14c = *reinterpret_cast<const float *>(0x815bc8),
          *reinterpret_cast<volatile DWORD *>(reinterpret_cast<char *>(this) + 0x00) = 0x816364,
          value150 = *reinterpret_cast<const float *>(0x815bc8),
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x10) = 0x816354,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x14) = 0x81634c,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x20) = 0x816344,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x24) = 0x816334,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x44) = 0x816324,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x64) = 0x816314,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0x84) = 0x816304,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0xa4) = 0x8162f4,
          *reinterpret_cast<DWORD *>(reinterpret_cast<char *>(this) + 0xc4) = 0x8162e4,
          1)),
      value134(0),
      quality(2),
      value13c(0),
      value140(0),
      enabled(true),
      text()
{
    if (availableMemory() >= 16000000UL) {
        width = 1024;
        height = 768;
    } else {
        width = 800;
        height = 600;
    }

    value178 = *reinterpret_cast<const DWORD *>(0x93066c);

    {
        String name(reinterpret_cast<const char *>(0x8162d4));
        setName(name);
    }

    *reinterpret_cast<DWORD *>(0x942df8) = 1;
}
