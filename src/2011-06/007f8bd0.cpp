// from server: 100% by atomic.potato
// roc 2011-06 007f8bd0  unit: RBX::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f8bd0
//
// 007f8bd0  8b442404             mov eax, dword ptr [esp + 4]
// 007f8bd4  56                   push esi
// 007f8bd5  57                   push edi
// 007f8bd6  8bf1                 mov esi, ecx
// 007f8bd8  85c0                 test eax, eax
// 007f8bda  7502                 jne 0x7f8bde
// 007f8bdc  8b06                 mov eax, dword ptr [esi]
// 007f8bde  8b4e04               mov ecx, dword ptr [esi + 4]
// 007f8be1  51                   push ecx
// 007f8be2  50                   push eax
// 007f8be3  8d7e08               lea edi, [esi + 8]
// 007f8be6  6a64                 push 0x64
// 007f8be8  57                   push edi
// 007f8be9  ff15b809a400         call dword ptr [0xa409b8]
// 007f8bef  ff4604               inc dword ptr [esi + 4]
// 007f8bf2  83c410               add esp, 0x10
// 007f8bf5  8bc7                 mov eax, edi
// 007f8bf7  5f                   pop edi
// 007f8bf8  5e                   pop esi
// 007f8bf9  c20400               ret 4

extern "C" int (__cdecl *_snprintf)(char *, unsigned int, const char *, ...);

struct S
{
    char *buffer;
    int count;
    char data[1];

    char *f(char *);
};

char *S::f(char *value)
{
    if (value == 0)
        value = buffer;
    _snprintf(data, 100, value, count);
    ++count;
    return data;
}
