// from server: 100% by king_originala
// roc 2008-06 00569bf0  unit: RBX::StandardOut  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569bf0
//
// 00569bf0  83ec14               sub esp, 0x14
// 00569bf3  56                   push esi
// 00569bf4  57                   push edi
// 00569bf5  8b3d10208000         mov edi, dword ptr [0x802010]
// 00569bfb  8d44240c             lea eax, [esp + 0xc]
// 00569bff  50                   push eax
// 00569c00  6819000200           push 0x20019
// 00569c05  33f6                 xor esi, esi
// 00569c07  56                   push esi
// 00569c08  68f01b8100           push 0x811bf0
// 00569c0d  6801000080           push 0x80000001
// 00569c12  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00569c1a  89742420             mov dword ptr [esp + 0x20], esi
// 00569c1e  ffd7                 call edi
// 00569c20  8d4c2410             lea ecx, [esp + 0x10]
// 00569c24  51                   push ecx
// 00569c25  85c0                 test eax, eax
// 00569c27  7518                 jne 0x569c41
// 00569c29  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569c2d  8d54240c             lea edx, [esp + 0xc]
// 00569c31  52                   push edx
// 00569c32  8d44241c             lea eax, [esp + 0x1c]
// 00569c36  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00569c3e  50                   push eax
// 00569c3f  eb36                 jmp 0x569c77
// 00569c41  6819000200           push 0x20019
// 00569c46  6a00                 push 0
// 00569c48  68a86b8100           push 0x816ba8
// 00569c4d  6802000080           push 0x80000002
// 00569c52  89742424             mov dword ptr [esp + 0x24], esi
// 00569c56  ffd7                 call edi
// 00569c58  85c0                 test eax, eax
// 00569c5a  7529                 jne 0x569c85
// 00569c5c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569c60  8d542414             lea edx, [esp + 0x14]
// 00569c64  52                   push edx
// 00569c65  8d44240c             lea eax, [esp + 0xc]
// 00569c69  50                   push eax
// 00569c6a  8d4c2420             lea ecx, [esp + 0x20]
// 00569c6e  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 00569c76  51                   push ecx
// 00569c77  6a00                 push 0
// 00569c79  6868f58200           push 0x82f568
// 00569c7e  56                   push esi
// 00569c7f  ff1520208000         call dword ptr [0x802020]
// 00569c85  837c240800           cmp dword ptr [esp + 8], 0
// 00569c8a  0f95c2               setne dl
// 00569c8d  8815b94a9700         mov byte ptr [0x974ab9], dl
// 00569c93  85f6                 test esi, esi
// 00569c95  7407                 je 0x569c9e
// 00569c97  56                   push esi
// 00569c98  ff1508208000         call dword ptr [0x802008]
// 00569c9e  5f                   pop edi
// 00569c9f  5e                   pop esi
// 00569ca0  83c414               add esp, 0x14
// 00569ca3  c3                   ret 

typedef unsigned long DWORD;
typedef void* HKEY;
typedef long (__stdcall *OpenKeyFunction)(
    HKEY, const char*, DWORD, DWORD, HKEY*);

extern "C" OpenKeyFunction RegOpenKeyExA;
extern "C" long (__stdcall *RegQueryValueExA)(
    HKEY, const char*, DWORD*, DWORD*, unsigned char*, DWORD*);
extern "C" long (__stdcall *RegCloseKey)(HKEY);

const char userPath[] = "Software\\ROBLOX Corporation\\Roblox";
const char machinePath[] = "Software\\Roblox";
const char valueName[] = "SkipTrustCheck";
extern bool skipTrustCheck;

struct RegistryLocals {
    HKEY userKey;
    union {
        struct {
            DWORD size;
            DWORD type;
        } user;
        struct {
            HKEY key;
            DWORD size;
            DWORD type;
        } machine;
    };
};

void loadSkipTrustCheck()
{
    DWORD value = 0;
    RegistryLocals data;
    OpenKeyFunction openKey = RegOpenKeyExA;
    HKEY key = 0;
    data.userKey = 0;

    if (openKey(reinterpret_cast<HKEY>(0x80000001UL),
                userPath, 0, 0x20019, &data.userKey) == 0)
    {
        key = data.userKey;
        data.user.size = 4;
        RegQueryValueExA(
            key, valueName, 0, &data.user.type,
            reinterpret_cast<unsigned char*>(&value), &data.user.size);
    }
    else
    {
        data.machine.key = 0;
        if (openKey(reinterpret_cast<HKEY>(0x80000002UL),
                    machinePath, 0, 0x20019, &data.machine.key) == 0)
        {
            key = data.machine.key;
            data.machine.size = 4;
            RegQueryValueExA(
                key, valueName, 0, &data.machine.type,
                reinterpret_cast<unsigned char*>(&value),
                &data.machine.size);
        }
    }

    skipTrustCheck = value != 0;
    if (key)
        RegCloseKey(key);
}
