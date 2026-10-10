// from server: 76% by colin
// roc 2007-08 0054c470  unit: seg_00540000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c470
//
// 0054c470  56                   push esi
// 0054c471  8bf1                 mov esi, ecx
// 0054c473  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054c476  8b08                 mov ecx, dword ptr [eax]
// 0054c478  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054c47b  8b02                 mov eax, dword ptr [edx]
// 0054c47d  2bc1                 sub eax, ecx
// 0054c47f  85c0                 test eax, eax
// 0054c481  7e24                 jle 0x54c4a7
// 0054c483  50                   push eax
// 0054c484  51                   push ecx
// 0054c485  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0054c488  ff1520e57700         call dword ptr [0x77e520]
// 0054c48e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0054c491  8b5614               mov edx, dword ptr [esi + 0x14]
// 0054c494  8b4650               mov eax, dword ptr [esi + 0x50]
// 0054c497  890a                 mov dword ptr [edx], ecx
// 0054c499  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054c49c  03c1                 add eax, ecx
// 0054c49e  890a                 mov dword ptr [edx], ecx
// 0054c4a0  2bc1                 sub eax, ecx
// 0054c4a2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0054c4a5  8901                 mov dword ptr [ecx], eax
// 0054c4a7  5e                   pop esi
// 0054c4a8  c3                   ret 

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

extern "C" void* __stdcall sub_77E520(int, const char*, int);

struct UString_sink
{
    char pad[0x14];
    int* field14;
    char pad2[0x24 - 0x18];
    int* field24;
    char pad3[0x34 - 0x28];
    int* field34;
    char pad4[0x40 - 0x38];
    int field40;
    char pad5[0x4c - 0x44];
    int field4c;
    int field50;

    void write();
};

void UString_sink::write()
{
    int* p14 = field14;
    int* p24 = field24;
    int diff = *p24 - *p14;
    if (diff > 0)
    {
        sub_77E520(field40, (const char*)*p14, diff);
        int v4c = field4c;
        int* q14 = field14;
        int v50 = field50;
        *q14 = v4c;
        int* q24 = field24;
        int t = v50 + v4c;
        *q24 = v4c;
        int* q34 = field34;
        *q34 = t - v4c;
    }
}
