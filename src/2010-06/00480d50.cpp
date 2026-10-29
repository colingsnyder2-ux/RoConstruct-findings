// roc 2010-06 00480d50  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480d50
//
// 00480d50  53                   push ebx
// 00480d51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00480d55  56                   push esi
// 00480d56  8bf1                 mov esi, ecx
// 00480d58  8b06                 mov eax, dword ptr [esi]
// 00480d5a  83f8fc               cmp eax, -4
// 00480d5d  7439                 je 0x480d98
// 00480d5f  55                   push ebp
// 00480d60  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00480d66  57                   push edi
// 00480d67  85c0                 test eax, eax
// 00480d69  7502                 jne 0x480d6d
// 00480d6b  ffd5                 call ebp
// 00480d6d  8b3e                 mov edi, dword ptr [esi]
// 00480d6f  8bcf                 mov ecx, edi
// 00480d71  ff1530a59e00         call dword ptr [0x9ea530]
// 00480d77  8b4e04               mov ecx, dword ptr [esi + 4]
// 00480d7a  034714               add eax, dword ptr [edi + 0x14]
// 00480d7d  03cb                 add ecx, ebx
// 00480d7f  3bc8                 cmp ecx, eax
// 00480d81  7711                 ja 0x480d94
// 00480d83  8bcf                 mov ecx, edi
// 00480d85  ff1530a59e00         call dword ptr [0x9ea530]
// 00480d8b  8b5604               mov edx, dword ptr [esi + 4]
// 00480d8e  03d3                 add edx, ebx
// 00480d90  3bd0                 cmp edx, eax
// 00480d92  7302                 jae 0x480d96
// 00480d94  ffd5                 call ebp
// 00480d96  5f                   pop edi
// 00480d97  5d                   pop ebp
// 00480d98  015e04               add dword ptr [esi + 4], ebx
// 00480d9b  8bc6                 mov eax, esi
// 00480d9d  5e                   pop esi
// 00480d9e  5b                   pop ebx
// 00480d9f  c20400               ret 4
// copied from an identical function in another client (function ??YS@@QAEAAU0@H@Z)

// from server: 98% by king_originala
// roc 2008-06 0046cf40  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cf40
//
// 0046cf40  53                   push ebx
// 0046cf41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046cf45  56                   push esi
// 0046cf46  8bf1                 mov esi, ecx
// 0046cf48  8b06                 mov eax, dword ptr [esi]
// 0046cf4a  83f8fc               cmp eax, -4
// 0046cf4d  7439                 je 0x46cf88
// 0046cf4f  55                   push ebp
// 0046cf50  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0046cf56  57                   push edi
// 0046cf57  85c0                 test eax, eax
// 0046cf59  7502                 jne 0x46cf5d
// 0046cf5b  ffd5                 call ebp
// 0046cf5d  8b3e                 mov edi, dword ptr [esi]
// 0046cf5f  8bcf                 mov ecx, edi
// 0046cf61  ff1558238000         call dword ptr [0x802358]
// 0046cf67  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046cf6a  034714               add eax, dword ptr [edi + 0x14]
// 0046cf6d  03cb                 add ecx, ebx
// 0046cf6f  3bc8                 cmp ecx, eax
// 0046cf71  7711                 ja 0x46cf84
// 0046cf73  8bcf                 mov ecx, edi
// 0046cf75  ff1558238000         call dword ptr [0x802358]
// 0046cf7b  8b5604               mov edx, dword ptr [esi + 4]
// 0046cf7e  03d3                 add edx, ebx
// 0046cf80  3bd0                 cmp edx, eax
// 0046cf82  7302                 jae 0x46cf86
// 0046cf84  ffd5                 call ebp
// 0046cf86  5f                   pop edi
// 0046cf87  5d                   pop ebp
// 0046cf88  015e04               add dword ptr [esi + 4], ebx
// 0046cf8b  8bc6                 mov eax, esi
// 0046cf8d  5e                   pop esi
// 0046cf8e  5b                   pop ebx
// 0046cf8f  c20400               ret 4
#include <intrin.h>

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" char *(__thiscall *string_pointer)(void *);

struct String {
    char padding[20];
    unsigned int size;
};

struct S {
    String *owner;
    char *position;
    S &operator+=(int offset);
};

S &S::operator+=(int offset)
{
    if (owner != reinterpret_cast<String *>(-4)) {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        if (!owner)
            invalid();

        String *s = owner;
        if (position + offset > string_pointer(s) + s->size ||
            position + offset < string_pointer(s))
            invalid();
            _ReadWriteBarrier();
    }

    position += offset;
    return *this;
}