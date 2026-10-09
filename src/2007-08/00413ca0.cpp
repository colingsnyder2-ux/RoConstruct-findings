// from server: 100% by colin
// roc 2007-08 00413ca0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413ca0
//
// 00413ca0  56                   push esi
// 00413ca1  8bf1                 mov esi, ecx
// 00413ca3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00413ca7  7510                 jne 0x413cb9
// 00413ca9  e889173100           call 0x725437
// 00413cae  85c0                 test eax, eax
// 00413cb0  89460c               mov dword ptr [esi + 0xc], eax
// 00413cb3  7504                 jne 0x413cb9
// 00413cb5  5e                   pop esi
// 00413cb6  c20800               ret 8
// 00413cb9  8b460c               mov eax, dword ptr [esi + 0xc]
// 00413cbc  8b542408             mov edx, dword ptr [esp + 8]
// 00413cc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00413cc4  2bd0                 sub edx, eax
// 00413cc6  6a0d                 push 0xd
// 00413cc8  83ea0d               sub edx, 0xd
// 00413ccb  50                   push eax
// 00413ccc  c700c7442404         mov dword ptr [eax], 0x42444c7
// 00413cd2  894804               mov dword ptr [eax + 4], ecx
// 00413cd5  c64008e9             mov byte ptr [eax + 8], 0xe9
// 00413cd9  895009               mov dword ptr [eax + 9], edx
// 00413cdc  ff1594d27700         call dword ptr [0x77d294]
// 00413ce2  50                   push eax
// 00413ce3  ff1598d27700         call dword ptr [0x77d298]
// 00413ce9  b801000000           mov eax, 1
// 00413cee  5e                   pop esi
// 00413cef  c20800               ret 8

extern "C" __declspec(dllimport) void *__stdcall GetCurrentProcess();
extern "C" __declspec(dllimport) int __stdcall FlushInstructionCache(void *hProcess, const void *lpBaseAddress, unsigned long dwSize);

extern "C" void *__cdecl sub_725437();

struct S {
    int field0;
    int field4;
    int field8;
    void *fieldC;
    int f(int a, int b);
};

int S::f(int a, int b)
{
    if (this->fieldC == 0) {
        void *p = sub_725437();
        this->fieldC = p;
        if (p == 0)
            return 0;
    }
    unsigned char *base = (unsigned char *)this->fieldC;
    int delta = a - (int)base - 0xd;
    *(int *)(base + 0) = 0x42444c7;
    *(int *)(base + 4) = b;
    *(unsigned char *)(base + 8) = 0xe9;
    *(int *)(base + 9) = delta;
    FlushInstructionCache(GetCurrentProcess(), base, 0xd);
    return 1;
}
