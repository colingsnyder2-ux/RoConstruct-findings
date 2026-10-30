// roc 2011-06 004213e0  unit: RBX::DSVideoCaptureEngine  size: 487 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004213e0
//
// 004213e0  55                   push ebp
// 004213e1  8bec                 mov ebp, esp
// 004213e3  6aff                 push -1
// 004213e5  6828ed9c00           push 0x9ced28
// 004213ea  64a100000000         mov eax, dword ptr fs:[0]
// 004213f0  50                   push eax
// 004213f1  64892500000000       mov dword ptr fs:[0], esp
// 004213f8  83ec1c               sub esp, 0x1c
// 004213fb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004213fe  53                   push ebx
// 004213ff  56                   push esi
// 00421400  57                   push edi
// 00421401  8965f0               mov dword ptr [ebp - 0x10], esp
// 00421404  33ff                 xor edi, edi
// 00421406  50                   push eax
// 00421407  897dec               mov dword ptr [ebp - 0x14], edi
// 0042140a  ff15e803a400         call dword ptr [0xa403e8]
// 00421410  8b7508               mov esi, dword ptr [ebp + 8]
// 00421413  8b0e                 mov ecx, dword ptr [esi]
// 00421415  8b4904               mov ecx, dword ptr [ecx + 4]
// 00421418  83c404               add esp, 4
// 0042141b  03ce                 add ecx, esi
// 0042141d  8bd8                 mov ebx, eax
// 0042141f  ff15ec03a400         call dword ptr [0xa403ec]
// 00421425  85c0                 test eax, eax
// 00421427  7e22                 jle 0x42144b
// 00421429  8b16                 mov edx, dword ptr [esi]
// 0042142b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0042142e  03ce                 add ecx, esi
// 00421430  ff15ec03a400         call dword ptr [0xa403ec]
// 00421436  3bc3                 cmp eax, ebx
// 00421438  7e11                 jle 0x42144b
// 0042143a  8b06                 mov eax, dword ptr [esi]
// 0042143c  8b4804               mov ecx, dword ptr [eax + 4]
// 0042143f  03ce                 add ecx, esi
// 00421441  ff15ec03a400         call dword ptr [0xa403ec]
// 00421447  8bf8                 mov edi, eax
// 00421449  2bfb                 sub edi, ebx
// 0042144b  56                   push esi
// 0042144c  8d4dd8               lea ecx, [ebp - 0x28]
// 0042144f  e85cfeffff           call 0x4212b0
// 00421454  807ddc00             cmp byte ptr [ebp - 0x24], 0
// 00421458  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042145f  750c                 jne 0x42146d
// 00421461  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 00421468  e925010000           jmp 0x421592
// 0042146d  8b0e                 mov ecx, dword ptr [esi]
// 0042146f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00421472  03ce                 add ecx, esi
// 00421474  c645fc01             mov byte ptr [ebp - 4], 1
// 00421478  ff15f003a400         call dword ptr [0xa403f0]
// 0042147e  25c0010000           and eax, 0x1c0
// 00421483  83f840               cmp eax, 0x40
// 00421486  7450                 je 0x4214d8
// 00421488  85ff                 test edi, edi
// 0042148a  7e46                 jle 0x4214d2
// 0042148c  8b16                 mov edx, dword ptr [esi]
// 0042148e  8b4204               mov eax, dword ptr [edx + 4]
// 00421491  8a543030             mov dl, byte ptr [eax + esi + 0x30]
// 00421495  8d0c30               lea ecx, [eax + esi]
// 00421498  8855e8               mov byte ptr [ebp - 0x18], dl
// 0042149b  ff152404a400         call dword ptr [0xa40424]
// 004214a1  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004214a4  51                   push ecx
// 004214a5  8bc8                 mov ecx, eax
// 004214a7  ff15f403a400         call dword ptr [0xa403f4]
// 004214ad  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004214b0  ff15f803a400         call dword ptr [0xa403f8]
// 004214b6  8d55e4               lea edx, [ebp - 0x1c]
// 004214b9  8945e0               mov dword ptr [ebp - 0x20], eax
// 004214bc  52                   push edx
// 004214bd  8d45e0               lea eax, [ebp - 0x20]
// 004214c0  50                   push eax
// 004214c1  ff15fc03a400         call dword ptr [0xa403fc]
// 004214c7  83c408               add esp, 8
// 004214ca  84c0                 test al, al
// 004214cc  7447                 je 0x421515
// 004214ce  834dec04             or dword ptr [ebp - 0x14], 4
// 004214d2  837dec00             cmp dword ptr [ebp - 0x14], 0
// 004214d6  7525                 jne 0x4214fd
// 004214d8  8b0e                 mov ecx, dword ptr [esi]
// 004214da  8b4904               mov ecx, dword ptr [ecx + 4]
// 004214dd  03ce                 add ecx, esi
// 004214df  ff152404a400         call dword ptr [0xa40424]
// 004214e5  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004214e8  53                   push ebx
// 004214e9  52                   push edx
// 004214ea  8bc8                 mov ecx, eax
// 004214ec  ff150004a400         call dword ptr [0xa40400]
// 004214f2  3bc3                 cmp eax, ebx
// 004214f4  742a                 je 0x421520
// 004214f6  c745ec04000000       mov dword ptr [ebp - 0x14], 4
// 004214fd  8b0e                 mov ecx, dword ptr [esi]
// 004214ff  8b4904               mov ecx, dword ptr [ecx + 4]
// 00421502  6a00                 push 0
// 00421504  03ce                 add ecx, esi
// 00421506  ff150404a400         call dword ptr [0xa40404]
// 0042150c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00421513  eb7d                 jmp 0x421592
// 00421515  4f                   dec edi
// 00421516  e96dffffff           jmp 0x421488
// 0042151b  eb03                 jmp 0x421520
// 0042151d  8d4900               lea ecx, [ecx]
// 00421520  85ff                 test edi, edi
// 00421522  7ed9                 jle 0x4214fd
// 00421524  8b06                 mov eax, dword ptr [esi]
// 00421526  8b4804               mov ecx, dword ptr [eax + 4]
// 00421529  8a543130             mov dl, byte ptr [ecx + esi + 0x30]
// 0042152d  03ce                 add ecx, esi
// 0042152f  8855e0               mov byte ptr [ebp - 0x20], dl
// 00421532  ff152404a400         call dword ptr [0xa40424]
// 00421538  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0042153b  51                   push ecx
// 0042153c  8bc8                 mov ecx, eax
// 0042153e  ff15f403a400         call dword ptr [0xa403f4]
// 00421544  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00421547  ff15f803a400         call dword ptr [0xa403f8]
// 0042154d  8d55e4               lea edx, [ebp - 0x1c]
// 00421550  8945e8               mov dword ptr [ebp - 0x18], eax
// 00421553  52                   push edx
// 00421554  8d45e8               lea eax, [ebp - 0x18]
// 00421557  50                   push eax
// 00421558  ff15fc03a400         call dword ptr [0xa403fc]
// 0042155e  83c408               add esp, 8
// 00421561  84c0                 test al, al
// 00421563  7406                 je 0x42156b
// 00421565  834dec04             or dword ptr [ebp - 0x14], 4
// 00421569  eb92                 jmp 0x4214fd
// 0042156b  4f                   dec edi
// 0042156c  ebb2                 jmp 0x421520
// 0042156e  8b4508               mov eax, dword ptr [ebp + 8]
// 00421571  8b10                 mov edx, dword ptr [eax]
// 00421573  8b4a04               mov ecx, dword ptr [edx + 4]
// 00421576  6a01                 push 1
// 00421578  6a04                 push 4
// 0042157a  03c8                 add ecx, eax
// 0042157c  ff150804a400         call dword ptr [0xa40408]
// 00421582  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00421589  b88f154200           mov eax, 0x42158f
// 0042158e  c3                   ret 
// 0042158f  8b7508               mov esi, dword ptr [ebp + 8]
// 00421592  8b0e                 mov ecx, dword ptr [esi]
// 00421594  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00421597  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042159a  6a00                 push 0
// 0042159c  50                   push eax
// 0042159d  03ce                 add ecx, esi
// 0042159f  ff150804a400         call dword ptr [0xa40408]
// 004215a5  8d4dd8               lea ecx, [ebp - 0x28]
// 004215a8  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004215af  e8acfdffff           call 0x421360
// 004215b4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004215b7  5f                   pop edi
// 004215b8  8bc6                 mov eax, esi
// 004215ba  5e                   pop esi
// 004215bb  64890d00000000       mov dword ptr fs:[0], ecx
// 004215c2  5b                   pop ebx
// 004215c3  8be5                 mov esp, ebp
// 004215c5  5d                   pop ebp
// 004215c6  c3                   ret 
// copied from an identical function in another client (function ?insert@ns_ROCX000000@@YAAAU?$basic_ostream@DU?$char_traits@D@std@ns_ROCX000000@@@std@1@AAU231@PBD@Z)

namespace ns_ROCX000000 {
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
}
