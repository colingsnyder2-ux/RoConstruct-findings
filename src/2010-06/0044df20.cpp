// roc 2010-06 0044df20  unit: CRbxPlayDocTemplate  size: 487 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044df20
//
// 0044df20  55                   push ebp
// 0044df21  8bec                 mov ebp, esp
// 0044df23  6aff                 push -1
// 0044df25  6888199800           push 0x981988
// 0044df2a  64a100000000         mov eax, dword ptr fs:[0]
// 0044df30  50                   push eax
// 0044df31  64892500000000       mov dword ptr fs:[0], esp
// 0044df38  83ec1c               sub esp, 0x1c
// 0044df3b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0044df3e  53                   push ebx
// 0044df3f  56                   push esi
// 0044df40  57                   push edi
// 0044df41  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044df44  33ff                 xor edi, edi
// 0044df46  50                   push eax
// 0044df47  897dec               mov dword ptr [ebp - 0x14], edi
// 0044df4a  ff15e4a49e00         call dword ptr [0x9ea4e4]
// 0044df50  8b7508               mov esi, dword ptr [ebp + 8]
// 0044df53  8b0e                 mov ecx, dword ptr [esi]
// 0044df55  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044df58  83c404               add esp, 4
// 0044df5b  03ce                 add ecx, esi
// 0044df5d  8bd8                 mov ebx, eax
// 0044df5f  ff15e0a49e00         call dword ptr [0x9ea4e0]
// 0044df65  85c0                 test eax, eax
// 0044df67  7e22                 jle 0x44df8b
// 0044df69  8b16                 mov edx, dword ptr [esi]
// 0044df6b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044df6e  03ce                 add ecx, esi
// 0044df70  ff15e0a49e00         call dword ptr [0x9ea4e0]
// 0044df76  3bc3                 cmp eax, ebx
// 0044df78  7e11                 jle 0x44df8b
// 0044df7a  8b06                 mov eax, dword ptr [esi]
// 0044df7c  8b4804               mov ecx, dword ptr [eax + 4]
// 0044df7f  03ce                 add ecx, esi
// 0044df81  ff15e0a49e00         call dword ptr [0x9ea4e0]
// 0044df87  8bf8                 mov edi, eax
// 0044df89  2bfb                 sub edi, ebx
// 0044df8b  56                   push esi
// 0044df8c  8d4dd8               lea ecx, [ebp - 0x28]
// 0044df8f  e85cfeffff           call 0x44ddf0
// 0044df94  807ddc00             cmp byte ptr [ebp - 0x24], 0
// 0044df98  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044df9f  750c                 jne 0x44dfad
// 0044dfa1  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 0044dfa8  e925010000           jmp 0x44e0d2
// 0044dfad  8b0e                 mov ecx, dword ptr [esi]
// 0044dfaf  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044dfb2  03ce                 add ecx, esi
// 0044dfb4  c645fc01             mov byte ptr [ebp - 4], 1
// 0044dfb8  ff15dca49e00         call dword ptr [0x9ea4dc]
// 0044dfbe  25c0010000           and eax, 0x1c0
// 0044dfc3  83f840               cmp eax, 0x40
// 0044dfc6  7450                 je 0x44e018
// 0044dfc8  85ff                 test edi, edi
// 0044dfca  7e46                 jle 0x44e012
// 0044dfcc  8b16                 mov edx, dword ptr [esi]
// 0044dfce  8b4204               mov eax, dword ptr [edx + 4]
// 0044dfd1  8a543030             mov dl, byte ptr [eax + esi + 0x30]
// 0044dfd5  8d0c30               lea ecx, [eax + esi]
// 0044dfd8  8855e8               mov byte ptr [ebp - 0x18], dl
// 0044dfdb  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044dfe1  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0044dfe4  51                   push ecx
// 0044dfe5  8bc8                 mov ecx, eax
// 0044dfe7  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 0044dfed  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044dff0  ff15d4a49e00         call dword ptr [0x9ea4d4]
// 0044dff6  8d55e4               lea edx, [ebp - 0x1c]
// 0044dff9  8945e0               mov dword ptr [ebp - 0x20], eax
// 0044dffc  52                   push edx
// 0044dffd  8d45e0               lea eax, [ebp - 0x20]
// 0044e000  50                   push eax
// 0044e001  ff15d0a49e00         call dword ptr [0x9ea4d0]
// 0044e007  83c408               add esp, 8
// 0044e00a  84c0                 test al, al
// 0044e00c  7447                 je 0x44e055
// 0044e00e  834dec04             or dword ptr [ebp - 0x14], 4
// 0044e012  837dec00             cmp dword ptr [ebp - 0x14], 0
// 0044e016  7525                 jne 0x44e03d
// 0044e018  8b0e                 mov ecx, dword ptr [esi]
// 0044e01a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e01d  03ce                 add ecx, esi
// 0044e01f  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044e025  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044e028  53                   push ebx
// 0044e029  52                   push edx
// 0044e02a  8bc8                 mov ecx, eax
// 0044e02c  ff15cca49e00         call dword ptr [0x9ea4cc]
// 0044e032  3bc3                 cmp eax, ebx
// 0044e034  742a                 je 0x44e060
// 0044e036  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 0044e03d  8b0e                 mov ecx, dword ptr [esi]
// 0044e03f  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e042  6a00                 push 0
// 0044e044  03ce                 add ecx, esi
// 0044e046  ff15c8a49e00         call dword ptr [0x9ea4c8]
// 0044e04c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044e053  eb7d                 jmp 0x44e0d2
// 0044e055  4f                   dec edi
// 0044e056  e96dffffff           jmp 0x44dfc8
// 0044e05b  eb03                 jmp 0x44e060
// 0044e05d  8d4900               lea ecx, [ecx]
// 0044e060  85ff                 test edi, edi
// 0044e062  7ed9                 jle 0x44e03d
// 0044e064  8b06                 mov eax, dword ptr [esi]
// 0044e066  8b4804               mov ecx, dword ptr [eax + 4]
// 0044e069  8a543130             mov dl, byte ptr [ecx + esi + 0x30]
// 0044e06d  03ce                 add ecx, esi
// 0044e06f  8855e0               mov byte ptr [ebp - 0x20], dl
// 0044e072  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044e078  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044e07b  51                   push ecx
// 0044e07c  8bc8                 mov ecx, eax
// 0044e07e  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 0044e084  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044e087  ff15d4a49e00         call dword ptr [0x9ea4d4]
// 0044e08d  8d55e4               lea edx, [ebp - 0x1c]
// 0044e090  8945e8               mov dword ptr [ebp - 0x18], eax
// 0044e093  52                   push edx
// 0044e094  8d45e8               lea eax, [ebp - 0x18]
// 0044e097  50                   push eax
// 0044e098  ff15d0a49e00         call dword ptr [0x9ea4d0]
// 0044e09e  83c408               add esp, 8
// 0044e0a1  84c0                 test al, al
// 0044e0a3  7406                 je 0x44e0ab
// 0044e0a5  834dec04             or dword ptr [ebp - 0x14], 4
// 0044e0a9  eb92                 jmp 0x44e03d
// 0044e0ab  4f                   dec edi
// 0044e0ac  ebb2                 jmp 0x44e060
// 0044e0ae  8b4508               mov eax, dword ptr [ebp + 8]
// 0044e0b1  8b10                 mov edx, dword ptr [eax]
// 0044e0b3  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044e0b6  6a01                 push 1
// 0044e0b8  6a04                 push 4
// 0044e0ba  03c8                 add ecx, eax
// 0044e0bc  ff15c4a49e00         call dword ptr [0x9ea4c4]
// 0044e0c2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044e0c9  b8cfe04400           mov eax, 0x44e0cf
// 0044e0ce  c3                   ret 
// 0044e0cf  8b7508               mov esi, dword ptr [ebp + 8]
// 0044e0d2  8b0e                 mov ecx, dword ptr [esi]
// 0044e0d4  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0044e0d7  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044e0da  6a00                 push 0
// 0044e0dc  50                   push eax
// 0044e0dd  03ce                 add ecx, esi
// 0044e0df  ff15c4a49e00         call dword ptr [0x9ea4c4]
// 0044e0e5  8d4dd8               lea ecx, [ebp - 0x28]
// 0044e0e8  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0044e0ef  e8acfdffff           call 0x44dea0
// 0044e0f4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044e0f7  5f                   pop edi
// 0044e0f8  8bc6                 mov eax, esi
// 0044e0fa  5e                   pop esi
// 0044e0fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e102  5b                   pop ebx
// 0044e103  8be5                 mov esp, ebp
// 0044e105  5d                   pop ebp
// 0044e106  c3                   ret 
// copied from an identical function in another client (function ?insert@@YAAAU?$basic_ostream@DU?$char_traits@D@std@@@std@@AAU12@PBD@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 98% by king_originala
// roc 2008-06 0044a450  unit: CRbxPlayDocTemplate  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a450
//
// 0044a450  55                   push ebp
// 0044a451  8bec                 mov ebp, esp
// 0044a453  6aff                 push -1
// 0044a455  6828117c00           push 0x7c1128
// 0044a45a  64a100000000         mov eax, dword ptr fs:[0]
// 0044a460  50                   push eax
// 0044a461  64892500000000       mov dword ptr fs:[0], esp
// 0044a468  83ec1c               sub esp, 0x1c
// 0044a46b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0044a46e  53                   push ebx
// 0044a46f  56                   push esi
// 0044a470  57                   push edi
// 0044a471  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044a474  33ff                 xor edi, edi
// 0044a476  50                   push eax
// 0044a477  897dec               mov dword ptr [ebp - 0x14], edi
// 0044a47a  ff1588238000         call dword ptr [0x802388]
// 0044a480  8b7508               mov esi, dword ptr [ebp + 8]
// 0044a483  8b0e                 mov ecx, dword ptr [esi]
// 0044a485  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a488  83c404               add esp, 4
// 0044a48b  03ce                 add ecx, esi
// 0044a48d  8bd8                 mov ebx, eax
// 0044a48f  ff158c238000         call dword ptr [0x80238c]
// 0044a495  85c0                 test eax, eax
// 0044a497  7e22                 jle 0x44a4bb
// 0044a499  8b16                 mov edx, dword ptr [esi]
// 0044a49b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044a49e  03ce                 add ecx, esi
// 0044a4a0  ff158c238000         call dword ptr [0x80238c]
// 0044a4a6  3bc3                 cmp eax, ebx
// 0044a4a8  7e11                 jle 0x44a4bb
// 0044a4aa  8b06                 mov eax, dword ptr [esi]
// 0044a4ac  8b4804               mov ecx, dword ptr [eax + 4]
// 0044a4af  03ce                 add ecx, esi
// 0044a4b1  ff158c238000         call dword ptr [0x80238c]
// 0044a4b7  8bf8                 mov edi, eax
// 0044a4b9  2bfb                 sub edi, ebx
// 0044a4bb  56                   push esi
// 0044a4bc  8d4dd8               lea ecx, [ebp - 0x28]
// 0044a4bf  e85cfeffff           call 0x44a320
// 0044a4c4  807ddc00             cmp byte ptr [ebp - 0x24], 0
// 0044a4c8  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044a4cf  750c                 jne 0x44a4dd
// 0044a4d1  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 0044a4d8  e925010000           jmp 0x44a602
// 0044a4dd  8b0e                 mov ecx, dword ptr [esi]
// 0044a4df  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a4e2  03ce                 add ecx, esi
// 0044a4e4  c645fc01             mov byte ptr [ebp - 4], 1
// 0044a4e8  ff1590238000         call dword ptr [0x802390]
// 0044a4ee  25c0010000           and eax, 0x1c0
// 0044a4f3  83f840               cmp eax, 0x40
// 0044a4f6  7450                 je 0x44a548
// 0044a4f8  85ff                 test edi, edi
// 0044a4fa  7e46                 jle 0x44a542
// 0044a4fc  8b16                 mov edx, dword ptr [esi]
// 0044a4fe  8b4204               mov eax, dword ptr [edx + 4]
// 0044a501  8a543030             mov dl, byte ptr [eax + esi + 0x30]
// 0044a505  8d0c30               lea ecx, [eax + esi]
// 0044a508  8855e8               mov byte ptr [ebp - 0x18], dl
// 0044a50b  ff15c4238000         call dword ptr [0x8023c4]
// 0044a511  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0044a514  51                   push ecx
// 0044a515  8bc8                 mov ecx, eax
// 0044a517  ff1594238000         call dword ptr [0x802394]
// 0044a51d  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044a520  ff1598238000         call dword ptr [0x802398]
// 0044a526  8d55e4               lea edx, [ebp - 0x1c]
// 0044a529  8945e0               mov dword ptr [ebp - 0x20], eax
// 0044a52c  52                   push edx
// 0044a52d  8d45e0               lea eax, [ebp - 0x20]
// 0044a530  50                   push eax
// 0044a531  ff159c238000         call dword ptr [0x80239c]
// 0044a537  83c408               add esp, 8
// 0044a53a  84c0                 test al, al
// 0044a53c  7447                 je 0x44a585
// 0044a53e  834dec04             or dword ptr [ebp - 0x14], 4
// 0044a542  837dec00             cmp dword ptr [ebp - 0x14], 0
// 0044a546  7525                 jne 0x44a56d
// 0044a548  8b0e                 mov ecx, dword ptr [esi]
// 0044a54a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a54d  03ce                 add ecx, esi
// 0044a54f  ff15c4238000         call dword ptr [0x8023c4]
// 0044a555  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0044a558  53                   push ebx
// 0044a559  52                   push edx
// 0044a55a  8bc8                 mov ecx, eax
// 0044a55c  ff15a0238000         call dword ptr [0x8023a0]
// 0044a562  3bc3                 cmp eax, ebx
// 0044a564  742a                 je 0x44a590
// 0044a566  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 0044a56d  8b0e                 mov ecx, dword ptr [esi]
// 0044a56f  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044a572  6a00                 push 0
// 0044a574  03ce                 add ecx, esi
// 0044a576  ff15a4238000         call dword ptr [0x8023a4]
// 0044a57c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044a583  eb7d                 jmp 0x44a602
// 0044a585  4f                   dec edi
// 0044a586  e96dffffff           jmp 0x44a4f8
// 0044a58b  eb03                 jmp 0x44a590
// 0044a58d  8d4900               lea ecx, [ecx]
// 0044a590  85ff                 test edi, edi
// 0044a592  7ed9                 jle 0x44a56d
// 0044a594  8b06                 mov eax, dword ptr [esi]
// 0044a596  8b4804               mov ecx, dword ptr [eax + 4]
// 0044a599  8a543130             mov dl, byte ptr [ecx + esi + 0x30]
// 0044a59d  03ce                 add ecx, esi
// 0044a59f  8855e0               mov byte ptr [ebp - 0x20], dl
// 0044a5a2  ff15c4238000         call dword ptr [0x8023c4]
// 0044a5a8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0044a5ab  51                   push ecx
// 0044a5ac  8bc8                 mov ecx, eax
// 0044a5ae  ff1594238000         call dword ptr [0x802394]
// 0044a5b4  8945e4               mov dword ptr [ebp - 0x1c], eax
// 0044a5b7  ff1598238000         call dword ptr [0x802398]
// 0044a5bd  8d55e4               lea edx, [ebp - 0x1c]
// 0044a5c0  8945e8               mov dword ptr [ebp - 0x18], eax
// 0044a5c3  52                   push edx
// 0044a5c4  8d45e8               lea eax, [ebp - 0x18]
// 0044a5c7  50                   push eax
// 0044a5c8  ff159c238000         call dword ptr [0x80239c]
// 0044a5ce  83c408               add esp, 8
// 0044a5d1  84c0                 test al, al
// 0044a5d3  7406                 je 0x44a5db
// 0044a5d5  834dec04             or dword ptr [ebp - 0x14], 4
// 0044a5d9  eb92                 jmp 0x44a56d
// 0044a5db  4f                   dec edi
// 0044a5dc  ebb2                 jmp 0x44a590

#pragma optimize("y", off)

namespace std {
    template<class C> struct char_traits;

    template<> struct char_traits<char> {
        static unsigned int (__cdecl *length)(const char*);
        static int (__cdecl *eof)();
        static bool (__cdecl *eq_int_type)(const int&, const int&);
    };

    struct ios_base {
        int width() const;
        __declspec(dllimport) int width(int);
        int flags() const;
    };

    template<class C, class T> struct basic_streambuf {
        int sputc(C);
        int sputn(const C*, int);
    };

    template<class C, class T> struct basic_ios : ios_base {
        char reserved[48];
        C fill_character;

        basic_streambuf<C, T>* rdbuf() const;
        __declspec(dllimport) void setstate(int, bool = false);
    };

    template<class C, class T> struct basic_ostream
        : virtual basic_ios<C, T> {
        struct sentry {
            basic_ostream* stream;
            bool ready;

            explicit sentry(basic_ostream&);
            ~sentry();
        };
    };
}

typedef std::char_traits<char> Traits;
typedef std::basic_streambuf<char, Traits> Buffer;
typedef std::basic_ios<char, Traits> IOS;
typedef std::basic_ostream<char, Traits> Stream;

extern int (__thiscall *import_width_get)(const std::ios_base*);
extern int (__thiscall *import_flags)(const std::ios_base*);
extern Buffer* (__thiscall *import_rdbuf)(const IOS*);
extern int (__thiscall *import_sputc)(Buffer*, char);
extern int (__thiscall *import_sputn)(Buffer*, const char*, int);

inline int std::ios_base::width() const
{
    return import_width_get(this);
}

inline int std::ios_base::flags() const
{
    return import_flags(this);
}

template<>
inline Buffer* std::basic_ios<char, Traits>::rdbuf() const
{
    return import_rdbuf(this);
}

template<>
inline int std::basic_streambuf<char, Traits>::sputc(char value)
{
    return import_sputc(this, value);
}

template<>
inline int std::basic_streambuf<char, Traits>::sputn(const char* text, int count)
{
    return import_sputn(this, text, count);
}

Stream& __cdecl insert(Stream& stream, const char* text)
{
    int state = 0;
    int length = Traits::length(text);
    int padding = 0;

    if (stream.width() > 0 && stream.width() > length)
        padding = stream.width() - length;

    Stream::sentry guard(stream);
    if (!guard.ready) {
        state = 4;
    } else {
        try {
            if ((stream.flags() & 0x1c0) != 0x40) {
                for (; padding > 0; --padding) {
                    char fill = stream.fill_character;
                    int result = stream.rdbuf()->sputc(fill);
                    int end = Traits::eof();
                    if (Traits::eq_int_type(end, result)) {
                        state |= 4;
                        break;
                    }
                }
            }

            if (state == 0) {
                if (stream.rdbuf()->sputn(text, length) != length) {
                    state = 4;
                } else {
                    for (; padding > 0; --padding) {
                        char fill = stream.fill_character;
                        int result = stream.rdbuf()->sputc(fill);
                        int end = Traits::eof();
                        if (Traits::eq_int_type(end, result)) {
                            state |= 4;
                            break;
                        }
                    }
                }
            }

            stream.width(0);
        } catch (...) {
            stream.setstate(4, true);
        }
    }

    stream.setstate(state);
    return stream;
}