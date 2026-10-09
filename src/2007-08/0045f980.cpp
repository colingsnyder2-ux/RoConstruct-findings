// from server: 100% by colin
// roc 2007-08 0045f980  unit: CObjectBrowser  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f980
//
// 0045f980  833da0c08b0000       cmp dword ptr [0x8bc0a0], 0
// 0045f987  56                   push esi
// 0045f988  8bf1                 mov esi, ecx
// 0045f98a  751b                 jne 0x45f9a7
// 0045f98c  68284a7900           push 0x794a28
// 0045f991  ff157cd27700         call dword ptr [0x77d27c]
// 0045f997  85c0                 test eax, eax
// 0045f999  a39cc08b00           mov dword ptr [0x8bc09c], eax
// 0045f99e  7507                 jne 0x45f9a7
// 0045f9a0  83c8ff               or eax, 0xffffffff
// 0045f9a3  5e                   pop esi
// 0045f9a4  c20400               ret 4
// 0045f9a7  8b442408             mov eax, dword ptr [esp + 8]
// 0045f9ab  8305a0c08b0001       add dword ptr [0x8bc0a0], 1
// 0045f9b2  50                   push eax
// 0045f9b3  8bce                 mov ecx, esi
// 0045f9b5  e8b6f2ffff           call 0x45ec70
// 0045f9ba  83e8ff               sub eax, -1
// 0045f9bd  f7d8                 neg eax
// 0045f9bf  1bc0                 sbb eax, eax
// 0045f9c1  f7d8                 neg eax
// 0045f9c3  83e801               sub eax, 1
// 0045f9c6  5e                   pop esi
// 0045f9c7  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall LoadLibraryA(const char*);

struct CObjectBrowser {
    int sub_45EC70(int);
    int method(int);
};

int g_8bc0a0;
void* g_8bc09c;

int CObjectBrowser::method(int arg)
{
    if (g_8bc0a0 == 0) {
        g_8bc09c = LoadLibraryA((const char*)0x794a28);
        if (g_8bc09c == 0) {
            return -1;
        }
    }
    g_8bc0a0++;
    int r = sub_45EC70(arg);
    return (r != -1) ? 0 : -1;
}
