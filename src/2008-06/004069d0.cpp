// from server: 61% by colin
// roc 2008-06 004069d0  unit: VCApp::?$CComObject  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004069d0
//
// 004069d0  83ec14               sub esp, 0x14
// 004069d3  56                   push esi
// 004069d4  57                   push edi
// 004069d5  e88e9f2900           call 0x6a0968
// 004069da  50                   push eax
// 004069db  8d4c2410             lea ecx, [esp + 0x10]
// 004069df  e87e9f2900           call 0x6a0962
// 004069e4  e83d9f2900           call 0x6a0926
// 004069e9  8b4004               mov eax, dword ptr [eax + 4]
// 004069ec  8d88f0000000         lea ecx, [eax + 0xf0]
// 004069f2  ff1564248000         call dword ptr [0x802464]
// 004069f8  50                   push eax
// 004069f9  8d4c240c             lea ecx, [esp + 0xc]
// 004069fd  e87ea7ffff           call 0x401180
// 00406a02  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00406a06  8b742408             mov esi, dword ptr [esp + 8]
// 00406a0a  85ff                 test edi, edi
// 00406a0c  7507                 jne 0x406a15
// 00406a0e  bf03400080           mov edi, 0x80004003
// 00406a13  eb2a                 jmp 0x406a3f
// 00406a15  85f6                 test esi, esi
// 00406a17  7504                 jne 0x406a1d
// 00406a19  33c0                 xor eax, eax
// 00406a1b  eb0f                 jmp 0x406a2c
// 00406a1d  56                   push esi
// 00406a1e  ff1528298000         call dword ptr [0x802928]
// 00406a24  50                   push eax
// 00406a25  56                   push esi
// 00406a26  ff152c298000         call dword ptr [0x80292c]
// 00406a2c  8907                 mov dword ptr [edi], eax
// 00406a2e  85c0                 test eax, eax
// 00406a30  750b                 jne 0x406a3d
// 00406a32  85f6                 test esi, esi
// 00406a34  7407                 je 0x406a3d
// 00406a36  bf0e000780           mov edi, 0x8007000e
// 00406a3b  eb02                 jmp 0x406a3f
// 00406a3d  33ff                 xor edi, edi
// 00406a3f  56                   push esi
// 00406a40  ff1544298000         call dword ptr [0x802944]
// 00406a46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406a4a  85c0                 test eax, eax
// 00406a4c  7407                 je 0x406a55
// 00406a4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00406a52  894804               mov dword ptr [eax + 4], ecx
// 00406a55  837c241800           cmp dword ptr [esp + 0x18], 0
// 00406a5a  740c                 je 0x406a68
// 00406a5c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00406a60  52                   push edx
// 00406a61  6a00                 push 0
// 00406a63  e8f49e2900           call 0x6a095c
// 00406a68  8bc7                 mov eax, edi
// 00406a6a  5f                   pop edi
// 00406a6b  5e                   pop esi
// 00406a6c  83c414               add esp, 0x14
// 00406a6f  c20800               ret 8





extern "C" void* __stdcall sub_6A0968();
extern "C" void* __stdcall sub_6A0962();
extern "C" void* __stdcall sub_6A0926();
extern "C" void __stdcall sub_6A095C(void*, void*);

extern "C" void* __stdcall sub_401180();

extern "C" void* __stdcall c_str_impl(void*);
extern "C" void* __stdcall SysAllocStringByteLen(const char*, unsigned int);
extern "C" void __stdcall SysFreeString(void*);
extern "C" unsigned int __stdcall SysStringByteLen(void*);

extern void* g_802464;
extern void* g_802928;
extern void* g_80292C;
extern void* g_802944;

struct VCAppCComObject {
    long __stdcall Method(void** out, void* pUnk, int a3, int a4);
};

long __stdcall VCAppCComObject::Method(void** out, void* pUnk, int a3, int a4)
{
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    void* v5;
    void* v6;
    void* v7;
    long hr;
    void* p;

    v1 = sub_6A0968();
    v2 = sub_6A0962();
    v3 = sub_6A0926();
    v4 = *(void**)((char*)v3 + 4);
    v5 = (void*)((char*)v4 + 0xf0);
    v6 = ((void* (__stdcall*)(void*))g_802464)(v5);
    v7 = sub_401180();

    if (out == 0) {
        hr = (long)0x80004003;
    } else {
        if (pUnk == 0) {
            p = 0;
        } else {
            void* a = ((void* (__stdcall*)(void*))g_802928)(pUnk);
            p = ((void* (__stdcall*)(void*, void*))g_80292C)(pUnk, a);
        }
        *out = p;
        if (p == 0 && pUnk != 0) {
            hr = (long)0x8007000e;
        } else {
            hr = 0;
        }
    }

    ((void (__stdcall*)(void*))g_802944)(pUnk);

    if (v7 != 0) {
        *(void**)((char*)v7 + 4) = v6;
    }

    if (a4 != 0) {
        sub_6A095C((void*)a3, 0);
    }

    return hr;
}
