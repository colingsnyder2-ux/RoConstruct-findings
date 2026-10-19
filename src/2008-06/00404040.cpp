// from server: 55% by colin
// from server: 52% by colin
// roc 2008-06 00404040  unit: ATL::CRegObject  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404040
//
// 00404040  55                   push ebp
// 00404041  8bec                 mov ebp, esp
// 00404043  6aff                 push -1
// 00404045  68cecc7b00           push 0x7bccce
// 0040404a  64a100000000         mov eax, dword ptr fs:[0]
// 00404050  50                   push eax
// 00404051  64892500000000       mov dword ptr fs:[0], esp
// 00404058  51                   push ecx
// 00404059  b820110000           mov eax, 0x1120
// 0040405e  e8bdd42900           call 0x6a1520
// 00404063  53                   push ebx
// 00404064  56                   push esi
// 00404065  57                   push edi
// 00404066  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 0040406c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040406f  8bf1                 mov esi, ecx
// 00404071  33ff                 xor edi, edi
// 00404073  50                   push eax
// 00404074  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00404077  897dec               mov dword ptr [ebp - 0x14], edi
// 0040407a  e8e1dfffff           call 0x402060
// 0040407f  3bc7                 cmp eax, edi
// 00404081  0f8c4a030000         jl 0x4043d1
// 00404087  8d4dec               lea ecx, [ebp - 0x14]
// 0040408a  51                   push ecx
// 0040408b  8d95d0eeffff         lea edx, [ebp - 0x1130]
// 00404091  52                   push edx
// 00404092  e809deffff           call 0x401ea0
// 00404097  83c408               add esp, 8
// 0040409a  85c0                 test eax, eax
// 0040409c  750a                 jne 0x4040a8
// 0040409e  b809000280           mov eax, 0x80020009
// 004040a3  e929030000           jmp 0x4043d1
// 004040a8  8bce                 mov ecx, esi
// 004040aa  e851dfffff           call 0x402000
// 004040af  8d85d0eeffff         lea eax, [ebp - 0x1130]
// 004040b5  50                   push eax
// 004040b6  8bce                 mov ecx, esi
// 004040b8  e8a3dfffff           call 0x402060
// 004040bd  3bc7                 cmp eax, edi
// 004040bf  0f8c0c030000         jl 0x4043d1
// 004040c5  0fb745ec             movzx eax, word ptr [ebp - 0x14]
// 004040c9  83f813               cmp eax, 0x13
// 004040cc  0f8ff7010000         jg 0x4042c9
// 004040d2  0f8440010000         je 0x404218
// 004040d8  83f808               cmp eax, 8
// 004040db  0f841b010000         je 0x4041fc
// 004040e1  83f811               cmp eax, 0x11
// 004040e4  0f85d2020000         jne 0x4043bc
// 004040ea  8d8dd0eeffff         lea ecx, [ebp - 0x1130]
// 004040f0  51                   push ecx
// 004040f1  ff15b8218000         call dword ptr [0x8021b8]
// 004040f7  8bd8                 mov ebx, eax
// 004040f9  895de8               mov dword ptr [ebp - 0x18], ebx
// 004040fc  f6c301               test bl, 1
// 004040ff  7560                 jne 0x404161
// 00404101  99                   cdq 
// 00404102  2bc2                 sub eax, edx
// 00404104  8bf8                 mov edi, eax
// 00404106  d1ff                 sar edi, 1
// 00404108  897dec               mov dword ptr [ebp - 0x14], edi
// 0040410b  c785d0feffff00000000 mov dword ptr [ebp - 0x130], 0
// 00404115  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0040411c  57                   push edi
// 0040411d  8d8dd0feffff         lea ecx, [ebp - 0x130]
// 00404123  c645fc05             mov byte ptr [ebp - 4], 5
// 00404127  e884f9ffff           call 0x403ab0
// 0040412c  eb14                 jmp 0x404142

extern "C" int __stdcall lstrlenA(const char *);
extern int __cdecl LookupType(const char *, unsigned short *);

struct ByteBuffer {
    char *data;
    char storage[272];

    void Allocate(int count);
    __declspec(dllimport) ~ByteBuffer() throw();
};

struct S {
    long NextToken(char *);
    void SkipSpace();
    long f();
};

long S::f()
{
    char token[4096];
    unsigned short type = 0;
    long result = NextToken(token);
    if (result < 0)
        return result;

    if (!LookupType(token, &type))
        return (long)0x80020009UL;

    SkipSpace();
    result = NextToken(token);
    if (result < 0)
        return result;

    try {
        switch (type) {
        case 8:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(lstrlenA(token));
                return 0;
            }

        case 19:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(4);
                return 0;
            }

        case 0x4008:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(lstrlenA(token));
                return 0;
            }

        case 17:
            {
                int length = lstrlenA(token);
                if (length & 1)
                    return (long)0x80020009UL;

                int count = length / 2;
                type = (unsigned short)count;
                ByteBuffer bytes;
                bytes.data = 0;

                try {
                    bytes.Allocate(count);
                    for (int i = 0; i < count; ++i) {
                        char value = 0;
                        for (int j = 0; j < 2; ++j) {
                            char c = token[i * 2 + j];
                            char digit;
                            if (c >= '0' && c <= '9')
                                digit = (char)(c - '0');
                            else if (c >= 'A' && c <= 'F')
                                digit = (char)(c - 'A' + 10);
                            else if (c >= 'a' && c <= 'f')
                                digit = (char)(c - 'a' + 10);
                            else
                                return (long)0x80020009UL;
                            value = (char)(value * 16 + digit);
                        }
                        bytes.data[i] = value;
                    }
                }
                catch (...) {
                    throw;
                }

                SkipSpace();
                return 0;
            }

        default:
            return (long)0x80020009UL;
        }
    }
    catch (...) {
        SkipSpace();
        return (long)0x80020009UL;
    }
}
