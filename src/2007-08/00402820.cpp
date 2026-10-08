// from server: 96% by colin
// roc 2007-08 00402820  unit: std::bad_alloc  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402820
//
// 00402820  53                   push ebx
// 00402821  55                   push ebp
// 00402822  56                   push esi
// 00402823  57                   push edi
// 00402824  8bf9                 mov edi, ecx
// 00402826  33f6                 xor esi, esi
// 00402828  397708               cmp dword ptr [edi + 8], esi
// 0040282b  7e21                 jle 0x40284e
// 0040282d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00402831  8b2df0d27700         mov ebp, dword ptr [0x77d2f0]
// 00402837  8b03                 mov eax, dword ptr [ebx]
// 00402839  8b0f                 mov ecx, dword ptr [edi]
// 0040283b  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0040283e  50                   push eax
// 0040283f  51                   push ecx
// 00402840  ffd5                 call ebp
// 00402842  85c0                 test eax, eax
// 00402844  7412                 je 0x402858
// 00402846  83c601               add esi, 1
// 00402849  3b7708               cmp esi, dword ptr [edi + 8]
// 0040284c  7ce9                 jl 0x402837
// 0040284e  5f                   pop edi
// 0040284f  5e                   pop esi
// 00402850  5d                   pop ebp
// 00402851  83c8ff               or eax, 0xffffffff
// 00402854  5b                   pop ebx
// 00402855  c20400               ret 4
// 00402858  5f                   pop edi
// 00402859  8bc6                 mov eax, esi
// 0040285b  5e                   pop esi
// 0040285c  5d                   pop ebp
// 0040285d  5b                   pop ebx
// 0040285e  c20400               ret 4

extern "C" __declspec(dllimport) int __stdcall lstrcmpiA(const char*, const char*);

struct S {
    int find(const char** arg);
    char** items;   // offset 0
    int pad;        // offset 4
    int count;      // offset 8
};

int S::find(const char** arg)
{
    int i = 0;
    if (count > 0) {
        do {
            if (lstrcmpiA(items[i], *arg) == 0)
                return i;
            ++i;
        } while (i < count);
    }
    return -1;
}
