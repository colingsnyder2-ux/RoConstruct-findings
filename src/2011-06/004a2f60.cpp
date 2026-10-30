// roc 2011-06 004a2f60  unit: CSourceStream  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a2f60
//
// 004a2f60  53                   push ebx
// 004a2f61  8b1d0002a400         mov ebx, dword ptr [0xa40200]
// 004a2f67  56                   push esi
// 004a2f68  57                   push edi
// 004a2f69  6a00                 push 0
// 004a2f6b  6a00                 push 0
// 004a2f6d  6a01                 push 1
// 004a2f6f  6a00                 push 0
// 004a2f71  8bf1                 mov esi, ecx
// 004a2f73  ffd3                 call ebx
// 004a2f75  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a2f79  894604               mov dword ptr [esi + 4], eax
// 004a2f7c  85c0                 test eax, eax
// 004a2f7e  750f                 jne 0x4a2f8f
// 004a2f80  85ff                 test edi, edi
// 004a2f82  740b                 je 0x4a2f8f
// 004a2f84  833f00               cmp dword ptr [edi], 0
// 004a2f87  7c06                 jl 0x4a2f8f
// 004a2f89  c7070e000780         mov dword ptr [edi], 0x8007000e
// 004a2f8f  6a00                 push 0
// 004a2f91  6a00                 push 0
// 004a2f93  6a00                 push 0
// 004a2f95  6a00                 push 0
// 004a2f97  ffd3                 call ebx
// 004a2f99  894608               mov dword ptr [esi + 8], eax
// 004a2f9c  85c0                 test eax, eax
// 004a2f9e  750e                 jne 0x4a2fae
// 004a2fa0  85ff                 test edi, edi
// 004a2fa2  740a                 je 0x4a2fae
// 004a2fa4  3907                 cmp dword ptr [edi], eax
// 004a2fa6  7c06                 jl 0x4a2fae
// 004a2fa8  c7070e000780         mov dword ptr [edi], 0x8007000e
// 004a2fae  8b3da003a400         mov edi, dword ptr [0xa403a0]
// 004a2fb4  8d4618               lea eax, [esi + 0x18]
// 004a2fb7  50                   push eax
// 004a2fb8  ffd7                 call edi
// 004a2fba  8d4e30               lea ecx, [esi + 0x30]
// 004a2fbd  51                   push ecx
// 004a2fbe  ffd7                 call edi
// 004a2fc0  5f                   pop edi
// 004a2fc1  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004a2fc8  8bc6                 mov eax, esi
// 004a2fca  5e                   pop esi
// 004a2fcb  5b                   pop ebx
// 004a2fcc  c20400               ret 4
// copied from an identical function in another client (function ?Init@CSourceStream@@QAEPAU1@PAH@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) void* __stdcall CreateEventA(void*, int, int, const char*);
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);

struct CSourceStream {
    char pad0[4];
    void* field4;
    void* field8;
    char padC[8];
    int field14;
    char field18[0x18];
    char field30[0x18];
    CSourceStream* Init(int* p);
};

CSourceStream* CSourceStream::Init(int* p) {
    void* (__stdcall *pCreateEventA)(void*, int, int, const char*) = CreateEventA;
    void (__stdcall *pInitializeCriticalSection)(void*) = InitializeCriticalSection;

    field4 = pCreateEventA(0, 1, 0, 0);
    if (field4 == 0) {
        if (p != 0) {
            if (*p >= 0) {
                *p = 0x8007000e;
            }
        }
    }

    field8 = pCreateEventA(0, 0, 0, 0);
    if (field8 == 0) {
        if (p != 0) {
            if (*p >= 0) {
                *p = 0x8007000e;
            }
        }
    }

    pInitializeCriticalSection(&field18);
    pInitializeCriticalSection(&field30);

    field14 = 0;
    return this;
}