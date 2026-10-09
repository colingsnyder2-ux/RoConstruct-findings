// from server: 55% by colin
// roc 2007-08 0060b420  unit: CXTCaptionButtonTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b420
//
// 0060b420  83ec30               sub esp, 0x30
// 0060b423  53                   push ebx
// 0060b424  55                   push ebp
// 0060b425  56                   push esi
// 0060b426  8b742440             mov esi, dword ptr [esp + 0x40]
// 0060b42a  57                   push edi
// 0060b42b  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0060b42f  8b4724               mov eax, dword ptr [edi + 0x24]
// 0060b432  83c001               add eax, 1
// 0060b435  57                   push edi
// 0060b436  56                   push esi
// 0060b437  894624               mov dword ptr [esi + 0x24], eax
// 0060b43a  e8e199faff           call 0x5b4e20
// 0060b43f  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0060b442  83c408               add esp, 8
// 0060b445  51                   push ecx
// 0060b446  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0060b449  8bd8                 mov ebx, eax
// 0060b44b  e86070fdff           call 0x5e24b0
// 0060b450  8b6e64               mov ebp, dword ptr [esi + 0x64]
// 0060b453  56                   push esi
// 0060b454  57                   push edi
// 0060b455  8d542418             lea edx, [esp + 0x18]
// 0060b459  52                   push edx
// 0060b45a  8bcb                 mov ecx, ebx
// 0060b45c  e8aff3ffff           call 0x60a810
// 0060b461  50                   push eax
// 0060b462  8bcd                 mov ecx, ebp
// 0060b464  e88769fdff           call 0x5e1df0
// 0060b469  5f                   pop edi
// 0060b46a  5e                   pop esi
// 0060b46b  5d                   pop ebp
// 0060b46c  5b                   pop ebx
// 0060b46d  83c430               add esp, 0x30
// 0060b470  c20800               ret 8

struct CXTCaptionButtonTheme {
    char pad[0x24];
    int refcount;
    char pad2[0x64 - 0x28];
    void* field64;

    void sub_60b420(void* arg1, void* arg2);
};

extern "C" void* __stdcall sub_5b4e20(void*, void*);
extern "C" void __stdcall sub_5e24b0(void*, void*);
extern "C" void* __stdcall sub_60a810(void*, void*, void*, void*);
extern "C" void __stdcall sub_5e1df0(void*, void*);

void CXTCaptionButtonTheme::sub_60b420(void* arg1, void* arg2)
{
    char buf[0x30];
    int* p = (int*)arg2;
    int v = p[9];
    v = v + 1;
    p[9] = v;
    void* ebx = sub_5b4e20(arg1, arg2);
    void* ecx_val = *(void**)((char*)arg2 + 0x64);
    sub_5e24b0(*(void**)((char*)arg1 + 0x64), ecx_val);
    void* ebp = *(void**)((char*)arg1 + 0x64);
    void* eax = sub_60a810(ebx, buf, arg2, arg1);
    sub_5e1df0(ebp, eax);
}
