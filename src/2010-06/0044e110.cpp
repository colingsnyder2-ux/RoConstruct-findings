// roc 2010-06 0044e110  unit: CRbxPlayDocTemplate  size: 486 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044e110
//
// 0044e110  55                   push ebp
// 0044e111  8bec                 mov ebp, esp
// 0044e113  6aff                 push -1
// 0044e115  68a8199800           push 0x9819a8
// 0044e11a  64a100000000         mov eax, dword ptr fs:[0]
// 0044e120  50                   push eax
// 0044e121  64892500000000       mov dword ptr fs:[0], esp
// 0044e128  83ec1c               sub esp, 0x1c
// 0044e12b  53                   push ebx
// 0044e12c  56                   push esi
// 0044e12d  8b7508               mov esi, dword ptr [ebp + 8]
// 0044e130  57                   push edi
// 0044e131  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044e134  33db                 xor ebx, ebx
// 0044e136  56                   push esi
// 0044e137  8d4dd8               lea ecx, [ebp - 0x28]
// 0044e13a  33ff                 xor edi, edi
// 0044e13c  895dec               mov dword ptr [ebp - 0x14], ebx
// 0044e13f  e8acfcffff           call 0x44ddf0
// 0044e144  897dfc               mov dword ptr [ebp - 4], edi
// 0044e147  385ddc               cmp byte ptr [ebp - 0x24], bl
// 0044e14a  0f8465010000         je 0x44e2b5
// 0044e150  8b06                 mov eax, dword ptr [esi]
// 0044e152  8b4804               mov ecx, dword ptr [eax + 4]
// 0044e155  03ce                 add ecx, esi
// 0044e157  ff15e0a49e00         call dword ptr [0x9ea4e0]
// 0044e15d  83f801               cmp eax, 1
// 0044e160  7e10                 jle 0x44e172
// 0044e162  8b0e                 mov ecx, dword ptr [esi]
// 0044e164  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e167  03ce                 add ecx, esi
// 0044e169  ff15e0a49e00         call dword ptr [0x9ea4e0]
// 0044e16f  8bf8                 mov edi, eax
// 0044e171  4f                   dec edi
// 0044e172  8b16                 mov edx, dword ptr [esi]
// 0044e174  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044e177  03ce                 add ecx, esi
// 0044e179  c645fc01             mov byte ptr [ebp - 4], 1
// 0044e17d  ff15dca49e00         call dword ptr [0x9ea4dc]
// 0044e183  25c0010000           and eax, 0x1c0
// 0044e188  83f840               cmp eax, 0x40
// 0044e18b  745b                 je 0x44e1e8
// 0044e18d  8d4900               lea ecx, [ecx]
// 0044e190  85db                 test ebx, ebx
// 0044e192  0f85ed000000         jne 0x44e285
// 0044e198  85ff                 test edi, edi
// 0044e19a  7e4c                 jle 0x44e1e8
// 0044e19c  8b06                 mov eax, dword ptr [esi]
// 0044e19e  8b4804               mov ecx, dword ptr [eax + 4]
// 0044e1a1  8a543130             mov dl, byte ptr [ecx + esi + 0x30]
// 0044e1a5  03ce                 add ecx, esi
// 0044e1a7  8855e8               mov byte ptr [ebp - 0x18], dl
// 0044e1aa  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044e1b0  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0044e1b3  51                   push ecx
// 0044e1b4  8bc8                 mov ecx, eax
// 0044e1b6  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 0044e1bc  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044e1bf  ff15d4a49e00         call dword ptr [0x9ea4d4]
// 0044e1c5  8d55e4               lea edx, [ebp - 0x1c]
// 0044e1c8  8945e0               mov dword ptr [ebp - 0x20], eax
// 0044e1cb  52                   push edx
// 0044e1cc  8d45e0               lea eax, [ebp - 0x20]
// 0044e1cf  50                   push eax
// 0044e1d0  ff15d0a49e00         call dword ptr [0x9ea4d0]
// 0044e1d6  83c408               add esp, 8
// 0044e1d9  84c0                 test al, al
// 0044e1db  7408                 je 0x44e1e5
// 0044e1dd  bb04000000           mov ebx, 4
// 0044e1e2  895dec               mov dword ptr [ebp - 0x14], ebx
// 0044e1e5  4f                   dec edi
// 0044e1e6  eba8                 jmp 0x44e190
// 0044e1e8  8b0e                 mov ecx, dword ptr [esi]
// 0044e1ea  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e1ed  03ce                 add ecx, esi
// 0044e1ef  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044e1f5  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044e1f8  52                   push edx
// 0044e1f9  8bc8                 mov ecx, eax
// 0044e1fb  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 0044e201  8945e0               mov dword ptr [ebp - 0x20], eax
// 0044e204  ff15d4a49e00         call dword ptr [0x9ea4d4]
// 0044e20a  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044e20d  8d45e0               lea eax, [ebp - 0x20]
// 0044e210  50                   push eax
// 0044e211  8d4de4               lea ecx, [ebp - 0x1c]
// 0044e214  51                   push ecx
// 0044e215  ff15d0a49e00         call dword ptr [0x9ea4d0]
// 0044e21b  83c408               add esp, 8
// 0044e21e  84c0                 test al, al
// 0044e220  740e                 je 0x44e230
// 0044e222  bb04000000           mov ebx, 4
// 0044e227  895dec               mov dword ptr [ebp - 0x14], ebx
// 0044e22a  8d9b00000000         lea ebx, [ebx]
// 0044e230  85db                 test ebx, ebx
// 0044e232  7551                 jne 0x44e285
// 0044e234  85ff                 test edi, edi
// 0044e236  7e4d                 jle 0x44e285
// 0044e238  8b16                 mov edx, dword ptr [esi]
// 0044e23a  8b4204               mov eax, dword ptr [edx + 4]
// 0044e23d  8a543030             mov dl, byte ptr [eax + esi + 0x30]
// 0044e241  8d0c30               lea ecx, [eax + esi]
// 0044e244  8855e0               mov byte ptr [ebp - 0x20], dl
// 0044e247  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044e24d  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044e250  51                   push ecx
// 0044e251  8bc8                 mov ecx, eax
// 0044e253  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 0044e259  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044e25c  ff15d4a49e00         call dword ptr [0x9ea4d4]
// 0044e262  8d55e4               lea edx, [ebp - 0x1c]
// 0044e265  8945e8               mov dword ptr [ebp - 0x18], eax
// 0044e268  52                   push edx
// 0044e269  8d45e8               lea eax, [ebp - 0x18]
// 0044e26c  50                   push eax
// 0044e26d  ff15d0a49e00         call dword ptr [0x9ea4d0]
// 0044e273  83c408               add esp, 8
// 0044e276  84c0                 test al, al
// 0044e278  7408                 je 0x44e282
// 0044e27a  bb04000000           mov ebx, 4
// 0044e27f  895dec               mov dword ptr [ebp - 0x14], ebx
// 0044e282  4f                   dec edi
// 0044e283  ebab                 jmp 0x44e230
// 0044e285  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044e28c  eb27                 jmp 0x44e2b5
// 0044e28e  8b4508               mov eax, dword ptr [ebp + 8]
// 0044e291  8b08                 mov ecx, dword ptr [eax]
// 0044e293  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e296  6a01                 push 1
// 0044e298  6a04                 push 4
// 0044e29a  03c8                 add ecx, eax
// 0044e29c  ff15c4a49e00         call dword ptr [0x9ea4c4]
// 0044e2a2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044e2a9  b8afe24400           mov eax, 0x44e2af
// 0044e2ae  c3                   ret 
// 0044e2af  8b7508               mov esi, dword ptr [ebp + 8]
// 0044e2b2  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0044e2b5  8b16                 mov edx, dword ptr [esi]
// 0044e2b7  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044e2ba  6a00                 push 0
// 0044e2bc  03ce                 add ecx, esi
// 0044e2be  ff15c8a49e00         call dword ptr [0x9ea4c8]
// 0044e2c4  8b06                 mov eax, dword ptr [esi]
// 0044e2c6  8b4804               mov ecx, dword ptr [eax + 4]
// 0044e2c9  6a00                 push 0
// 0044e2cb  53                   push ebx
// 0044e2cc  03ce                 add ecx, esi
// 0044e2ce  ff15c4a49e00         call dword ptr [0x9ea4c4]
// 0044e2d4  8d4dd8               lea ecx, [ebp - 0x28]
// 0044e2d7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0044e2de  e8bdfbffff           call 0x44dea0
// 0044e2e3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044e2e6  5f                   pop edi
// 0044e2e7  8bc6                 mov eax, esi
// 0044e2e9  5e                   pop esi
// 0044e2ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e2f1  5b                   pop ebx
// 0044e2f2  8be5                 mov esp, ebp
// 0044e2f4  5d                   pop ebp
// 0044e2f5  c3                   ret 
// copied from an identical function in another client (function ?insert_character@@YAAAUStream@@AAU1@D@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Buffer;
struct Stream;

struct IOS {
    char reserved[0x30];
    char fill;

    __declspec(dllimport) void setstate(int, bool = false);
    __declspec(dllimport) void width(int);
};

struct Stream : virtual IOS {
    struct Sentry {
        Stream *stream;
        bool ready;
        Sentry(Stream *);
        ~Sentry();
    };
};

extern int (__thiscall *get_width)(const IOS *);
extern int (__thiscall *get_flags)(const IOS *);
extern Buffer *(__thiscall *get_buffer)(const IOS *);
extern int (__thiscall *put_character)(Buffer *, char);
extern int (__cdecl *end_of_file)();
extern bool (__cdecl *equal_int_type)(const int &, const int &);

#define STREAM_IOS \
    reinterpret_cast<IOS *>(reinterpret_cast<char *>(&stream) + \
                            (*reinterpret_cast<int **>(&stream))[1])

Stream &__cdecl insert_character(Stream &stream, char character)
{
    int state = 0;
    Stream::Sentry sentry(&stream);

    if (sentry.ready) {
        int padding = 0;
        if (get_width(STREAM_IOS) > 1)
            padding = get_width(STREAM_IOS) - 1;

        try {
            if ((get_flags(STREAM_IOS) & 0x1c0) != 0x40) {
                for (; !state && padding > 0; --padding) {
                    char fill = stream.fill;
                    int result = put_character(get_buffer(STREAM_IOS), fill);
                    int eof = end_of_file();
                    if (equal_int_type(eof, result))
                        state = 4;
                }
            }

            if (!state) {
                {
                    int result = put_character(get_buffer(STREAM_IOS), character);
                    int eof = end_of_file();
                    if (equal_int_type(eof, result))
                        state = 4;
                }

                for (; !state && padding > 0; --padding) {
                    char fill = STREAM_IOS->fill;
                    int result = put_character(get_buffer(STREAM_IOS), fill);
                    int eof = end_of_file();
                    if (equal_int_type(eof, result))
                        state = 4;
                }
            }
        }
        catch (...) {
            stream.setstate(4, true);
        }
    }

    stream.width(0);
    stream.setstate(state);
    return stream;
}

#undef STREAM_IOS