// from server: 59% by colin
// roc 2007-08 00401bb0  unit: VCWorkspace::?$CComObject  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401bb0
//
// 00401bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00401bb4  85c0                 test eax, eax
// 00401bb6  7418                 je 0x401bd0
// 00401bb8  8b542408             mov edx, dword ptr [esp + 8]
// 00401bbc  8b48f4               mov ecx, dword ptr [eax - 0xc]
// 00401bbf  83c0f4               add eax, -0xc
// 00401bc2  52                   push edx
// 00401bc3  68e44b7800           push 0x784be4
// 00401bc8  50                   push eax
// 00401bc9  8b01                 mov eax, dword ptr [ecx]
// 00401bcb  ffd0                 call eax
// 00401bcd  c20800               ret 8
// 00401bd0  8b542408             mov edx, dword ptr [esp + 8]
// 00401bd4  33c0                 xor eax, eax
// 00401bd6  8b08                 mov ecx, dword ptr [eax]
// 00401bd8  52                   push edx
// 00401bd9  68e44b7800           push 0x784be4
// 00401bde  50                   push eax
// 00401bdf  8b01                 mov eax, dword ptr [ecx]
// 00401be1  ffd0                 call eax
// 00401be3  c20800               ret 8

struct S {
    void m(void* arg1, void* arg2);
};

void S::m(void* arg1, void* arg2)
{
    void* p = arg1;
    if (p != 0) {
        void** vtbl = *(void***)((char*)p - 12);
        p = (char*)p - 12;
        ((void (__stdcall*)(void*, const char*, void*))vtbl[0])(p, "tLVW", arg2);
    } else {
        void** vtbl = *(void***)0;
        ((void (__stdcall*)(void*, const char*, void*))vtbl[0])(0, "tLVW", arg2);
    }
}
