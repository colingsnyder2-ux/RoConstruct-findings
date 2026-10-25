// from server: 100% by colin
// roc 2008-06 005f3bc0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3bc0
//
// 005f3bc0  55                   push ebp
// 005f3bc1  8bec                 mov ebp, esp
// 005f3bc3  6aff                 push -1
// 005f3bc5  6850747d00           push 0x7d7450
// 005f3bca  64a100000000         mov eax, dword ptr fs:[0]
// 005f3bd0  50                   push eax
// 005f3bd1  64892500000000       mov dword ptr fs:[0], esp
// 005f3bd8  51                   push ecx
// 005f3bd9  8b4124               mov eax, dword ptr [ecx + 0x24]
// 005f3bdc  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005f3bdf  8b00                 mov eax, dword ptr [eax]
// 005f3be1  8b12                 mov edx, dword ptr [edx]
// 005f3be3  53                   push ebx
// 005f3be4  56                   push esi
// 005f3be5  2bc2                 sub eax, edx
// 005f3be7  57                   push edi
// 005f3be8  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f3beb  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f3bf2  85c0                 test eax, eax
// 005f3bf4  7e0f                 jle 0x5f3c05
// 005f3bf6  8b7144               mov esi, dword ptr [ecx + 0x44]
// 005f3bf9  50                   push eax
// 005f3bfa  52                   push edx
// 005f3bfb  56                   push esi
// 005f3bfc  83c140               add ecx, 0x40
// 005f3bff  51                   push ecx
// 005f3c00  e86b1f0000           call 0x5f5b70
// 005f3c05  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 005f3c08  b301                 mov bl, 1
// 005f3c0a  85c9                 test ecx, ecx
// 005f3c0c  740d                 je 0x5f3c1b
// 005f3c0e  ff1570238000         call dword ptr [0x802370]
// 005f3c14  83f8ff               cmp eax, -1
// 005f3c17  7502                 jne 0x5f3c1b
// 005f3c19  32db                 xor bl, bl
// 005f3c1b  8ac3                 mov al, bl
// 005f3c1d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f3c20  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3c27  5f                   pop edi
// 005f3c28  5e                   pop esi
// 005f3c29  5b                   pop ebx
// 005f3c2a  8be5                 mov esp, ebp
// 005f3c2c  5d                   pop ebp
// 005f3c2d  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T, class Traits> class basic_streambuf;
}

typedef std::basic_streambuf<char, std::char_traits<char> > Buffer;
typedef int (__thiscall *SyncFunction)(Buffer*);

extern SyncFunction pubsync;
__declspec(noreturn) void __stdcall write_buffer(
    void*, Buffer*, const char*, int);

struct S {
    char padding0[0x14];
    char** begin;
    char padding1[0x0C];
    char** end;
    char padding2[0x18];
    char writer[4];
    Buffer* output;

    bool sync();
};

bool S::sync()
{
    const char* last = *end;
    const char* first = *begin;
    int count = last - first;

    try {
        if (count > 0) {
            Buffer* out = output;
            write_buffer(writer, out, first, count);
        }

        bool result = true;
        if (output && pubsync(output) == -1)
            result = false;
        return result;
    }
    catch (...) {
        return false;
    }
}
